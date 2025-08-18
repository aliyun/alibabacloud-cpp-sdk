// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEDATASERVICEAPIREQUESTREVOKECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_REVOKEDATASERVICEAPIREQUESTREVOKECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RevokeDataServiceApiRequestRevokeCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeDataServiceApiRequestRevokeCommand& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeDataServiceApiRequestRevokeCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    RevokeDataServiceApiRequestRevokeCommand() = default ;
    RevokeDataServiceApiRequestRevokeCommand(const RevokeDataServiceApiRequestRevokeCommand &) = default ;
    RevokeDataServiceApiRequestRevokeCommand(RevokeDataServiceApiRequestRevokeCommand &&) = default ;
    RevokeDataServiceApiRequestRevokeCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeDataServiceApiRequestRevokeCommand() = default ;
    RevokeDataServiceApiRequestRevokeCommand& operator=(const RevokeDataServiceApiRequestRevokeCommand &) = default ;
    RevokeDataServiceApiRequestRevokeCommand& operator=(RevokeDataServiceApiRequestRevokeCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->appId_ != nullptr && this->reason_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline RevokeDataServiceApiRequestRevokeCommand& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline RevokeDataServiceApiRequestRevokeCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline RevokeDataServiceApiRequestRevokeCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

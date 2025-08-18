// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATASERVICEAPPREQUESTAPPLYCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATASERVICEAPPREQUESTAPPLYCOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyDataServiceAppRequestApplyCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataServiceAppRequestApplyCommand& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataServiceAppRequestApplyCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ApplyDataServiceAppRequestApplyCommand() = default ;
    ApplyDataServiceAppRequestApplyCommand(const ApplyDataServiceAppRequestApplyCommand &) = default ;
    ApplyDataServiceAppRequestApplyCommand(ApplyDataServiceAppRequestApplyCommand &&) = default ;
    ApplyDataServiceAppRequestApplyCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataServiceAppRequestApplyCommand() = default ;
    ApplyDataServiceAppRequestApplyCommand& operator=(const ApplyDataServiceAppRequestApplyCommand &) = default ;
    ApplyDataServiceAppRequestApplyCommand& operator=(ApplyDataServiceAppRequestApplyCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->expireDate_ != nullptr && this->reason_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline ApplyDataServiceAppRequestApplyCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline ApplyDataServiceAppRequestApplyCommand& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ApplyDataServiceAppRequestApplyCommand& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // appId
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> expireDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

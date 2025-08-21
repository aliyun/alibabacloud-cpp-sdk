// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RollbackApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(FromAppVersion, fromAppVersion_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(ToAppVersion, toAppVersion_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(FromAppVersion, fromAppVersion_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(ToAppVersion, toAppVersion_);
    };
    RollbackApplicationRequest() = default ;
    RollbackApplicationRequest(const RollbackApplicationRequest &) = default ;
    RollbackApplicationRequest(RollbackApplicationRequest &&) = default ;
    RollbackApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackApplicationRequest() = default ;
    RollbackApplicationRequest& operator=(const RollbackApplicationRequest &) = default ;
    RollbackApplicationRequest& operator=(RollbackApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->fromAppVersion_ != nullptr && this->timeout_ != nullptr && this->toAppVersion_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RollbackApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // fromAppVersion Field Functions 
    bool hasFromAppVersion() const { return this->fromAppVersion_ != nullptr;};
    void deleteFromAppVersion() { this->fromAppVersion_ = nullptr;};
    inline string fromAppVersion() const { DARABONBA_PTR_GET_DEFAULT(fromAppVersion_, "") };
    inline RollbackApplicationRequest& setFromAppVersion(string fromAppVersion) { DARABONBA_PTR_SET_VALUE(fromAppVersion_, fromAppVersion) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline RollbackApplicationRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // toAppVersion Field Functions 
    bool hasToAppVersion() const { return this->toAppVersion_ != nullptr;};
    void deleteToAppVersion() { this->toAppVersion_ = nullptr;};
    inline string toAppVersion() const { DARABONBA_PTR_GET_DEFAULT(toAppVersion_, "") };
    inline RollbackApplicationRequest& setToAppVersion(string toAppVersion) { DARABONBA_PTR_SET_VALUE(toAppVersion_, toAppVersion) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The current version number.
    // 
    // This parameter is required.
    std::shared_ptr<string> fromAppVersion_ = nullptr;
    // The timeout period of the asynchronous rollback operation. Unit: seconds. Default value: 300.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The target version number. By default, the system automatically rolls back the container version to the previous version.
    std::shared_ptr<string> toAppVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

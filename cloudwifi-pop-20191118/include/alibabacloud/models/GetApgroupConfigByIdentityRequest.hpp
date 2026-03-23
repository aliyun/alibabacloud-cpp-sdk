// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPGROUPCONFIGBYIDENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPGROUPCONFIGBYIDENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class GetApgroupConfigByIdentityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApgroupConfigByIdentityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_TO_JSON(ApgroupUuid, apgroupUuid_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, GetApgroupConfigByIdentityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_FROM_JSON(ApgroupUuid, apgroupUuid_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    GetApgroupConfigByIdentityRequest() = default ;
    GetApgroupConfigByIdentityRequest(const GetApgroupConfigByIdentityRequest &) = default ;
    GetApgroupConfigByIdentityRequest(GetApgroupConfigByIdentityRequest &&) = default ;
    GetApgroupConfigByIdentityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApgroupConfigByIdentityRequest() = default ;
    GetApgroupConfigByIdentityRequest& operator=(const GetApgroupConfigByIdentityRequest &) = default ;
    GetApgroupConfigByIdentityRequest& operator=(GetApgroupConfigByIdentityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apgroupId_ == nullptr
        && this->apgroupUuid_ == nullptr && this->appCode_ == nullptr && this->appName_ == nullptr; };
    // apgroupId Field Functions 
    bool hasApgroupId() const { return this->apgroupId_ != nullptr;};
    void deleteApgroupId() { this->apgroupId_ = nullptr;};
    inline int64_t getApgroupId() const { DARABONBA_PTR_GET_DEFAULT(apgroupId_, 0L) };
    inline GetApgroupConfigByIdentityRequest& setApgroupId(int64_t apgroupId) { DARABONBA_PTR_SET_VALUE(apgroupId_, apgroupId) };


    // apgroupUuid Field Functions 
    bool hasApgroupUuid() const { return this->apgroupUuid_ != nullptr;};
    void deleteApgroupUuid() { this->apgroupUuid_ = nullptr;};
    inline string getApgroupUuid() const { DARABONBA_PTR_GET_DEFAULT(apgroupUuid_, "") };
    inline GetApgroupConfigByIdentityRequest& setApgroupUuid(string apgroupUuid) { DARABONBA_PTR_SET_VALUE(apgroupUuid_, apgroupUuid) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetApgroupConfigByIdentityRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetApgroupConfigByIdentityRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> apgroupId_ {};
    // This parameter is required.
    shared_ptr<string> apgroupUuid_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif

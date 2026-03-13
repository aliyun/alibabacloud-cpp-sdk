// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENAPIINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENAPIINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeOpenApiInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenApiInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PopCode, popCode_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenApiInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PopCode, popCode_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeOpenApiInfoRequest() = default ;
    DescribeOpenApiInfoRequest(const DescribeOpenApiInfoRequest &) = default ;
    DescribeOpenApiInfoRequest(DescribeOpenApiInfoRequest &&) = default ;
    DescribeOpenApiInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenApiInfoRequest() = default ;
    DescribeOpenApiInfoRequest& operator=(const DescribeOpenApiInfoRequest &) = default ;
    DescribeOpenApiInfoRequest& operator=(DescribeOpenApiInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && this->apiVersion_ == nullptr && this->lang_ == nullptr && this->popCode_ == nullptr && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeOpenApiInfoRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline DescribeOpenApiInfoRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOpenApiInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // popCode Field Functions 
    bool hasPopCode() const { return this->popCode_ != nullptr;};
    void deletePopCode() { this->popCode_ = nullptr;};
    inline string getPopCode() const { DARABONBA_PTR_GET_DEFAULT(popCode_, "") };
    inline DescribeOpenApiInfoRequest& setPopCode(string popCode) { DARABONBA_PTR_SET_VALUE(popCode_, popCode) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeOpenApiInfoRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeOpenApiInfoRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The operation that you want to perform.
    // 
    // This parameter is required.
    shared_ptr<string> apiName_ {};
    // The version number of the API.
    // 
    // >  You can call the [DescribeGroupProductions](~~DescribeGroupProductions~~) operation to query version numbers.
    // 
    // This parameter is required.
    shared_ptr<string> apiVersion_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese.
    // *   **en**: English.
    shared_ptr<string> lang_ {};
    // The POP code of the Alibaba Cloud service.
    // 
    // This parameter is required.
    shared_ptr<string> popCode_ {};
    // The ID of the user who switches from the current view to the destination view by using the management account.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // 
    // *   0 (default): the view of the current Alibaba Cloud account.
    // *   1: the view of all accounts for the enterprise.
    shared_ptr<string> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

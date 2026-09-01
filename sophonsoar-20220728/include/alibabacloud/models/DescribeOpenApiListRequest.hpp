// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENAPILISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENAPILISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeOpenApiListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenApiListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PopCode, popCode_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenApiListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PopCode, popCode_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeOpenApiListRequest() = default ;
    DescribeOpenApiListRequest(const DescribeOpenApiListRequest &) = default ;
    DescribeOpenApiListRequest(DescribeOpenApiListRequest &&) = default ;
    DescribeOpenApiListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenApiListRequest() = default ;
    DescribeOpenApiListRequest& operator=(const DescribeOpenApiListRequest &) = default ;
    DescribeOpenApiListRequest& operator=(DescribeOpenApiListRequest &&) = default ;
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
    inline DescribeOpenApiListRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline DescribeOpenApiListRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOpenApiListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // popCode Field Functions 
    bool hasPopCode() const { return this->popCode_ != nullptr;};
    void deletePopCode() { this->popCode_ = nullptr;};
    inline string getPopCode() const { DARABONBA_PTR_GET_DEFAULT(popCode_, "") };
    inline DescribeOpenApiListRequest& setPopCode(string popCode) { DARABONBA_PTR_SET_VALUE(popCode_, popCode) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeOpenApiListRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeOpenApiListRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The API name.
    shared_ptr<string> apiName_ {};
    // The API version number.
    // 
    // > Call the [DescribeGroupProductions](~~DescribeGroupProductions~~) API to get this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> apiVersion_ {};
    // The language type for requests and responses. The default value is **zh**. Values:
    // 
    // - **zh**: Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The POP CODE of the Alibaba Cloud product API.
    // 
    // This parameter is required.
    shared_ptr<string> popCode_ {};
    // The user ID of the member whose perspective the administrator switches to.
    shared_ptr<int64_t> roleFor_ {};
    // The view type. The default is 0. Values:
    // 
    // - 0: Current Alibaba Cloud account view.
    // 
    // - 1: View of all accounts under the enterprise.
    shared_ptr<string> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

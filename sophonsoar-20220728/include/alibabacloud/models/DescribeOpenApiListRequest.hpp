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
        && return this->apiVersion_ == nullptr && return this->lang_ == nullptr && return this->popCode_ == nullptr && return this->roleFor_ == nullptr && return this->roleType_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeOpenApiListRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline DescribeOpenApiListRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOpenApiListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // popCode Field Functions 
    bool hasPopCode() const { return this->popCode_ != nullptr;};
    void deletePopCode() { this->popCode_ = nullptr;};
    inline string popCode() const { DARABONBA_PTR_GET_DEFAULT(popCode_, "") };
    inline DescribeOpenApiListRequest& setPopCode(string popCode) { DARABONBA_PTR_SET_VALUE(popCode_, popCode) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeOpenApiListRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline DescribeOpenApiListRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The operation that you want to perform.
    std::shared_ptr<string> apiName_ = nullptr;
    // The version number of the API.
    // 
    // >  You can call the [DescribeGroupProductions](~~DescribeGroupProductions~~) operation to query the version number.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The POP code of the Alibaba Cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<string> popCode_ = nullptr;
    // The ID of the user who switches from the current view to the destination view by using the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Default value: 0. Valid values:
    // 
    // *   0: the view of the current Alibaba Cloud account.
    // *   1: the view of all accounts for the enterprise.
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif

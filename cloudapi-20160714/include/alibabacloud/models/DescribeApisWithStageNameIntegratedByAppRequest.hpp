// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISWITHSTAGENAMEINTEGRATEDBYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISWITHSTAGENAMEINTEGRATEDBYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisWithStageNameIntegratedByAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisWithStageNameIntegratedByAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisWithStageNameIntegratedByAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeApisWithStageNameIntegratedByAppRequest() = default ;
    DescribeApisWithStageNameIntegratedByAppRequest(const DescribeApisWithStageNameIntegratedByAppRequest &) = default ;
    DescribeApisWithStageNameIntegratedByAppRequest(DescribeApisWithStageNameIntegratedByAppRequest &&) = default ;
    DescribeApisWithStageNameIntegratedByAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisWithStageNameIntegratedByAppRequest() = default ;
    DescribeApisWithStageNameIntegratedByAppRequest& operator=(const DescribeApisWithStageNameIntegratedByAppRequest &) = default ;
    DescribeApisWithStageNameIntegratedByAppRequest& operator=(DescribeApisWithStageNameIntegratedByAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && return this->apiUid_ == nullptr && return this->appId_ == nullptr && return this->description_ == nullptr && return this->method_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->path_ == nullptr && return this->securityToken_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiUid Field Functions 
    bool hasApiUid() const { return this->apiUid_ != nullptr;};
    void deleteApiUid() { this->apiUid_ = nullptr;};
    inline string apiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeApisWithStageNameIntegratedByAppRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The API name.
    std::shared_ptr<string> apiName_ = nullptr;
    // The API ID.
    std::shared_ptr<string> apiUid_ = nullptr;
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The API description. The description can be up to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The request HTTP method of the API.
    std::shared_ptr<string> method_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request path of the API.
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

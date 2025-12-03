// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppAttributesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(EnableTagAuth, enableTagAuth_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(EnableTagAuth, enableTagAuth_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeAppAttributesRequest() = default ;
    DescribeAppAttributesRequest(const DescribeAppAttributesRequest &) = default ;
    DescribeAppAttributesRequest(DescribeAppAttributesRequest &&) = default ;
    DescribeAppAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAttributesRequest() = default ;
    DescribeAppAttributesRequest& operator=(const DescribeAppAttributesRequest &) = default ;
    DescribeAppAttributesRequest& operator=(DescribeAppAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->appId_ == nullptr && return this->appKey_ == nullptr && return this->appName_ == nullptr && return this->enableTagAuth_ == nullptr && return this->extend_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr && return this->sort_ == nullptr && return this->tag_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline DescribeAppAttributesRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline DescribeAppAttributesRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline DescribeAppAttributesRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppAttributesRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // enableTagAuth Field Functions 
    bool hasEnableTagAuth() const { return this->enableTagAuth_ != nullptr;};
    void deleteEnableTagAuth() { this->enableTagAuth_ = nullptr;};
    inline bool enableTagAuth() const { DARABONBA_PTR_GET_DEFAULT(enableTagAuth_, false) };
    inline DescribeAppAttributesRequest& setEnableTagAuth(bool enableTagAuth) { DARABONBA_PTR_SET_VALUE(enableTagAuth_, enableTagAuth) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribeAppAttributesRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAppAttributesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppAttributesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeAppAttributesRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeAppAttributesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeAppAttributesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeAppAttributesRequestTag>) };
    inline vector<DescribeAppAttributesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeAppAttributesRequestTag>) };
    inline DescribeAppAttributesRequest& setTag(const vector<DescribeAppAttributesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAppAttributesRequest& setTag(vector<DescribeAppAttributesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The AppCode of the app.
    std::shared_ptr<string> appCode_ = nullptr;
    // The ID of the app.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The app key that is used to make an API call.
    std::shared_ptr<string> appKey_ = nullptr;
    // The name of the app.
    std::shared_ptr<string> appName_ = nullptr;
    // Specifies whether to enable tag verification.
    std::shared_ptr<bool> enableTagAuth_ = nullptr;
    // 扩展信息
    std::shared_ptr<string> extend_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The order. Valid values: asc and desc. Default value: desc.
    // 
    // *   asc: The apps are displayed in ascending order of modification time.
    // *   desc: The apps are displayed in descending order of modification time.
    std::shared_ptr<string> sort_ = nullptr;
    // The tag of objects that match the rule. You can specify multiple tags.
    std::shared_ptr<vector<DescribeAppAttributesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

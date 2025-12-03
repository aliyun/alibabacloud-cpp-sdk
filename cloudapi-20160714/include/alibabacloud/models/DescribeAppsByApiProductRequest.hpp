// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSBYAPIPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSBYAPIPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppsByApiProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsByApiProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsByApiProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductId, apiProductId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeAppsByApiProductRequest() = default ;
    DescribeAppsByApiProductRequest(const DescribeAppsByApiProductRequest &) = default ;
    DescribeAppsByApiProductRequest(DescribeAppsByApiProductRequest &&) = default ;
    DescribeAppsByApiProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsByApiProductRequest() = default ;
    DescribeAppsByApiProductRequest& operator=(const DescribeAppsByApiProductRequest &) = default ;
    DescribeAppsByApiProductRequest& operator=(DescribeAppsByApiProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductId_ == nullptr
        && return this->appName_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->securityToken_ == nullptr; };
    // apiProductId Field Functions 
    bool hasApiProductId() const { return this->apiProductId_ != nullptr;};
    void deleteApiProductId() { this->apiProductId_ = nullptr;};
    inline string apiProductId() const { DARABONBA_PTR_GET_DEFAULT(apiProductId_, "") };
    inline DescribeAppsByApiProductRequest& setApiProductId(string apiProductId) { DARABONBA_PTR_SET_VALUE(apiProductId_, apiProductId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppsByApiProductRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAppsByApiProductRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAppsByApiProductRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeAppsByApiProductRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The ID of the API product.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiProductId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

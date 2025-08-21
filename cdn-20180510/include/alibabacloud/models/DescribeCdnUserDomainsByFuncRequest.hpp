// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNUSERDOMAINSBYFUNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnUserDomainsByFuncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnUserDomainsByFuncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FuncId, funcId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnUserDomainsByFuncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FuncId, funcId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeCdnUserDomainsByFuncRequest() = default ;
    DescribeCdnUserDomainsByFuncRequest(const DescribeCdnUserDomainsByFuncRequest &) = default ;
    DescribeCdnUserDomainsByFuncRequest(DescribeCdnUserDomainsByFuncRequest &&) = default ;
    DescribeCdnUserDomainsByFuncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnUserDomainsByFuncRequest() = default ;
    DescribeCdnUserDomainsByFuncRequest& operator=(const DescribeCdnUserDomainsByFuncRequest &) = default ;
    DescribeCdnUserDomainsByFuncRequest& operator=(DescribeCdnUserDomainsByFuncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->funcId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceGroupId_ != nullptr; };
    // funcId Field Functions 
    bool hasFuncId() const { return this->funcId_ != nullptr;};
    void deleteFuncId() { this->funcId_ = nullptr;};
    inline int32_t funcId() const { DARABONBA_PTR_GET_DEFAULT(funcId_, 0) };
    inline DescribeCdnUserDomainsByFuncRequest& setFuncId(int32_t funcId) { DARABONBA_PTR_SET_VALUE(funcId_, funcId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCdnUserDomainsByFuncRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCdnUserDomainsByFuncRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCdnUserDomainsByFuncRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the feature.
    // 
    // For example, the ID of the origin host feature (set_req_host_header) is 18.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> funcId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    // 
    // Valid values: **1** to **100000**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of domain names to return on each page. Default value: **20**.
    // 
    // Valid values: **1** to **50**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

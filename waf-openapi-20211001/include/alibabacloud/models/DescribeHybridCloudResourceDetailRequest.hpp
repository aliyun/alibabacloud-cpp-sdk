// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDRESOURCEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudResourceDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudResourceDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Backend, backend_);
      DARABONBA_PTR_TO_JSON(CnameEnabled, cnameEnabled_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudResourceDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Backend, backend_);
      DARABONBA_PTR_FROM_JSON(CnameEnabled, cnameEnabled_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeHybridCloudResourceDetailRequest() = default ;
    DescribeHybridCloudResourceDetailRequest(const DescribeHybridCloudResourceDetailRequest &) = default ;
    DescribeHybridCloudResourceDetailRequest(DescribeHybridCloudResourceDetailRequest &&) = default ;
    DescribeHybridCloudResourceDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudResourceDetailRequest() = default ;
    DescribeHybridCloudResourceDetailRequest& operator=(const DescribeHybridCloudResourceDetailRequest &) = default ;
    DescribeHybridCloudResourceDetailRequest& operator=(DescribeHybridCloudResourceDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backend_ == nullptr
        && this->cnameEnabled_ == nullptr && this->domain_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // backend Field Functions 
    bool hasBackend() const { return this->backend_ != nullptr;};
    void deleteBackend() { this->backend_ = nullptr;};
    inline string getBackend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
    inline DescribeHybridCloudResourceDetailRequest& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


    // cnameEnabled Field Functions 
    bool hasCnameEnabled() const { return this->cnameEnabled_ != nullptr;};
    void deleteCnameEnabled() { this->cnameEnabled_ = nullptr;};
    inline bool getCnameEnabled() const { DARABONBA_PTR_GET_DEFAULT(cnameEnabled_, false) };
    inline DescribeHybridCloudResourceDetailRequest& setCnameEnabled(bool cnameEnabled) { DARABONBA_PTR_SET_VALUE(cnameEnabled_, cnameEnabled) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeHybridCloudResourceDetailRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHybridCloudResourceDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeHybridCloudResourceDetailRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeHybridCloudResourceDetailRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHybridCloudResourceDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeHybridCloudResourceDetailRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    shared_ptr<string> backend_ {};
    shared_ptr<bool> cnameEnabled_ {};
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGSHAREDDISKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGSHAREDDISKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGSharedDisksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGSharedDisksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdgId, sdgId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGSharedDisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdgId, sdgId_);
    };
    DescribeSDGSharedDisksRequest() = default ;
    DescribeSDGSharedDisksRequest(const DescribeSDGSharedDisksRequest &) = default ;
    DescribeSDGSharedDisksRequest(DescribeSDGSharedDisksRequest &&) = default ;
    DescribeSDGSharedDisksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGSharedDisksRequest() = default ;
    DescribeSDGSharedDisksRequest& operator=(const DescribeSDGSharedDisksRequest &) = default ;
    DescribeSDGSharedDisksRequest& operator=(DescribeSDGSharedDisksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->sdgId_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeSDGSharedDisksRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSDGSharedDisksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSDGSharedDisksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSDGSharedDisksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdgId Field Functions 
    bool hasSdgId() const { return this->sdgId_ != nullptr;};
    void deleteSdgId() { this->sdgId_ = nullptr;};
    inline string sdgId() const { DARABONBA_PTR_GET_DEFAULT(sdgId_, "") };
    inline DescribeSDGSharedDisksRequest& setSdgId(string sdgId) { DARABONBA_PTR_SET_VALUE(sdgId_, sdgId) };


  protected:
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The page number, which is used for paged query
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // sdg ID
    // 
    // This parameter is required.
    std::shared_ptr<string> sdgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

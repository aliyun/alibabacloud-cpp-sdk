// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGESRESPONSEBODYRESOURCEPACKAGELISTRESOURCEPACKAGEQUOTALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGESRESPONSEBODYRESOURCEPACKAGELISTRESOURCEPACKAGEQUOTALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList& obj) { 
      DARABONBA_PTR_TO_JSON(AllocatedCapacity, allocatedCapacity_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocatedCapacity, allocatedCapacity_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
    };
    DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList() = default ;
    DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList(const DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList &) = default ;
    DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList(DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList &&) = default ;
    DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList() = default ;
    DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList& operator=(const DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList &) = default ;
    DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList& operator=(DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocatedCapacity_ == nullptr
        && return this->projectId_ == nullptr && return this->usedCapacity_ == nullptr; };
    // allocatedCapacity Field Functions 
    bool hasAllocatedCapacity() const { return this->allocatedCapacity_ != nullptr;};
    void deleteAllocatedCapacity() { this->allocatedCapacity_ = nullptr;};
    inline int64_t allocatedCapacity() const { DARABONBA_PTR_GET_DEFAULT(allocatedCapacity_, 0L) };
    inline DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList& setAllocatedCapacity(int64_t allocatedCapacity) { DARABONBA_PTR_SET_VALUE(allocatedCapacity_, allocatedCapacity) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // usedCapacity Field Functions 
    bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
    void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
    inline int64_t usedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
    inline DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


  protected:
    std::shared_ptr<int64_t> allocatedCapacity_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<int64_t> usedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

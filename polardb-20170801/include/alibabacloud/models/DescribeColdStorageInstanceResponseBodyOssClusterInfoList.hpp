// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODYOSSCLUSTERINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDSTORAGEINSTANCERESPONSEBODYOSSCLUSTERINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeColdStorageInstanceResponseBodyOssClusterInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdStorageInstanceResponseBodyOssClusterInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(OssClusterId, ossClusterId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdStorageInstanceResponseBodyOssClusterInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(OssClusterId, ossClusterId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeColdStorageInstanceResponseBodyOssClusterInfoList() = default ;
    DescribeColdStorageInstanceResponseBodyOssClusterInfoList(const DescribeColdStorageInstanceResponseBodyOssClusterInfoList &) = default ;
    DescribeColdStorageInstanceResponseBodyOssClusterInfoList(DescribeColdStorageInstanceResponseBodyOssClusterInfoList &&) = default ;
    DescribeColdStorageInstanceResponseBodyOssClusterInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdStorageInstanceResponseBodyOssClusterInfoList() = default ;
    DescribeColdStorageInstanceResponseBodyOssClusterInfoList& operator=(const DescribeColdStorageInstanceResponseBodyOssClusterInfoList &) = default ;
    DescribeColdStorageInstanceResponseBodyOssClusterInfoList& operator=(DescribeColdStorageInstanceResponseBodyOssClusterInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->ossClusterId_ == nullptr && return this->region_ == nullptr && return this->size_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeColdStorageInstanceResponseBodyOssClusterInfoList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // ossClusterId Field Functions 
    bool hasOssClusterId() const { return this->ossClusterId_ != nullptr;};
    void deleteOssClusterId() { this->ossClusterId_ = nullptr;};
    inline string ossClusterId() const { DARABONBA_PTR_GET_DEFAULT(ossClusterId_, "") };
    inline DescribeColdStorageInstanceResponseBodyOssClusterInfoList& setOssClusterId(string ossClusterId) { DARABONBA_PTR_SET_VALUE(ossClusterId_, ossClusterId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeColdStorageInstanceResponseBodyOssClusterInfoList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeColdStorageInstanceResponseBodyOssClusterInfoList& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> ossClusterId_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOSSBUCKETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTOSSBUCKETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOssBucketResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOssBucketResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(Support, support_);
      DARABONBA_PTR_TO_JSON(SupportConfig, supportConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListOssBucketResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(Support, support_);
      DARABONBA_PTR_FROM_JSON(SupportConfig, supportConfig_);
    };
    ListOssBucketResponseBodyData() = default ;
    ListOssBucketResponseBodyData(const ListOssBucketResponseBodyData &) = default ;
    ListOssBucketResponseBodyData(ListOssBucketResponseBodyData &&) = default ;
    ListOssBucketResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOssBucketResponseBodyData() = default ;
    ListOssBucketResponseBodyData& operator=(const ListOssBucketResponseBodyData &) = default ;
    ListOssBucketResponseBodyData& operator=(ListOssBucketResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bucketName_ != nullptr
        && this->message_ != nullptr && this->regionId_ != nullptr && this->storageClass_ != nullptr && this->support_ != nullptr && this->supportConfig_ != nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string bucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline ListOssBucketResponseBodyData& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOssBucketResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOssBucketResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline ListOssBucketResponseBodyData& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // support Field Functions 
    bool hasSupport() const { return this->support_ != nullptr;};
    void deleteSupport() { this->support_ = nullptr;};
    inline bool support() const { DARABONBA_PTR_GET_DEFAULT(support_, false) };
    inline ListOssBucketResponseBodyData& setSupport(bool support) { DARABONBA_PTR_SET_VALUE(support_, support) };


    // supportConfig Field Functions 
    bool hasSupportConfig() const { return this->supportConfig_ != nullptr;};
    void deleteSupportConfig() { this->supportConfig_ = nullptr;};
    inline string supportConfig() const { DARABONBA_PTR_GET_DEFAULT(supportConfig_, "") };
    inline ListOssBucketResponseBodyData& setSupportConfig(string supportConfig) { DARABONBA_PTR_SET_VALUE(supportConfig_, supportConfig) };


  protected:
    // The name of the bucket.
    std::shared_ptr<string> bucketName_ = nullptr;
    // The reason why the bucket cannot be checked.
    std::shared_ptr<string> message_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The storage class of the bucket. Valid values:
    // 
    // *   Standard (default)
    // *   IA
    // *   Archive
    // *   ColdArchive
    std::shared_ptr<string> storageClass_ = nullptr;
    // Indicates whether the bucket can be checked. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> support_ = nullptr;
    // Whether to support config. Valid values:
    // 
    // * true
    // * false
    std::shared_ptr<string> supportConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

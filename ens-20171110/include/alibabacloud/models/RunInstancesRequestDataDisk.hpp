// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RunInstancesRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    RunInstancesRequestDataDisk() = default ;
    RunInstancesRequestDataDisk(const RunInstancesRequestDataDisk &) = default ;
    RunInstancesRequestDataDisk(RunInstancesRequestDataDisk &&) = default ;
    RunInstancesRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestDataDisk() = default ;
    RunInstancesRequestDataDisk& operator=(const RunInstancesRequestDataDisk &) = default ;
    RunInstancesRequestDataDisk& operator=(RunInstancesRequestDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->encrypted_ == nullptr && return this->KMSKeyId_ == nullptr && return this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline RunInstancesRequestDataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline RunInstancesRequestDataDisk& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline RunInstancesRequestDataDisk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline RunInstancesRequestDataDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The category of the disk. Valid values:
    // 
    // *   **cloud_efficiency**: ultra disk.
    // *   **cloud_ssd**: all-flash disk.
    // *   **local_hdd**: local HDD.
    // *   **local_ssd**: local SSD.
    std::shared_ptr<string> category_ = nullptr;
    // Specifies whether to encrypt the disk. Valid values:
    // 
    // *   true.
    // *   false (default).
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used for the disk. Valid values:
    // 
    // *   true.
    // *   false (default).
    // 
    // >  If you set the Encrypted parameter to true, the default service key is used when the KMSKeyId parameter is empty.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The size of a data disk. Unit: GiB.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

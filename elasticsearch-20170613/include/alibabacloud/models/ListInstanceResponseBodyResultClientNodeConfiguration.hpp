// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYRESULTCLIENTNODECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYRESULTCLIENTNODECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceResponseBodyResultClientNodeConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBodyResultClientNodeConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBodyResultClientNodeConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
    };
    ListInstanceResponseBodyResultClientNodeConfiguration() = default ;
    ListInstanceResponseBodyResultClientNodeConfiguration(const ListInstanceResponseBodyResultClientNodeConfiguration &) = default ;
    ListInstanceResponseBodyResultClientNodeConfiguration(ListInstanceResponseBodyResultClientNodeConfiguration &&) = default ;
    ListInstanceResponseBodyResultClientNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBodyResultClientNodeConfiguration() = default ;
    ListInstanceResponseBodyResultClientNodeConfiguration& operator=(const ListInstanceResponseBodyResultClientNodeConfiguration &) = default ;
    ListInstanceResponseBodyResultClientNodeConfiguration& operator=(ListInstanceResponseBodyResultClientNodeConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->disk_ != nullptr && this->diskType_ != nullptr && this->spec_ != nullptr && this->specInfo_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline ListInstanceResponseBodyResultClientNodeConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline ListInstanceResponseBodyResultClientNodeConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline ListInstanceResponseBodyResultClientNodeConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListInstanceResponseBodyResultClientNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // specInfo Field Functions 
    bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
    void deleteSpecInfo() { this->specInfo_ = nullptr;};
    inline string specInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
    inline ListInstanceResponseBodyResultClientNodeConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


  protected:
    // The size of the node storage space. Unit: GB.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Specifies whether to enable disk encryption for the node. Valid values:
    // 
    // *   true: enables instant image cache.
    // *   false: disables reuse of image cache layers.
    std::shared_ptr<int32_t> disk_ = nullptr;
    // The storage type of the node. Valid values:
    // 
    // *   cloud_ssd: SSD.
    // *   cloud_essd: ESSD.
    // *   cloud_efficiency: ultra disk
    std::shared_ptr<string> diskType_ = nullptr;
    // The number of nodes.
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> specInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

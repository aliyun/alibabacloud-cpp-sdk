// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODESPEC_HPP_
#define ALIBABACLOUD_MODELS_NODESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class NodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(diskPreference, diskPreference_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(diskPreference, diskPreference_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    NodeSpec() = default ;
    NodeSpec(const NodeSpec &) = default ;
    NodeSpec(NodeSpec &&) = default ;
    NodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeSpec() = default ;
    NodeSpec& operator=(const NodeSpec &) = default ;
    NodeSpec& operator=(NodeSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disk_ == nullptr
        && this->diskEncryption_ == nullptr && this->diskPreference_ == nullptr && this->diskType_ == nullptr && this->performanceLevel_ == nullptr && this->spec_ == nullptr; };
    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline NodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskEncryption Field Functions 
    bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
    void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
    inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
    inline NodeSpec& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


    // diskPreference Field Functions 
    bool hasDiskPreference() const { return this->diskPreference_ != nullptr;};
    void deleteDiskPreference() { this->diskPreference_ = nullptr;};
    inline string getDiskPreference() const { DARABONBA_PTR_GET_DEFAULT(diskPreference_, "") };
    inline NodeSpec& setDiskPreference(string diskPreference) { DARABONBA_PTR_SET_VALUE(diskPreference_, diskPreference) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline NodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline NodeSpec& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline NodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    shared_ptr<int32_t> disk_ {};
    shared_ptr<bool> diskEncryption_ {};
    shared_ptr<string> diskPreference_ {};
    shared_ptr<string> diskType_ {};
    shared_ptr<string> performanceLevel_ {};
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

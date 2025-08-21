// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCERESPONSEBODYRESULTNODESPEC_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCERESPONSEBODYRESULTNODESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateInstanceResponseBodyResultNodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceResponseBodyResultNodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceResponseBodyResultNodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    UpdateInstanceResponseBodyResultNodeSpec() = default ;
    UpdateInstanceResponseBodyResultNodeSpec(const UpdateInstanceResponseBodyResultNodeSpec &) = default ;
    UpdateInstanceResponseBodyResultNodeSpec(UpdateInstanceResponseBodyResultNodeSpec &&) = default ;
    UpdateInstanceResponseBodyResultNodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceResponseBodyResultNodeSpec() = default ;
    UpdateInstanceResponseBodyResultNodeSpec& operator=(const UpdateInstanceResponseBodyResultNodeSpec &) = default ;
    UpdateInstanceResponseBodyResultNodeSpec& operator=(UpdateInstanceResponseBodyResultNodeSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disk_ != nullptr
        && this->diskType_ != nullptr && this->spec_ != nullptr; };
    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline UpdateInstanceResponseBodyResultNodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline UpdateInstanceResponseBodyResultNodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline UpdateInstanceResponseBodyResultNodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The node specifications.
    std::shared_ptr<int32_t> disk_ = nullptr;
    // The number of nodes.
    std::shared_ptr<string> diskType_ = nullptr;
    // The configuration of Kibana nodes.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

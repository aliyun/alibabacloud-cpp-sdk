// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTINSTANCERESPONSEBODYRESULTNODESPEC_HPP_
#define ALIBABACLOUD_MODELS_RESTARTINSTANCERESPONSEBODYRESULTNODESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class RestartInstanceResponseBodyResultNodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartInstanceResponseBodyResultNodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, RestartInstanceResponseBodyResultNodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    RestartInstanceResponseBodyResultNodeSpec() = default ;
    RestartInstanceResponseBodyResultNodeSpec(const RestartInstanceResponseBodyResultNodeSpec &) = default ;
    RestartInstanceResponseBodyResultNodeSpec(RestartInstanceResponseBodyResultNodeSpec &&) = default ;
    RestartInstanceResponseBodyResultNodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartInstanceResponseBodyResultNodeSpec() = default ;
    RestartInstanceResponseBodyResultNodeSpec& operator=(const RestartInstanceResponseBodyResultNodeSpec &) = default ;
    RestartInstanceResponseBodyResultNodeSpec& operator=(RestartInstanceResponseBodyResultNodeSpec &&) = default ;
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
    inline RestartInstanceResponseBodyResultNodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline RestartInstanceResponseBodyResultNodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline RestartInstanceResponseBodyResultNodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The storage space size per data node. Unit: GB.
    std::shared_ptr<int32_t> disk_ = nullptr;
    // The storage type of the node. Valid values: cloud_ssd and cloud_efficiency.
    std::shared_ptr<string> diskType_ = nullptr;
    // The specification of data nodes.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

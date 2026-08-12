// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLUSSRESOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_FLUSSRESOURCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class FlussResourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlussResourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(DiskSizeInGB, diskSizeInGB_);
      DARABONBA_PTR_TO_JSON(SlaveModel, slaveModel_);
      DARABONBA_PTR_TO_JSON(SlaveNum, slaveNum_);
      DARABONBA_PTR_TO_JSON(TieringPostCu, tieringPostCu_);
      DARABONBA_PTR_TO_JSON(TieringPreCu, tieringPreCu_);
    };
    friend void from_json(const Darabonba::Json& j, FlussResourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskSizeInGB, diskSizeInGB_);
      DARABONBA_PTR_FROM_JSON(SlaveModel, slaveModel_);
      DARABONBA_PTR_FROM_JSON(SlaveNum, slaveNum_);
      DARABONBA_PTR_FROM_JSON(TieringPostCu, tieringPostCu_);
      DARABONBA_PTR_FROM_JSON(TieringPreCu, tieringPreCu_);
    };
    FlussResourceSpec() = default ;
    FlussResourceSpec(const FlussResourceSpec &) = default ;
    FlussResourceSpec(FlussResourceSpec &&) = default ;
    FlussResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlussResourceSpec() = default ;
    FlussResourceSpec& operator=(const FlussResourceSpec &) = default ;
    FlussResourceSpec& operator=(FlussResourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskSizeInGB_ == nullptr
        && this->slaveModel_ == nullptr && this->slaveNum_ == nullptr && this->tieringPostCu_ == nullptr && this->tieringPreCu_ == nullptr; };
    // diskSizeInGB Field Functions 
    bool hasDiskSizeInGB() const { return this->diskSizeInGB_ != nullptr;};
    void deleteDiskSizeInGB() { this->diskSizeInGB_ = nullptr;};
    inline int64_t getDiskSizeInGB() const { DARABONBA_PTR_GET_DEFAULT(diskSizeInGB_, 0L) };
    inline FlussResourceSpec& setDiskSizeInGB(int64_t diskSizeInGB) { DARABONBA_PTR_SET_VALUE(diskSizeInGB_, diskSizeInGB) };


    // slaveModel Field Functions 
    bool hasSlaveModel() const { return this->slaveModel_ != nullptr;};
    void deleteSlaveModel() { this->slaveModel_ = nullptr;};
    inline string getSlaveModel() const { DARABONBA_PTR_GET_DEFAULT(slaveModel_, "") };
    inline FlussResourceSpec& setSlaveModel(string slaveModel) { DARABONBA_PTR_SET_VALUE(slaveModel_, slaveModel) };


    // slaveNum Field Functions 
    bool hasSlaveNum() const { return this->slaveNum_ != nullptr;};
    void deleteSlaveNum() { this->slaveNum_ = nullptr;};
    inline int64_t getSlaveNum() const { DARABONBA_PTR_GET_DEFAULT(slaveNum_, 0L) };
    inline FlussResourceSpec& setSlaveNum(int64_t slaveNum) { DARABONBA_PTR_SET_VALUE(slaveNum_, slaveNum) };


    // tieringPostCu Field Functions 
    bool hasTieringPostCu() const { return this->tieringPostCu_ != nullptr;};
    void deleteTieringPostCu() { this->tieringPostCu_ = nullptr;};
    inline int64_t getTieringPostCu() const { DARABONBA_PTR_GET_DEFAULT(tieringPostCu_, 0L) };
    inline FlussResourceSpec& setTieringPostCu(int64_t tieringPostCu) { DARABONBA_PTR_SET_VALUE(tieringPostCu_, tieringPostCu) };


    // tieringPreCu Field Functions 
    bool hasTieringPreCu() const { return this->tieringPreCu_ != nullptr;};
    void deleteTieringPreCu() { this->tieringPreCu_ = nullptr;};
    inline int64_t getTieringPreCu() const { DARABONBA_PTR_GET_DEFAULT(tieringPreCu_, 0L) };
    inline FlussResourceSpec& setTieringPreCu(int64_t tieringPreCu) { DARABONBA_PTR_SET_VALUE(tieringPreCu_, tieringPreCu) };


  protected:
    // Disk size per node, in GB.
    shared_ptr<int64_t> diskSizeInGB_ {};
    // Instance type of the slave nodes.
    shared_ptr<string> slaveModel_ {};
    // Number of slave nodes.
    shared_ptr<int64_t> slaveNum_ {};
    // Number of CUs for the post-tiering stage.
    shared_ptr<int64_t> tieringPostCu_ {};
    // Number of compute units (CUs) for the pre-tiering stage.
    shared_ptr<int64_t> tieringPreCu_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif

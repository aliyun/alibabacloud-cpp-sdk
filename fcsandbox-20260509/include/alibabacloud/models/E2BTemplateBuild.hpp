// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BTEMPLATEBUILD_HPP_
#define ALIBABACLOUD_MODELS_E2BTEMPLATEBUILD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BTemplateBuild : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BTemplateBuild& obj) { 
      DARABONBA_PTR_TO_JSON(buildID, buildID_);
      DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(diskSizeMB, diskSizeMB_);
      DARABONBA_PTR_TO_JSON(envdVersion, envdVersion_);
      DARABONBA_PTR_TO_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_TO_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, E2BTemplateBuild& obj) { 
      DARABONBA_PTR_FROM_JSON(buildID, buildID_);
      DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(diskSizeMB, diskSizeMB_);
      DARABONBA_PTR_FROM_JSON(envdVersion, envdVersion_);
      DARABONBA_PTR_FROM_JSON(finishedAt, finishedAt_);
      DARABONBA_PTR_FROM_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    E2BTemplateBuild() = default ;
    E2BTemplateBuild(const E2BTemplateBuild &) = default ;
    E2BTemplateBuild(E2BTemplateBuild &&) = default ;
    E2BTemplateBuild(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BTemplateBuild() = default ;
    E2BTemplateBuild& operator=(const E2BTemplateBuild &) = default ;
    E2BTemplateBuild& operator=(E2BTemplateBuild &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildID_ == nullptr
        && this->cpuCount_ == nullptr && this->createdAt_ == nullptr && this->diskSizeMB_ == nullptr && this->envdVersion_ == nullptr && this->finishedAt_ == nullptr
        && this->memoryMB_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr; };
    // buildID Field Functions 
    bool hasBuildID() const { return this->buildID_ != nullptr;};
    void deleteBuildID() { this->buildID_ = nullptr;};
    inline string getBuildID() const { DARABONBA_PTR_GET_DEFAULT(buildID_, "") };
    inline E2BTemplateBuild& setBuildID(string buildID) { DARABONBA_PTR_SET_VALUE(buildID_, buildID) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline E2BTemplateBuild& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline E2BTemplateBuild& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // diskSizeMB Field Functions 
    bool hasDiskSizeMB() const { return this->diskSizeMB_ != nullptr;};
    void deleteDiskSizeMB() { this->diskSizeMB_ = nullptr;};
    inline int32_t getDiskSizeMB() const { DARABONBA_PTR_GET_DEFAULT(diskSizeMB_, 0) };
    inline E2BTemplateBuild& setDiskSizeMB(int32_t diskSizeMB) { DARABONBA_PTR_SET_VALUE(diskSizeMB_, diskSizeMB) };


    // envdVersion Field Functions 
    bool hasEnvdVersion() const { return this->envdVersion_ != nullptr;};
    void deleteEnvdVersion() { this->envdVersion_ = nullptr;};
    inline string getEnvdVersion() const { DARABONBA_PTR_GET_DEFAULT(envdVersion_, "") };
    inline E2BTemplateBuild& setEnvdVersion(string envdVersion) { DARABONBA_PTR_SET_VALUE(envdVersion_, envdVersion) };


    // finishedAt Field Functions 
    bool hasFinishedAt() const { return this->finishedAt_ != nullptr;};
    void deleteFinishedAt() { this->finishedAt_ = nullptr;};
    inline string getFinishedAt() const { DARABONBA_PTR_GET_DEFAULT(finishedAt_, "") };
    inline E2BTemplateBuild& setFinishedAt(string finishedAt) { DARABONBA_PTR_SET_VALUE(finishedAt_, finishedAt) };


    // memoryMB Field Functions 
    bool hasMemoryMB() const { return this->memoryMB_ != nullptr;};
    void deleteMemoryMB() { this->memoryMB_ = nullptr;};
    inline int32_t getMemoryMB() const { DARABONBA_PTR_GET_DEFAULT(memoryMB_, 0) };
    inline E2BTemplateBuild& setMemoryMB(int32_t memoryMB) { DARABONBA_PTR_SET_VALUE(memoryMB_, memoryMB) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline E2BTemplateBuild& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline E2BTemplateBuild& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<string> buildID_ {};
    shared_ptr<int32_t> cpuCount_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<int32_t> diskSizeMB_ {};
    shared_ptr<string> envdVersion_ {};
    shared_ptr<string> finishedAt_ {};
    shared_ptr<int32_t> memoryMB_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif

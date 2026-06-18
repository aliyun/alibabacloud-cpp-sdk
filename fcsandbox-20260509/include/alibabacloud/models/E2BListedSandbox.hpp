// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BLISTEDSANDBOX_HPP_
#define ALIBABACLOUD_MODELS_E2BLISTEDSANDBOX_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/E2BVolumeMount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BListedSandbox : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BListedSandbox& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(clientID, clientID_);
      DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(diskSizeMB, diskSizeMB_);
      DARABONBA_PTR_TO_JSON(endAt, endAt_);
      DARABONBA_PTR_TO_JSON(envdVersion, envdVersion_);
      DARABONBA_PTR_TO_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(volumeMounts, volumeMounts_);
    };
    friend void from_json(const Darabonba::Json& j, E2BListedSandbox& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(clientID, clientID_);
      DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(diskSizeMB, diskSizeMB_);
      DARABONBA_PTR_FROM_JSON(endAt, endAt_);
      DARABONBA_PTR_FROM_JSON(envdVersion, envdVersion_);
      DARABONBA_PTR_FROM_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(volumeMounts, volumeMounts_);
    };
    E2BListedSandbox() = default ;
    E2BListedSandbox(const E2BListedSandbox &) = default ;
    E2BListedSandbox(E2BListedSandbox &&) = default ;
    E2BListedSandbox(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BListedSandbox() = default ;
    E2BListedSandbox& operator=(const E2BListedSandbox &) = default ;
    E2BListedSandbox& operator=(E2BListedSandbox &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->clientID_ == nullptr && this->cpuCount_ == nullptr && this->diskSizeMB_ == nullptr && this->endAt_ == nullptr && this->envdVersion_ == nullptr
        && this->memoryMB_ == nullptr && this->metadata_ == nullptr && this->sandboxID_ == nullptr && this->startedAt_ == nullptr && this->state_ == nullptr
        && this->templateID_ == nullptr && this->templateName_ == nullptr && this->volumeMounts_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline E2BListedSandbox& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // clientID Field Functions 
    bool hasClientID() const { return this->clientID_ != nullptr;};
    void deleteClientID() { this->clientID_ = nullptr;};
    inline string getClientID() const { DARABONBA_PTR_GET_DEFAULT(clientID_, "") };
    inline E2BListedSandbox& setClientID(string clientID) { DARABONBA_PTR_SET_VALUE(clientID_, clientID) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline E2BListedSandbox& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // diskSizeMB Field Functions 
    bool hasDiskSizeMB() const { return this->diskSizeMB_ != nullptr;};
    void deleteDiskSizeMB() { this->diskSizeMB_ = nullptr;};
    inline int32_t getDiskSizeMB() const { DARABONBA_PTR_GET_DEFAULT(diskSizeMB_, 0) };
    inline E2BListedSandbox& setDiskSizeMB(int32_t diskSizeMB) { DARABONBA_PTR_SET_VALUE(diskSizeMB_, diskSizeMB) };


    // endAt Field Functions 
    bool hasEndAt() const { return this->endAt_ != nullptr;};
    void deleteEndAt() { this->endAt_ = nullptr;};
    inline string getEndAt() const { DARABONBA_PTR_GET_DEFAULT(endAt_, "") };
    inline E2BListedSandbox& setEndAt(string endAt) { DARABONBA_PTR_SET_VALUE(endAt_, endAt) };


    // envdVersion Field Functions 
    bool hasEnvdVersion() const { return this->envdVersion_ != nullptr;};
    void deleteEnvdVersion() { this->envdVersion_ = nullptr;};
    inline string getEnvdVersion() const { DARABONBA_PTR_GET_DEFAULT(envdVersion_, "") };
    inline E2BListedSandbox& setEnvdVersion(string envdVersion) { DARABONBA_PTR_SET_VALUE(envdVersion_, envdVersion) };


    // memoryMB Field Functions 
    bool hasMemoryMB() const { return this->memoryMB_ != nullptr;};
    void deleteMemoryMB() { this->memoryMB_ = nullptr;};
    inline int32_t getMemoryMB() const { DARABONBA_PTR_GET_DEFAULT(memoryMB_, 0) };
    inline E2BListedSandbox& setMemoryMB(int32_t memoryMB) { DARABONBA_PTR_SET_VALUE(memoryMB_, memoryMB) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline E2BListedSandbox& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline E2BListedSandbox& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // sandboxID Field Functions 
    bool hasSandboxID() const { return this->sandboxID_ != nullptr;};
    void deleteSandboxID() { this->sandboxID_ = nullptr;};
    inline string getSandboxID() const { DARABONBA_PTR_GET_DEFAULT(sandboxID_, "") };
    inline E2BListedSandbox& setSandboxID(string sandboxID) { DARABONBA_PTR_SET_VALUE(sandboxID_, sandboxID) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline E2BListedSandbox& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline E2BListedSandbox& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline E2BListedSandbox& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline E2BListedSandbox& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // volumeMounts Field Functions 
    bool hasVolumeMounts() const { return this->volumeMounts_ != nullptr;};
    void deleteVolumeMounts() { this->volumeMounts_ = nullptr;};
    inline const vector<E2BVolumeMount> & getVolumeMounts() const { DARABONBA_PTR_GET_CONST(volumeMounts_, vector<E2BVolumeMount>) };
    inline vector<E2BVolumeMount> getVolumeMounts() { DARABONBA_PTR_GET(volumeMounts_, vector<E2BVolumeMount>) };
    inline E2BListedSandbox& setVolumeMounts(const vector<E2BVolumeMount> & volumeMounts) { DARABONBA_PTR_SET_VALUE(volumeMounts_, volumeMounts) };
    inline E2BListedSandbox& setVolumeMounts(vector<E2BVolumeMount> && volumeMounts) { DARABONBA_PTR_SET_RVALUE(volumeMounts_, volumeMounts) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> clientID_ {};
    shared_ptr<int32_t> cpuCount_ {};
    shared_ptr<int32_t> diskSizeMB_ {};
    shared_ptr<string> endAt_ {};
    shared_ptr<string> envdVersion_ {};
    shared_ptr<int32_t> memoryMB_ {};
    shared_ptr<map<string, string>> metadata_ {};
    shared_ptr<string> sandboxID_ {};
    shared_ptr<string> startedAt_ {};
    shared_ptr<string> state_ {};
    shared_ptr<string> templateID_ {};
    shared_ptr<string> templateName_ {};
    shared_ptr<vector<E2BVolumeMount>> volumeMounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif

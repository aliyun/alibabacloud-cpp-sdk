// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BSANDBOX_HPP_
#define ALIBABACLOUD_MODELS_E2BSANDBOX_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BSandbox : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BSandbox& obj) { 
      DARABONBA_PTR_TO_JSON(accessEndpoint, accessEndpoint_);
      DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(diskSizeMB, diskSizeMB_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(endAt, endAt_);
      DARABONBA_PTR_TO_JSON(fcFunctionName, fcFunctionName_);
      DARABONBA_PTR_TO_JSON(fcInstanceID, fcInstanceID_);
      DARABONBA_PTR_TO_JSON(fcSessionID, fcSessionID_);
      DARABONBA_PTR_TO_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_TO_JSON(startedAt, startedAt_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
    };
    friend void from_json(const Darabonba::Json& j, E2BSandbox& obj) { 
      DARABONBA_PTR_FROM_JSON(accessEndpoint, accessEndpoint_);
      DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(diskSizeMB, diskSizeMB_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(endAt, endAt_);
      DARABONBA_PTR_FROM_JSON(fcFunctionName, fcFunctionName_);
      DARABONBA_PTR_FROM_JSON(fcInstanceID, fcInstanceID_);
      DARABONBA_PTR_FROM_JSON(fcSessionID, fcSessionID_);
      DARABONBA_PTR_FROM_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_FROM_JSON(startedAt, startedAt_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
    };
    E2BSandbox() = default ;
    E2BSandbox(const E2BSandbox &) = default ;
    E2BSandbox(E2BSandbox &&) = default ;
    E2BSandbox(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BSandbox() = default ;
    E2BSandbox& operator=(const E2BSandbox &) = default ;
    E2BSandbox& operator=(E2BSandbox &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessEndpoint_ == nullptr
        && this->cpuCount_ == nullptr && this->diskSizeMB_ == nullptr && this->domain_ == nullptr && this->endAt_ == nullptr && this->fcFunctionName_ == nullptr
        && this->fcInstanceID_ == nullptr && this->fcSessionID_ == nullptr && this->memoryMB_ == nullptr && this->metadata_ == nullptr && this->resourceGroupID_ == nullptr
        && this->sandboxID_ == nullptr && this->startedAt_ == nullptr && this->state_ == nullptr && this->teamID_ == nullptr && this->teamName_ == nullptr
        && this->templateID_ == nullptr && this->templateName_ == nullptr && this->userID_ == nullptr; };
    // accessEndpoint Field Functions 
    bool hasAccessEndpoint() const { return this->accessEndpoint_ != nullptr;};
    void deleteAccessEndpoint() { this->accessEndpoint_ = nullptr;};
    inline string getAccessEndpoint() const { DARABONBA_PTR_GET_DEFAULT(accessEndpoint_, "") };
    inline E2BSandbox& setAccessEndpoint(string accessEndpoint) { DARABONBA_PTR_SET_VALUE(accessEndpoint_, accessEndpoint) };


    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline E2BSandbox& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // diskSizeMB Field Functions 
    bool hasDiskSizeMB() const { return this->diskSizeMB_ != nullptr;};
    void deleteDiskSizeMB() { this->diskSizeMB_ = nullptr;};
    inline int32_t getDiskSizeMB() const { DARABONBA_PTR_GET_DEFAULT(diskSizeMB_, 0) };
    inline E2BSandbox& setDiskSizeMB(int32_t diskSizeMB) { DARABONBA_PTR_SET_VALUE(diskSizeMB_, diskSizeMB) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline E2BSandbox& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endAt Field Functions 
    bool hasEndAt() const { return this->endAt_ != nullptr;};
    void deleteEndAt() { this->endAt_ = nullptr;};
    inline string getEndAt() const { DARABONBA_PTR_GET_DEFAULT(endAt_, "") };
    inline E2BSandbox& setEndAt(string endAt) { DARABONBA_PTR_SET_VALUE(endAt_, endAt) };


    // fcFunctionName Field Functions 
    bool hasFcFunctionName() const { return this->fcFunctionName_ != nullptr;};
    void deleteFcFunctionName() { this->fcFunctionName_ = nullptr;};
    inline string getFcFunctionName() const { DARABONBA_PTR_GET_DEFAULT(fcFunctionName_, "") };
    inline E2BSandbox& setFcFunctionName(string fcFunctionName) { DARABONBA_PTR_SET_VALUE(fcFunctionName_, fcFunctionName) };


    // fcInstanceID Field Functions 
    bool hasFcInstanceID() const { return this->fcInstanceID_ != nullptr;};
    void deleteFcInstanceID() { this->fcInstanceID_ = nullptr;};
    inline string getFcInstanceID() const { DARABONBA_PTR_GET_DEFAULT(fcInstanceID_, "") };
    inline E2BSandbox& setFcInstanceID(string fcInstanceID) { DARABONBA_PTR_SET_VALUE(fcInstanceID_, fcInstanceID) };


    // fcSessionID Field Functions 
    bool hasFcSessionID() const { return this->fcSessionID_ != nullptr;};
    void deleteFcSessionID() { this->fcSessionID_ = nullptr;};
    inline string getFcSessionID() const { DARABONBA_PTR_GET_DEFAULT(fcSessionID_, "") };
    inline E2BSandbox& setFcSessionID(string fcSessionID) { DARABONBA_PTR_SET_VALUE(fcSessionID_, fcSessionID) };


    // memoryMB Field Functions 
    bool hasMemoryMB() const { return this->memoryMB_ != nullptr;};
    void deleteMemoryMB() { this->memoryMB_ = nullptr;};
    inline int32_t getMemoryMB() const { DARABONBA_PTR_GET_DEFAULT(memoryMB_, 0) };
    inline E2BSandbox& setMemoryMB(int32_t memoryMB) { DARABONBA_PTR_SET_VALUE(memoryMB_, memoryMB) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const map<string, string> & getMetadata() const { DARABONBA_PTR_GET_CONST(metadata_, map<string, string>) };
    inline map<string, string> getMetadata() { DARABONBA_PTR_GET(metadata_, map<string, string>) };
    inline E2BSandbox& setMetadata(const map<string, string> & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline E2BSandbox& setMetadata(map<string, string> && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline E2BSandbox& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // sandboxID Field Functions 
    bool hasSandboxID() const { return this->sandboxID_ != nullptr;};
    void deleteSandboxID() { this->sandboxID_ = nullptr;};
    inline string getSandboxID() const { DARABONBA_PTR_GET_DEFAULT(sandboxID_, "") };
    inline E2BSandbox& setSandboxID(string sandboxID) { DARABONBA_PTR_SET_VALUE(sandboxID_, sandboxID) };


    // startedAt Field Functions 
    bool hasStartedAt() const { return this->startedAt_ != nullptr;};
    void deleteStartedAt() { this->startedAt_ = nullptr;};
    inline string getStartedAt() const { DARABONBA_PTR_GET_DEFAULT(startedAt_, "") };
    inline E2BSandbox& setStartedAt(string startedAt) { DARABONBA_PTR_SET_VALUE(startedAt_, startedAt) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline E2BSandbox& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline E2BSandbox& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline E2BSandbox& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline E2BSandbox& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline E2BSandbox& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline E2BSandbox& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


  protected:
    shared_ptr<string> accessEndpoint_ {};
    shared_ptr<int32_t> cpuCount_ {};
    shared_ptr<int32_t> diskSizeMB_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<string> endAt_ {};
    shared_ptr<string> fcFunctionName_ {};
    shared_ptr<string> fcInstanceID_ {};
    shared_ptr<string> fcSessionID_ {};
    shared_ptr<int32_t> memoryMB_ {};
    shared_ptr<map<string, string>> metadata_ {};
    shared_ptr<string> resourceGroupID_ {};
    shared_ptr<string> sandboxID_ {};
    shared_ptr<string> startedAt_ {};
    shared_ptr<string> state_ {};
    shared_ptr<string> teamID_ {};
    shared_ptr<string> teamName_ {};
    shared_ptr<string> templateID_ {};
    shared_ptr<string> templateName_ {};
    shared_ptr<string> userID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif

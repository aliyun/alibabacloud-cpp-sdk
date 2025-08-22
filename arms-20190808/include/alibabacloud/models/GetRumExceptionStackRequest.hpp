// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUMEXCEPTIONSTACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumExceptionStackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumExceptionStackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionBinaryImages, exceptionBinaryImages_);
      DARABONBA_PTR_TO_JSON(ExceptionStack, exceptionStack_);
      DARABONBA_PTR_TO_JSON(ExceptionThreadId, exceptionThreadId_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(SourcemapType, sourcemapType_);
      DARABONBA_PTR_TO_JSON(Workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumExceptionStackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionBinaryImages, exceptionBinaryImages_);
      DARABONBA_PTR_FROM_JSON(ExceptionStack, exceptionStack_);
      DARABONBA_PTR_FROM_JSON(ExceptionThreadId, exceptionThreadId_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(SourcemapType, sourcemapType_);
      DARABONBA_PTR_FROM_JSON(Workspace, workspace_);
    };
    GetRumExceptionStackRequest() = default ;
    GetRumExceptionStackRequest(const GetRumExceptionStackRequest &) = default ;
    GetRumExceptionStackRequest(GetRumExceptionStackRequest &&) = default ;
    GetRumExceptionStackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumExceptionStackRequest() = default ;
    GetRumExceptionStackRequest& operator=(const GetRumExceptionStackRequest &) = default ;
    GetRumExceptionStackRequest& operator=(GetRumExceptionStackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->exceptionBinaryImages_ != nullptr
        && this->exceptionStack_ != nullptr && this->exceptionThreadId_ != nullptr && this->extraInfo_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr
        && this->serviceId_ != nullptr && this->sourcemapType_ != nullptr && this->workspace_ != nullptr; };
    // exceptionBinaryImages Field Functions 
    bool hasExceptionBinaryImages() const { return this->exceptionBinaryImages_ != nullptr;};
    void deleteExceptionBinaryImages() { this->exceptionBinaryImages_ = nullptr;};
    inline string exceptionBinaryImages() const { DARABONBA_PTR_GET_DEFAULT(exceptionBinaryImages_, "") };
    inline GetRumExceptionStackRequest& setExceptionBinaryImages(string exceptionBinaryImages) { DARABONBA_PTR_SET_VALUE(exceptionBinaryImages_, exceptionBinaryImages) };


    // exceptionStack Field Functions 
    bool hasExceptionStack() const { return this->exceptionStack_ != nullptr;};
    void deleteExceptionStack() { this->exceptionStack_ = nullptr;};
    inline string exceptionStack() const { DARABONBA_PTR_GET_DEFAULT(exceptionStack_, "") };
    inline GetRumExceptionStackRequest& setExceptionStack(string exceptionStack) { DARABONBA_PTR_SET_VALUE(exceptionStack_, exceptionStack) };


    // exceptionThreadId Field Functions 
    bool hasExceptionThreadId() const { return this->exceptionThreadId_ != nullptr;};
    void deleteExceptionThreadId() { this->exceptionThreadId_ = nullptr;};
    inline string exceptionThreadId() const { DARABONBA_PTR_GET_DEFAULT(exceptionThreadId_, "") };
    inline GetRumExceptionStackRequest& setExceptionThreadId(string exceptionThreadId) { DARABONBA_PTR_SET_VALUE(exceptionThreadId_, exceptionThreadId) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GetRumExceptionStackRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetRumExceptionStackRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRumExceptionStackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetRumExceptionStackRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // sourcemapType Field Functions 
    bool hasSourcemapType() const { return this->sourcemapType_ != nullptr;};
    void deleteSourcemapType() { this->sourcemapType_ = nullptr;};
    inline string sourcemapType() const { DARABONBA_PTR_GET_DEFAULT(sourcemapType_, "") };
    inline GetRumExceptionStackRequest& setSourcemapType(string sourcemapType) { DARABONBA_PTR_SET_VALUE(sourcemapType_, sourcemapType) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetRumExceptionStackRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The binary images, which represent all executable files loaded into the process address space when a crash occurs.
    std::shared_ptr<string> exceptionBinaryImages_ = nullptr;
    // The exception stack information. Set the value to a JSON string. call_stack.info represents the stack information, call_stack.thread.name represents the thread name, and call_stack.thread.id represents the thread ID. This parameter is exactly the same as the exception.stack parameter in the logstore-rum Logstore of Simple Log Service.
    std::shared_ptr<string> exceptionStack_ = nullptr;
    // The ID of the exception thread.
    std::shared_ptr<string> exceptionThreadId_ = nullptr;
    // Extra information about iOS symbol tables. You can leave this parameter empty.
    std::shared_ptr<string> extraInfo_ = nullptr;
    // The application ID.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> serviceId_ = nullptr;
    // The parsing type. Valid values:
    // 
    // *   js: Parses JavaScript errors.
    // *   sym: Parses PC errors.
    // *   har: Parses HarmonyOS errors.
    // *   dSYM: Parses iOS errors.
    // *   so: Parses Android errors.
    std::shared_ptr<string> sourcemapType_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

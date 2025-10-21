// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoDetectShotTaskResponseBodyDataHeader.hpp>
#include <alibabacloud/models/GetVideoDetectShotTaskResponseBodyDataPayload.hpp>
#include <alibabacloud/models/GetVideoDetectShotTaskResponseBodyDataTaskRunInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoDetectShotTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDetectShotTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskRunInfo, taskRunInfo_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDetectShotTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskRunInfo, taskRunInfo_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    GetVideoDetectShotTaskResponseBodyData() = default ;
    GetVideoDetectShotTaskResponseBodyData(const GetVideoDetectShotTaskResponseBodyData &) = default ;
    GetVideoDetectShotTaskResponseBodyData(GetVideoDetectShotTaskResponseBodyData &&) = default ;
    GetVideoDetectShotTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDetectShotTaskResponseBodyData() = default ;
    GetVideoDetectShotTaskResponseBodyData& operator=(const GetVideoDetectShotTaskResponseBodyData &) = default ;
    GetVideoDetectShotTaskResponseBodyData& operator=(GetVideoDetectShotTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->header_ == nullptr && return this->payload_ == nullptr && return this->taskId_ == nullptr && return this->taskRunInfo_ == nullptr && return this->taskStatus_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetVideoDetectShotTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const Models::GetVideoDetectShotTaskResponseBodyDataHeader & header() const { DARABONBA_PTR_GET_CONST(header_, Models::GetVideoDetectShotTaskResponseBodyDataHeader) };
    inline Models::GetVideoDetectShotTaskResponseBodyDataHeader header() { DARABONBA_PTR_GET(header_, Models::GetVideoDetectShotTaskResponseBodyDataHeader) };
    inline GetVideoDetectShotTaskResponseBodyData& setHeader(const Models::GetVideoDetectShotTaskResponseBodyDataHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline GetVideoDetectShotTaskResponseBodyData& setHeader(Models::GetVideoDetectShotTaskResponseBodyDataHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const Models::GetVideoDetectShotTaskResponseBodyDataPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, Models::GetVideoDetectShotTaskResponseBodyDataPayload) };
    inline Models::GetVideoDetectShotTaskResponseBodyDataPayload payload() { DARABONBA_PTR_GET(payload_, Models::GetVideoDetectShotTaskResponseBodyDataPayload) };
    inline GetVideoDetectShotTaskResponseBodyData& setPayload(const Models::GetVideoDetectShotTaskResponseBodyDataPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetVideoDetectShotTaskResponseBodyData& setPayload(Models::GetVideoDetectShotTaskResponseBodyDataPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVideoDetectShotTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskRunInfo Field Functions 
    bool hasTaskRunInfo() const { return this->taskRunInfo_ != nullptr;};
    void deleteTaskRunInfo() { this->taskRunInfo_ = nullptr;};
    inline const Models::GetVideoDetectShotTaskResponseBodyDataTaskRunInfo & taskRunInfo() const { DARABONBA_PTR_GET_CONST(taskRunInfo_, Models::GetVideoDetectShotTaskResponseBodyDataTaskRunInfo) };
    inline Models::GetVideoDetectShotTaskResponseBodyDataTaskRunInfo taskRunInfo() { DARABONBA_PTR_GET(taskRunInfo_, Models::GetVideoDetectShotTaskResponseBodyDataTaskRunInfo) };
    inline GetVideoDetectShotTaskResponseBodyData& setTaskRunInfo(const Models::GetVideoDetectShotTaskResponseBodyDataTaskRunInfo & taskRunInfo) { DARABONBA_PTR_SET_VALUE(taskRunInfo_, taskRunInfo) };
    inline GetVideoDetectShotTaskResponseBodyData& setTaskRunInfo(Models::GetVideoDetectShotTaskResponseBodyDataTaskRunInfo && taskRunInfo) { DARABONBA_PTR_SET_RVALUE(taskRunInfo_, taskRunInfo) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetVideoDetectShotTaskResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<Models::GetVideoDetectShotTaskResponseBodyDataHeader> header_ = nullptr;
    std::shared_ptr<Models::GetVideoDetectShotTaskResponseBodyDataPayload> payload_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<Models::GetVideoDetectShotTaskResponseBodyDataTaskRunInfo> taskRunInfo_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif

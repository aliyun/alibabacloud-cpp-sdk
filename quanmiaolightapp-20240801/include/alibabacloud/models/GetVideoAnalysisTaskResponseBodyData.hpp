// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataHeader.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataPayload.hpp>
#include <alibabacloud/models/GetVideoAnalysisTaskResponseBodyDataTaskRunInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(taskRunInfo, taskRunInfo_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(taskRunInfo, taskRunInfo_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    GetVideoAnalysisTaskResponseBodyData() = default ;
    GetVideoAnalysisTaskResponseBodyData(const GetVideoAnalysisTaskResponseBodyData &) = default ;
    GetVideoAnalysisTaskResponseBodyData(GetVideoAnalysisTaskResponseBodyData &&) = default ;
    GetVideoAnalysisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBodyData() = default ;
    GetVideoAnalysisTaskResponseBodyData& operator=(const GetVideoAnalysisTaskResponseBodyData &) = default ;
    GetVideoAnalysisTaskResponseBodyData& operator=(GetVideoAnalysisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->header_ != nullptr && this->payload_ != nullptr && this->taskId_ != nullptr && this->taskRunInfo_ != nullptr && this->taskStatus_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetVideoAnalysisTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataHeader & header() const { DARABONBA_PTR_GET_CONST(header_, Models::GetVideoAnalysisTaskResponseBodyDataHeader) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataHeader header() { DARABONBA_PTR_GET(header_, Models::GetVideoAnalysisTaskResponseBodyDataHeader) };
    inline GetVideoAnalysisTaskResponseBodyData& setHeader(const Models::GetVideoAnalysisTaskResponseBodyDataHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline GetVideoAnalysisTaskResponseBodyData& setHeader(Models::GetVideoAnalysisTaskResponseBodyDataHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, Models::GetVideoAnalysisTaskResponseBodyDataPayload) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataPayload payload() { DARABONBA_PTR_GET(payload_, Models::GetVideoAnalysisTaskResponseBodyDataPayload) };
    inline GetVideoAnalysisTaskResponseBodyData& setPayload(const Models::GetVideoAnalysisTaskResponseBodyDataPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetVideoAnalysisTaskResponseBodyData& setPayload(Models::GetVideoAnalysisTaskResponseBodyDataPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetVideoAnalysisTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskRunInfo Field Functions 
    bool hasTaskRunInfo() const { return this->taskRunInfo_ != nullptr;};
    void deleteTaskRunInfo() { this->taskRunInfo_ = nullptr;};
    inline const Models::GetVideoAnalysisTaskResponseBodyDataTaskRunInfo & taskRunInfo() const { DARABONBA_PTR_GET_CONST(taskRunInfo_, Models::GetVideoAnalysisTaskResponseBodyDataTaskRunInfo) };
    inline Models::GetVideoAnalysisTaskResponseBodyDataTaskRunInfo taskRunInfo() { DARABONBA_PTR_GET(taskRunInfo_, Models::GetVideoAnalysisTaskResponseBodyDataTaskRunInfo) };
    inline GetVideoAnalysisTaskResponseBodyData& setTaskRunInfo(const Models::GetVideoAnalysisTaskResponseBodyDataTaskRunInfo & taskRunInfo) { DARABONBA_PTR_SET_VALUE(taskRunInfo_, taskRunInfo) };
    inline GetVideoAnalysisTaskResponseBodyData& setTaskRunInfo(Models::GetVideoAnalysisTaskResponseBodyDataTaskRunInfo && taskRunInfo) { DARABONBA_PTR_SET_RVALUE(taskRunInfo_, taskRunInfo) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetVideoAnalysisTaskResponseBodyData& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataHeader> header_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataPayload> payload_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<Models::GetVideoAnalysisTaskResponseBodyDataTaskRunInfo> taskRunInfo_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif

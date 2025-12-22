// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEDETECTIONTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateImageDetectionTaskResponseBodyDataFileInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class CreateImageDetectionTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageDetectionTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageDetectionTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(fileInfo, fileInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    CreateImageDetectionTaskResponseBodyData() = default ;
    CreateImageDetectionTaskResponseBodyData(const CreateImageDetectionTaskResponseBodyData &) = default ;
    CreateImageDetectionTaskResponseBodyData(CreateImageDetectionTaskResponseBodyData &&) = default ;
    CreateImageDetectionTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageDetectionTaskResponseBodyData() = default ;
    CreateImageDetectionTaskResponseBodyData& operator=(const CreateImageDetectionTaskResponseBodyData &) = default ;
    CreateImageDetectionTaskResponseBodyData& operator=(CreateImageDetectionTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // fileInfo Field Functions 
    bool hasFileInfo() const { return this->fileInfo_ != nullptr;};
    void deleteFileInfo() { this->fileInfo_ = nullptr;};
    inline const Models::CreateImageDetectionTaskResponseBodyDataFileInfo & fileInfo() const { DARABONBA_PTR_GET_CONST(fileInfo_, Models::CreateImageDetectionTaskResponseBodyDataFileInfo) };
    inline Models::CreateImageDetectionTaskResponseBodyDataFileInfo fileInfo() { DARABONBA_PTR_GET(fileInfo_, Models::CreateImageDetectionTaskResponseBodyDataFileInfo) };
    inline CreateImageDetectionTaskResponseBodyData& setFileInfo(const Models::CreateImageDetectionTaskResponseBodyDataFileInfo & fileInfo) { DARABONBA_PTR_SET_VALUE(fileInfo_, fileInfo) };
    inline CreateImageDetectionTaskResponseBodyData& setFileInfo(Models::CreateImageDetectionTaskResponseBodyDataFileInfo && fileInfo) { DARABONBA_PTR_SET_RVALUE(fileInfo_, fileInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateImageDetectionTaskResponseBodyData& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateImageDetectionTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<Models::CreateImageDetectionTaskResponseBodyDataFileInfo> fileInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTIMAGETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTIMAGETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SelectImageTaskResponseBodyImageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SelectImageTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectImageTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(failed, failed_);
      DARABONBA_PTR_TO_JSON(generationSource, generationSource_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(imageInfos, imageInfos_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subtaskProcessing, subtaskProcessing_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SelectImageTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(failed, failed_);
      DARABONBA_PTR_FROM_JSON(generationSource, generationSource_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(imageInfos, imageInfos_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subtaskProcessing, subtaskProcessing_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    SelectImageTaskResponseBody() = default ;
    SelectImageTaskResponseBody(const SelectImageTaskResponseBody &) = default ;
    SelectImageTaskResponseBody(SelectImageTaskResponseBody &&) = default ;
    SelectImageTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectImageTaskResponseBody() = default ;
    SelectImageTaskResponseBody& operator=(const SelectImageTaskResponseBody &) = default ;
    SelectImageTaskResponseBody& operator=(SelectImageTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->failed_ == nullptr && return this->generationSource_ == nullptr && return this->gmtCreate_ == nullptr && return this->imageInfos_ == nullptr && return this->requestId_ == nullptr
        && return this->scene_ == nullptr && return this->status_ == nullptr && return this->subtaskProcessing_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SelectImageTaskResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline string failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, "") };
    inline SelectImageTaskResponseBody& setFailed(string failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // generationSource Field Functions 
    bool hasGenerationSource() const { return this->generationSource_ != nullptr;};
    void deleteGenerationSource() { this->generationSource_ = nullptr;};
    inline string generationSource() const { DARABONBA_PTR_GET_DEFAULT(generationSource_, "") };
    inline SelectImageTaskResponseBody& setGenerationSource(string generationSource) { DARABONBA_PTR_SET_VALUE(generationSource_, generationSource) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline SelectImageTaskResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // imageInfos Field Functions 
    bool hasImageInfos() const { return this->imageInfos_ != nullptr;};
    void deleteImageInfos() { this->imageInfos_ = nullptr;};
    inline const vector<SelectImageTaskResponseBodyImageInfos> & imageInfos() const { DARABONBA_PTR_GET_CONST(imageInfos_, vector<SelectImageTaskResponseBodyImageInfos>) };
    inline vector<SelectImageTaskResponseBodyImageInfos> imageInfos() { DARABONBA_PTR_GET(imageInfos_, vector<SelectImageTaskResponseBodyImageInfos>) };
    inline SelectImageTaskResponseBody& setImageInfos(const vector<SelectImageTaskResponseBodyImageInfos> & imageInfos) { DARABONBA_PTR_SET_VALUE(imageInfos_, imageInfos) };
    inline SelectImageTaskResponseBody& setImageInfos(vector<SelectImageTaskResponseBodyImageInfos> && imageInfos) { DARABONBA_PTR_SET_RVALUE(imageInfos_, imageInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SelectImageTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SelectImageTaskResponseBody& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SelectImageTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subtaskProcessing Field Functions 
    bool hasSubtaskProcessing() const { return this->subtaskProcessing_ != nullptr;};
    void deleteSubtaskProcessing() { this->subtaskProcessing_ = nullptr;};
    inline string subtaskProcessing() const { DARABONBA_PTR_GET_DEFAULT(subtaskProcessing_, "") };
    inline SelectImageTaskResponseBody& setSubtaskProcessing(string subtaskProcessing) { DARABONBA_PTR_SET_VALUE(subtaskProcessing_, subtaskProcessing) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SelectImageTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline SelectImageTaskResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> failed_ = nullptr;
    std::shared_ptr<string> generationSource_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<vector<SelectImageTaskResponseBodyImageInfos>> imageInfos_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subtaskProcessing_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

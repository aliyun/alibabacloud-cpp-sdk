// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTIMAGETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTIMAGETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ImageInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageInfos& obj) { 
        DARABONBA_PTR_TO_JSON(customImageUrl, customImageUrl_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(imageH, imageH_);
        DARABONBA_PTR_TO_JSON(imageW, imageW_);
      };
      friend void from_json(const Darabonba::Json& j, ImageInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(customImageUrl, customImageUrl_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(imageH, imageH_);
        DARABONBA_PTR_FROM_JSON(imageW, imageW_);
      };
      ImageInfos() = default ;
      ImageInfos(const ImageInfos &) = default ;
      ImageInfos(ImageInfos &&) = default ;
      ImageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageInfos() = default ;
      ImageInfos& operator=(const ImageInfos &) = default ;
      ImageInfos& operator=(ImageInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customImageUrl_ == nullptr
        && this->gmtCreate_ == nullptr && this->imageH_ == nullptr && this->imageW_ == nullptr; };
      // customImageUrl Field Functions 
      bool hasCustomImageUrl() const { return this->customImageUrl_ != nullptr;};
      void deleteCustomImageUrl() { this->customImageUrl_ = nullptr;};
      inline string getCustomImageUrl() const { DARABONBA_PTR_GET_DEFAULT(customImageUrl_, "") };
      inline ImageInfos& setCustomImageUrl(string customImageUrl) { DARABONBA_PTR_SET_VALUE(customImageUrl_, customImageUrl) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline ImageInfos& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // imageH Field Functions 
      bool hasImageH() const { return this->imageH_ != nullptr;};
      void deleteImageH() { this->imageH_ = nullptr;};
      inline string getImageH() const { DARABONBA_PTR_GET_DEFAULT(imageH_, "") };
      inline ImageInfos& setImageH(string imageH) { DARABONBA_PTR_SET_VALUE(imageH_, imageH) };


      // imageW Field Functions 
      bool hasImageW() const { return this->imageW_ != nullptr;};
      void deleteImageW() { this->imageW_ = nullptr;};
      inline string getImageW() const { DARABONBA_PTR_GET_DEFAULT(imageW_, "") };
      inline ImageInfos& setImageW(string imageW) { DARABONBA_PTR_SET_VALUE(imageW_, imageW) };


    protected:
      shared_ptr<string> customImageUrl_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> imageH_ {};
      shared_ptr<string> imageW_ {};
    };

    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->failed_ == nullptr && this->generationSource_ == nullptr && this->gmtCreate_ == nullptr && this->imageInfos_ == nullptr && this->requestId_ == nullptr
        && this->scene_ == nullptr && this->status_ == nullptr && this->subtaskProcessing_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline SelectImageTaskResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline string getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, "") };
    inline SelectImageTaskResponseBody& setFailed(string failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // generationSource Field Functions 
    bool hasGenerationSource() const { return this->generationSource_ != nullptr;};
    void deleteGenerationSource() { this->generationSource_ = nullptr;};
    inline string getGenerationSource() const { DARABONBA_PTR_GET_DEFAULT(generationSource_, "") };
    inline SelectImageTaskResponseBody& setGenerationSource(string generationSource) { DARABONBA_PTR_SET_VALUE(generationSource_, generationSource) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline SelectImageTaskResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // imageInfos Field Functions 
    bool hasImageInfos() const { return this->imageInfos_ != nullptr;};
    void deleteImageInfos() { this->imageInfos_ = nullptr;};
    inline const vector<SelectImageTaskResponseBody::ImageInfos> & getImageInfos() const { DARABONBA_PTR_GET_CONST(imageInfos_, vector<SelectImageTaskResponseBody::ImageInfos>) };
    inline vector<SelectImageTaskResponseBody::ImageInfos> getImageInfos() { DARABONBA_PTR_GET(imageInfos_, vector<SelectImageTaskResponseBody::ImageInfos>) };
    inline SelectImageTaskResponseBody& setImageInfos(const vector<SelectImageTaskResponseBody::ImageInfos> & imageInfos) { DARABONBA_PTR_SET_VALUE(imageInfos_, imageInfos) };
    inline SelectImageTaskResponseBody& setImageInfos(vector<SelectImageTaskResponseBody::ImageInfos> && imageInfos) { DARABONBA_PTR_SET_RVALUE(imageInfos_, imageInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SelectImageTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline SelectImageTaskResponseBody& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SelectImageTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subtaskProcessing Field Functions 
    bool hasSubtaskProcessing() const { return this->subtaskProcessing_ != nullptr;};
    void deleteSubtaskProcessing() { this->subtaskProcessing_ = nullptr;};
    inline string getSubtaskProcessing() const { DARABONBA_PTR_GET_DEFAULT(subtaskProcessing_, "") };
    inline SelectImageTaskResponseBody& setSubtaskProcessing(string subtaskProcessing) { DARABONBA_PTR_SET_VALUE(subtaskProcessing_, subtaskProcessing) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SelectImageTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline SelectImageTaskResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> failed_ {};
    shared_ptr<string> generationSource_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<vector<SelectImageTaskResponseBody::ImageInfos>> imageInfos_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> scene_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> subtaskProcessing_ {};
    shared_ptr<string> success_ {};
    shared_ptr<string> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDIGITALDOCSTRUCTUREJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDIGITALDOCSTRUCTUREJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitDigitalDocStructureJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDigitalDocStructureJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(ImageStrategy, imageStrategy_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(RevealMarkdown, revealMarkdown_);
      DARABONBA_PTR_TO_JSON(UseUrlResponseBody, useUrlResponseBody_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDigitalDocStructureJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(ImageStrategy, imageStrategy_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(RevealMarkdown, revealMarkdown_);
      DARABONBA_PTR_FROM_JSON(UseUrlResponseBody, useUrlResponseBody_);
    };
    SubmitDigitalDocStructureJobRequest() = default ;
    SubmitDigitalDocStructureJobRequest(const SubmitDigitalDocStructureJobRequest &) = default ;
    SubmitDigitalDocStructureJobRequest(SubmitDigitalDocStructureJobRequest &&) = default ;
    SubmitDigitalDocStructureJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDigitalDocStructureJobRequest() = default ;
    SubmitDigitalDocStructureJobRequest& operator=(const SubmitDigitalDocStructureJobRequest &) = default ;
    SubmitDigitalDocStructureJobRequest& operator=(SubmitDigitalDocStructureJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileNameExtension_ == nullptr && return this->fileUrl_ == nullptr && return this->imageStrategy_ == nullptr && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr
        && return this->revealMarkdown_ == nullptr && return this->useUrlResponseBody_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDigitalDocStructureJobRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileNameExtension Field Functions 
    bool hasFileNameExtension() const { return this->fileNameExtension_ != nullptr;};
    void deleteFileNameExtension() { this->fileNameExtension_ = nullptr;};
    inline string fileNameExtension() const { DARABONBA_PTR_GET_DEFAULT(fileNameExtension_, "") };
    inline SubmitDigitalDocStructureJobRequest& setFileNameExtension(string fileNameExtension) { DARABONBA_PTR_SET_VALUE(fileNameExtension_, fileNameExtension) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline SubmitDigitalDocStructureJobRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // imageStrategy Field Functions 
    bool hasImageStrategy() const { return this->imageStrategy_ != nullptr;};
    void deleteImageStrategy() { this->imageStrategy_ = nullptr;};
    inline string imageStrategy() const { DARABONBA_PTR_GET_DEFAULT(imageStrategy_, "") };
    inline SubmitDigitalDocStructureJobRequest& setImageStrategy(string imageStrategy) { DARABONBA_PTR_SET_VALUE(imageStrategy_, imageStrategy) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitDigitalDocStructureJobRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitDigitalDocStructureJobRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // revealMarkdown Field Functions 
    bool hasRevealMarkdown() const { return this->revealMarkdown_ != nullptr;};
    void deleteRevealMarkdown() { this->revealMarkdown_ = nullptr;};
    inline bool revealMarkdown() const { DARABONBA_PTR_GET_DEFAULT(revealMarkdown_, false) };
    inline SubmitDigitalDocStructureJobRequest& setRevealMarkdown(bool revealMarkdown) { DARABONBA_PTR_SET_VALUE(revealMarkdown_, revealMarkdown) };


    // useUrlResponseBody Field Functions 
    bool hasUseUrlResponseBody() const { return this->useUrlResponseBody_ != nullptr;};
    void deleteUseUrlResponseBody() { this->useUrlResponseBody_ = nullptr;};
    inline bool useUrlResponseBody() const { DARABONBA_PTR_GET_DEFAULT(useUrlResponseBody_, false) };
    inline SubmitDigitalDocStructureJobRequest& setUseUrlResponseBody(bool useUrlResponseBody) { DARABONBA_PTR_SET_VALUE(useUrlResponseBody_, useUrlResponseBody) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileNameExtension_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> imageStrategy_ = nullptr;
    std::shared_ptr<string> ossBucket_ = nullptr;
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    std::shared_ptr<bool> revealMarkdown_ = nullptr;
    std::shared_ptr<bool> useUrlResponseBody_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DocmindApi20220711
#endif

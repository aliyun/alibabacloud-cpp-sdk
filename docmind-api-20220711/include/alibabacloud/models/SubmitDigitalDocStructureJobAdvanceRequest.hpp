// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDIGITALDOCSTRUCTUREJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDIGITALDOCSTRUCTUREJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocmindApi20220711
{
namespace Models
{
  class SubmitDigitalDocStructureJobAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDigitalDocStructureJobAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_TO_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_TO_JSON(ImageStrategy, imageStrategy_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(RevealMarkdown, revealMarkdown_);
      DARABONBA_PTR_TO_JSON(UseUrlResponseBody, useUrlResponseBody_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDigitalDocStructureJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileNameExtension, fileNameExtension_);
      DARABONBA_FROM_JSON(FileUrl, fileUrlObject_);
      DARABONBA_PTR_FROM_JSON(ImageStrategy, imageStrategy_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(RevealMarkdown, revealMarkdown_);
      DARABONBA_PTR_FROM_JSON(UseUrlResponseBody, useUrlResponseBody_);
    };
    SubmitDigitalDocStructureJobAdvanceRequest() = default ;
    SubmitDigitalDocStructureJobAdvanceRequest(const SubmitDigitalDocStructureJobAdvanceRequest &) = default ;
    SubmitDigitalDocStructureJobAdvanceRequest(SubmitDigitalDocStructureJobAdvanceRequest &&) = default ;
    SubmitDigitalDocStructureJobAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDigitalDocStructureJobAdvanceRequest() = default ;
    SubmitDigitalDocStructureJobAdvanceRequest& operator=(const SubmitDigitalDocStructureJobAdvanceRequest &) = default ;
    SubmitDigitalDocStructureJobAdvanceRequest& operator=(SubmitDigitalDocStructureJobAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileNameExtension_ == nullptr && return this->fileUrlObject_ == nullptr && return this->imageStrategy_ == nullptr && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr
        && return this->revealMarkdown_ == nullptr && return this->useUrlResponseBody_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline SubmitDigitalDocStructureJobAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileNameExtension Field Functions 
    bool hasFileNameExtension() const { return this->fileNameExtension_ != nullptr;};
    void deleteFileNameExtension() { this->fileNameExtension_ = nullptr;};
    inline string fileNameExtension() const { DARABONBA_PTR_GET_DEFAULT(fileNameExtension_, "") };
    inline SubmitDigitalDocStructureJobAdvanceRequest& setFileNameExtension(string fileNameExtension) { DARABONBA_PTR_SET_VALUE(fileNameExtension_, fileNameExtension) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline SubmitDigitalDocStructureJobAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // imageStrategy Field Functions 
    bool hasImageStrategy() const { return this->imageStrategy_ != nullptr;};
    void deleteImageStrategy() { this->imageStrategy_ = nullptr;};
    inline string imageStrategy() const { DARABONBA_PTR_GET_DEFAULT(imageStrategy_, "") };
    inline SubmitDigitalDocStructureJobAdvanceRequest& setImageStrategy(string imageStrategy) { DARABONBA_PTR_SET_VALUE(imageStrategy_, imageStrategy) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline SubmitDigitalDocStructureJobAdvanceRequest& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline SubmitDigitalDocStructureJobAdvanceRequest& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // revealMarkdown Field Functions 
    bool hasRevealMarkdown() const { return this->revealMarkdown_ != nullptr;};
    void deleteRevealMarkdown() { this->revealMarkdown_ = nullptr;};
    inline bool revealMarkdown() const { DARABONBA_PTR_GET_DEFAULT(revealMarkdown_, false) };
    inline SubmitDigitalDocStructureJobAdvanceRequest& setRevealMarkdown(bool revealMarkdown) { DARABONBA_PTR_SET_VALUE(revealMarkdown_, revealMarkdown) };


    // useUrlResponseBody Field Functions 
    bool hasUseUrlResponseBody() const { return this->useUrlResponseBody_ != nullptr;};
    void deleteUseUrlResponseBody() { this->useUrlResponseBody_ = nullptr;};
    inline bool useUrlResponseBody() const { DARABONBA_PTR_GET_DEFAULT(useUrlResponseBody_, false) };
    inline SubmitDigitalDocStructureJobAdvanceRequest& setUseUrlResponseBody(bool useUrlResponseBody) { DARABONBA_PTR_SET_VALUE(useUrlResponseBody_, useUrlResponseBody) };


  protected:
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileNameExtension_ = nullptr;
    shared_ptr<Darabonba::IStream> fileUrlObject_ = nullptr;
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

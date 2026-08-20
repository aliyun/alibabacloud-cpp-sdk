// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOCPARSERJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOCPARSERJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DtsAI20260401
{
namespace Models
{
  class CreateDocParserJobAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDocParserJobAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(AsrLanguage, asrLanguage_);
      DARABONBA_PTR_TO_JSON(AudioClipOutput, audioClipOutput_);
      DARABONBA_PTR_TO_JSON(AudioWindowSeconds, audioWindowSeconds_);
      DARABONBA_PTR_TO_JSON(ChunkSummary, chunkSummary_);
      DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(FrameOutput, frameOutput_);
      DARABONBA_PTR_TO_JSON(GlobalSummary, globalSummary_);
      DARABONBA_PTR_TO_JSON(ImageMode, imageMode_);
      DARABONBA_PTR_TO_JSON(ImageUnderstanding, imageUnderstanding_);
      DARABONBA_PTR_TO_JSON(MediaChunkIntervalSeconds, mediaChunkIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(MediaChunkStrategy, mediaChunkStrategy_);
      DARABONBA_PTR_TO_JSON(MediaFramesPerMinute, mediaFramesPerMinute_);
      DARABONBA_PTR_TO_JSON(MediaMaxFrameBudget, mediaMaxFrameBudget_);
      DARABONBA_PTR_TO_JSON(MediaMinFrameBudget, mediaMinFrameBudget_);
      DARABONBA_PTR_TO_JSON(OssFileUrl, ossFileUrl_);
      DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(ParseScene, parseScene_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResponseMode, responseMode_);
      DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      DARABONBA_PTR_TO_JSON(TableFormat, tableFormat_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDocParserJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(AsrLanguage, asrLanguage_);
      DARABONBA_PTR_FROM_JSON(AudioClipOutput, audioClipOutput_);
      DARABONBA_PTR_FROM_JSON(AudioWindowSeconds, audioWindowSeconds_);
      DARABONBA_PTR_FROM_JSON(ChunkSummary, chunkSummary_);
      DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_FROM_JSON(FrameOutput, frameOutput_);
      DARABONBA_PTR_FROM_JSON(GlobalSummary, globalSummary_);
      DARABONBA_PTR_FROM_JSON(ImageMode, imageMode_);
      DARABONBA_PTR_FROM_JSON(ImageUnderstanding, imageUnderstanding_);
      DARABONBA_PTR_FROM_JSON(MediaChunkIntervalSeconds, mediaChunkIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(MediaChunkStrategy, mediaChunkStrategy_);
      DARABONBA_PTR_FROM_JSON(MediaFramesPerMinute, mediaFramesPerMinute_);
      DARABONBA_PTR_FROM_JSON(MediaMaxFrameBudget, mediaMaxFrameBudget_);
      DARABONBA_PTR_FROM_JSON(MediaMinFrameBudget, mediaMinFrameBudget_);
      DARABONBA_PTR_FROM_JSON(OssFileUrl, ossFileUrl_);
      DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(ParseScene, parseScene_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResponseMode, responseMode_);
      DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      DARABONBA_PTR_FROM_JSON(TableFormat, tableFormat_);
    };
    CreateDocParserJobAdvanceRequest() = default ;
    CreateDocParserJobAdvanceRequest(const CreateDocParserJobAdvanceRequest &) = default ;
    CreateDocParserJobAdvanceRequest(CreateDocParserJobAdvanceRequest &&) = default ;
    CreateDocParserJobAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDocParserJobAdvanceRequest() = default ;
    CreateDocParserJobAdvanceRequest& operator=(const CreateDocParserJobAdvanceRequest &) = default ;
    CreateDocParserJobAdvanceRequest& operator=(CreateDocParserJobAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->asrLanguage_ == nullptr && this->audioClipOutput_ == nullptr && this->audioWindowSeconds_ == nullptr && this->chunkSummary_ == nullptr && this->fileFormat_ == nullptr
        && this->fileName_ == nullptr && this->fileUrlObject_ == nullptr && this->frameOutput_ == nullptr && this->globalSummary_ == nullptr && this->imageMode_ == nullptr
        && this->imageUnderstanding_ == nullptr && this->mediaChunkIntervalSeconds_ == nullptr && this->mediaChunkStrategy_ == nullptr && this->mediaFramesPerMinute_ == nullptr && this->mediaMaxFrameBudget_ == nullptr
        && this->mediaMinFrameBudget_ == nullptr && this->ossFileUrl_ == nullptr && this->outputFormat_ == nullptr && this->parseScene_ == nullptr && this->regionId_ == nullptr
        && this->responseMode_ == nullptr && this->resultType_ == nullptr && this->tableFormat_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline CreateDocParserJobAdvanceRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // asrLanguage Field Functions 
    bool hasAsrLanguage() const { return this->asrLanguage_ != nullptr;};
    void deleteAsrLanguage() { this->asrLanguage_ = nullptr;};
    inline string getAsrLanguage() const { DARABONBA_PTR_GET_DEFAULT(asrLanguage_, "") };
    inline CreateDocParserJobAdvanceRequest& setAsrLanguage(string asrLanguage) { DARABONBA_PTR_SET_VALUE(asrLanguage_, asrLanguage) };


    // audioClipOutput Field Functions 
    bool hasAudioClipOutput() const { return this->audioClipOutput_ != nullptr;};
    void deleteAudioClipOutput() { this->audioClipOutput_ = nullptr;};
    inline bool getAudioClipOutput() const { DARABONBA_PTR_GET_DEFAULT(audioClipOutput_, false) };
    inline CreateDocParserJobAdvanceRequest& setAudioClipOutput(bool audioClipOutput) { DARABONBA_PTR_SET_VALUE(audioClipOutput_, audioClipOutput) };


    // audioWindowSeconds Field Functions 
    bool hasAudioWindowSeconds() const { return this->audioWindowSeconds_ != nullptr;};
    void deleteAudioWindowSeconds() { this->audioWindowSeconds_ = nullptr;};
    inline int32_t getAudioWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(audioWindowSeconds_, 0) };
    inline CreateDocParserJobAdvanceRequest& setAudioWindowSeconds(int32_t audioWindowSeconds) { DARABONBA_PTR_SET_VALUE(audioWindowSeconds_, audioWindowSeconds) };


    // chunkSummary Field Functions 
    bool hasChunkSummary() const { return this->chunkSummary_ != nullptr;};
    void deleteChunkSummary() { this->chunkSummary_ = nullptr;};
    inline bool getChunkSummary() const { DARABONBA_PTR_GET_DEFAULT(chunkSummary_, false) };
    inline CreateDocParserJobAdvanceRequest& setChunkSummary(bool chunkSummary) { DARABONBA_PTR_SET_VALUE(chunkSummary_, chunkSummary) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline CreateDocParserJobAdvanceRequest& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline CreateDocParserJobAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline CreateDocParserJobAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // frameOutput Field Functions 
    bool hasFrameOutput() const { return this->frameOutput_ != nullptr;};
    void deleteFrameOutput() { this->frameOutput_ = nullptr;};
    inline bool getFrameOutput() const { DARABONBA_PTR_GET_DEFAULT(frameOutput_, false) };
    inline CreateDocParserJobAdvanceRequest& setFrameOutput(bool frameOutput) { DARABONBA_PTR_SET_VALUE(frameOutput_, frameOutput) };


    // globalSummary Field Functions 
    bool hasGlobalSummary() const { return this->globalSummary_ != nullptr;};
    void deleteGlobalSummary() { this->globalSummary_ = nullptr;};
    inline bool getGlobalSummary() const { DARABONBA_PTR_GET_DEFAULT(globalSummary_, false) };
    inline CreateDocParserJobAdvanceRequest& setGlobalSummary(bool globalSummary) { DARABONBA_PTR_SET_VALUE(globalSummary_, globalSummary) };


    // imageMode Field Functions 
    bool hasImageMode() const { return this->imageMode_ != nullptr;};
    void deleteImageMode() { this->imageMode_ = nullptr;};
    inline string getImageMode() const { DARABONBA_PTR_GET_DEFAULT(imageMode_, "") };
    inline CreateDocParserJobAdvanceRequest& setImageMode(string imageMode) { DARABONBA_PTR_SET_VALUE(imageMode_, imageMode) };


    // imageUnderstanding Field Functions 
    bool hasImageUnderstanding() const { return this->imageUnderstanding_ != nullptr;};
    void deleteImageUnderstanding() { this->imageUnderstanding_ = nullptr;};
    inline string getImageUnderstanding() const { DARABONBA_PTR_GET_DEFAULT(imageUnderstanding_, "") };
    inline CreateDocParserJobAdvanceRequest& setImageUnderstanding(string imageUnderstanding) { DARABONBA_PTR_SET_VALUE(imageUnderstanding_, imageUnderstanding) };


    // mediaChunkIntervalSeconds Field Functions 
    bool hasMediaChunkIntervalSeconds() const { return this->mediaChunkIntervalSeconds_ != nullptr;};
    void deleteMediaChunkIntervalSeconds() { this->mediaChunkIntervalSeconds_ = nullptr;};
    inline int32_t getMediaChunkIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(mediaChunkIntervalSeconds_, 0) };
    inline CreateDocParserJobAdvanceRequest& setMediaChunkIntervalSeconds(int32_t mediaChunkIntervalSeconds) { DARABONBA_PTR_SET_VALUE(mediaChunkIntervalSeconds_, mediaChunkIntervalSeconds) };


    // mediaChunkStrategy Field Functions 
    bool hasMediaChunkStrategy() const { return this->mediaChunkStrategy_ != nullptr;};
    void deleteMediaChunkStrategy() { this->mediaChunkStrategy_ = nullptr;};
    inline string getMediaChunkStrategy() const { DARABONBA_PTR_GET_DEFAULT(mediaChunkStrategy_, "") };
    inline CreateDocParserJobAdvanceRequest& setMediaChunkStrategy(string mediaChunkStrategy) { DARABONBA_PTR_SET_VALUE(mediaChunkStrategy_, mediaChunkStrategy) };


    // mediaFramesPerMinute Field Functions 
    bool hasMediaFramesPerMinute() const { return this->mediaFramesPerMinute_ != nullptr;};
    void deleteMediaFramesPerMinute() { this->mediaFramesPerMinute_ = nullptr;};
    inline double getMediaFramesPerMinute() const { DARABONBA_PTR_GET_DEFAULT(mediaFramesPerMinute_, 0.0) };
    inline CreateDocParserJobAdvanceRequest& setMediaFramesPerMinute(double mediaFramesPerMinute) { DARABONBA_PTR_SET_VALUE(mediaFramesPerMinute_, mediaFramesPerMinute) };


    // mediaMaxFrameBudget Field Functions 
    bool hasMediaMaxFrameBudget() const { return this->mediaMaxFrameBudget_ != nullptr;};
    void deleteMediaMaxFrameBudget() { this->mediaMaxFrameBudget_ = nullptr;};
    inline int32_t getMediaMaxFrameBudget() const { DARABONBA_PTR_GET_DEFAULT(mediaMaxFrameBudget_, 0) };
    inline CreateDocParserJobAdvanceRequest& setMediaMaxFrameBudget(int32_t mediaMaxFrameBudget) { DARABONBA_PTR_SET_VALUE(mediaMaxFrameBudget_, mediaMaxFrameBudget) };


    // mediaMinFrameBudget Field Functions 
    bool hasMediaMinFrameBudget() const { return this->mediaMinFrameBudget_ != nullptr;};
    void deleteMediaMinFrameBudget() { this->mediaMinFrameBudget_ = nullptr;};
    inline int32_t getMediaMinFrameBudget() const { DARABONBA_PTR_GET_DEFAULT(mediaMinFrameBudget_, 0) };
    inline CreateDocParserJobAdvanceRequest& setMediaMinFrameBudget(int32_t mediaMinFrameBudget) { DARABONBA_PTR_SET_VALUE(mediaMinFrameBudget_, mediaMinFrameBudget) };


    // ossFileUrl Field Functions 
    bool hasOssFileUrl() const { return this->ossFileUrl_ != nullptr;};
    void deleteOssFileUrl() { this->ossFileUrl_ = nullptr;};
    inline string getOssFileUrl() const { DARABONBA_PTR_GET_DEFAULT(ossFileUrl_, "") };
    inline CreateDocParserJobAdvanceRequest& setOssFileUrl(string ossFileUrl) { DARABONBA_PTR_SET_VALUE(ossFileUrl_, ossFileUrl) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline CreateDocParserJobAdvanceRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // parseScene Field Functions 
    bool hasParseScene() const { return this->parseScene_ != nullptr;};
    void deleteParseScene() { this->parseScene_ = nullptr;};
    inline string getParseScene() const { DARABONBA_PTR_GET_DEFAULT(parseScene_, "") };
    inline CreateDocParserJobAdvanceRequest& setParseScene(string parseScene) { DARABONBA_PTR_SET_VALUE(parseScene_, parseScene) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDocParserJobAdvanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // responseMode Field Functions 
    bool hasResponseMode() const { return this->responseMode_ != nullptr;};
    void deleteResponseMode() { this->responseMode_ = nullptr;};
    inline string getResponseMode() const { DARABONBA_PTR_GET_DEFAULT(responseMode_, "") };
    inline CreateDocParserJobAdvanceRequest& setResponseMode(string responseMode) { DARABONBA_PTR_SET_VALUE(responseMode_, responseMode) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline CreateDocParserJobAdvanceRequest& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // tableFormat Field Functions 
    bool hasTableFormat() const { return this->tableFormat_ != nullptr;};
    void deleteTableFormat() { this->tableFormat_ = nullptr;};
    inline string getTableFormat() const { DARABONBA_PTR_GET_DEFAULT(tableFormat_, "") };
    inline CreateDocParserJobAdvanceRequest& setTableFormat(string tableFormat) { DARABONBA_PTR_SET_VALUE(tableFormat_, tableFormat) };


  protected:
    shared_ptr<string> agentName_ {};
    shared_ptr<string> asrLanguage_ {};
    shared_ptr<bool> audioClipOutput_ {};
    shared_ptr<int32_t> audioWindowSeconds_ {};
    shared_ptr<bool> chunkSummary_ {};
    // The format of the input file. Valid values:
    // 
    // - **pdf**: PDF file.
    // 
    // - **docx**: Word file in docx format.
    // 
    // - **doc**: Word file in doc format.
    // 
    // - **pptx**: PPT file in pptx format.
    // 
    // - **ppt**: PPT file in ppt format.
    // 
    // - **txt**: plain text file.
    // 
    // - **md**: Markdown file.
    // 
    // - **png**: PNG image.
    // 
    // - **jpg**: JPG image.
    // 
    // - **jpeg**: JPEG image.
    // 
    // This parameter is required.
    shared_ptr<string> fileFormat_ {};
    // The file name, which must include the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The HTTP or HTTPS URL of the file to be parsed.
    // >SDKs for various languages provide an additional `CreateDocParserJobAdvance` method that supports passing a local file stream directly (such as InputStream in Java), without the need to upload the file to OSS and construct a FileUrl in advance. When using the Advance method, replace the `FileUrl` parameter (URL string) with the `FileUrlObject` parameter (file stream). All other request parameters remain unchanged. The SDK automatically performs the following operations:
    // >1. Obtains temporary OSS upload credentials.
    // >2. Uploads the file stream directly to OSS.
    // >3. Calls the CreateDocParserJob operation with the generated OSS URL.
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    shared_ptr<bool> frameOutput_ {};
    shared_ptr<bool> globalSummary_ {};
    shared_ptr<string> imageMode_ {};
    shared_ptr<string> imageUnderstanding_ {};
    shared_ptr<int32_t> mediaChunkIntervalSeconds_ {};
    shared_ptr<string> mediaChunkStrategy_ {};
    shared_ptr<double> mediaFramesPerMinute_ {};
    shared_ptr<int32_t> mediaMaxFrameBudget_ {};
    shared_ptr<int32_t> mediaMinFrameBudget_ {};
    // The OSS file URL.
    shared_ptr<string> ossFileUrl_ {};
    // The output format of the parsing result. Valid values:
    // 
    // - **markdown**: Markdown format.
    // 
    // This parameter is required.
    shared_ptr<string> outputFormat_ {};
    shared_ptr<string> parseScene_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> responseMode_ {};
    shared_ptr<string> resultType_ {};
    shared_ptr<string> tableFormat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DtsAI20260401
#endif

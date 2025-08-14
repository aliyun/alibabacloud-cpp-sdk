// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTMEDIATOSEARCHLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTMEDIATOSEARCHLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class InsertMediaToSearchLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertMediaToSearchLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImagesInput, imagesInput_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(MsgBody, msgBody_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, InsertMediaToSearchLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagesInput, imagesInput_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(MsgBody, msgBody_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    InsertMediaToSearchLibRequest() = default ;
    InsertMediaToSearchLibRequest(const InsertMediaToSearchLibRequest &) = default ;
    InsertMediaToSearchLibRequest(InsertMediaToSearchLibRequest &&) = default ;
    InsertMediaToSearchLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertMediaToSearchLibRequest() = default ;
    InsertMediaToSearchLibRequest& operator=(const InsertMediaToSearchLibRequest &) = default ;
    InsertMediaToSearchLibRequest& operator=(InsertMediaToSearchLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imagesInput_ != nullptr
        && this->input_ != nullptr && this->mediaId_ != nullptr && this->mediaType_ != nullptr && this->msgBody_ != nullptr && this->namespace_ != nullptr
        && this->searchLibName_ != nullptr; };
    // imagesInput Field Functions 
    bool hasImagesInput() const { return this->imagesInput_ != nullptr;};
    void deleteImagesInput() { this->imagesInput_ = nullptr;};
    inline string imagesInput() const { DARABONBA_PTR_GET_DEFAULT(imagesInput_, "") };
    inline InsertMediaToSearchLibRequest& setImagesInput(string imagesInput) { DARABONBA_PTR_SET_VALUE(imagesInput_, imagesInput) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline InsertMediaToSearchLibRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline InsertMediaToSearchLibRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline InsertMediaToSearchLibRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // msgBody Field Functions 
    bool hasMsgBody() const { return this->msgBody_ != nullptr;};
    void deleteMsgBody() { this->msgBody_ = nullptr;};
    inline string msgBody() const { DARABONBA_PTR_GET_DEFAULT(msgBody_, "") };
    inline InsertMediaToSearchLibRequest& setMsgBody(string msgBody) { DARABONBA_PTR_SET_VALUE(msgBody_, msgBody) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline InsertMediaToSearchLibRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline InsertMediaToSearchLibRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    std::shared_ptr<string> imagesInput_ = nullptr;
    // The URL of the video, audio, or image file that you want to import to the search library.
    // 
    // Note: Make sure that you specify a correct file name and the bucket in which the file resides is in the same region where this operation is called. Otherwise, the file cannot be found or the operation may fail.
    // 
    // Specify an Object Storage Service (OSS) URL in the following format: oss://[Bucket name]/[File path]. For example, you can specify oss://[example-bucket-****]/[object_path-****].
    // 
    // Specify an HTTP URL in the following format: public endpoint. For example, you can specify http://example-test-\\*\\*\\*\\*.mp4.
    // 
    // This parameter is required.
    std::shared_ptr<string> input_ = nullptr;
    // The ID of the media asset. Each media ID is unique. If you leave this parameter empty, a media ID is automatically generated for this parameter.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The type of the media asset. Valid values:
    // 
    // *   video (default)
    // *   image
    // *   audio
    std::shared_ptr<string> mediaType_ = nullptr;
    // The message body.
    std::shared_ptr<string> msgBody_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the search library. Default value: ims-default-search-lib.
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

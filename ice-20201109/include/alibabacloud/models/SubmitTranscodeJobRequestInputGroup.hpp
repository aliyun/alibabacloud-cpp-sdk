// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTINPUTGROUP_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTINPUTGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestInputGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestInputGroup& obj) { 
      DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestInputGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitTranscodeJobRequestInputGroup() = default ;
    SubmitTranscodeJobRequestInputGroup(const SubmitTranscodeJobRequestInputGroup &) = default ;
    SubmitTranscodeJobRequestInputGroup(SubmitTranscodeJobRequestInputGroup &&) = default ;
    SubmitTranscodeJobRequestInputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestInputGroup() = default ;
    SubmitTranscodeJobRequestInputGroup& operator=(const SubmitTranscodeJobRequestInputGroup &) = default ;
    SubmitTranscodeJobRequestInputGroup& operator=(SubmitTranscodeJobRequestInputGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputUrl_ != nullptr
        && this->media_ != nullptr && this->type_ != nullptr; };
    // inputUrl Field Functions 
    bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
    void deleteInputUrl() { this->inputUrl_ = nullptr;};
    inline string inputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
    inline SubmitTranscodeJobRequestInputGroup& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline SubmitTranscodeJobRequestInputGroup& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitTranscodeJobRequestInputGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The URL of the input stream.
    // 
    // *   This parameter takes effect only when Type is set to Media. You can select a specific file within the media asset as an input.
    // *   The system checks whether the input URL exists within the media asset.
    std::shared_ptr<string> inputUrl_ = nullptr;
    // The media object.
    // 
    // *   If Type is set to OSS, set this parameter to the URL of an OSS object. Both the OSS and HTTP protocols are supported.
    // 
    // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the Intelligent Media Services (IMS) console.
    // 
    // *   If Type is set to Media, set this parameter to the ID of a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> media_ = nullptr;
    // The type of the media object. Valid values:
    // 
    // *   OSS: an Object Storage Service (OSS) object.
    // *   Media: a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

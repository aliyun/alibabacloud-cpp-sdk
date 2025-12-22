// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVideoCharacterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCharacterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoURL, videoURL_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCharacterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoURL, videoURL_);
    };
    RecognizeVideoCharacterRequest() = default ;
    RecognizeVideoCharacterRequest(const RecognizeVideoCharacterRequest &) = default ;
    RecognizeVideoCharacterRequest(RecognizeVideoCharacterRequest &&) = default ;
    RecognizeVideoCharacterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCharacterRequest() = default ;
    RecognizeVideoCharacterRequest& operator=(const RecognizeVideoCharacterRequest &) = default ;
    RecognizeVideoCharacterRequest& operator=(RecognizeVideoCharacterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoURL_ == nullptr; };
    // videoURL Field Functions 
    bool hasVideoURL() const { return this->videoURL_ != nullptr;};
    void deleteVideoURL() { this->videoURL_ = nullptr;};
    inline string videoURL() const { DARABONBA_PTR_GET_DEFAULT(videoURL_, "") };
    inline RecognizeVideoCharacterRequest& setVideoURL(string videoURL) { DARABONBA_PTR_SET_VALUE(videoURL_, videoURL) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> videoURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif

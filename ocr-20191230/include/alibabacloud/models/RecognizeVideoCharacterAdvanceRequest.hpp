// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCHARACTERADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVideoCharacterAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCharacterAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(VideoURL, videoURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCharacterAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(VideoURL, videoURLObject_);
    };
    RecognizeVideoCharacterAdvanceRequest() = default ;
    RecognizeVideoCharacterAdvanceRequest(const RecognizeVideoCharacterAdvanceRequest &) = default ;
    RecognizeVideoCharacterAdvanceRequest(RecognizeVideoCharacterAdvanceRequest &&) = default ;
    RecognizeVideoCharacterAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCharacterAdvanceRequest() = default ;
    RecognizeVideoCharacterAdvanceRequest& operator=(const RecognizeVideoCharacterAdvanceRequest &) = default ;
    RecognizeVideoCharacterAdvanceRequest& operator=(RecognizeVideoCharacterAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoURLObject_ != nullptr; };
    // videoURLObject Field Functions 
    bool hasVideoURLObject() const { return this->videoURLObject_ != nullptr;};
    void deleteVideoURLObject() { this->videoURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoURLObject() const { DARABONBA_GET(videoURLObject_) };
    inline RecognizeVideoCharacterAdvanceRequest& setVideoURLObject(shared_ptr<Darabonba::IStream> videoURLObject) { DARABONBA_SET_VALUE(videoURLObject_, videoURLObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif

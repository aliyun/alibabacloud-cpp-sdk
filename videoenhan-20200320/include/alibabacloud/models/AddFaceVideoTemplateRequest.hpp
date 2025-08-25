// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEVIDEOTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEVIDEOTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AddFaceVideoTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceVideoTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoScene, videoScene_);
      DARABONBA_PTR_TO_JSON(VideoURL, videoURL_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceVideoTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoScene, videoScene_);
      DARABONBA_PTR_FROM_JSON(VideoURL, videoURL_);
    };
    AddFaceVideoTemplateRequest() = default ;
    AddFaceVideoTemplateRequest(const AddFaceVideoTemplateRequest &) = default ;
    AddFaceVideoTemplateRequest(AddFaceVideoTemplateRequest &&) = default ;
    AddFaceVideoTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceVideoTemplateRequest() = default ;
    AddFaceVideoTemplateRequest& operator=(const AddFaceVideoTemplateRequest &) = default ;
    AddFaceVideoTemplateRequest& operator=(AddFaceVideoTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoScene_ != nullptr
        && this->videoURL_ != nullptr; };
    // videoScene Field Functions 
    bool hasVideoScene() const { return this->videoScene_ != nullptr;};
    void deleteVideoScene() { this->videoScene_ = nullptr;};
    inline string videoScene() const { DARABONBA_PTR_GET_DEFAULT(videoScene_, "") };
    inline AddFaceVideoTemplateRequest& setVideoScene(string videoScene) { DARABONBA_PTR_SET_VALUE(videoScene_, videoScene) };


    // videoURL Field Functions 
    bool hasVideoURL() const { return this->videoURL_ != nullptr;};
    void deleteVideoURL() { this->videoURL_ = nullptr;};
    inline string videoURL() const { DARABONBA_PTR_GET_DEFAULT(videoURL_, "") };
    inline AddFaceVideoTemplateRequest& setVideoURL(string videoURL) { DARABONBA_PTR_SET_VALUE(videoURL_, videoURL) };


  protected:
    std::shared_ptr<string> videoScene_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif

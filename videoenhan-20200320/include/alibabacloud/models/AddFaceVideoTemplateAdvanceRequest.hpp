// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEVIDEOTEMPLATEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEVIDEOTEMPLATEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AddFaceVideoTemplateAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceVideoTemplateAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoScene, videoScene_);
      DARABONBA_TO_JSON(VideoURL, videoURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceVideoTemplateAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoScene, videoScene_);
      DARABONBA_FROM_JSON(VideoURL, videoURLObject_);
    };
    AddFaceVideoTemplateAdvanceRequest() = default ;
    AddFaceVideoTemplateAdvanceRequest(const AddFaceVideoTemplateAdvanceRequest &) = default ;
    AddFaceVideoTemplateAdvanceRequest(AddFaceVideoTemplateAdvanceRequest &&) = default ;
    AddFaceVideoTemplateAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceVideoTemplateAdvanceRequest() = default ;
    AddFaceVideoTemplateAdvanceRequest& operator=(const AddFaceVideoTemplateAdvanceRequest &) = default ;
    AddFaceVideoTemplateAdvanceRequest& operator=(AddFaceVideoTemplateAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoScene_ != nullptr
        && this->videoURLObject_ != nullptr; };
    // videoScene Field Functions 
    bool hasVideoScene() const { return this->videoScene_ != nullptr;};
    void deleteVideoScene() { this->videoScene_ = nullptr;};
    inline string videoScene() const { DARABONBA_PTR_GET_DEFAULT(videoScene_, "") };
    inline AddFaceVideoTemplateAdvanceRequest& setVideoScene(string videoScene) { DARABONBA_PTR_SET_VALUE(videoScene_, videoScene) };


    // videoURLObject Field Functions 
    bool hasVideoURLObject() const { return this->videoURLObject_ != nullptr;};
    void deleteVideoURLObject() { this->videoURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoURLObject() const { DARABONBA_GET(videoURLObject_) };
    inline AddFaceVideoTemplateAdvanceRequest& setVideoURLObject(shared_ptr<Darabonba::IStream> videoURLObject) { DARABONBA_SET_VALUE(videoURLObject_, videoURLObject) };


  protected:
    std::shared_ptr<string> videoScene_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class EvaluateVideoQualityAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateVideoQualityAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateVideoQualityAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    EvaluateVideoQualityAdvanceRequest() = default ;
    EvaluateVideoQualityAdvanceRequest(const EvaluateVideoQualityAdvanceRequest &) = default ;
    EvaluateVideoQualityAdvanceRequest(EvaluateVideoQualityAdvanceRequest &&) = default ;
    EvaluateVideoQualityAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateVideoQualityAdvanceRequest() = default ;
    EvaluateVideoQualityAdvanceRequest& operator=(const EvaluateVideoQualityAdvanceRequest &) = default ;
    EvaluateVideoQualityAdvanceRequest& operator=(EvaluateVideoQualityAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mode_ != nullptr
        && this->videoUrlObject_ != nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline EvaluateVideoQualityAdvanceRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline EvaluateVideoQualityAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif

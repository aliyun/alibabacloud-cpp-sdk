// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTTAGJOBREQUESTINPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTTAGJOBREQUESTINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSmarttagJobRequestInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmarttagJobRequestInput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmarttagJobRequestInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitSmarttagJobRequestInput() = default ;
    SubmitSmarttagJobRequestInput(const SubmitSmarttagJobRequestInput &) = default ;
    SubmitSmarttagJobRequestInput(SubmitSmarttagJobRequestInput &&) = default ;
    SubmitSmarttagJobRequestInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmarttagJobRequestInput() = default ;
    SubmitSmarttagJobRequestInput& operator=(const SubmitSmarttagJobRequestInput &) = default ;
    SubmitSmarttagJobRequestInput& operator=(SubmitSmarttagJobRequestInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->type_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline SubmitSmarttagJobRequestInput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitSmarttagJobRequestInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // If Type is set to OSS, specify an OSS path. Example: OSS://test-bucket/video/202208/test.mp4.
    // 
    // If Type is set to Media, specify a media asset ID. Example: c5c62d8f0361337cab312dce8e77dc6d.
    // 
    // If Type is set to URL, specify an HTTP URL. Example: https://zc-test.oss-cn-shanghai.aliyuncs.com/test/unknowFace.mp4.
    std::shared_ptr<string> media_ = nullptr;
    // The media type. Valid values:
    // 
    // *   OSS
    // *   Media
    // *   URL
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

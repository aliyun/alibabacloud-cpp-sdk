// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class GenerateVideoCoverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoCoverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsGif, isGif_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoCoverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsGif, isGif_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    GenerateVideoCoverRequest() = default ;
    GenerateVideoCoverRequest(const GenerateVideoCoverRequest &) = default ;
    GenerateVideoCoverRequest(GenerateVideoCoverRequest &&) = default ;
    GenerateVideoCoverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoCoverRequest() = default ;
    GenerateVideoCoverRequest& operator=(const GenerateVideoCoverRequest &) = default ;
    GenerateVideoCoverRequest& operator=(GenerateVideoCoverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isGif_ == nullptr
        && this->videoUrl_ == nullptr; };
    // isGif Field Functions 
    bool hasIsGif() const { return this->isGif_ != nullptr;};
    void deleteIsGif() { this->isGif_ = nullptr;};
    inline bool getIsGif() const { DARABONBA_PTR_GET_DEFAULT(isGif_, false) };
    inline GenerateVideoCoverRequest& setIsGif(bool isGif) { DARABONBA_PTR_SET_VALUE(isGif_, isGif) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline GenerateVideoCoverRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    // This parameter is required.
    shared_ptr<bool> isGif_ {};
    // This parameter is required.
    shared_ptr<string> videoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif

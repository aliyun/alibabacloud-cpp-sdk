// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOCOVERADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class GenerateVideoCoverAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoCoverAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsGif, isGif_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoCoverAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsGif, isGif_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    GenerateVideoCoverAdvanceRequest() = default ;
    GenerateVideoCoverAdvanceRequest(const GenerateVideoCoverAdvanceRequest &) = default ;
    GenerateVideoCoverAdvanceRequest(GenerateVideoCoverAdvanceRequest &&) = default ;
    GenerateVideoCoverAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoCoverAdvanceRequest() = default ;
    GenerateVideoCoverAdvanceRequest& operator=(const GenerateVideoCoverAdvanceRequest &) = default ;
    GenerateVideoCoverAdvanceRequest& operator=(GenerateVideoCoverAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isGif_ != nullptr
        && this->videoUrlObject_ != nullptr; };
    // isGif Field Functions 
    bool hasIsGif() const { return this->isGif_ != nullptr;};
    void deleteIsGif() { this->isGif_ = nullptr;};
    inline bool isGif() const { DARABONBA_PTR_GET_DEFAULT(isGif_, false) };
    inline GenerateVideoCoverAdvanceRequest& setIsGif(bool isGif) { DARABONBA_PTR_SET_VALUE(isGif_, isGif) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline GenerateVideoCoverAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> isGif_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif

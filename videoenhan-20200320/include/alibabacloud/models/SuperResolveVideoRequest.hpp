// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUPERRESOLVEVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUPERRESOLVEVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class SuperResolveVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuperResolveVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BitRate, bitRate_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SuperResolveVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BitRate, bitRate_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    SuperResolveVideoRequest() = default ;
    SuperResolveVideoRequest(const SuperResolveVideoRequest &) = default ;
    SuperResolveVideoRequest(SuperResolveVideoRequest &&) = default ;
    SuperResolveVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuperResolveVideoRequest() = default ;
    SuperResolveVideoRequest& operator=(const SuperResolveVideoRequest &) = default ;
    SuperResolveVideoRequest& operator=(SuperResolveVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitRate_ != nullptr
        && this->videoUrl_ != nullptr; };
    // bitRate Field Functions 
    bool hasBitRate() const { return this->bitRate_ != nullptr;};
    void deleteBitRate() { this->bitRate_ = nullptr;};
    inline int32_t bitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, 0) };
    inline SuperResolveVideoRequest& setBitRate(int32_t bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline SuperResolveVideoRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<int32_t> bitRate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif

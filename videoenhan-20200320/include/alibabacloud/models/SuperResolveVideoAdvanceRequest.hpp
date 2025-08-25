// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUPERRESOLVEVIDEOADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUPERRESOLVEVIDEOADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class SuperResolveVideoAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuperResolveVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BitRate, bitRate_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, SuperResolveVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BitRate, bitRate_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    SuperResolveVideoAdvanceRequest() = default ;
    SuperResolveVideoAdvanceRequest(const SuperResolveVideoAdvanceRequest &) = default ;
    SuperResolveVideoAdvanceRequest(SuperResolveVideoAdvanceRequest &&) = default ;
    SuperResolveVideoAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuperResolveVideoAdvanceRequest() = default ;
    SuperResolveVideoAdvanceRequest& operator=(const SuperResolveVideoAdvanceRequest &) = default ;
    SuperResolveVideoAdvanceRequest& operator=(SuperResolveVideoAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitRate_ != nullptr
        && this->videoUrlObject_ != nullptr; };
    // bitRate Field Functions 
    bool hasBitRate() const { return this->bitRate_ != nullptr;};
    void deleteBitRate() { this->bitRate_ = nullptr;};
    inline int32_t bitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, 0) };
    inline SuperResolveVideoAdvanceRequest& setBitRate(int32_t bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline SuperResolveVideoAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    std::shared_ptr<int32_t> bitRate_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif

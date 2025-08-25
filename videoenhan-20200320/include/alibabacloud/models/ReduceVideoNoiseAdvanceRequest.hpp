// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REDUCEVIDEONOISEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REDUCEVIDEONOISEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class ReduceVideoNoiseAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReduceVideoNoiseAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, ReduceVideoNoiseAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    ReduceVideoNoiseAdvanceRequest() = default ;
    ReduceVideoNoiseAdvanceRequest(const ReduceVideoNoiseAdvanceRequest &) = default ;
    ReduceVideoNoiseAdvanceRequest(ReduceVideoNoiseAdvanceRequest &&) = default ;
    ReduceVideoNoiseAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReduceVideoNoiseAdvanceRequest() = default ;
    ReduceVideoNoiseAdvanceRequest& operator=(const ReduceVideoNoiseAdvanceRequest &) = default ;
    ReduceVideoNoiseAdvanceRequest& operator=(ReduceVideoNoiseAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoUrlObject_ != nullptr; };
    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline ReduceVideoNoiseAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif

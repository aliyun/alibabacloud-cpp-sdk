// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTVIDEOBODYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTVIDEOBODYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoseg20200320
{
namespace Models
{
  class SegmentVideoBodyAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentVideoBodyAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentVideoBodyAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    SegmentVideoBodyAdvanceRequest() = default ;
    SegmentVideoBodyAdvanceRequest(const SegmentVideoBodyAdvanceRequest &) = default ;
    SegmentVideoBodyAdvanceRequest(SegmentVideoBodyAdvanceRequest &&) = default ;
    SegmentVideoBodyAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentVideoBodyAdvanceRequest() = default ;
    SegmentVideoBodyAdvanceRequest& operator=(const SegmentVideoBodyAdvanceRequest &) = default ;
    SegmentVideoBodyAdvanceRequest& operator=(SegmentVideoBodyAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoUrlObject_ != nullptr; };
    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline SegmentVideoBodyAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoseg20200320
#endif

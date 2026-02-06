// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReferenceIds, referenceIds_);
      DARABONBA_PTR_TO_JSON(VideoIds, videoIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferenceIds, referenceIds_);
      DARABONBA_PTR_FROM_JSON(VideoIds, videoIds_);
    };
    GetVideoInfosRequest() = default ;
    GetVideoInfosRequest(const GetVideoInfosRequest &) = default ;
    GetVideoInfosRequest(GetVideoInfosRequest &&) = default ;
    GetVideoInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoInfosRequest() = default ;
    GetVideoInfosRequest& operator=(const GetVideoInfosRequest &) = default ;
    GetVideoInfosRequest& operator=(GetVideoInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->referenceIds_ == nullptr
        && this->videoIds_ == nullptr; };
    // referenceIds Field Functions 
    bool hasReferenceIds() const { return this->referenceIds_ != nullptr;};
    void deleteReferenceIds() { this->referenceIds_ = nullptr;};
    inline string getReferenceIds() const { DARABONBA_PTR_GET_DEFAULT(referenceIds_, "") };
    inline GetVideoInfosRequest& setReferenceIds(string referenceIds) { DARABONBA_PTR_SET_VALUE(referenceIds_, referenceIds) };


    // videoIds Field Functions 
    bool hasVideoIds() const { return this->videoIds_ != nullptr;};
    void deleteVideoIds() { this->videoIds_ = nullptr;};
    inline string getVideoIds() const { DARABONBA_PTR_GET_DEFAULT(videoIds_, "") };
    inline GetVideoInfosRequest& setVideoIds(string videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };


  protected:
    shared_ptr<string> referenceIds_ {};
    // The list of video IDs. Separate multiple IDs with commas (,). A maximum of 20 IDs can be specified.
    shared_ptr<string> videoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

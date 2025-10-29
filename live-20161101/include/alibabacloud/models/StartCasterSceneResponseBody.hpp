// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCASTERSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTCASTERSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartCasterSceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCasterSceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
    };
    friend void from_json(const Darabonba::Json& j, StartCasterSceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
    };
    StartCasterSceneResponseBody() = default ;
    StartCasterSceneResponseBody(const StartCasterSceneResponseBody &) = default ;
    StartCasterSceneResponseBody(StartCasterSceneResponseBody &&) = default ;
    StartCasterSceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCasterSceneResponseBody() = default ;
    StartCasterSceneResponseBody& operator=(const StartCasterSceneResponseBody &) = default ;
    StartCasterSceneResponseBody& operator=(StartCasterSceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->streamUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartCasterSceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline StartCasterSceneResponseBody& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The streaming URL of the scene. It is used for playback, but not for stream relay.
    std::shared_ptr<string> streamUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

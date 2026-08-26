// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZEAUTOSHOWLISTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZEAUTOSHOWLISTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class InitializeAutoShowListTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeAutoShowListTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamList, streamList_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeAutoShowListTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamList, streamList_);
    };
    InitializeAutoShowListTaskResponseBody() = default ;
    InitializeAutoShowListTaskResponseBody(const InitializeAutoShowListTaskResponseBody &) = default ;
    InitializeAutoShowListTaskResponseBody(InitializeAutoShowListTaskResponseBody &&) = default ;
    InitializeAutoShowListTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeAutoShowListTaskResponseBody() = default ;
    InitializeAutoShowListTaskResponseBody& operator=(const InitializeAutoShowListTaskResponseBody &) = default ;
    InitializeAutoShowListTaskResponseBody& operator=(InitializeAutoShowListTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->requestId_ == nullptr && this->streamList_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline InitializeAutoShowListTaskResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitializeAutoShowListTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamList Field Functions 
    bool hasStreamList() const { return this->streamList_ != nullptr;};
    void deleteStreamList() { this->streamList_ = nullptr;};
    inline string getStreamList() const { DARABONBA_PTR_GET_DEFAULT(streamList_, "") };
    inline InitializeAutoShowListTaskResponseBody& setStreamList(string streamList) { DARABONBA_PTR_SET_VALUE(streamList_, streamList) };


  protected:
    // The production studio ID.
    // >This ID can be used as a request parameter for querying production studio stream URLs, starting the production studio, adding video resources to the production studio, adding layouts to the production studio, querying the layout list of the production studio, adding components to the production studio, and adding programs to the production studio.
    shared_ptr<string> casterId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of output addresses of the production studio.
    // 
    // - videoFormat: the streaming URL format.
    // 
    // - outputStreamUrl: the stream pulling URL.
    // 
    // - transcodeConfig: the transcoding resolution description of the stream pulling URL.
    shared_ptr<string> streamList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

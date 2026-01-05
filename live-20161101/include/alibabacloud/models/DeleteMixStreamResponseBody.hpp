// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMIXSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMIXSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteMixStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMixStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MixStreamId, mixStreamId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMixStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MixStreamId, mixStreamId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteMixStreamResponseBody() = default ;
    DeleteMixStreamResponseBody(const DeleteMixStreamResponseBody &) = default ;
    DeleteMixStreamResponseBody(DeleteMixStreamResponseBody &&) = default ;
    DeleteMixStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMixStreamResponseBody() = default ;
    DeleteMixStreamResponseBody& operator=(const DeleteMixStreamResponseBody &) = default ;
    DeleteMixStreamResponseBody& operator=(DeleteMixStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mixStreamId_ == nullptr
        && this->requestId_ == nullptr; };
    // mixStreamId Field Functions 
    bool hasMixStreamId() const { return this->mixStreamId_ != nullptr;};
    void deleteMixStreamId() { this->mixStreamId_ = nullptr;};
    inline string getMixStreamId() const { DARABONBA_PTR_GET_DEFAULT(mixStreamId_, "") };
    inline DeleteMixStreamResponseBody& setMixStreamId(string mixStreamId) { DARABONBA_PTR_SET_VALUE(mixStreamId_, mixStreamId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMixStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the stream mixing task.
    shared_ptr<string> mixStreamId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

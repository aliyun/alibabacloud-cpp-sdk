// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIVESNAPSHOTJOBCOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDLIVESNAPSHOTJOBCOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SendLiveSnapshotJobCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLiveSnapshotJobCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendLiveSnapshotJobCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendLiveSnapshotJobCommandResponseBody() = default ;
    SendLiveSnapshotJobCommandResponseBody(const SendLiveSnapshotJobCommandResponseBody &) = default ;
    SendLiveSnapshotJobCommandResponseBody(SendLiveSnapshotJobCommandResponseBody &&) = default ;
    SendLiveSnapshotJobCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLiveSnapshotJobCommandResponseBody() = default ;
    SendLiveSnapshotJobCommandResponseBody& operator=(const SendLiveSnapshotJobCommandResponseBody &) = default ;
    SendLiveSnapshotJobCommandResponseBody& operator=(SendLiveSnapshotJobCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendLiveSnapshotJobCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

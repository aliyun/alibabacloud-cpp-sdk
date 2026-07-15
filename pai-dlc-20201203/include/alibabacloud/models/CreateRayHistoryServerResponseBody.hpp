// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERAYHISTORYSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERAYHISTORYSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateRayHistoryServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRayHistoryServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RayHistoryServerId, rayHistoryServerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRayHistoryServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RayHistoryServerId, rayHistoryServerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRayHistoryServerResponseBody() = default ;
    CreateRayHistoryServerResponseBody(const CreateRayHistoryServerResponseBody &) = default ;
    CreateRayHistoryServerResponseBody(CreateRayHistoryServerResponseBody &&) = default ;
    CreateRayHistoryServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRayHistoryServerResponseBody() = default ;
    CreateRayHistoryServerResponseBody& operator=(const CreateRayHistoryServerResponseBody &) = default ;
    CreateRayHistoryServerResponseBody& operator=(CreateRayHistoryServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rayHistoryServerId_ == nullptr
        && this->requestId_ == nullptr; };
    // rayHistoryServerId Field Functions 
    bool hasRayHistoryServerId() const { return this->rayHistoryServerId_ != nullptr;};
    void deleteRayHistoryServerId() { this->rayHistoryServerId_ = nullptr;};
    inline string getRayHistoryServerId() const { DARABONBA_PTR_GET_DEFAULT(rayHistoryServerId_, "") };
    inline CreateRayHistoryServerResponseBody& setRayHistoryServerId(string rayHistoryServerId) { DARABONBA_PTR_SET_VALUE(rayHistoryServerId_, rayHistoryServerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRayHistoryServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the created Ray History Server.
    shared_ptr<string> rayHistoryServerId_ {};
    // The request ID of this call, used for diagnostics and troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

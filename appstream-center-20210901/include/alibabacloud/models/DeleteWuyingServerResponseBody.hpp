// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWUYINGSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEWUYINGSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteWuyingServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWuyingServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWuyingServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteWuyingServerResponseBody() = default ;
    DeleteWuyingServerResponseBody(const DeleteWuyingServerResponseBody &) = default ;
    DeleteWuyingServerResponseBody(DeleteWuyingServerResponseBody &&) = default ;
    DeleteWuyingServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWuyingServerResponseBody() = default ;
    DeleteWuyingServerResponseBody& operator=(const DeleteWuyingServerResponseBody &) = default ;
    DeleteWuyingServerResponseBody& operator=(DeleteWuyingServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteWuyingServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

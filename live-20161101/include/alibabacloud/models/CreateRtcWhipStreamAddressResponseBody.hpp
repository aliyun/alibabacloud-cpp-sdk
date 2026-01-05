// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERTCWHIPSTREAMADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERTCWHIPSTREAMADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateRTCWhipStreamAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRTCWhipStreamAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WhipAddress, whipAddress_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRTCWhipStreamAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WhipAddress, whipAddress_);
    };
    CreateRTCWhipStreamAddressResponseBody() = default ;
    CreateRTCWhipStreamAddressResponseBody(const CreateRTCWhipStreamAddressResponseBody &) = default ;
    CreateRTCWhipStreamAddressResponseBody(CreateRTCWhipStreamAddressResponseBody &&) = default ;
    CreateRTCWhipStreamAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRTCWhipStreamAddressResponseBody() = default ;
    CreateRTCWhipStreamAddressResponseBody& operator=(const CreateRTCWhipStreamAddressResponseBody &) = default ;
    CreateRTCWhipStreamAddressResponseBody& operator=(CreateRTCWhipStreamAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->whipAddress_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRTCWhipStreamAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // whipAddress Field Functions 
    bool hasWhipAddress() const { return this->whipAddress_ != nullptr;};
    void deleteWhipAddress() { this->whipAddress_ = nullptr;};
    inline string getWhipAddress() const { DARABONBA_PTR_GET_DEFAULT(whipAddress_, "") };
    inline CreateRTCWhipStreamAddressResponseBody& setWhipAddress(string whipAddress) { DARABONBA_PTR_SET_VALUE(whipAddress_, whipAddress) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> whipAddress_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERVPCENDPOINTCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERVPCENDPOINTCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CreateClusterVpcEndpointConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterVpcEndpointConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterVpcEndpointConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateClusterVpcEndpointConnectionResponseBody() = default ;
    CreateClusterVpcEndpointConnectionResponseBody(const CreateClusterVpcEndpointConnectionResponseBody &) = default ;
    CreateClusterVpcEndpointConnectionResponseBody(CreateClusterVpcEndpointConnectionResponseBody &&) = default ;
    CreateClusterVpcEndpointConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterVpcEndpointConnectionResponseBody() = default ;
    CreateClusterVpcEndpointConnectionResponseBody& operator=(const CreateClusterVpcEndpointConnectionResponseBody &) = default ;
    CreateClusterVpcEndpointConnectionResponseBody& operator=(CreateClusterVpcEndpointConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(endpointConnectionId, endpointConnectionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(endpointConnectionId, endpointConnectionId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpointConnectionId_ == nullptr; };
      // endpointConnectionId Field Functions 
      bool hasEndpointConnectionId() const { return this->endpointConnectionId_ != nullptr;};
      void deleteEndpointConnectionId() { this->endpointConnectionId_ = nullptr;};
      inline string getEndpointConnectionId() const { DARABONBA_PTR_GET_DEFAULT(endpointConnectionId_, "") };
      inline Data& setEndpointConnectionId(string endpointConnectionId) { DARABONBA_PTR_SET_VALUE(endpointConnectionId_, endpointConnectionId) };


    protected:
      shared_ptr<string> endpointConnectionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateClusterVpcEndpointConnectionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateClusterVpcEndpointConnectionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateClusterVpcEndpointConnectionResponseBody::Data) };
    inline CreateClusterVpcEndpointConnectionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateClusterVpcEndpointConnectionResponseBody::Data) };
    inline CreateClusterVpcEndpointConnectionResponseBody& setData(const CreateClusterVpcEndpointConnectionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateClusterVpcEndpointConnectionResponseBody& setData(CreateClusterVpcEndpointConnectionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateClusterVpcEndpointConnectionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateClusterVpcEndpointConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateClusterVpcEndpointConnectionResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

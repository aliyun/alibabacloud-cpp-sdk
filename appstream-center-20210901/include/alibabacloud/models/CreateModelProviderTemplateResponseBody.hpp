// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELPROVIDERTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELPROVIDERTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateModelProviderTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelProviderTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelProviderTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateModelProviderTemplateResponseBody() = default ;
    CreateModelProviderTemplateResponseBody(const CreateModelProviderTemplateResponseBody &) = default ;
    CreateModelProviderTemplateResponseBody(CreateModelProviderTemplateResponseBody &&) = default ;
    CreateModelProviderTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelProviderTemplateResponseBody() = default ;
    CreateModelProviderTemplateResponseBody& operator=(const CreateModelProviderTemplateResponseBody &) = default ;
    CreateModelProviderTemplateResponseBody& operator=(CreateModelProviderTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
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
      virtual bool empty() const override { return this->providerTemplateId_ == nullptr; };
      // providerTemplateId Field Functions 
      bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
      void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
      inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
      inline Data& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


    protected:
      // Model provider template ID.
      shared_ptr<string> providerTemplateId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateModelProviderTemplateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateModelProviderTemplateResponseBody::Data) };
    inline CreateModelProviderTemplateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateModelProviderTemplateResponseBody::Data) };
    inline CreateModelProviderTemplateResponseBody& setData(const CreateModelProviderTemplateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateModelProviderTemplateResponseBody& setData(CreateModelProviderTemplateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateModelProviderTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned result object.
    shared_ptr<CreateModelProviderTemplateResponseBody::Data> data_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

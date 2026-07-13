// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROTECTIONPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROTECTIONPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class CreateProtectionPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProtectionPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProtectionPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateProtectionPolicyResponseBody() = default ;
    CreateProtectionPolicyResponseBody(const CreateProtectionPolicyResponseBody &) = default ;
    CreateProtectionPolicyResponseBody(CreateProtectionPolicyResponseBody &&) = default ;
    CreateProtectionPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProtectionPolicyResponseBody() = default ;
    CreateProtectionPolicyResponseBody& operator=(const CreateProtectionPolicyResponseBody &) = default ;
    CreateProtectionPolicyResponseBody& operator=(CreateProtectionPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ProtectionPolicyId, protectionPolicyId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ProtectionPolicyId, protectionPolicyId_);
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
      virtual bool empty() const override { return this->protectionPolicyId_ == nullptr; };
      // protectionPolicyId Field Functions 
      bool hasProtectionPolicyId() const { return this->protectionPolicyId_ != nullptr;};
      void deleteProtectionPolicyId() { this->protectionPolicyId_ = nullptr;};
      inline string getProtectionPolicyId() const { DARABONBA_PTR_GET_DEFAULT(protectionPolicyId_, "") };
      inline Data& setProtectionPolicyId(string protectionPolicyId) { DARABONBA_PTR_SET_VALUE(protectionPolicyId_, protectionPolicyId) };


    protected:
      // The ID of the protection policy.
      shared_ptr<string> protectionPolicyId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateProtectionPolicyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateProtectionPolicyResponseBody::Data) };
    inline CreateProtectionPolicyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateProtectionPolicyResponseBody::Data) };
    inline CreateProtectionPolicyResponseBody& setData(const CreateProtectionPolicyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateProtectionPolicyResponseBody& setData(CreateProtectionPolicyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateProtectionPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<CreateProtectionPolicyResponseBody::Data> data_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateKeyPairResponseBody() = default ;
    CreateKeyPairResponseBody(const CreateKeyPairResponseBody &) = default ;
    CreateKeyPairResponseBody(CreateKeyPairResponseBody &&) = default ;
    CreateKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyPairResponseBody() = default ;
    CreateKeyPairResponseBody& operator=(const CreateKeyPairResponseBody &) = default ;
    CreateKeyPairResponseBody& operator=(CreateKeyPairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
        DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_TO_JSON(PrivateKeyBody, privateKeyBody_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_FROM_JSON(PrivateKeyBody, privateKeyBody_);
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
      virtual bool empty() const override { return this->gmtCreated_ == nullptr
        && this->keyPairId_ == nullptr && this->keyPairName_ == nullptr && this->privateKeyBody_ == nullptr; };
      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // keyPairId Field Functions 
      bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
      void deleteKeyPairId() { this->keyPairId_ = nullptr;};
      inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
      inline Data& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline Data& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // privateKeyBody Field Functions 
      bool hasPrivateKeyBody() const { return this->privateKeyBody_ != nullptr;};
      void deletePrivateKeyBody() { this->privateKeyBody_ = nullptr;};
      inline string getPrivateKeyBody() const { DARABONBA_PTR_GET_DEFAULT(privateKeyBody_, "") };
      inline Data& setPrivateKeyBody(string privateKeyBody) { DARABONBA_PTR_SET_VALUE(privateKeyBody_, privateKeyBody) };


    protected:
      // The time when the key pair was created.
      shared_ptr<string> gmtCreated_ {};
      // The ID of the key pair.
      shared_ptr<string> keyPairId_ {};
      // The name of the key pair.
      shared_ptr<string> keyPairName_ {};
      // The private key of the key pair. The PEM-encoded private key that is in PKCS#8 format and adheres to the ADB connection specification.
      shared_ptr<string> privateKeyBody_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateKeyPairResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateKeyPairResponseBody::Data) };
    inline CreateKeyPairResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateKeyPairResponseBody::Data) };
    inline CreateKeyPairResponseBody& setData(const CreateKeyPairResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateKeyPairResponseBody& setData(CreateKeyPairResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that are returned.
    shared_ptr<CreateKeyPairResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

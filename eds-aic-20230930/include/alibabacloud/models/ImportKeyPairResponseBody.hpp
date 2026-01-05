// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKEYPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKEYPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ImportKeyPairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKeyPairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKeyPairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportKeyPairResponseBody() = default ;
    ImportKeyPairResponseBody(const ImportKeyPairResponseBody &) = default ;
    ImportKeyPairResponseBody(ImportKeyPairResponseBody &&) = default ;
    ImportKeyPairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKeyPairResponseBody() = default ;
    ImportKeyPairResponseBody& operator=(const ImportKeyPairResponseBody &) = default ;
    ImportKeyPairResponseBody& operator=(ImportKeyPairResponseBody &&) = default ;
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
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
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
        && this->keyPairId_ == nullptr && this->keyPairName_ == nullptr; };
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


    protected:
      // The time when the ADB key pair was created.
      shared_ptr<string> gmtCreated_ {};
      // The ID of the ADB key pair.
      shared_ptr<string> keyPairId_ {};
      // The name of the ADB key pair.
      shared_ptr<string> keyPairName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImportKeyPairResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImportKeyPairResponseBody::Data) };
    inline ImportKeyPairResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImportKeyPairResponseBody::Data) };
    inline ImportKeyPairResponseBody& setData(const ImportKeyPairResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImportKeyPairResponseBody& setData(ImportKeyPairResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportKeyPairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object that is returned.
    shared_ptr<ImportKeyPairResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

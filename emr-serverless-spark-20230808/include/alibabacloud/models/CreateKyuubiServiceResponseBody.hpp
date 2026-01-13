// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKYUUBISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKYUUBISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateKyuubiServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKyuubiServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKyuubiServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateKyuubiServiceResponseBody() = default ;
    CreateKyuubiServiceResponseBody(const CreateKyuubiServiceResponseBody &) = default ;
    CreateKyuubiServiceResponseBody(CreateKyuubiServiceResponseBody &&) = default ;
    CreateKyuubiServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKyuubiServiceResponseBody() = default ;
    CreateKyuubiServiceResponseBody& operator=(const CreateKyuubiServiceResponseBody &) = default ;
    CreateKyuubiServiceResponseBody& operator=(CreateKyuubiServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(kyuubiServiceId, kyuubiServiceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(kyuubiServiceId, kyuubiServiceId_);
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
      virtual bool empty() const override { return this->kyuubiServiceId_ == nullptr; };
      // kyuubiServiceId Field Functions 
      bool hasKyuubiServiceId() const { return this->kyuubiServiceId_ != nullptr;};
      void deleteKyuubiServiceId() { this->kyuubiServiceId_ = nullptr;};
      inline string getKyuubiServiceId() const { DARABONBA_PTR_GET_DEFAULT(kyuubiServiceId_, "") };
      inline Data& setKyuubiServiceId(string kyuubiServiceId) { DARABONBA_PTR_SET_VALUE(kyuubiServiceId_, kyuubiServiceId) };


    protected:
      // Kyuubi Service ID。
      shared_ptr<string> kyuubiServiceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateKyuubiServiceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateKyuubiServiceResponseBody::Data) };
    inline CreateKyuubiServiceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateKyuubiServiceResponseBody::Data) };
    inline CreateKyuubiServiceResponseBody& setData(const CreateKyuubiServiceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateKyuubiServiceResponseBody& setData(CreateKyuubiServiceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKyuubiServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateKyuubiServiceResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif

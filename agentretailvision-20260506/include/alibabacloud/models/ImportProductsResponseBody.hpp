// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class ImportProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImportProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImportProductsResponseBody() = default ;
    ImportProductsResponseBody(const ImportProductsResponseBody &) = default ;
    ImportProductsResponseBody(ImportProductsResponseBody &&) = default ;
    ImportProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportProductsResponseBody() = default ;
    ImportProductsResponseBody& operator=(const ImportProductsResponseBody &) = default ;
    ImportProductsResponseBody& operator=(ImportProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ItemUniqueId, itemUniqueId_);
        DARABONBA_PTR_TO_JSON(PlatformItemId, platformItemId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemUniqueId, itemUniqueId_);
        DARABONBA_PTR_FROM_JSON(PlatformItemId, platformItemId_);
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
      virtual bool empty() const override { return this->itemUniqueId_ == nullptr
        && this->platformItemId_ == nullptr; };
      // itemUniqueId Field Functions 
      bool hasItemUniqueId() const { return this->itemUniqueId_ != nullptr;};
      void deleteItemUniqueId() { this->itemUniqueId_ = nullptr;};
      inline string getItemUniqueId() const { DARABONBA_PTR_GET_DEFAULT(itemUniqueId_, "") };
      inline Data& setItemUniqueId(string itemUniqueId) { DARABONBA_PTR_SET_VALUE(itemUniqueId_, itemUniqueId) };


      // platformItemId Field Functions 
      bool hasPlatformItemId() const { return this->platformItemId_ != nullptr;};
      void deletePlatformItemId() { this->platformItemId_ = nullptr;};
      inline string getPlatformItemId() const { DARABONBA_PTR_GET_DEFAULT(platformItemId_, "") };
      inline Data& setPlatformItemId(string platformItemId) { DARABONBA_PTR_SET_VALUE(platformItemId_, platformItemId) };


    protected:
      shared_ptr<string> itemUniqueId_ {};
      shared_ptr<string> platformItemId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImportProductsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImportProductsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImportProductsResponseBody::Data) };
    inline ImportProductsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImportProductsResponseBody::Data) };
    inline ImportProductsResponseBody& setData(const ImportProductsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImportProductsResponseBody& setData(ImportProductsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImportProductsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImportProductsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ImportProductsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif

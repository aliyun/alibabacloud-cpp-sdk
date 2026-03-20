// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListNamespacesResponseBody() = default ;
    ListNamespacesResponseBody(const ListNamespacesResponseBody &) = default ;
    ListNamespacesResponseBody(ListNamespacesResponseBody &&) = default ;
    ListNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesResponseBody() = default ;
    ListNamespacesResponseBody& operator=(const ListNamespacesResponseBody &) = default ;
    ListNamespacesResponseBody& operator=(ListNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
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
      class Namespaces : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Namespaces& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UId, UId_);
        };
        friend void from_json(const Darabonba::Json& j, Namespaces& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UId, UId_);
        };
        Namespaces() = default ;
        Namespaces(const Namespaces &) = default ;
        Namespaces(Namespaces &&) = default ;
        Namespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Namespaces() = default ;
        Namespaces& operator=(const Namespaces &) = default ;
        Namespaces& operator=(Namespaces &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->UId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Namespaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Namespaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // UId Field Functions 
        bool hasUId() const { return this->UId_ != nullptr;};
        void deleteUId() { this->UId_ = nullptr;};
        inline string getUId() const { DARABONBA_PTR_GET_DEFAULT(UId_, "") };
        inline Namespaces& setUId(string UId) { DARABONBA_PTR_SET_VALUE(UId_, UId) };


      protected:
        // The description of the namespace.
        shared_ptr<string> description_ {};
        // The name of the namespace.
        shared_ptr<string> name_ {};
        // The namespace ID.
        shared_ptr<string> UId_ {};
      };

      virtual bool empty() const override { return this->namespaces_ == nullptr; };
      // namespaces Field Functions 
      bool hasNamespaces() const { return this->namespaces_ != nullptr;};
      void deleteNamespaces() { this->namespaces_ = nullptr;};
      inline const vector<Data::Namespaces> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<Data::Namespaces>) };
      inline vector<Data::Namespaces> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<Data::Namespaces>) };
      inline Data& setNamespaces(const vector<Data::Namespaces> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
      inline Data& setNamespaces(vector<Data::Namespaces> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    protected:
      // The namespaces and their details.
      shared_ptr<vector<Data::Namespaces>> namespaces_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListNamespacesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListNamespacesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListNamespacesResponseBody::Data) };
    inline ListNamespacesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListNamespacesResponseBody::Data) };
    inline ListNamespacesResponseBody& setData(const ListNamespacesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNamespacesResponseBody& setData(ListNamespacesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNamespacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNamespacesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The information about the namespaces.
    shared_ptr<ListNamespacesResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif

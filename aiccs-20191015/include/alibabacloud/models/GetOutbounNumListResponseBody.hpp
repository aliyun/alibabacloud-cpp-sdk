// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOUTBOUNNUMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOUTBOUNNUMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetOutbounNumListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOutbounNumListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOutbounNumListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOutbounNumListResponseBody() = default ;
    GetOutbounNumListResponseBody(const GetOutbounNumListResponseBody &) = default ;
    GetOutbounNumListResponseBody(GetOutbounNumListResponseBody &&) = default ;
    GetOutbounNumListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOutbounNumListResponseBody() = default ;
    GetOutbounNumListResponseBody& operator=(const GetOutbounNumListResponseBody &) = default ;
    GetOutbounNumListResponseBody& operator=(GetOutbounNumListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Num, num_);
        DARABONBA_PTR_TO_JSON(NumGroup, numGroup_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Num, num_);
        DARABONBA_PTR_FROM_JSON(NumGroup, numGroup_);
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
      class NumGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NumGroup& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, NumGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        NumGroup() = default ;
        NumGroup(const NumGroup &) = default ;
        NumGroup(NumGroup &&) = default ;
        NumGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NumGroup() = default ;
        NumGroup& operator=(const NumGroup &) = default ;
        NumGroup& operator=(NumGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NumGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline NumGroup& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline NumGroup& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> value_ {};
      };

      class Num : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Num& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Num& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Num() = default ;
        Num(const Num &) = default ;
        Num(Num &&) = default ;
        Num(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Num() = default ;
        Num& operator=(const Num &) = default ;
        Num& operator=(Num &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Num& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Num& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Num& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->num_ == nullptr
        && this->numGroup_ == nullptr; };
      // num Field Functions 
      bool hasNum() const { return this->num_ != nullptr;};
      void deleteNum() { this->num_ = nullptr;};
      inline const vector<Data::Num> & getNum() const { DARABONBA_PTR_GET_CONST(num_, vector<Data::Num>) };
      inline vector<Data::Num> getNum() { DARABONBA_PTR_GET(num_, vector<Data::Num>) };
      inline Data& setNum(const vector<Data::Num> & num) { DARABONBA_PTR_SET_VALUE(num_, num) };
      inline Data& setNum(vector<Data::Num> && num) { DARABONBA_PTR_SET_RVALUE(num_, num) };


      // numGroup Field Functions 
      bool hasNumGroup() const { return this->numGroup_ != nullptr;};
      void deleteNumGroup() { this->numGroup_ = nullptr;};
      inline const vector<Data::NumGroup> & getNumGroup() const { DARABONBA_PTR_GET_CONST(numGroup_, vector<Data::NumGroup>) };
      inline vector<Data::NumGroup> getNumGroup() { DARABONBA_PTR_GET(numGroup_, vector<Data::NumGroup>) };
      inline Data& setNumGroup(const vector<Data::NumGroup> & numGroup) { DARABONBA_PTR_SET_VALUE(numGroup_, numGroup) };
      inline Data& setNumGroup(vector<Data::NumGroup> && numGroup) { DARABONBA_PTR_SET_RVALUE(numGroup_, numGroup) };


    protected:
      shared_ptr<vector<Data::Num>> num_ {};
      shared_ptr<vector<Data::NumGroup>> numGroup_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOutbounNumListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetOutbounNumListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetOutbounNumListResponseBody::Data) };
    inline GetOutbounNumListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetOutbounNumListResponseBody::Data) };
    inline GetOutbounNumListResponseBody& setData(const GetOutbounNumListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetOutbounNumListResponseBody& setData(GetOutbounNumListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline GetOutbounNumListResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOutbounNumListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOutbounNumListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOutbounNumListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetOutbounNumListResponseBody::Data> data_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEORDERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEORDERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDataSourceOrderConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceOrderConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceOrderConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataSourceOrderConfigResponseBody() = default ;
    GetDataSourceOrderConfigResponseBody(const GetDataSourceOrderConfigResponseBody &) = default ;
    GetDataSourceOrderConfigResponseBody(GetDataSourceOrderConfigResponseBody &&) = default ;
    GetDataSourceOrderConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceOrderConfigResponseBody() = default ;
    GetDataSourceOrderConfigResponseBody& operator=(const GetDataSourceOrderConfigResponseBody &) = default ;
    GetDataSourceOrderConfigResponseBody& operator=(GetDataSourceOrderConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TotalDocSize, totalDocSize_);
        DARABONBA_PTR_TO_JSON(UserConfigDataSourceList, userConfigDataSourceList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TotalDocSize, totalDocSize_);
        DARABONBA_PTR_FROM_JSON(UserConfigDataSourceList, userConfigDataSourceList_);
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
      class UserConfigDataSourceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserConfigDataSourceList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, UserConfigDataSourceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        UserConfigDataSourceList() = default ;
        UserConfigDataSourceList(const UserConfigDataSourceList &) = default ;
        UserConfigDataSourceList(UserConfigDataSourceList &&) = default ;
        UserConfigDataSourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserConfigDataSourceList() = default ;
        UserConfigDataSourceList& operator=(const UserConfigDataSourceList &) = default ;
        UserConfigDataSourceList& operator=(UserConfigDataSourceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->enable_ == nullptr && this->name_ == nullptr && this->number_ == nullptr && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline UserConfigDataSourceList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline UserConfigDataSourceList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UserConfigDataSourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline int32_t getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, 0) };
        inline UserConfigDataSourceList& setNumber(int32_t number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline UserConfigDataSourceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> number_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->totalDocSize_ == nullptr
        && this->userConfigDataSourceList_ == nullptr; };
      // totalDocSize Field Functions 
      bool hasTotalDocSize() const { return this->totalDocSize_ != nullptr;};
      void deleteTotalDocSize() { this->totalDocSize_ = nullptr;};
      inline int32_t getTotalDocSize() const { DARABONBA_PTR_GET_DEFAULT(totalDocSize_, 0) };
      inline Data& setTotalDocSize(int32_t totalDocSize) { DARABONBA_PTR_SET_VALUE(totalDocSize_, totalDocSize) };


      // userConfigDataSourceList Field Functions 
      bool hasUserConfigDataSourceList() const { return this->userConfigDataSourceList_ != nullptr;};
      void deleteUserConfigDataSourceList() { this->userConfigDataSourceList_ = nullptr;};
      inline const vector<Data::UserConfigDataSourceList> & getUserConfigDataSourceList() const { DARABONBA_PTR_GET_CONST(userConfigDataSourceList_, vector<Data::UserConfigDataSourceList>) };
      inline vector<Data::UserConfigDataSourceList> getUserConfigDataSourceList() { DARABONBA_PTR_GET(userConfigDataSourceList_, vector<Data::UserConfigDataSourceList>) };
      inline Data& setUserConfigDataSourceList(const vector<Data::UserConfigDataSourceList> & userConfigDataSourceList) { DARABONBA_PTR_SET_VALUE(userConfigDataSourceList_, userConfigDataSourceList) };
      inline Data& setUserConfigDataSourceList(vector<Data::UserConfigDataSourceList> && userConfigDataSourceList) { DARABONBA_PTR_SET_RVALUE(userConfigDataSourceList_, userConfigDataSourceList) };


    protected:
      shared_ptr<int32_t> totalDocSize_ {};
      shared_ptr<vector<Data::UserConfigDataSourceList>> userConfigDataSourceList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataSourceOrderConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataSourceOrderConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataSourceOrderConfigResponseBody::Data) };
    inline GetDataSourceOrderConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataSourceOrderConfigResponseBody::Data) };
    inline GetDataSourceOrderConfigResponseBody& setData(const GetDataSourceOrderConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataSourceOrderConfigResponseBody& setData(GetDataSourceOrderConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataSourceOrderConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataSourceOrderConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataSourceOrderConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataSourceOrderConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetDataSourceOrderConfigResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

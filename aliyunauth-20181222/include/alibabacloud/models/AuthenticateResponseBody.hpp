// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHENTICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHENTICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{
namespace Models
{
  class AuthenticateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthenticateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AuthenticateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AuthenticateResponseBody() = default ;
    AuthenticateResponseBody(const AuthenticateResponseBody &) = default ;
    AuthenticateResponseBody(AuthenticateResponseBody &&) = default ;
    AuthenticateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthenticateResponseBody() = default ;
    AuthenticateResponseBody& operator=(const AuthenticateResponseBody &) = default ;
    AuthenticateResponseBody& operator=(AuthenticateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Authorized, authorized_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(RecordVid, recordVid_);
        DARABONBA_PTR_TO_JSON(UserInputList, userInputList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(RecordVid, recordVid_);
        DARABONBA_PTR_FROM_JSON(UserInputList, userInputList_);
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
      class UserInputList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserInputList& obj) { 
          DARABONBA_PTR_TO_JSON(QueryAuthRSDTO, queryAuthRSDTO_);
        };
        friend void from_json(const Darabonba::Json& j, UserInputList& obj) { 
          DARABONBA_PTR_FROM_JSON(QueryAuthRSDTO, queryAuthRSDTO_);
        };
        UserInputList() = default ;
        UserInputList(const UserInputList &) = default ;
        UserInputList(UserInputList &&) = default ;
        UserInputList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserInputList() = default ;
        UserInputList& operator=(const UserInputList &) = default ;
        UserInputList& operator=(UserInputList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class QueryAuthRSDTO : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueryAuthRSDTO& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(ExpandContent, expandContent_);
            DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
            DARABONBA_PTR_TO_JSON(FieldVid, fieldVid_);
          };
          friend void from_json(const Darabonba::Json& j, QueryAuthRSDTO& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(ExpandContent, expandContent_);
            DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
            DARABONBA_PTR_FROM_JSON(FieldVid, fieldVid_);
          };
          QueryAuthRSDTO() = default ;
          QueryAuthRSDTO(const QueryAuthRSDTO &) = default ;
          QueryAuthRSDTO(QueryAuthRSDTO &&) = default ;
          QueryAuthRSDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueryAuthRSDTO() = default ;
          QueryAuthRSDTO& operator=(const QueryAuthRSDTO &) = default ;
          QueryAuthRSDTO& operator=(QueryAuthRSDTO &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->expandContent_ == nullptr && this->fieldName_ == nullptr && this->fieldVid_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline QueryAuthRSDTO& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // expandContent Field Functions 
          bool hasExpandContent() const { return this->expandContent_ != nullptr;};
          void deleteExpandContent() { this->expandContent_ = nullptr;};
          inline string getExpandContent() const { DARABONBA_PTR_GET_DEFAULT(expandContent_, "") };
          inline QueryAuthRSDTO& setExpandContent(string expandContent) { DARABONBA_PTR_SET_VALUE(expandContent_, expandContent) };


          // fieldName Field Functions 
          bool hasFieldName() const { return this->fieldName_ != nullptr;};
          void deleteFieldName() { this->fieldName_ = nullptr;};
          inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
          inline QueryAuthRSDTO& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


          // fieldVid Field Functions 
          bool hasFieldVid() const { return this->fieldVid_ != nullptr;};
          void deleteFieldVid() { this->fieldVid_ = nullptr;};
          inline string getFieldVid() const { DARABONBA_PTR_GET_DEFAULT(fieldVid_, "") };
          inline QueryAuthRSDTO& setFieldVid(string fieldVid) { DARABONBA_PTR_SET_VALUE(fieldVid_, fieldVid) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> expandContent_ {};
          shared_ptr<string> fieldName_ {};
          shared_ptr<string> fieldVid_ {};
        };

        virtual bool empty() const override { return this->queryAuthRSDTO_ == nullptr; };
        // queryAuthRSDTO Field Functions 
        bool hasQueryAuthRSDTO() const { return this->queryAuthRSDTO_ != nullptr;};
        void deleteQueryAuthRSDTO() { this->queryAuthRSDTO_ = nullptr;};
        inline const vector<UserInputList::QueryAuthRSDTO> & getQueryAuthRSDTO() const { DARABONBA_PTR_GET_CONST(queryAuthRSDTO_, vector<UserInputList::QueryAuthRSDTO>) };
        inline vector<UserInputList::QueryAuthRSDTO> getQueryAuthRSDTO() { DARABONBA_PTR_GET(queryAuthRSDTO_, vector<UserInputList::QueryAuthRSDTO>) };
        inline UserInputList& setQueryAuthRSDTO(const vector<UserInputList::QueryAuthRSDTO> & queryAuthRSDTO) { DARABONBA_PTR_SET_VALUE(queryAuthRSDTO_, queryAuthRSDTO) };
        inline UserInputList& setQueryAuthRSDTO(vector<UserInputList::QueryAuthRSDTO> && queryAuthRSDTO) { DARABONBA_PTR_SET_RVALUE(queryAuthRSDTO_, queryAuthRSDTO) };


      protected:
        shared_ptr<vector<UserInputList::QueryAuthRSDTO>> queryAuthRSDTO_ {};
      };

      virtual bool empty() const override { return this->authorized_ == nullptr
        && this->instanceId_ == nullptr && this->operateCode_ == nullptr && this->productCode_ == nullptr && this->recordVid_ == nullptr && this->userInputList_ == nullptr; };
      // authorized Field Functions 
      bool hasAuthorized() const { return this->authorized_ != nullptr;};
      void deleteAuthorized() { this->authorized_ = nullptr;};
      inline bool getAuthorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, false) };
      inline Data& setAuthorized(bool authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // operateCode Field Functions 
      bool hasOperateCode() const { return this->operateCode_ != nullptr;};
      void deleteOperateCode() { this->operateCode_ = nullptr;};
      inline string getOperateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
      inline Data& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // recordVid Field Functions 
      bool hasRecordVid() const { return this->recordVid_ != nullptr;};
      void deleteRecordVid() { this->recordVid_ = nullptr;};
      inline string getRecordVid() const { DARABONBA_PTR_GET_DEFAULT(recordVid_, "") };
      inline Data& setRecordVid(string recordVid) { DARABONBA_PTR_SET_VALUE(recordVid_, recordVid) };


      // userInputList Field Functions 
      bool hasUserInputList() const { return this->userInputList_ != nullptr;};
      void deleteUserInputList() { this->userInputList_ = nullptr;};
      inline const Data::UserInputList & getUserInputList() const { DARABONBA_PTR_GET_CONST(userInputList_, Data::UserInputList) };
      inline Data::UserInputList getUserInputList() { DARABONBA_PTR_GET(userInputList_, Data::UserInputList) };
      inline Data& setUserInputList(const Data::UserInputList & userInputList) { DARABONBA_PTR_SET_VALUE(userInputList_, userInputList) };
      inline Data& setUserInputList(Data::UserInputList && userInputList) { DARABONBA_PTR_SET_RVALUE(userInputList_, userInputList) };


    protected:
      shared_ptr<bool> authorized_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> operateCode_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<string> recordVid_ {};
      shared_ptr<Data::UserInputList> userInputList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline AuthenticateResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AuthenticateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AuthenticateResponseBody::Data) };
    inline AuthenticateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AuthenticateResponseBody::Data) };
    inline AuthenticateResponseBody& setData(const AuthenticateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AuthenticateResponseBody& setData(AuthenticateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AuthenticateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthenticateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AuthenticateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<AuthenticateResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222
#endif

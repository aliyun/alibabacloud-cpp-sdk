// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYIPGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYIPGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DeleteSecurityIPGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityIPGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityIPGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteSecurityIPGroupResponseBody() = default ;
    DeleteSecurityIPGroupResponseBody(const DeleteSecurityIPGroupResponseBody &) = default ;
    DeleteSecurityIPGroupResponseBody(DeleteSecurityIPGroupResponseBody &&) = default ;
    DeleteSecurityIPGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityIPGroupResponseBody() = default ;
    DeleteSecurityIPGroupResponseBody& operator=(const DeleteSecurityIPGroupResponseBody &) = default ;
    DeleteSecurityIPGroupResponseBody& operator=(DeleteSecurityIPGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GlobalSecurityIPGroup, globalSecurityIPGroup_);
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
      class GlobalSecurityIPGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GlobalSecurityIPGroup& obj) { 
          DARABONBA_PTR_TO_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, GlobalSecurityIPGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(GlobalSecurityGroupId, globalSecurityGroupId_);
        };
        GlobalSecurityIPGroup() = default ;
        GlobalSecurityIPGroup(const GlobalSecurityIPGroup &) = default ;
        GlobalSecurityIPGroup(GlobalSecurityIPGroup &&) = default ;
        GlobalSecurityIPGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GlobalSecurityIPGroup() = default ;
        GlobalSecurityIPGroup& operator=(const GlobalSecurityIPGroup &) = default ;
        GlobalSecurityIPGroup& operator=(GlobalSecurityIPGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->globalSecurityGroupId_ == nullptr; };
        // globalSecurityGroupId Field Functions 
        bool hasGlobalSecurityGroupId() const { return this->globalSecurityGroupId_ != nullptr;};
        void deleteGlobalSecurityGroupId() { this->globalSecurityGroupId_ = nullptr;};
        inline string getGlobalSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(globalSecurityGroupId_, "") };
        inline GlobalSecurityIPGroup& setGlobalSecurityGroupId(string globalSecurityGroupId) { DARABONBA_PTR_SET_VALUE(globalSecurityGroupId_, globalSecurityGroupId) };


      protected:
        shared_ptr<string> globalSecurityGroupId_ {};
      };

      virtual bool empty() const override { return this->globalSecurityIPGroup_ == nullptr; };
      // globalSecurityIPGroup Field Functions 
      bool hasGlobalSecurityIPGroup() const { return this->globalSecurityIPGroup_ != nullptr;};
      void deleteGlobalSecurityIPGroup() { this->globalSecurityIPGroup_ = nullptr;};
      inline const vector<Data::GlobalSecurityIPGroup> & getGlobalSecurityIPGroup() const { DARABONBA_PTR_GET_CONST(globalSecurityIPGroup_, vector<Data::GlobalSecurityIPGroup>) };
      inline vector<Data::GlobalSecurityIPGroup> getGlobalSecurityIPGroup() { DARABONBA_PTR_GET(globalSecurityIPGroup_, vector<Data::GlobalSecurityIPGroup>) };
      inline Data& setGlobalSecurityIPGroup(const vector<Data::GlobalSecurityIPGroup> & globalSecurityIPGroup) { DARABONBA_PTR_SET_VALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };
      inline Data& setGlobalSecurityIPGroup(vector<Data::GlobalSecurityIPGroup> && globalSecurityIPGroup) { DARABONBA_PTR_SET_RVALUE(globalSecurityIPGroup_, globalSecurityIPGroup) };


    protected:
      shared_ptr<vector<Data::GlobalSecurityIPGroup>> globalSecurityIPGroup_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteSecurityIPGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteSecurityIPGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteSecurityIPGroupResponseBody::Data) };
    inline DeleteSecurityIPGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteSecurityIPGroupResponseBody::Data) };
    inline DeleteSecurityIPGroupResponseBody& setData(const DeleteSecurityIPGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteSecurityIPGroupResponseBody& setData(DeleteSecurityIPGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteSecurityIPGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSecurityIPGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DeleteSecurityIPGroupResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // ListResult<InstanceSSL>
    shared_ptr<DeleteSecurityIPGroupResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif

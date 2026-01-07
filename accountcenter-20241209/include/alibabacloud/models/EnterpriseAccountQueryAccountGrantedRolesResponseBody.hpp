// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTQUERYACCOUNTGRANTEDROLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEACCOUNTQUERYACCOUNTGRANTEDROLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseAccountQueryAccountGrantedRolesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseAccountQueryAccountGrantedRolesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseAccountQueryAccountGrantedRolesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseAccountQueryAccountGrantedRolesResponseBody() = default ;
    EnterpriseAccountQueryAccountGrantedRolesResponseBody(const EnterpriseAccountQueryAccountGrantedRolesResponseBody &) = default ;
    EnterpriseAccountQueryAccountGrantedRolesResponseBody(EnterpriseAccountQueryAccountGrantedRolesResponseBody &&) = default ;
    EnterpriseAccountQueryAccountGrantedRolesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseAccountQueryAccountGrantedRolesResponseBody() = default ;
    EnterpriseAccountQueryAccountGrantedRolesResponseBody& operator=(const EnterpriseAccountQueryAccountGrantedRolesResponseBody &) = default ;
    EnterpriseAccountQueryAccountGrantedRolesResponseBody& operator=(EnterpriseAccountQueryAccountGrantedRolesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizRoleCode, bizRoleCode_);
        DARABONBA_PTR_TO_JSON(BizRoleName, bizRoleName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizRoleCode, bizRoleCode_);
        DARABONBA_PTR_FROM_JSON(BizRoleName, bizRoleName_);
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
      virtual bool empty() const override { return this->bizRoleCode_ == nullptr
        && this->bizRoleName_ == nullptr; };
      // bizRoleCode Field Functions 
      bool hasBizRoleCode() const { return this->bizRoleCode_ != nullptr;};
      void deleteBizRoleCode() { this->bizRoleCode_ = nullptr;};
      inline string getBizRoleCode() const { DARABONBA_PTR_GET_DEFAULT(bizRoleCode_, "") };
      inline Data& setBizRoleCode(string bizRoleCode) { DARABONBA_PTR_SET_VALUE(bizRoleCode_, bizRoleCode) };


      // bizRoleName Field Functions 
      bool hasBizRoleName() const { return this->bizRoleName_ != nullptr;};
      void deleteBizRoleName() { this->bizRoleName_ = nullptr;};
      inline string getBizRoleName() const { DARABONBA_PTR_GET_DEFAULT(bizRoleName_, "") };
      inline Data& setBizRoleName(string bizRoleName) { DARABONBA_PTR_SET_VALUE(bizRoleName_, bizRoleName) };


    protected:
      shared_ptr<string> bizRoleCode_ {};
      shared_ptr<string> bizRoleName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseAccountQueryAccountGrantedRolesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<EnterpriseAccountQueryAccountGrantedRolesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<EnterpriseAccountQueryAccountGrantedRolesResponseBody::Data>) };
    inline vector<EnterpriseAccountQueryAccountGrantedRolesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<EnterpriseAccountQueryAccountGrantedRolesResponseBody::Data>) };
    inline EnterpriseAccountQueryAccountGrantedRolesResponseBody& setData(const vector<EnterpriseAccountQueryAccountGrantedRolesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EnterpriseAccountQueryAccountGrantedRolesResponseBody& setData(vector<EnterpriseAccountQueryAccountGrantedRolesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseAccountQueryAccountGrantedRolesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseAccountQueryAccountGrantedRolesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseAccountQueryAccountGrantedRolesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<EnterpriseAccountQueryAccountGrantedRolesResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif

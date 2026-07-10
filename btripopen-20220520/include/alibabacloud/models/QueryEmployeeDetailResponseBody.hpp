// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEMPLOYEEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEMPLOYEEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryEmployeeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEmployeeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEmployeeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    QueryEmployeeDetailResponseBody() = default ;
    QueryEmployeeDetailResponseBody(const QueryEmployeeDetailResponseBody &) = default ;
    QueryEmployeeDetailResponseBody(QueryEmployeeDetailResponseBody &&) = default ;
    QueryEmployeeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEmployeeDetailResponseBody() = default ;
    QueryEmployeeDetailResponseBody& operator=(const QueryEmployeeDetailResponseBody &) = default ;
    QueryEmployeeDetailResponseBody& operator=(QueryEmployeeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(is_leave, isLeave_);
        DARABONBA_PTR_TO_JSON(job_number, jobNumber_);
        DARABONBA_PTR_TO_JSON(nick_name, nickName_);
        DARABONBA_PTR_TO_JSON(out_dept_id, outDeptId_);
        DARABONBA_PTR_TO_JSON(out_dept_id_list, outDeptIdList_);
        DARABONBA_PTR_TO_JSON(out_employee_id, outEmployeeId_);
        DARABONBA_PTR_TO_JSON(phone_no, phoneNo_);
        DARABONBA_PTR_TO_JSON(real_name, realName_);
        DARABONBA_PTR_TO_JSON(real_name_en, realNameEn_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(is_leave, isLeave_);
        DARABONBA_PTR_FROM_JSON(job_number, jobNumber_);
        DARABONBA_PTR_FROM_JSON(nick_name, nickName_);
        DARABONBA_PTR_FROM_JSON(out_dept_id, outDeptId_);
        DARABONBA_PTR_FROM_JSON(out_dept_id_list, outDeptIdList_);
        DARABONBA_PTR_FROM_JSON(out_employee_id, outEmployeeId_);
        DARABONBA_PTR_FROM_JSON(phone_no, phoneNo_);
        DARABONBA_PTR_FROM_JSON(real_name, realName_);
        DARABONBA_PTR_FROM_JSON(real_name_en, realNameEn_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->isLeave_ == nullptr && this->jobNumber_ == nullptr && this->nickName_ == nullptr && this->outDeptId_ == nullptr && this->outDeptIdList_ == nullptr
        && this->outEmployeeId_ == nullptr && this->phoneNo_ == nullptr && this->realName_ == nullptr && this->realNameEn_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Module& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // isLeave Field Functions 
      bool hasIsLeave() const { return this->isLeave_ != nullptr;};
      void deleteIsLeave() { this->isLeave_ = nullptr;};
      inline bool getIsLeave() const { DARABONBA_PTR_GET_DEFAULT(isLeave_, false) };
      inline Module& setIsLeave(bool isLeave) { DARABONBA_PTR_SET_VALUE(isLeave_, isLeave) };


      // jobNumber Field Functions 
      bool hasJobNumber() const { return this->jobNumber_ != nullptr;};
      void deleteJobNumber() { this->jobNumber_ = nullptr;};
      inline string getJobNumber() const { DARABONBA_PTR_GET_DEFAULT(jobNumber_, "") };
      inline Module& setJobNumber(string jobNumber) { DARABONBA_PTR_SET_VALUE(jobNumber_, jobNumber) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline Module& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // outDeptId Field Functions 
      bool hasOutDeptId() const { return this->outDeptId_ != nullptr;};
      void deleteOutDeptId() { this->outDeptId_ = nullptr;};
      inline string getOutDeptId() const { DARABONBA_PTR_GET_DEFAULT(outDeptId_, "") };
      inline Module& setOutDeptId(string outDeptId) { DARABONBA_PTR_SET_VALUE(outDeptId_, outDeptId) };


      // outDeptIdList Field Functions 
      bool hasOutDeptIdList() const { return this->outDeptIdList_ != nullptr;};
      void deleteOutDeptIdList() { this->outDeptIdList_ = nullptr;};
      inline const vector<string> & getOutDeptIdList() const { DARABONBA_PTR_GET_CONST(outDeptIdList_, vector<string>) };
      inline vector<string> getOutDeptIdList() { DARABONBA_PTR_GET(outDeptIdList_, vector<string>) };
      inline Module& setOutDeptIdList(const vector<string> & outDeptIdList) { DARABONBA_PTR_SET_VALUE(outDeptIdList_, outDeptIdList) };
      inline Module& setOutDeptIdList(vector<string> && outDeptIdList) { DARABONBA_PTR_SET_RVALUE(outDeptIdList_, outDeptIdList) };


      // outEmployeeId Field Functions 
      bool hasOutEmployeeId() const { return this->outEmployeeId_ != nullptr;};
      void deleteOutEmployeeId() { this->outEmployeeId_ = nullptr;};
      inline string getOutEmployeeId() const { DARABONBA_PTR_GET_DEFAULT(outEmployeeId_, "") };
      inline Module& setOutEmployeeId(string outEmployeeId) { DARABONBA_PTR_SET_VALUE(outEmployeeId_, outEmployeeId) };


      // phoneNo Field Functions 
      bool hasPhoneNo() const { return this->phoneNo_ != nullptr;};
      void deletePhoneNo() { this->phoneNo_ = nullptr;};
      inline string getPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(phoneNo_, "") };
      inline Module& setPhoneNo(string phoneNo) { DARABONBA_PTR_SET_VALUE(phoneNo_, phoneNo) };


      // realName Field Functions 
      bool hasRealName() const { return this->realName_ != nullptr;};
      void deleteRealName() { this->realName_ = nullptr;};
      inline string getRealName() const { DARABONBA_PTR_GET_DEFAULT(realName_, "") };
      inline Module& setRealName(string realName) { DARABONBA_PTR_SET_VALUE(realName_, realName) };


      // realNameEn Field Functions 
      bool hasRealNameEn() const { return this->realNameEn_ != nullptr;};
      void deleteRealNameEn() { this->realNameEn_ = nullptr;};
      inline string getRealNameEn() const { DARABONBA_PTR_GET_DEFAULT(realNameEn_, "") };
      inline Module& setRealNameEn(string realNameEn) { DARABONBA_PTR_SET_VALUE(realNameEn_, realNameEn) };


    protected:
      shared_ptr<string> email_ {};
      shared_ptr<bool> isLeave_ {};
      shared_ptr<string> jobNumber_ {};
      shared_ptr<string> nickName_ {};
      shared_ptr<string> outDeptId_ {};
      shared_ptr<vector<string>> outDeptIdList_ {};
      shared_ptr<string> outEmployeeId_ {};
      shared_ptr<string> phoneNo_ {};
      shared_ptr<string> realName_ {};
      shared_ptr<string> realNameEn_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryEmployeeDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryEmployeeDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryEmployeeDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryEmployeeDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryEmployeeDetailResponseBody::Module) };
    inline QueryEmployeeDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryEmployeeDetailResponseBody::Module) };
    inline QueryEmployeeDetailResponseBody& setModule(const QueryEmployeeDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryEmployeeDetailResponseBody& setModule(QueryEmployeeDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEmployeeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryEmployeeDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline QueryEmployeeDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryEmployeeDetailResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

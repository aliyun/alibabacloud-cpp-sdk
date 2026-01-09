// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYPROJECTLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYPROJECTLOGRESPONSEBODY_HPP_
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
  class GetQualityProjectLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityProjectLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityProjectLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityProjectLogResponseBody() = default ;
    GetQualityProjectLogResponseBody(const GetQualityProjectLogResponseBody &) = default ;
    GetQualityProjectLogResponseBody(GetQualityProjectLogResponseBody &&) = default ;
    GetQualityProjectLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityProjectLogResponseBody() = default ;
    GetQualityProjectLogResponseBody& operator=(const GetQualityProjectLogResponseBody &) = default ;
    GetQualityProjectLogResponseBody& operator=(GetQualityProjectLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActionData, actionData_);
        DARABONBA_PTR_TO_JSON(ActionTime, actionTime_);
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(ProjectCreateTime, projectCreateTime_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionData, actionData_);
        DARABONBA_PTR_FROM_JSON(ActionTime, actionTime_);
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(ProjectCreateTime, projectCreateTime_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
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
      virtual bool empty() const override { return this->actionData_ == nullptr
        && this->actionTime_ == nullptr && this->actionType_ == nullptr && this->projectCreateTime_ == nullptr && this->projectId_ == nullptr; };
      // actionData Field Functions 
      bool hasActionData() const { return this->actionData_ != nullptr;};
      void deleteActionData() { this->actionData_ = nullptr;};
      inline string getActionData() const { DARABONBA_PTR_GET_DEFAULT(actionData_, "") };
      inline Data& setActionData(string actionData) { DARABONBA_PTR_SET_VALUE(actionData_, actionData) };


      // actionTime Field Functions 
      bool hasActionTime() const { return this->actionTime_ != nullptr;};
      void deleteActionTime() { this->actionTime_ = nullptr;};
      inline string getActionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, "") };
      inline Data& setActionTime(string actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline Data& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // projectCreateTime Field Functions 
      bool hasProjectCreateTime() const { return this->projectCreateTime_ != nullptr;};
      void deleteProjectCreateTime() { this->projectCreateTime_ = nullptr;};
      inline string getProjectCreateTime() const { DARABONBA_PTR_GET_DEFAULT(projectCreateTime_, "") };
      inline Data& setProjectCreateTime(string projectCreateTime) { DARABONBA_PTR_SET_VALUE(projectCreateTime_, projectCreateTime) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      shared_ptr<string> actionData_ {};
      shared_ptr<string> actionTime_ {};
      shared_ptr<string> actionType_ {};
      shared_ptr<string> projectCreateTime_ {};
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityProjectLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetQualityProjectLogResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetQualityProjectLogResponseBody::Data>) };
    inline vector<GetQualityProjectLogResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetQualityProjectLogResponseBody::Data>) };
    inline GetQualityProjectLogResponseBody& setData(const vector<GetQualityProjectLogResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityProjectLogResponseBody& setData(vector<GetQualityProjectLogResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityProjectLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityProjectLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityProjectLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetQualityProjectLogResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif

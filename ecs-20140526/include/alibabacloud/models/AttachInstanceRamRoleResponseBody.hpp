// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHINSTANCERAMROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHINSTANCERAMROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AttachInstanceRamRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInstanceRamRoleResults, attachInstanceRamRoleResults_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, AttachInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInstanceRamRoleResults, attachInstanceRamRoleResults_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    AttachInstanceRamRoleResponseBody() = default ;
    AttachInstanceRamRoleResponseBody(const AttachInstanceRamRoleResponseBody &) = default ;
    AttachInstanceRamRoleResponseBody(AttachInstanceRamRoleResponseBody &&) = default ;
    AttachInstanceRamRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachInstanceRamRoleResponseBody() = default ;
    AttachInstanceRamRoleResponseBody& operator=(const AttachInstanceRamRoleResponseBody &) = default ;
    AttachInstanceRamRoleResponseBody& operator=(AttachInstanceRamRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttachInstanceRamRoleResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttachInstanceRamRoleResults& obj) { 
        DARABONBA_PTR_TO_JSON(AttachInstanceRamRoleResult, attachInstanceRamRoleResult_);
      };
      friend void from_json(const Darabonba::Json& j, AttachInstanceRamRoleResults& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachInstanceRamRoleResult, attachInstanceRamRoleResult_);
      };
      AttachInstanceRamRoleResults() = default ;
      AttachInstanceRamRoleResults(const AttachInstanceRamRoleResults &) = default ;
      AttachInstanceRamRoleResults(AttachInstanceRamRoleResults &&) = default ;
      AttachInstanceRamRoleResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttachInstanceRamRoleResults() = default ;
      AttachInstanceRamRoleResults& operator=(const AttachInstanceRamRoleResults &) = default ;
      AttachInstanceRamRoleResults& operator=(AttachInstanceRamRoleResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AttachInstanceRamRoleResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachInstanceRamRoleResult& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, AttachInstanceRamRoleResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        AttachInstanceRamRoleResult() = default ;
        AttachInstanceRamRoleResult(const AttachInstanceRamRoleResult &) = default ;
        AttachInstanceRamRoleResult(AttachInstanceRamRoleResult &&) = default ;
        AttachInstanceRamRoleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachInstanceRamRoleResult() = default ;
        AttachInstanceRamRoleResult& operator=(const AttachInstanceRamRoleResult &) = default ;
        AttachInstanceRamRoleResult& operator=(AttachInstanceRamRoleResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceId_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline AttachInstanceRamRoleResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AttachInstanceRamRoleResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AttachInstanceRamRoleResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline AttachInstanceRamRoleResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // Indicates whether the instance RAM role was attached. If the instance RAM role was attached, 200 is returned. If the instance RAM role failed to be attached, any other value is returned. For more information, see the "Error codes" section.
        shared_ptr<string> code_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // Indicates whether the instance RAM role was attached. If the instance RAM role was attached, success is returned. If the instance RAM role failed to be attached, any other value is returned. For more information, see the "Error codes" section.
        shared_ptr<string> message_ {};
        // Indicates whether the instance RAM role was attached.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->attachInstanceRamRoleResult_ == nullptr; };
      // attachInstanceRamRoleResult Field Functions 
      bool hasAttachInstanceRamRoleResult() const { return this->attachInstanceRamRoleResult_ != nullptr;};
      void deleteAttachInstanceRamRoleResult() { this->attachInstanceRamRoleResult_ = nullptr;};
      inline const vector<AttachInstanceRamRoleResults::AttachInstanceRamRoleResult> & getAttachInstanceRamRoleResult() const { DARABONBA_PTR_GET_CONST(attachInstanceRamRoleResult_, vector<AttachInstanceRamRoleResults::AttachInstanceRamRoleResult>) };
      inline vector<AttachInstanceRamRoleResults::AttachInstanceRamRoleResult> getAttachInstanceRamRoleResult() { DARABONBA_PTR_GET(attachInstanceRamRoleResult_, vector<AttachInstanceRamRoleResults::AttachInstanceRamRoleResult>) };
      inline AttachInstanceRamRoleResults& setAttachInstanceRamRoleResult(const vector<AttachInstanceRamRoleResults::AttachInstanceRamRoleResult> & attachInstanceRamRoleResult) { DARABONBA_PTR_SET_VALUE(attachInstanceRamRoleResult_, attachInstanceRamRoleResult) };
      inline AttachInstanceRamRoleResults& setAttachInstanceRamRoleResult(vector<AttachInstanceRamRoleResults::AttachInstanceRamRoleResult> && attachInstanceRamRoleResult) { DARABONBA_PTR_SET_RVALUE(attachInstanceRamRoleResult_, attachInstanceRamRoleResult) };


    protected:
      shared_ptr<vector<AttachInstanceRamRoleResults::AttachInstanceRamRoleResult>> attachInstanceRamRoleResult_ {};
    };

    virtual bool empty() const override { return this->attachInstanceRamRoleResults_ == nullptr
        && this->failCount_ == nullptr && this->ramRoleName_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // attachInstanceRamRoleResults Field Functions 
    bool hasAttachInstanceRamRoleResults() const { return this->attachInstanceRamRoleResults_ != nullptr;};
    void deleteAttachInstanceRamRoleResults() { this->attachInstanceRamRoleResults_ = nullptr;};
    inline const AttachInstanceRamRoleResponseBody::AttachInstanceRamRoleResults & getAttachInstanceRamRoleResults() const { DARABONBA_PTR_GET_CONST(attachInstanceRamRoleResults_, AttachInstanceRamRoleResponseBody::AttachInstanceRamRoleResults) };
    inline AttachInstanceRamRoleResponseBody::AttachInstanceRamRoleResults getAttachInstanceRamRoleResults() { DARABONBA_PTR_GET(attachInstanceRamRoleResults_, AttachInstanceRamRoleResponseBody::AttachInstanceRamRoleResults) };
    inline AttachInstanceRamRoleResponseBody& setAttachInstanceRamRoleResults(const AttachInstanceRamRoleResponseBody::AttachInstanceRamRoleResults & attachInstanceRamRoleResults) { DARABONBA_PTR_SET_VALUE(attachInstanceRamRoleResults_, attachInstanceRamRoleResults) };
    inline AttachInstanceRamRoleResponseBody& setAttachInstanceRamRoleResults(AttachInstanceRamRoleResponseBody::AttachInstanceRamRoleResults && attachInstanceRamRoleResults) { DARABONBA_PTR_SET_RVALUE(attachInstanceRamRoleResults_, attachInstanceRamRoleResults) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline AttachInstanceRamRoleResponseBody& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline AttachInstanceRamRoleResponseBody& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachInstanceRamRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline AttachInstanceRamRoleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the results of attaching the instance RAM role.
    shared_ptr<AttachInstanceRamRoleResponseBody::AttachInstanceRamRoleResults> attachInstanceRamRoleResults_ {};
    // The number of instances to which the instance RAM role failed to be attached.
    shared_ptr<int32_t> failCount_ {};
    // The name of the instance RAM role.
    shared_ptr<string> ramRoleName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of instances to which you attempted to attach the instance RAM role.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

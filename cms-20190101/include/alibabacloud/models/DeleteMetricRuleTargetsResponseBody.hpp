// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULETARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRuleTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FailIds, failIds_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FailIds, failIds_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteMetricRuleTargetsResponseBody() = default ;
    DeleteMetricRuleTargetsResponseBody(const DeleteMetricRuleTargetsResponseBody &) = default ;
    DeleteMetricRuleTargetsResponseBody(DeleteMetricRuleTargetsResponseBody &&) = default ;
    DeleteMetricRuleTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRuleTargetsResponseBody() = default ;
    DeleteMetricRuleTargetsResponseBody& operator=(const DeleteMetricRuleTargetsResponseBody &) = default ;
    DeleteMetricRuleTargetsResponseBody& operator=(DeleteMetricRuleTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailIds& obj) { 
        DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
      };
      friend void from_json(const Darabonba::Json& j, FailIds& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
      };
      FailIds() = default ;
      FailIds(const FailIds &) = default ;
      FailIds(FailIds &&) = default ;
      FailIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailIds() = default ;
      FailIds& operator=(const FailIds &) = default ;
      FailIds& operator=(FailIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetIds& obj) { 
          DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        };
        friend void from_json(const Darabonba::Json& j, TargetIds& obj) { 
          DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        };
        TargetIds() = default ;
        TargetIds(const TargetIds &) = default ;
        TargetIds(TargetIds &&) = default ;
        TargetIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetIds() = default ;
        TargetIds& operator=(const TargetIds &) = default ;
        TargetIds& operator=(TargetIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->targetId_ == nullptr; };
        // targetId Field Functions 
        bool hasTargetId() const { return this->targetId_ != nullptr;};
        void deleteTargetId() { this->targetId_ = nullptr;};
        inline const vector<string> & getTargetId() const { DARABONBA_PTR_GET_CONST(targetId_, vector<string>) };
        inline vector<string> getTargetId() { DARABONBA_PTR_GET(targetId_, vector<string>) };
        inline TargetIds& setTargetId(const vector<string> & targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };
        inline TargetIds& setTargetId(vector<string> && targetId) { DARABONBA_PTR_SET_RVALUE(targetId_, targetId) };


      protected:
        shared_ptr<vector<string>> targetId_ {};
      };

      virtual bool empty() const override { return this->targetIds_ == nullptr; };
      // targetIds Field Functions 
      bool hasTargetIds() const { return this->targetIds_ != nullptr;};
      void deleteTargetIds() { this->targetIds_ = nullptr;};
      inline const FailIds::TargetIds & getTargetIds() const { DARABONBA_PTR_GET_CONST(targetIds_, FailIds::TargetIds) };
      inline FailIds::TargetIds getTargetIds() { DARABONBA_PTR_GET(targetIds_, FailIds::TargetIds) };
      inline FailIds& setTargetIds(const FailIds::TargetIds & targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };
      inline FailIds& setTargetIds(FailIds::TargetIds && targetIds) { DARABONBA_PTR_SET_RVALUE(targetIds_, targetIds) };


    protected:
      // The IDs of the resources that failed to be deleted.
      shared_ptr<FailIds::TargetIds> targetIds_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->failIds_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteMetricRuleTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failIds Field Functions 
    bool hasFailIds() const { return this->failIds_ != nullptr;};
    void deleteFailIds() { this->failIds_ = nullptr;};
    inline const DeleteMetricRuleTargetsResponseBody::FailIds & getFailIds() const { DARABONBA_PTR_GET_CONST(failIds_, DeleteMetricRuleTargetsResponseBody::FailIds) };
    inline DeleteMetricRuleTargetsResponseBody::FailIds getFailIds() { DARABONBA_PTR_GET(failIds_, DeleteMetricRuleTargetsResponseBody::FailIds) };
    inline DeleteMetricRuleTargetsResponseBody& setFailIds(const DeleteMetricRuleTargetsResponseBody::FailIds & failIds) { DARABONBA_PTR_SET_VALUE(failIds_, failIds) };
    inline DeleteMetricRuleTargetsResponseBody& setFailIds(DeleteMetricRuleTargetsResponseBody::FailIds && failIds) { DARABONBA_PTR_SET_RVALUE(failIds_, failIds) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteMetricRuleTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMetricRuleTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteMetricRuleTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // **
    // 
    // **Description** The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The IDs of the resources that failed to be deleted.
    shared_ptr<DeleteMetricRuleTargetsResponseBody::FailIds> failIds_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

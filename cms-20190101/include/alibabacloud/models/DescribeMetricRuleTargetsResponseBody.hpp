// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETARGETSRESPONSEBODY_HPP_
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
  class DescribeMetricRuleTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    DescribeMetricRuleTargetsResponseBody() = default ;
    DescribeMetricRuleTargetsResponseBody(const DescribeMetricRuleTargetsResponseBody &) = default ;
    DescribeMetricRuleTargetsResponseBody(DescribeMetricRuleTargetsResponseBody &&) = default ;
    DescribeMetricRuleTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTargetsResponseBody() = default ;
    DescribeMetricRuleTargetsResponseBody& operator=(const DescribeMetricRuleTargetsResponseBody &) = default ;
    DescribeMetricRuleTargetsResponseBody& operator=(DescribeMetricRuleTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(Target, target_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(Target, target_);
      };
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Target : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Target& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
          DARABONBA_PTR_TO_JSON(Level, level_);
        };
        friend void from_json(const Darabonba::Json& j, Target& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
        };
        Target() = default ;
        Target(const Target &) = default ;
        Target(Target &&) = default ;
        Target(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Target() = default ;
        Target& operator=(const Target &) = default ;
        Target& operator=(Target &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->id_ == nullptr && this->jsonParams_ == nullptr && this->level_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline Target& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Target& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // jsonParams Field Functions 
        bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
        void deleteJsonParams() { this->jsonParams_ = nullptr;};
        inline string getJsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
        inline Target& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Target& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      protected:
        // The Alibaba Cloud Resource Name (ARN) of the resource. Format: `acs:{Service name abbreviation}:{regionId}:{userId}:/{Resource type}/{Resource name}/message`. Example: `acs:mns:cn-hangzhou:120886317861****:/queues/test123/message`. Fields:
        // 
        // *   {Service name abbreviation}: the abbreviation of the service name. Valid value: mns.
        // *   {userId}: the ID of the Alibaba Cloud account.
        // *   {regionId}: the region ID of the message queue or topic.
        // *   {Resource type}`: the type of the resource for which alerts are triggered. Valid values: - **queues** - **topics** {Resource name}: the name of the resource. - If the resource type is set to **queues**, the resource name is the name of the message queue. - If the resource type is set to **topics**, the resource name is the name of the topic.`
        shared_ptr<string> arn_ {};
        // The ID of the resource for which alerts are triggered.
        shared_ptr<string> id_ {};
        // The parameters of the alert callback. The parameters are in the JSON format.
        shared_ptr<string> jsonParams_ {};
        // The level of the alert. Valid values:
        // 
        // *   INFO: information
        // *   WARN: warning
        // *   CRITICAL: critical
        shared_ptr<string> level_ {};
      };

      virtual bool empty() const override { return this->target_ == nullptr; };
      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const vector<Targets::Target> & getTarget() const { DARABONBA_PTR_GET_CONST(target_, vector<Targets::Target>) };
      inline vector<Targets::Target> getTarget() { DARABONBA_PTR_GET(target_, vector<Targets::Target>) };
      inline Targets& setTarget(const vector<Targets::Target> & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline Targets& setTarget(vector<Targets::Target> && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    protected:
      shared_ptr<vector<Targets::Target>> target_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->targets_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetricRuleTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const DescribeMetricRuleTargetsResponseBody::Targets & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, DescribeMetricRuleTargetsResponseBody::Targets) };
    inline DescribeMetricRuleTargetsResponseBody::Targets getTargets() { DARABONBA_PTR_GET(targets_, DescribeMetricRuleTargetsResponseBody::Targets) };
    inline DescribeMetricRuleTargetsResponseBody& setTargets(const DescribeMetricRuleTargetsResponseBody::Targets & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline DescribeMetricRuleTargetsResponseBody& setTargets(DescribeMetricRuleTargetsResponseBody::Targets && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   true: The call was successful.
    // *   false: The call failed.
    shared_ptr<bool> success_ {};
    // The information about the resource for which alerts are triggered.
    shared_ptr<DescribeMetricRuleTargetsResponseBody::Targets> targets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

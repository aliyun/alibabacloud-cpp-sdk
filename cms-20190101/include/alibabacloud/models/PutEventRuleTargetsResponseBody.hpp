// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODY_HPP_
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
  class PutEventRuleTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(FailedContactParameters, failedContactParameters_);
      DARABONBA_PTR_TO_JSON(FailedFcParameters, failedFcParameters_);
      DARABONBA_PTR_TO_JSON(FailedMnsParameters, failedMnsParameters_);
      DARABONBA_PTR_TO_JSON(FailedParameterCount, failedParameterCount_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(FailedContactParameters, failedContactParameters_);
      DARABONBA_PTR_FROM_JSON(FailedFcParameters, failedFcParameters_);
      DARABONBA_PTR_FROM_JSON(FailedMnsParameters, failedMnsParameters_);
      DARABONBA_PTR_FROM_JSON(FailedParameterCount, failedParameterCount_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PutEventRuleTargetsResponseBody() = default ;
    PutEventRuleTargetsResponseBody(const PutEventRuleTargetsResponseBody &) = default ;
    PutEventRuleTargetsResponseBody(PutEventRuleTargetsResponseBody &&) = default ;
    PutEventRuleTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsResponseBody() = default ;
    PutEventRuleTargetsResponseBody& operator=(const PutEventRuleTargetsResponseBody &) = default ;
    PutEventRuleTargetsResponseBody& operator=(PutEventRuleTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FailedMnsParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedMnsParameters& obj) { 
        DARABONBA_PTR_TO_JSON(MnsParameter, mnsParameter_);
      };
      friend void from_json(const Darabonba::Json& j, FailedMnsParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(MnsParameter, mnsParameter_);
      };
      FailedMnsParameters() = default ;
      FailedMnsParameters(const FailedMnsParameters &) = default ;
      FailedMnsParameters(FailedMnsParameters &&) = default ;
      FailedMnsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedMnsParameters() = default ;
      FailedMnsParameters& operator=(const FailedMnsParameters &) = default ;
      FailedMnsParameters& operator=(FailedMnsParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MnsParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MnsParameter& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Queue, queue_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, MnsParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Queue, queue_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        MnsParameter() = default ;
        MnsParameter(const MnsParameter &) = default ;
        MnsParameter(MnsParameter &&) = default ;
        MnsParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MnsParameter() = default ;
        MnsParameter& operator=(const MnsParameter &) = default ;
        MnsParameter& operator=(MnsParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->queue_ == nullptr && this->region_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline MnsParameter& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // queue Field Functions 
        bool hasQueue() const { return this->queue_ != nullptr;};
        void deleteQueue() { this->queue_ = nullptr;};
        inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
        inline MnsParameter& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline MnsParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        // The ID of the recipient.
        shared_ptr<int32_t> id_ {};
        // The name of the MNS queue.
        shared_ptr<string> queue_ {};
        // The region ID.
        shared_ptr<string> region_ {};
      };

      virtual bool empty() const override { return this->mnsParameter_ == nullptr; };
      // mnsParameter Field Functions 
      bool hasMnsParameter() const { return this->mnsParameter_ != nullptr;};
      void deleteMnsParameter() { this->mnsParameter_ = nullptr;};
      inline const vector<FailedMnsParameters::MnsParameter> & getMnsParameter() const { DARABONBA_PTR_GET_CONST(mnsParameter_, vector<FailedMnsParameters::MnsParameter>) };
      inline vector<FailedMnsParameters::MnsParameter> getMnsParameter() { DARABONBA_PTR_GET(mnsParameter_, vector<FailedMnsParameters::MnsParameter>) };
      inline FailedMnsParameters& setMnsParameter(const vector<FailedMnsParameters::MnsParameter> & mnsParameter) { DARABONBA_PTR_SET_VALUE(mnsParameter_, mnsParameter) };
      inline FailedMnsParameters& setMnsParameter(vector<FailedMnsParameters::MnsParameter> && mnsParameter) { DARABONBA_PTR_SET_RVALUE(mnsParameter_, mnsParameter) };


    protected:
      shared_ptr<vector<FailedMnsParameters::MnsParameter>> mnsParameter_ {};
    };

    class FailedFcParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedFcParameters& obj) { 
        DARABONBA_PTR_TO_JSON(FcParameter, fcParameter_);
      };
      friend void from_json(const Darabonba::Json& j, FailedFcParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(FcParameter, fcParameter_);
      };
      FailedFcParameters() = default ;
      FailedFcParameters(const FailedFcParameters &) = default ;
      FailedFcParameters(FailedFcParameters &&) = default ;
      FailedFcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedFcParameters() = default ;
      FailedFcParameters& operator=(const FailedFcParameters &) = default ;
      FailedFcParameters& operator=(FailedFcParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FcParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FcParameter& obj) { 
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        };
        friend void from_json(const Darabonba::Json& j, FcParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        };
        FcParameter() = default ;
        FcParameter(const FcParameter &) = default ;
        FcParameter(FcParameter &&) = default ;
        FcParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FcParameter() = default ;
        FcParameter& operator=(const FcParameter &) = default ;
        FcParameter& operator=(FcParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->functionName_ == nullptr
        && this->id_ == nullptr && this->region_ == nullptr && this->serviceName_ == nullptr; };
        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline FcParameter& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline FcParameter& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline FcParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline FcParameter& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      protected:
        // The name of the function.
        shared_ptr<string> functionName_ {};
        // The ID of the recipient.
        shared_ptr<int32_t> id_ {};
        // The region ID.
        shared_ptr<string> region_ {};
        // The name of the Function Compute service.
        shared_ptr<string> serviceName_ {};
      };

      virtual bool empty() const override { return this->fcParameter_ == nullptr; };
      // fcParameter Field Functions 
      bool hasFcParameter() const { return this->fcParameter_ != nullptr;};
      void deleteFcParameter() { this->fcParameter_ = nullptr;};
      inline const vector<FailedFcParameters::FcParameter> & getFcParameter() const { DARABONBA_PTR_GET_CONST(fcParameter_, vector<FailedFcParameters::FcParameter>) };
      inline vector<FailedFcParameters::FcParameter> getFcParameter() { DARABONBA_PTR_GET(fcParameter_, vector<FailedFcParameters::FcParameter>) };
      inline FailedFcParameters& setFcParameter(const vector<FailedFcParameters::FcParameter> & fcParameter) { DARABONBA_PTR_SET_VALUE(fcParameter_, fcParameter) };
      inline FailedFcParameters& setFcParameter(vector<FailedFcParameters::FcParameter> && fcParameter) { DARABONBA_PTR_SET_RVALUE(fcParameter_, fcParameter) };


    protected:
      shared_ptr<vector<FailedFcParameters::FcParameter>> fcParameter_ {};
    };

    class FailedContactParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedContactParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ContactParameter, contactParameter_);
      };
      friend void from_json(const Darabonba::Json& j, FailedContactParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactParameter, contactParameter_);
      };
      FailedContactParameters() = default ;
      FailedContactParameters(const FailedContactParameters &) = default ;
      FailedContactParameters(FailedContactParameters &&) = default ;
      FailedContactParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedContactParameters() = default ;
      FailedContactParameters& operator=(const FailedContactParameters &) = default ;
      FailedContactParameters& operator=(FailedContactParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ContactParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactParameter& obj) { 
          DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Level, level_);
        };
        friend void from_json(const Darabonba::Json& j, ContactParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
        };
        ContactParameter() = default ;
        ContactParameter(const ContactParameter &) = default ;
        ContactParameter(ContactParameter &&) = default ;
        ContactParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactParameter() = default ;
        ContactParameter& operator=(const ContactParameter &) = default ;
        ContactParameter& operator=(ContactParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contactGroupName_ == nullptr
        && this->id_ == nullptr && this->level_ == nullptr; };
        // contactGroupName Field Functions 
        bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
        void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
        inline string getContactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
        inline ContactParameter& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline ContactParameter& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline ContactParameter& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      protected:
        // The name of the alert contact group.
        shared_ptr<string> contactGroupName_ {};
        // The ID of the recipient.
        shared_ptr<int32_t> id_ {};
        // The alert notification methods. Valid values:
        // 
        // 4: Alert notifications are sent by using DingTalk and emails.
        shared_ptr<string> level_ {};
      };

      virtual bool empty() const override { return this->contactParameter_ == nullptr; };
      // contactParameter Field Functions 
      bool hasContactParameter() const { return this->contactParameter_ != nullptr;};
      void deleteContactParameter() { this->contactParameter_ = nullptr;};
      inline const vector<FailedContactParameters::ContactParameter> & getContactParameter() const { DARABONBA_PTR_GET_CONST(contactParameter_, vector<FailedContactParameters::ContactParameter>) };
      inline vector<FailedContactParameters::ContactParameter> getContactParameter() { DARABONBA_PTR_GET(contactParameter_, vector<FailedContactParameters::ContactParameter>) };
      inline FailedContactParameters& setContactParameter(const vector<FailedContactParameters::ContactParameter> & contactParameter) { DARABONBA_PTR_SET_VALUE(contactParameter_, contactParameter) };
      inline FailedContactParameters& setContactParameter(vector<FailedContactParameters::ContactParameter> && contactParameter) { DARABONBA_PTR_SET_RVALUE(contactParameter_, contactParameter) };


    protected:
      shared_ptr<vector<FailedContactParameters::ContactParameter>> contactParameter_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->failedContactParameters_ == nullptr && this->failedFcParameters_ == nullptr && this->failedMnsParameters_ == nullptr && this->failedParameterCount_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PutEventRuleTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // failedContactParameters Field Functions 
    bool hasFailedContactParameters() const { return this->failedContactParameters_ != nullptr;};
    void deleteFailedContactParameters() { this->failedContactParameters_ = nullptr;};
    inline const PutEventRuleTargetsResponseBody::FailedContactParameters & getFailedContactParameters() const { DARABONBA_PTR_GET_CONST(failedContactParameters_, PutEventRuleTargetsResponseBody::FailedContactParameters) };
    inline PutEventRuleTargetsResponseBody::FailedContactParameters getFailedContactParameters() { DARABONBA_PTR_GET(failedContactParameters_, PutEventRuleTargetsResponseBody::FailedContactParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedContactParameters(const PutEventRuleTargetsResponseBody::FailedContactParameters & failedContactParameters) { DARABONBA_PTR_SET_VALUE(failedContactParameters_, failedContactParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedContactParameters(PutEventRuleTargetsResponseBody::FailedContactParameters && failedContactParameters) { DARABONBA_PTR_SET_RVALUE(failedContactParameters_, failedContactParameters) };


    // failedFcParameters Field Functions 
    bool hasFailedFcParameters() const { return this->failedFcParameters_ != nullptr;};
    void deleteFailedFcParameters() { this->failedFcParameters_ = nullptr;};
    inline const PutEventRuleTargetsResponseBody::FailedFcParameters & getFailedFcParameters() const { DARABONBA_PTR_GET_CONST(failedFcParameters_, PutEventRuleTargetsResponseBody::FailedFcParameters) };
    inline PutEventRuleTargetsResponseBody::FailedFcParameters getFailedFcParameters() { DARABONBA_PTR_GET(failedFcParameters_, PutEventRuleTargetsResponseBody::FailedFcParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedFcParameters(const PutEventRuleTargetsResponseBody::FailedFcParameters & failedFcParameters) { DARABONBA_PTR_SET_VALUE(failedFcParameters_, failedFcParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedFcParameters(PutEventRuleTargetsResponseBody::FailedFcParameters && failedFcParameters) { DARABONBA_PTR_SET_RVALUE(failedFcParameters_, failedFcParameters) };


    // failedMnsParameters Field Functions 
    bool hasFailedMnsParameters() const { return this->failedMnsParameters_ != nullptr;};
    void deleteFailedMnsParameters() { this->failedMnsParameters_ = nullptr;};
    inline const PutEventRuleTargetsResponseBody::FailedMnsParameters & getFailedMnsParameters() const { DARABONBA_PTR_GET_CONST(failedMnsParameters_, PutEventRuleTargetsResponseBody::FailedMnsParameters) };
    inline PutEventRuleTargetsResponseBody::FailedMnsParameters getFailedMnsParameters() { DARABONBA_PTR_GET(failedMnsParameters_, PutEventRuleTargetsResponseBody::FailedMnsParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedMnsParameters(const PutEventRuleTargetsResponseBody::FailedMnsParameters & failedMnsParameters) { DARABONBA_PTR_SET_VALUE(failedMnsParameters_, failedMnsParameters) };
    inline PutEventRuleTargetsResponseBody& setFailedMnsParameters(PutEventRuleTargetsResponseBody::FailedMnsParameters && failedMnsParameters) { DARABONBA_PTR_SET_RVALUE(failedMnsParameters_, failedMnsParameters) };


    // failedParameterCount Field Functions 
    bool hasFailedParameterCount() const { return this->failedParameterCount_ != nullptr;};
    void deleteFailedParameterCount() { this->failedParameterCount_ = nullptr;};
    inline string getFailedParameterCount() const { DARABONBA_PTR_GET_DEFAULT(failedParameterCount_, "") };
    inline PutEventRuleTargetsResponseBody& setFailedParameterCount(string failedParameterCount) { DARABONBA_PTR_SET_VALUE(failedParameterCount_, failedParameterCount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PutEventRuleTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutEventRuleTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PutEventRuleTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // This parameter is returned if the specified alert contact groups in the request failed to be created or modified.
    shared_ptr<PutEventRuleTargetsResponseBody::FailedContactParameters> failedContactParameters_ {};
    // This parameter is returned if the specified functions in the request failed to be created or modified in Function Compute.
    shared_ptr<PutEventRuleTargetsResponseBody::FailedFcParameters> failedFcParameters_ {};
    // This parameter is returned if the specified queues in the request failed to be created or modified in SMQ.
    shared_ptr<PutEventRuleTargetsResponseBody::FailedMnsParameters> failedMnsParameters_ {};
    // The number of resources that failed to be created or modified.
    shared_ptr<string> failedParameterCount_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

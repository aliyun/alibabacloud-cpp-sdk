// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class QueryFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryFeaturesResponseBody() = default ;
    QueryFeaturesResponseBody(const QueryFeaturesResponseBody &) = default ;
    QueryFeaturesResponseBody(QueryFeaturesResponseBody &&) = default ;
    QueryFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFeaturesResponseBody() = default ;
    QueryFeaturesResponseBody& operator=(const QueryFeaturesResponseBody &) = default ;
    QueryFeaturesResponseBody& operator=(QueryFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Features, features_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(TargetScope, targetScope_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Features, features_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(TargetScope, targetScope_);
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
      class Features : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Features& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(FeatureCode, featureCode_);
          DARABONBA_PTR_TO_JSON(Supported, supported_);
          DARABONBA_PTR_TO_JSON(UnsupportedReason, unsupportedReason_);
          DARABONBA_PTR_TO_JSON(UnsupportedReasonCode, unsupportedReasonCode_);
        };
        friend void from_json(const Darabonba::Json& j, Features& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(FeatureCode, featureCode_);
          DARABONBA_PTR_FROM_JSON(Supported, supported_);
          DARABONBA_PTR_FROM_JSON(UnsupportedReason, unsupportedReason_);
          DARABONBA_PTR_FROM_JSON(UnsupportedReasonCode, unsupportedReasonCode_);
        };
        Features() = default ;
        Features(const Features &) = default ;
        Features(Features &&) = default ;
        Features(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Features() = default ;
        Features& operator=(const Features &) = default ;
        Features& operator=(Features &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->featureCode_ == nullptr && this->supported_ == nullptr && this->unsupportedReason_ == nullptr && this->unsupportedReasonCode_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Features& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Features& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // featureCode Field Functions 
        bool hasFeatureCode() const { return this->featureCode_ != nullptr;};
        void deleteFeatureCode() { this->featureCode_ = nullptr;};
        inline string getFeatureCode() const { DARABONBA_PTR_GET_DEFAULT(featureCode_, "") };
        inline Features& setFeatureCode(string featureCode) { DARABONBA_PTR_SET_VALUE(featureCode_, featureCode) };


        // supported Field Functions 
        bool hasSupported() const { return this->supported_ != nullptr;};
        void deleteSupported() { this->supported_ = nullptr;};
        inline bool getSupported() const { DARABONBA_PTR_GET_DEFAULT(supported_, false) };
        inline Features& setSupported(bool supported) { DARABONBA_PTR_SET_VALUE(supported_, supported) };


        // unsupportedReason Field Functions 
        bool hasUnsupportedReason() const { return this->unsupportedReason_ != nullptr;};
        void deleteUnsupportedReason() { this->unsupportedReason_ = nullptr;};
        inline string getUnsupportedReason() const { DARABONBA_PTR_GET_DEFAULT(unsupportedReason_, "") };
        inline Features& setUnsupportedReason(string unsupportedReason) { DARABONBA_PTR_SET_VALUE(unsupportedReason_, unsupportedReason) };


        // unsupportedReasonCode Field Functions 
        bool hasUnsupportedReasonCode() const { return this->unsupportedReasonCode_ != nullptr;};
        void deleteUnsupportedReasonCode() { this->unsupportedReasonCode_ = nullptr;};
        inline string getUnsupportedReasonCode() const { DARABONBA_PTR_GET_DEFAULT(unsupportedReasonCode_, "") };
        inline Features& setUnsupportedReasonCode(string unsupportedReasonCode) { DARABONBA_PTR_SET_VALUE(unsupportedReasonCode_, unsupportedReasonCode) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> featureCode_ {};
        shared_ptr<bool> supported_ {};
        shared_ptr<string> unsupportedReason_ {};
        shared_ptr<string> unsupportedReasonCode_ {};
      };

      virtual bool empty() const override { return this->features_ == nullptr
        && this->instanceId_ == nullptr && this->resourceName_ == nullptr && this->targetScope_ == nullptr; };
      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline const vector<Data::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<Data::Features>) };
      inline vector<Data::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<Data::Features>) };
      inline Data& setFeatures(const vector<Data::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
      inline Data& setFeatures(vector<Data::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Data& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // targetScope Field Functions 
      bool hasTargetScope() const { return this->targetScope_ != nullptr;};
      void deleteTargetScope() { this->targetScope_ = nullptr;};
      inline string getTargetScope() const { DARABONBA_PTR_GET_DEFAULT(targetScope_, "") };
      inline Data& setTargetScope(string targetScope) { DARABONBA_PTR_SET_VALUE(targetScope_, targetScope) };


    protected:
      shared_ptr<vector<Data::Features>> features_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> resourceName_ {};
      shared_ptr<string> targetScope_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFeaturesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryFeaturesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryFeaturesResponseBody::Data) };
    inline QueryFeaturesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryFeaturesResponseBody::Data) };
    inline QueryFeaturesResponseBody& setData(const QueryFeaturesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFeaturesResponseBody& setData(QueryFeaturesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryFeaturesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryFeaturesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryFeaturesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryFeaturesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif

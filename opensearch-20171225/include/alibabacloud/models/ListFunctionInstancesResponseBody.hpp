// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListFunctionInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Latency, latency_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Latency, latency_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFunctionInstancesResponseBody() = default ;
    ListFunctionInstancesResponseBody(const ListFunctionInstancesResponseBody &) = default ;
    ListFunctionInstancesResponseBody(ListFunctionInstancesResponseBody &&) = default ;
    ListFunctionInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionInstancesResponseBody() = default ;
    ListFunctionInstancesResponseBody& operator=(const ListFunctionInstancesResponseBody &) = default ;
    ListFunctionInstancesResponseBody& operator=(ListFunctionInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Belongs, belongs_);
        DARABONBA_PTR_TO_JSON(CreateParameters, createParameters_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Cron, cron_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
        DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(ModelType, modelType_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UsageParameters, usageParameters_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Belongs, belongs_);
        DARABONBA_PTR_FROM_JSON(CreateParameters, createParameters_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Cron, cron_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
        DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UsageParameters, usageParameters_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, UsageParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        UsageParameters() = default ;
        UsageParameters(const UsageParameters &) = default ;
        UsageParameters(UsageParameters &&) = default ;
        UsageParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsageParameters() = default ;
        UsageParameters& operator=(const UsageParameters &) = default ;
        UsageParameters& operator=(UsageParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline UsageParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline UsageParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the parameter.
        shared_ptr<string> name_ {};
        // The value of the parameter.
        shared_ptr<string> value_ {};
      };

      class CreateParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CreateParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, CreateParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        CreateParameters() = default ;
        CreateParameters(const CreateParameters &) = default ;
        CreateParameters(CreateParameters &&) = default ;
        CreateParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CreateParameters() = default ;
        CreateParameters& operator=(const CreateParameters &) = default ;
        CreateParameters& operator=(CreateParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CreateParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline CreateParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the parameter.
        shared_ptr<string> name_ {};
        // The value of the parameter.
        shared_ptr<string> value_ {};
      };

      class Belongs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Belongs& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Language, language_);
        };
        friend void from_json(const Darabonba::Json& j, Belongs& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Language, language_);
        };
        Belongs() = default ;
        Belongs(const Belongs &) = default ;
        Belongs(Belongs &&) = default ;
        Belongs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Belongs() = default ;
        Belongs& operator=(const Belongs &) = default ;
        Belongs& operator=(Belongs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->category_ == nullptr
        && this->domain_ == nullptr && this->language_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Belongs& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline Belongs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Belongs& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      protected:
        // The category.
        shared_ptr<string> category_ {};
        // The industry.
        shared_ptr<string> domain_ {};
        // The abbreviation of the language that applies.
        shared_ptr<string> language_ {};
      };

      virtual bool empty() const override { return this->belongs_ == nullptr
        && this->createParameters_ == nullptr && this->createTime_ == nullptr && this->cron_ == nullptr && this->description_ == nullptr && this->extendInfo_ == nullptr
        && this->functionName_ == nullptr && this->functionType_ == nullptr && this->instanceName_ == nullptr && this->modelType_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->usageParameters_ == nullptr && this->versionId_ == nullptr; };
      // belongs Field Functions 
      bool hasBelongs() const { return this->belongs_ != nullptr;};
      void deleteBelongs() { this->belongs_ = nullptr;};
      inline const Result::Belongs & getBelongs() const { DARABONBA_PTR_GET_CONST(belongs_, Result::Belongs) };
      inline Result::Belongs getBelongs() { DARABONBA_PTR_GET(belongs_, Result::Belongs) };
      inline Result& setBelongs(const Result::Belongs & belongs) { DARABONBA_PTR_SET_VALUE(belongs_, belongs) };
      inline Result& setBelongs(Result::Belongs && belongs) { DARABONBA_PTR_SET_RVALUE(belongs_, belongs) };


      // createParameters Field Functions 
      bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
      void deleteCreateParameters() { this->createParameters_ = nullptr;};
      inline const vector<Result::CreateParameters> & getCreateParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<Result::CreateParameters>) };
      inline vector<Result::CreateParameters> getCreateParameters() { DARABONBA_PTR_GET(createParameters_, vector<Result::CreateParameters>) };
      inline Result& setCreateParameters(const vector<Result::CreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
      inline Result& setCreateParameters(vector<Result::CreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline Result& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
      inline Result& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Result& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // functionType Field Functions 
      bool hasFunctionType() const { return this->functionType_ != nullptr;};
      void deleteFunctionType() { this->functionType_ = nullptr;};
      inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
      inline Result& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Result& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline Result& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // usageParameters Field Functions 
      bool hasUsageParameters() const { return this->usageParameters_ != nullptr;};
      void deleteUsageParameters() { this->usageParameters_ = nullptr;};
      inline const vector<Result::UsageParameters> & getUsageParameters() const { DARABONBA_PTR_GET_CONST(usageParameters_, vector<Result::UsageParameters>) };
      inline vector<Result::UsageParameters> getUsageParameters() { DARABONBA_PTR_GET(usageParameters_, vector<Result::UsageParameters>) };
      inline Result& setUsageParameters(const vector<Result::UsageParameters> & usageParameters) { DARABONBA_PTR_SET_VALUE(usageParameters_, usageParameters) };
      inline Result& setUsageParameters(vector<Result::UsageParameters> && usageParameters) { DARABONBA_PTR_SET_RVALUE(usageParameters_, usageParameters) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline int64_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
      inline Result& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      // The information about the instance.
      shared_ptr<Result::Belongs> belongs_ {};
      // The parameters of the instance.
      shared_ptr<vector<Result::CreateParameters>> createParameters_ {};
      // The time when the instance was created.
      shared_ptr<int64_t> createTime_ {};
      // The cron expression used to schedule training, in the format of (Minutes Hours DayofMonth Month DayofWeek). If the value is empty, it indicates that no periodic training is performed.
      shared_ptr<string> cron_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The extended information, which is a JSON string. It includes model evaluation information and error information.
      shared_ptr<string> extendInfo_ {};
      // The name of the feature.
      shared_ptr<string> functionName_ {};
      // The type of the feature.
      shared_ptr<string> functionType_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The type of the model.
      shared_ptr<string> modelType_ {};
      // How the instance is created. Valid values:
      // 
      // *   user: The instance is created by user.
      // *   builtin: The instance is created by system.
      shared_ptr<string> source_ {};
      // The state of the instance. Valid values:
      // 
      // 1.  unavailable: No model is available. Models must be trained before you can use them.
      // 2.  available: Models can be used.
      shared_ptr<string> status_ {};
      // The parameters that are used.
      shared_ptr<vector<Result::UsageParameters>> usageParameters_ {};
      // The ID of the version.
      shared_ptr<int64_t> versionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->latency_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFunctionInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline ListFunctionInstancesResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline int64_t getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0L) };
    inline ListFunctionInstancesResponseBody& setLatency(int64_t latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFunctionInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFunctionInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListFunctionInstancesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListFunctionInstancesResponseBody::Result>) };
    inline vector<ListFunctionInstancesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListFunctionInstancesResponseBody::Result>) };
    inline ListFunctionInstancesResponseBody& setResult(const vector<ListFunctionInstancesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListFunctionInstancesResponseBody& setResult(vector<ListFunctionInstancesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFunctionInstancesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFunctionInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code. If no error occurs, the parameter is left empty.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpCode_ {};
    // The time consumed for the request, in milliseconds.
    shared_ptr<int64_t> latency_ {};
    // The error message. If no error occurs, the parameter is left empty.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the instances.
    shared_ptr<vector<ListFunctionInstancesResponseBody::Result>> result_ {};
    // The status of the request.
    shared_ptr<string> status_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

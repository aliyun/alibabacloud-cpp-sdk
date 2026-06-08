// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONRESOURCESRESPONSEBODY_HPP_
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
  class ListFunctionResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Latency, latency_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Latency, latency_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFunctionResourcesResponseBody() = default ;
    ListFunctionResourcesResponseBody(const ListFunctionResourcesResponseBody &) = default ;
    ListFunctionResourcesResponseBody(ListFunctionResourcesResponseBody &&) = default ;
    ListFunctionResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionResourcesResponseBody() = default ;
    ListFunctionResourcesResponseBody& operator=(const ListFunctionResourcesResponseBody &) = default ;
    ListFunctionResourcesResponseBody& operator=(ListFunctionResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ReferencedInstances, referencedInstances_);
        DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ReferencedInstances, referencedInstances_);
        DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
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
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Generators, generators_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Generators, generators_);
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
        class Generators : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Generators& obj) { 
            DARABONBA_PTR_TO_JSON(Generator, generator_);
            DARABONBA_PTR_TO_JSON(Input, input_);
            DARABONBA_PTR_TO_JSON(Output, output_);
          };
          friend void from_json(const Darabonba::Json& j, Generators& obj) { 
            DARABONBA_PTR_FROM_JSON(Generator, generator_);
            DARABONBA_PTR_FROM_JSON(Input, input_);
            DARABONBA_PTR_FROM_JSON(Output, output_);
          };
          Generators() = default ;
          Generators(const Generators &) = default ;
          Generators(Generators &&) = default ;
          Generators(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Generators() = default ;
          Generators& operator=(const Generators &) = default ;
          Generators& operator=(Generators &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Input : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Input& obj) { 
              DARABONBA_PTR_TO_JSON(Features, features_);
            };
            friend void from_json(const Darabonba::Json& j, Input& obj) { 
              DARABONBA_PTR_FROM_JSON(Features, features_);
            };
            Input() = default ;
            Input(const Input &) = default ;
            Input(Input &&) = default ;
            Input(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Input() = default ;
            Input& operator=(const Input &) = default ;
            Input& operator=(Input &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Features : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Features& obj) { 
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, Features& obj) { 
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
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
              virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Features& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Features& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // The name of the feature.
              shared_ptr<string> name_ {};
              // The type of the feature.
              // 
              // Valid values:
              // 
              // *   item
              // 
              //     <!-- -->
              // 
              //     <!-- -->
              // 
              //     <!-- -->
              // 
              // *   user
              // 
              //     <!-- -->
              // 
              //     <!-- -->
              // 
              //     <!-- -->
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->features_ == nullptr; };
            // features Field Functions 
            bool hasFeatures() const { return this->features_ != nullptr;};
            void deleteFeatures() { this->features_ = nullptr;};
            inline const vector<Input::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<Input::Features>) };
            inline vector<Input::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<Input::Features>) };
            inline Input& setFeatures(const vector<Input::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
            inline Input& setFeatures(vector<Input::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


          protected:
            // The input features.
            shared_ptr<vector<Input::Features>> features_ {};
          };

          virtual bool empty() const override { return this->generator_ == nullptr
        && this->input_ == nullptr && this->output_ == nullptr; };
          // generator Field Functions 
          bool hasGenerator() const { return this->generator_ != nullptr;};
          void deleteGenerator() { this->generator_ = nullptr;};
          inline string getGenerator() const { DARABONBA_PTR_GET_DEFAULT(generator_, "") };
          inline Generators& setGenerator(string generator) { DARABONBA_PTR_SET_VALUE(generator_, generator) };


          // input Field Functions 
          bool hasInput() const { return this->input_ != nullptr;};
          void deleteInput() { this->input_ = nullptr;};
          inline const Generators::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Generators::Input) };
          inline Generators::Input getInput() { DARABONBA_PTR_GET(input_, Generators::Input) };
          inline Generators& setInput(const Generators::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
          inline Generators& setInput(Generators::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


          // output Field Functions 
          bool hasOutput() const { return this->output_ != nullptr;};
          void deleteOutput() { this->output_ = nullptr;};
          inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
          inline Generators& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


        protected:
          // The type of the feature generator.
          shared_ptr<string> generator_ {};
          // The input.
          shared_ptr<Generators::Input> input_ {};
          // The name of the output feature.
          shared_ptr<string> output_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->generators_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // generators Field Functions 
        bool hasGenerators() const { return this->generators_ != nullptr;};
        void deleteGenerators() { this->generators_ = nullptr;};
        inline const vector<Data::Generators> & getGenerators() const { DARABONBA_PTR_GET_CONST(generators_, vector<Data::Generators>) };
        inline vector<Data::Generators> getGenerators() { DARABONBA_PTR_GET(generators_, vector<Data::Generators>) };
        inline Data& setGenerators(const vector<Data::Generators> & generators) { DARABONBA_PTR_SET_VALUE(generators_, generators) };
        inline Data& setGenerators(vector<Data::Generators> && generators) { DARABONBA_PTR_SET_RVALUE(generators_, generators) };


      protected:
        // The content of the file that corresponds to a resource of the raw_file type.
        shared_ptr<string> content_ {};
        // The feature generators that correspond to resources of the feature_generator type.
        shared_ptr<vector<Data::Generators>> generators_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->data_ == nullptr && this->description_ == nullptr && this->functionName_ == nullptr && this->modifyTime_ == nullptr && this->referencedInstances_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Result::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Result::Data) };
      inline Result::Data getData() { DARABONBA_PTR_GET(data_, Result::Data) };
      inline Result& setData(const Result::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(Result::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Result& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Result& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // referencedInstances Field Functions 
      bool hasReferencedInstances() const { return this->referencedInstances_ != nullptr;};
      void deleteReferencedInstances() { this->referencedInstances_ = nullptr;};
      inline const vector<string> & getReferencedInstances() const { DARABONBA_PTR_GET_CONST(referencedInstances_, vector<string>) };
      inline vector<string> getReferencedInstances() { DARABONBA_PTR_GET(referencedInstances_, vector<string>) };
      inline Result& setReferencedInstances(const vector<string> & referencedInstances) { DARABONBA_PTR_SET_VALUE(referencedInstances_, referencedInstances) };
      inline Result& setReferencedInstances(vector<string> && referencedInstances) { DARABONBA_PTR_SET_RVALUE(referencedInstances_, referencedInstances) };


      // resourceName Field Functions 
      bool hasResourceName() const { return this->resourceName_ != nullptr;};
      void deleteResourceName() { this->resourceName_ = nullptr;};
      inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
      inline Result& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Result& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The time when the resource was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The resource data. The data structure varies with the resource type.
      shared_ptr<Result::Data> data_ {};
      // The description of the resource.
      shared_ptr<string> description_ {};
      // The name of the feature.
      shared_ptr<string> functionName_ {};
      // The time when the resource was modified. Unit: milliseconds.
      shared_ptr<int64_t> modifyTime_ {};
      // The algorithm instances that are referenced.
      shared_ptr<vector<string>> referencedInstances_ {};
      // The name of the resource.
      shared_ptr<string> resourceName_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->latency_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFunctionResourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline ListFunctionResourcesResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline double getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0.0) };
    inline ListFunctionResourcesResponseBody& setLatency(double latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFunctionResourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFunctionResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListFunctionResourcesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListFunctionResourcesResponseBody::Result>) };
    inline vector<ListFunctionResourcesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListFunctionResourcesResponseBody::Result>) };
    inline ListFunctionResourcesResponseBody& setResult(const vector<ListFunctionResourcesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListFunctionResourcesResponseBody& setResult(vector<ListFunctionResourcesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFunctionResourcesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListFunctionResourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned. If no error occurs, this value is empty.
    shared_ptr<string> code_ {};
    // The HTTP status code returned.
    shared_ptr<int64_t> httpCode_ {};
    // The amount of time consumed for the request. Unit: milliseconds.
    shared_ptr<double> latency_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The results returned.
    shared_ptr<vector<ListFunctionResourcesResponseBody::Result>> result_ {};
    // The status of the request. Valid values: OK and FAIL.
    shared_ptr<string> status_ {};
    // The total number of records that meet the requirements.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

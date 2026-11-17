// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGICALMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGICALMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetLogicalModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogicalModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogicalModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetLogicalModelResponseBody() = default ;
    GetLogicalModelResponseBody(const GetLogicalModelResponseBody &) = default ;
    GetLogicalModelResponseBody(GetLogicalModelResponseBody &&) = default ;
    GetLogicalModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogicalModelResponseBody() = default ;
    GetLogicalModelResponseBody& operator=(const GetLogicalModelResponseBody &) = default ;
    GetLogicalModelResponseBody& operator=(GetLogicalModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(availablePaths, availablePaths_);
        DARABONBA_PTR_TO_JSON(callStrategy, callStrategy_);
        DARABONBA_PTR_TO_JSON(deployment, deployment_);
        DARABONBA_PTR_TO_JSON(fallbackTargets, fallbackTargets_);
        DARABONBA_ANY_TO_JSON(features, features_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(logicalModelId, logicalModelId_);
        DARABONBA_PTR_TO_JSON(meta, meta_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(requiresActivation, requiresActivation_);
        DARABONBA_PTR_TO_JSON(responseModel, responseModel_);
        DARABONBA_PTR_TO_JSON(revision, revision_);
        DARABONBA_PTR_TO_JSON(routingPolicy, routingPolicy_);
        DARABONBA_PTR_TO_JSON(slots, slots_);
        DARABONBA_PTR_TO_JSON(targets, targets_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(availablePaths, availablePaths_);
        DARABONBA_PTR_FROM_JSON(callStrategy, callStrategy_);
        DARABONBA_PTR_FROM_JSON(deployment, deployment_);
        DARABONBA_PTR_FROM_JSON(fallbackTargets, fallbackTargets_);
        DARABONBA_ANY_FROM_JSON(features, features_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(logicalModelId, logicalModelId_);
        DARABONBA_PTR_FROM_JSON(meta, meta_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(requiresActivation, requiresActivation_);
        DARABONBA_PTR_FROM_JSON(responseModel, responseModel_);
        DARABONBA_PTR_FROM_JSON(revision, revision_);
        DARABONBA_PTR_FROM_JSON(routingPolicy, routingPolicy_);
        DARABONBA_PTR_FROM_JSON(slots, slots_);
        DARABONBA_PTR_FROM_JSON(targets, targets_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
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
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
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
        virtual bool empty() const override { return this->modelCardId_ == nullptr
        && this->weight_ == nullptr; };
        // modelCardId Field Functions 
        bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
        void deleteModelCardId() { this->modelCardId_ = nullptr;};
        inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
        inline Targets& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Targets& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The ID of the actual source model card in the same instance. The ID starts with msc-. VM or service overrides are not supported.
        // 
        // This parameter is required.
        shared_ptr<string> modelCardId_ {};
        // The weight. The value is an integer from 0 to 10000 and is saved as the original value. A value of 0 is allowed for Mapping.
        // 
        // This parameter is required.
        shared_ptr<int32_t> weight_ {};
      };

      class Slots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Slots& obj) { 
          DARABONBA_PTR_TO_JSON(complex, complex_);
          DARABONBA_PTR_TO_JSON(simple, simple_);
          DARABONBA_PTR_TO_JSON(standard, standard_);
        };
        friend void from_json(const Darabonba::Json& j, Slots& obj) { 
          DARABONBA_PTR_FROM_JSON(complex, complex_);
          DARABONBA_PTR_FROM_JSON(simple, simple_);
          DARABONBA_PTR_FROM_JSON(standard, standard_);
        };
        Slots() = default ;
        Slots(const Slots &) = default ;
        Slots(Slots &&) = default ;
        Slots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Slots() = default ;
        Slots& operator=(const Slots &) = default ;
        Slots& operator=(Slots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Standard : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Standard& obj) { 
            DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
          };
          friend void from_json(const Darabonba::Json& j, Standard& obj) { 
            DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
          };
          Standard() = default ;
          Standard(const Standard &) = default ;
          Standard(Standard &&) = default ;
          Standard(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Standard() = default ;
          Standard& operator=(const Standard &) = default ;
          Standard& operator=(Standard &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modelCardId_ == nullptr; };
          // modelCardId Field Functions 
          bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
          void deleteModelCardId() { this->modelCardId_ = nullptr;};
          inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
          inline Standard& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


        protected:
          // The ID of the actual source card in the same instance. The ID starts with msc-. VM or service overrides are not supported.
          // 
          // This parameter is required.
          shared_ptr<string> modelCardId_ {};
        };

        class Simple : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Simple& obj) { 
            DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
          };
          friend void from_json(const Darabonba::Json& j, Simple& obj) { 
            DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
          };
          Simple() = default ;
          Simple(const Simple &) = default ;
          Simple(Simple &&) = default ;
          Simple(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Simple() = default ;
          Simple& operator=(const Simple &) = default ;
          Simple& operator=(Simple &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modelCardId_ == nullptr; };
          // modelCardId Field Functions 
          bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
          void deleteModelCardId() { this->modelCardId_ = nullptr;};
          inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
          inline Simple& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


        protected:
          // The ID of the actual source card in the same instance. The ID starts with msc-. VM or service overrides are not supported.
          // 
          // This parameter is required.
          shared_ptr<string> modelCardId_ {};
        };

        class Complex : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Complex& obj) { 
            DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
          };
          friend void from_json(const Darabonba::Json& j, Complex& obj) { 
            DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
          };
          Complex() = default ;
          Complex(const Complex &) = default ;
          Complex(Complex &&) = default ;
          Complex(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Complex() = default ;
          Complex& operator=(const Complex &) = default ;
          Complex& operator=(Complex &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modelCardId_ == nullptr; };
          // modelCardId Field Functions 
          bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
          void deleteModelCardId() { this->modelCardId_ = nullptr;};
          inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
          inline Complex& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


        protected:
          // The ID of the actual source card in the same instance. The ID starts with msc-. VM or service overrides are not supported.
          // 
          // This parameter is required.
          shared_ptr<string> modelCardId_ {};
        };

        virtual bool empty() const override { return this->complex_ == nullptr
        && this->simple_ == nullptr && this->standard_ == nullptr; };
        // complex Field Functions 
        bool hasComplex() const { return this->complex_ != nullptr;};
        void deleteComplex() { this->complex_ = nullptr;};
        inline const vector<Slots::Complex> & getComplex() const { DARABONBA_PTR_GET_CONST(complex_, vector<Slots::Complex>) };
        inline vector<Slots::Complex> getComplex() { DARABONBA_PTR_GET(complex_, vector<Slots::Complex>) };
        inline Slots& setComplex(const vector<Slots::Complex> & complex) { DARABONBA_PTR_SET_VALUE(complex_, complex) };
        inline Slots& setComplex(vector<Slots::Complex> && complex) { DARABONBA_PTR_SET_RVALUE(complex_, complex) };


        // simple Field Functions 
        bool hasSimple() const { return this->simple_ != nullptr;};
        void deleteSimple() { this->simple_ = nullptr;};
        inline const vector<Slots::Simple> & getSimple() const { DARABONBA_PTR_GET_CONST(simple_, vector<Slots::Simple>) };
        inline vector<Slots::Simple> getSimple() { DARABONBA_PTR_GET(simple_, vector<Slots::Simple>) };
        inline Slots& setSimple(const vector<Slots::Simple> & simple) { DARABONBA_PTR_SET_VALUE(simple_, simple) };
        inline Slots& setSimple(vector<Slots::Simple> && simple) { DARABONBA_PTR_SET_RVALUE(simple_, simple) };


        // standard Field Functions 
        bool hasStandard() const { return this->standard_ != nullptr;};
        void deleteStandard() { this->standard_ = nullptr;};
        inline const vector<Slots::Standard> & getStandard() const { DARABONBA_PTR_GET_CONST(standard_, vector<Slots::Standard>) };
        inline vector<Slots::Standard> getStandard() { DARABONBA_PTR_GET(standard_, vector<Slots::Standard>) };
        inline Slots& setStandard(const vector<Slots::Standard> & standard) { DARABONBA_PTR_SET_VALUE(standard_, standard) };
        inline Slots& setStandard(vector<Slots::Standard> && standard) { DARABONBA_PTR_SET_RVALUE(standard_, standard) };


      protected:
        // The complex slot, which contains 1 to 3 source cards. The three slots are globally deduplicated by modelCardId.
        // 
        // This parameter is required.
        shared_ptr<vector<Slots::Complex>> complex_ {};
        // The simple slot, which contains 1 to 3 source cards. The three slots are globally deduplicated by modelCardId.
        // 
        // This parameter is required.
        shared_ptr<vector<Slots::Simple>> simple_ {};
        // The standard slot, which contains 1 to 3 source cards. The three slots are globally deduplicated by modelCardId.
        // 
        // This parameter is required.
        shared_ptr<vector<Slots::Standard>> standard_ {};
      };

      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_PTR_TO_JSON(maxInputTokens, maxInputTokens_);
          DARABONBA_PTR_TO_JSON(maxOutputTokens, maxOutputTokens_);
          DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
          DARABONBA_PTR_TO_JSON(supportedInputModalities, supportedInputModalities_);
          DARABONBA_PTR_TO_JSON(supportedOutputModalities, supportedOutputModalities_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_PTR_FROM_JSON(maxInputTokens, maxInputTokens_);
          DARABONBA_PTR_FROM_JSON(maxOutputTokens, maxOutputTokens_);
          DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
          DARABONBA_PTR_FROM_JSON(supportedInputModalities, supportedInputModalities_);
          DARABONBA_PTR_FROM_JSON(supportedOutputModalities, supportedOutputModalities_);
        };
        Meta() = default ;
        Meta(const Meta &) = default ;
        Meta(Meta &&) = default ;
        Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Meta() = default ;
        Meta& operator=(const Meta &) = default ;
        Meta& operator=(Meta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxInputTokens_ == nullptr
        && this->maxOutputTokens_ == nullptr && this->maxTokens_ == nullptr && this->supportedInputModalities_ == nullptr && this->supportedOutputModalities_ == nullptr; };
        // maxInputTokens Field Functions 
        bool hasMaxInputTokens() const { return this->maxInputTokens_ != nullptr;};
        void deleteMaxInputTokens() { this->maxInputTokens_ = nullptr;};
        inline int64_t getMaxInputTokens() const { DARABONBA_PTR_GET_DEFAULT(maxInputTokens_, 0L) };
        inline Meta& setMaxInputTokens(int64_t maxInputTokens) { DARABONBA_PTR_SET_VALUE(maxInputTokens_, maxInputTokens) };


        // maxOutputTokens Field Functions 
        bool hasMaxOutputTokens() const { return this->maxOutputTokens_ != nullptr;};
        void deleteMaxOutputTokens() { this->maxOutputTokens_ = nullptr;};
        inline int64_t getMaxOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(maxOutputTokens_, 0L) };
        inline Meta& setMaxOutputTokens(int64_t maxOutputTokens) { DARABONBA_PTR_SET_VALUE(maxOutputTokens_, maxOutputTokens) };


        // maxTokens Field Functions 
        bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
        void deleteMaxTokens() { this->maxTokens_ = nullptr;};
        inline int64_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0L) };
        inline Meta& setMaxTokens(int64_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


        // supportedInputModalities Field Functions 
        bool hasSupportedInputModalities() const { return this->supportedInputModalities_ != nullptr;};
        void deleteSupportedInputModalities() { this->supportedInputModalities_ = nullptr;};
        inline const vector<string> & getSupportedInputModalities() const { DARABONBA_PTR_GET_CONST(supportedInputModalities_, vector<string>) };
        inline vector<string> getSupportedInputModalities() { DARABONBA_PTR_GET(supportedInputModalities_, vector<string>) };
        inline Meta& setSupportedInputModalities(const vector<string> & supportedInputModalities) { DARABONBA_PTR_SET_VALUE(supportedInputModalities_, supportedInputModalities) };
        inline Meta& setSupportedInputModalities(vector<string> && supportedInputModalities) { DARABONBA_PTR_SET_RVALUE(supportedInputModalities_, supportedInputModalities) };


        // supportedOutputModalities Field Functions 
        bool hasSupportedOutputModalities() const { return this->supportedOutputModalities_ != nullptr;};
        void deleteSupportedOutputModalities() { this->supportedOutputModalities_ = nullptr;};
        inline const vector<string> & getSupportedOutputModalities() const { DARABONBA_PTR_GET_CONST(supportedOutputModalities_, vector<string>) };
        inline vector<string> getSupportedOutputModalities() { DARABONBA_PTR_GET(supportedOutputModalities_, vector<string>) };
        inline Meta& setSupportedOutputModalities(const vector<string> & supportedOutputModalities) { DARABONBA_PTR_SET_VALUE(supportedOutputModalities_, supportedOutputModalities) };
        inline Meta& setSupportedOutputModalities(vector<string> && supportedOutputModalities) { DARABONBA_PTR_SET_RVALUE(supportedOutputModalities_, supportedOutputModalities) };


      protected:
        // The maximum number of input tokens. The minimum value among all primary targets is used when all are known. Otherwise, this is omitted.
        shared_ptr<int64_t> maxInputTokens_ {};
        // The maximum number of input tokens. The minimum value among all primary targets is used when all are known. Otherwise, this is omitted.
        shared_ptr<int64_t> maxOutputTokens_ {};
        // The maximum number of input tokens. The minimum value among all primary targets is used when all are known. Otherwise, this is omitted.
        shared_ptr<int64_t> maxTokens_ {};
        // The intersection of supported input modalities for the primary targets.
        shared_ptr<vector<string>> supportedInputModalities_ {};
        // The intersection of supported input modalities for the primary targets.
        shared_ptr<vector<string>> supportedOutputModalities_ {};
      };

      class FallbackTargets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FallbackTargets& obj) { 
          DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
        };
        friend void from_json(const Darabonba::Json& j, FallbackTargets& obj) { 
          DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
        };
        FallbackTargets() = default ;
        FallbackTargets(const FallbackTargets &) = default ;
        FallbackTargets(FallbackTargets &&) = default ;
        FallbackTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FallbackTargets() = default ;
        FallbackTargets& operator=(const FallbackTargets &) = default ;
        FallbackTargets& operator=(FallbackTargets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->modelCardId_ == nullptr; };
        // modelCardId Field Functions 
        bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
        void deleteModelCardId() { this->modelCardId_ = nullptr;};
        inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
        inline FallbackTargets& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


      protected:
        // The ID of the actual source card in the same instance.
        // 
        // This parameter is required.
        shared_ptr<string> modelCardId_ {};
      };

      class Deployment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Deployment& obj) { 
          DARABONBA_PTR_TO_JSON(operationId, operationId_);
          DARABONBA_PTR_TO_JSON(revision, revision_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Deployment& obj) { 
          DARABONBA_PTR_FROM_JSON(operationId, operationId_);
          DARABONBA_PTR_FROM_JSON(revision, revision_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Deployment() = default ;
        Deployment(const Deployment &) = default ;
        Deployment(Deployment &&) = default ;
        Deployment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Deployment() = default ;
        Deployment& operator=(const Deployment &) = default ;
        Deployment& operator=(Deployment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->operationId_ == nullptr
        && this->revision_ == nullptr && this->status_ == nullptr; };
        // operationId Field Functions 
        bool hasOperationId() const { return this->operationId_ != nullptr;};
        void deleteOperationId() { this->operationId_ = nullptr;};
        inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
        inline Deployment& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


        // revision Field Functions 
        bool hasRevision() const { return this->revision_ != nullptr;};
        void deleteRevision() { this->revision_ = nullptr;};
        inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
        inline Deployment& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Deployment& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the current shared configuration delivery.
        shared_ptr<string> operationId_ {};
        // The configuration revision of the object.
        shared_ptr<int64_t> revision_ {};
        // The deployment status. Valid values: Pending, Running, Succeeded, PartiallyFailed, and Failed. This is not the API release status.
        shared_ptr<string> status_ {};
      };

      class AvailablePaths : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailablePaths& obj) { 
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AvailablePaths& obj) { 
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        AvailablePaths() = default ;
        AvailablePaths(const AvailablePaths &) = default ;
        AvailablePaths(AvailablePaths &&) = default ;
        AvailablePaths(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailablePaths() = default ;
        AvailablePaths& operator=(const AvailablePaths &) = default ;
        AvailablePaths& operator=(AvailablePaths &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->path_ == nullptr
        && this->type_ == nullptr; };
        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline AvailablePaths& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AvailablePaths& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The call path of the model.
        shared_ptr<string> path_ {};
        // The protocol type used by the call path.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->availablePaths_ == nullptr
        && this->callStrategy_ == nullptr && this->deployment_ == nullptr && this->fallbackTargets_ == nullptr && this->features_ == nullptr && this->gatewayId_ == nullptr
        && this->logicalModelId_ == nullptr && this->meta_ == nullptr && this->name_ == nullptr && this->requiresActivation_ == nullptr && this->responseModel_ == nullptr
        && this->revision_ == nullptr && this->routingPolicy_ == nullptr && this->slots_ == nullptr && this->targets_ == nullptr && this->updateTime_ == nullptr; };
      // availablePaths Field Functions 
      bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
      void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
      inline const vector<Data::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<Data::AvailablePaths>) };
      inline vector<Data::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<Data::AvailablePaths>) };
      inline Data& setAvailablePaths(const vector<Data::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
      inline Data& setAvailablePaths(vector<Data::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


      // callStrategy Field Functions 
      bool hasCallStrategy() const { return this->callStrategy_ != nullptr;};
      void deleteCallStrategy() { this->callStrategy_ = nullptr;};
      inline string getCallStrategy() const { DARABONBA_PTR_GET_DEFAULT(callStrategy_, "") };
      inline Data& setCallStrategy(string callStrategy) { DARABONBA_PTR_SET_VALUE(callStrategy_, callStrategy) };


      // deployment Field Functions 
      bool hasDeployment() const { return this->deployment_ != nullptr;};
      void deleteDeployment() { this->deployment_ = nullptr;};
      inline const Data::Deployment & getDeployment() const { DARABONBA_PTR_GET_CONST(deployment_, Data::Deployment) };
      inline Data::Deployment getDeployment() { DARABONBA_PTR_GET(deployment_, Data::Deployment) };
      inline Data& setDeployment(const Data::Deployment & deployment) { DARABONBA_PTR_SET_VALUE(deployment_, deployment) };
      inline Data& setDeployment(Data::Deployment && deployment) { DARABONBA_PTR_SET_RVALUE(deployment_, deployment) };


      // fallbackTargets Field Functions 
      bool hasFallbackTargets() const { return this->fallbackTargets_ != nullptr;};
      void deleteFallbackTargets() { this->fallbackTargets_ = nullptr;};
      inline const vector<Data::FallbackTargets> & getFallbackTargets() const { DARABONBA_PTR_GET_CONST(fallbackTargets_, vector<Data::FallbackTargets>) };
      inline vector<Data::FallbackTargets> getFallbackTargets() { DARABONBA_PTR_GET(fallbackTargets_, vector<Data::FallbackTargets>) };
      inline Data& setFallbackTargets(const vector<Data::FallbackTargets> & fallbackTargets) { DARABONBA_PTR_SET_VALUE(fallbackTargets_, fallbackTargets) };
      inline Data& setFallbackTargets(vector<Data::FallbackTargets> && fallbackTargets) { DARABONBA_PTR_SET_RVALUE(fallbackTargets_, fallbackTargets) };


      // features Field Functions 
      bool hasFeatures() const { return this->features_ != nullptr;};
      void deleteFeatures() { this->features_ = nullptr;};
      inline       const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
      Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
      inline Data& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
      inline Data& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // logicalModelId Field Functions 
      bool hasLogicalModelId() const { return this->logicalModelId_ != nullptr;};
      void deleteLogicalModelId() { this->logicalModelId_ = nullptr;};
      inline string getLogicalModelId() const { DARABONBA_PTR_GET_DEFAULT(logicalModelId_, "") };
      inline Data& setLogicalModelId(string logicalModelId) { DARABONBA_PTR_SET_VALUE(logicalModelId_, logicalModelId) };


      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const Data::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Data::Meta) };
      inline Data::Meta getMeta() { DARABONBA_PTR_GET(meta_, Data::Meta) };
      inline Data& setMeta(const Data::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Data& setMeta(Data::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // requiresActivation Field Functions 
      bool hasRequiresActivation() const { return this->requiresActivation_ != nullptr;};
      void deleteRequiresActivation() { this->requiresActivation_ = nullptr;};
      inline bool getRequiresActivation() const { DARABONBA_PTR_GET_DEFAULT(requiresActivation_, false) };
      inline Data& setRequiresActivation(bool requiresActivation) { DARABONBA_PTR_SET_VALUE(requiresActivation_, requiresActivation) };


      // responseModel Field Functions 
      bool hasResponseModel() const { return this->responseModel_ != nullptr;};
      void deleteResponseModel() { this->responseModel_ = nullptr;};
      inline string getResponseModel() const { DARABONBA_PTR_GET_DEFAULT(responseModel_, "") };
      inline Data& setResponseModel(string responseModel) { DARABONBA_PTR_SET_VALUE(responseModel_, responseModel) };


      // revision Field Functions 
      bool hasRevision() const { return this->revision_ != nullptr;};
      void deleteRevision() { this->revision_ = nullptr;};
      inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
      inline Data& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


      // routingPolicy Field Functions 
      bool hasRoutingPolicy() const { return this->routingPolicy_ != nullptr;};
      void deleteRoutingPolicy() { this->routingPolicy_ = nullptr;};
      inline string getRoutingPolicy() const { DARABONBA_PTR_GET_DEFAULT(routingPolicy_, "") };
      inline Data& setRoutingPolicy(string routingPolicy) { DARABONBA_PTR_SET_VALUE(routingPolicy_, routingPolicy) };


      // slots Field Functions 
      bool hasSlots() const { return this->slots_ != nullptr;};
      void deleteSlots() { this->slots_ = nullptr;};
      inline const Data::Slots & getSlots() const { DARABONBA_PTR_GET_CONST(slots_, Data::Slots) };
      inline Data::Slots getSlots() { DARABONBA_PTR_GET(slots_, Data::Slots) };
      inline Data& setSlots(const Data::Slots & slots) { DARABONBA_PTR_SET_VALUE(slots_, slots) };
      inline Data& setSlots(Data::Slots && slots) { DARABONBA_PTR_SET_RVALUE(slots_, slots) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<Data::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Data::Targets>) };
      inline vector<Data::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Data::Targets>) };
      inline Data& setTargets(const vector<Data::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline Data& setTargets(vector<Data::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The intersection of supported paths for all primary targets.
      shared_ptr<vector<Data::AvailablePaths>> availablePaths_ {};
      // The call strategy. For the new version of Auto, valid values are balanced, cheap, fast, and quality. For legacy configurations, this can be omitted and the base name remains balanced. This is omitted for Mapping and Weighted.
      shared_ptr<string> callStrategy_ {};
      // The deployment. Saving the intent triggers an independent configuration delivery. Acceptance does not mean the configuration has taken effect.
      shared_ptr<Data::Deployment> deployment_ {};
      // The ordered fallback targets. A maximum of 5 fallback targets are supported. They are deduplicated by the actual card ID and can be an empty array.
      shared_ptr<vector<Data::FallbackTargets>> fallbackTargets_ {};
      // The intersection of Boolean features for the primary targets.
      Darabonba::Json features_ {};
      // The ID of the instance to which the logical model belongs.
      shared_ptr<string> gatewayId_ {};
      // The ID of the independent logical model, which starts with vm-.
      shared_ptr<string> logicalModelId_ {};
      // The capabilities of the primary targets.
      shared_ptr<Data::Meta> meta_ {};
      // The client logical call name. The name can be up to 256 bytes in UTF-8 encoding, must not contain spaces or slashes, and must not start with auto.
      shared_ptr<string> name_ {};
      // Specifies whether activation is required. This is returned only for Auto. A value of true indicates that the AI Credits Router commodity is not activated, and false indicates that it is activated. This is omitted if the read fails or the status is unknown, or for Mapping and Weighted.
      shared_ptr<bool> requiresActivation_ {};
      // The response model. Actual returns the public name of the actual model, and Logical returns the entry name, including SSE.
      shared_ptr<string> responseModel_ {};
      // The revision number. The initial value upon creation is 1, and it increments upon each successful update.
      shared_ptr<int64_t> revision_ {};
      // The routing policy. Valid values: Mapping, Weighted, and Auto. If Auto is specified, targets must be an empty array and slots is required.
      shared_ptr<string> routingPolicy_ {};
      // The slots. This is returned only for Auto. Each of the simple, standard, and complex slots contains 1 to 3 source cards. The three slots are globally deduplicated by modelCardId. This is omitted for Mapping and Weighted.
      shared_ptr<Data::Slots> slots_ {};
      // The primary targets. For Mapping, exactly one target is allowed. For Weighted, the sum of original relative weights must be greater than 0. For Auto, this must be an empty array.
      shared_ptr<vector<Data::Targets>> targets_ {};
      // The time when the business was modified. Dry runs do not advance this time. The time is in ISO 8601 (RFC 3339) format and in the UTC time zone, such as 2026-11-12T00:00:00Z.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLogicalModelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLogicalModelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLogicalModelResponseBody::Data) };
    inline GetLogicalModelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLogicalModelResponseBody::Data) };
    inline GetLogicalModelResponseBody& setData(const GetLogicalModelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLogicalModelResponseBody& setData(GetLogicalModelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLogicalModelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogicalModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. A value of Ok indicates success, and a specific business error code indicates failure.
    shared_ptr<string> code_ {};
    // The business result returned by the logical model operation.
    shared_ptr<GetLogicalModelResponseBody::Data> data_ {};
    // The response message that describes the request processing result.
    shared_ptr<string> message_ {};
    // The request ID, which is generated by the system to trace the current call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

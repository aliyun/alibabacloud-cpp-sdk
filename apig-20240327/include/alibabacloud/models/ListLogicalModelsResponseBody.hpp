// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICALMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICALMODELSRESPONSEBODY_HPP_
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
  class ListLogicalModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicalModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicalModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListLogicalModelsResponseBody() = default ;
    ListLogicalModelsResponseBody(const ListLogicalModelsResponseBody &) = default ;
    ListLogicalModelsResponseBody(ListLogicalModelsResponseBody &&) = default ;
    ListLogicalModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicalModelsResponseBody() = default ;
    ListLogicalModelsResponseBody& operator=(const ListLogicalModelsResponseBody &) = default ;
    ListLogicalModelsResponseBody& operator=(ListLogicalModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
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
          // The ID of the actual source model card within the same instance. The ID starts with "msc-". Virtual machines (VMs) or service overrides are not supported.
          // 
          // This parameter is required.
          shared_ptr<string> modelCardId_ {};
          // The weight. The value is an integer from 0 to 10000 and is saved as the original value. A value of 0 is allowed for the Mapping policy.
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
            // The ID of the actual source card within the same instance. The ID starts with "msc-". VMs or service overrides are not supported.
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
            // The ID of the actual source card within the same instance. The ID starts with "msc-". VMs or service overrides are not supported.
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
            // The ID of the actual source card within the same instance. The ID starts with "msc-". VMs or service overrides are not supported.
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
          // The minimum input token limit when all primary targets declare the limit. This parameter is not returned if the limit of any target is unknown.
          shared_ptr<int64_t> maxInputTokens_ {};
          // The minimum output token limit when all primary targets declare the limit. This parameter is not returned if the limit of any target is unknown.
          shared_ptr<int64_t> maxOutputTokens_ {};
          // The minimum total token limit when all primary targets declare the limit. This parameter is not returned if the limit of any target is unknown.
          shared_ptr<int64_t> maxTokens_ {};
          // The input modalities commonly supported by all primary targets.
          shared_ptr<vector<string>> supportedInputModalities_ {};
          // The output modalities commonly supported by all primary targets.
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
          // The ID of the actual source card within the same instance.
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
          // The ID of the current configuration delivery operation.
          shared_ptr<string> operationId_ {};
          // The object configuration version.
          shared_ptr<int64_t> revision_ {};
          // The configuration delivery status. Valid values: Pending, Running, Succeeded, PartiallyFailed, and Failed. This status is independent of the API release status.
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
          // The call path.
          shared_ptr<string> path_ {};
          // The path type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->availablePaths_ == nullptr
        && this->callStrategy_ == nullptr && this->deployment_ == nullptr && this->fallbackTargets_ == nullptr && this->features_ == nullptr && this->gatewayId_ == nullptr
        && this->logicalModelId_ == nullptr && this->meta_ == nullptr && this->name_ == nullptr && this->requiresActivation_ == nullptr && this->responseModel_ == nullptr
        && this->revision_ == nullptr && this->routingPolicy_ == nullptr && this->slots_ == nullptr && this->targets_ == nullptr && this->updateTime_ == nullptr; };
        // availablePaths Field Functions 
        bool hasAvailablePaths() const { return this->availablePaths_ != nullptr;};
        void deleteAvailablePaths() { this->availablePaths_ = nullptr;};
        inline const vector<Items::AvailablePaths> & getAvailablePaths() const { DARABONBA_PTR_GET_CONST(availablePaths_, vector<Items::AvailablePaths>) };
        inline vector<Items::AvailablePaths> getAvailablePaths() { DARABONBA_PTR_GET(availablePaths_, vector<Items::AvailablePaths>) };
        inline Items& setAvailablePaths(const vector<Items::AvailablePaths> & availablePaths) { DARABONBA_PTR_SET_VALUE(availablePaths_, availablePaths) };
        inline Items& setAvailablePaths(vector<Items::AvailablePaths> && availablePaths) { DARABONBA_PTR_SET_RVALUE(availablePaths_, availablePaths) };


        // callStrategy Field Functions 
        bool hasCallStrategy() const { return this->callStrategy_ != nullptr;};
        void deleteCallStrategy() { this->callStrategy_ = nullptr;};
        inline string getCallStrategy() const { DARABONBA_PTR_GET_DEFAULT(callStrategy_, "") };
        inline Items& setCallStrategy(string callStrategy) { DARABONBA_PTR_SET_VALUE(callStrategy_, callStrategy) };


        // deployment Field Functions 
        bool hasDeployment() const { return this->deployment_ != nullptr;};
        void deleteDeployment() { this->deployment_ = nullptr;};
        inline const Items::Deployment & getDeployment() const { DARABONBA_PTR_GET_CONST(deployment_, Items::Deployment) };
        inline Items::Deployment getDeployment() { DARABONBA_PTR_GET(deployment_, Items::Deployment) };
        inline Items& setDeployment(const Items::Deployment & deployment) { DARABONBA_PTR_SET_VALUE(deployment_, deployment) };
        inline Items& setDeployment(Items::Deployment && deployment) { DARABONBA_PTR_SET_RVALUE(deployment_, deployment) };


        // fallbackTargets Field Functions 
        bool hasFallbackTargets() const { return this->fallbackTargets_ != nullptr;};
        void deleteFallbackTargets() { this->fallbackTargets_ = nullptr;};
        inline const vector<Items::FallbackTargets> & getFallbackTargets() const { DARABONBA_PTR_GET_CONST(fallbackTargets_, vector<Items::FallbackTargets>) };
        inline vector<Items::FallbackTargets> getFallbackTargets() { DARABONBA_PTR_GET(fallbackTargets_, vector<Items::FallbackTargets>) };
        inline Items& setFallbackTargets(const vector<Items::FallbackTargets> & fallbackTargets) { DARABONBA_PTR_SET_VALUE(fallbackTargets_, fallbackTargets) };
        inline Items& setFallbackTargets(vector<Items::FallbackTargets> && fallbackTargets) { DARABONBA_PTR_SET_RVALUE(fallbackTargets_, fallbackTargets) };


        // features Field Functions 
        bool hasFeatures() const { return this->features_ != nullptr;};
        void deleteFeatures() { this->features_ = nullptr;};
        inline         const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
        Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
        inline Items& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
        inline Items& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // logicalModelId Field Functions 
        bool hasLogicalModelId() const { return this->logicalModelId_ != nullptr;};
        void deleteLogicalModelId() { this->logicalModelId_ = nullptr;};
        inline string getLogicalModelId() const { DARABONBA_PTR_GET_DEFAULT(logicalModelId_, "") };
        inline Items& setLogicalModelId(string logicalModelId) { DARABONBA_PTR_SET_VALUE(logicalModelId_, logicalModelId) };


        // meta Field Functions 
        bool hasMeta() const { return this->meta_ != nullptr;};
        void deleteMeta() { this->meta_ = nullptr;};
        inline const Items::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Items::Meta) };
        inline Items::Meta getMeta() { DARABONBA_PTR_GET(meta_, Items::Meta) };
        inline Items& setMeta(const Items::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
        inline Items& setMeta(Items::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // requiresActivation Field Functions 
        bool hasRequiresActivation() const { return this->requiresActivation_ != nullptr;};
        void deleteRequiresActivation() { this->requiresActivation_ = nullptr;};
        inline bool getRequiresActivation() const { DARABONBA_PTR_GET_DEFAULT(requiresActivation_, false) };
        inline Items& setRequiresActivation(bool requiresActivation) { DARABONBA_PTR_SET_VALUE(requiresActivation_, requiresActivation) };


        // responseModel Field Functions 
        bool hasResponseModel() const { return this->responseModel_ != nullptr;};
        void deleteResponseModel() { this->responseModel_ = nullptr;};
        inline string getResponseModel() const { DARABONBA_PTR_GET_DEFAULT(responseModel_, "") };
        inline Items& setResponseModel(string responseModel) { DARABONBA_PTR_SET_VALUE(responseModel_, responseModel) };


        // revision Field Functions 
        bool hasRevision() const { return this->revision_ != nullptr;};
        void deleteRevision() { this->revision_ = nullptr;};
        inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
        inline Items& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


        // routingPolicy Field Functions 
        bool hasRoutingPolicy() const { return this->routingPolicy_ != nullptr;};
        void deleteRoutingPolicy() { this->routingPolicy_ = nullptr;};
        inline string getRoutingPolicy() const { DARABONBA_PTR_GET_DEFAULT(routingPolicy_, "") };
        inline Items& setRoutingPolicy(string routingPolicy) { DARABONBA_PTR_SET_VALUE(routingPolicy_, routingPolicy) };


        // slots Field Functions 
        bool hasSlots() const { return this->slots_ != nullptr;};
        void deleteSlots() { this->slots_ = nullptr;};
        inline const Items::Slots & getSlots() const { DARABONBA_PTR_GET_CONST(slots_, Items::Slots) };
        inline Items::Slots getSlots() { DARABONBA_PTR_GET(slots_, Items::Slots) };
        inline Items& setSlots(const Items::Slots & slots) { DARABONBA_PTR_SET_VALUE(slots_, slots) };
        inline Items& setSlots(Items::Slots && slots) { DARABONBA_PTR_SET_RVALUE(slots_, slots) };


        // targets Field Functions 
        bool hasTargets() const { return this->targets_ != nullptr;};
        void deleteTargets() { this->targets_ = nullptr;};
        inline const vector<Items::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Items::Targets>) };
        inline vector<Items::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Items::Targets>) };
        inline Items& setTargets(const vector<Items::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
        inline Items& setTargets(vector<Items::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Items& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The list of call paths commonly supported by all primary targets.
        shared_ptr<vector<Items::AvailablePaths>> availablePaths_ {};
        // The call strategy. This parameter is returned only for the Auto policy. Valid values: balanced, cheap, fast, and quality. This parameter can be omitted. If omitted, the default strategy is balanced. This parameter is not returned for the Mapping and Weighted policies.
        shared_ptr<string> callStrategy_ {};
        // The configuration delivery record. A successful API response only indicates that the request is accepted, not that the configuration has taken effect.
        shared_ptr<Items::Deployment> deployment_ {};
        // The ordered fallback targets. A maximum of 5 fallback targets are supported. The targets are deduplicated by the actual card ID. This parameter can be an empty array.
        shared_ptr<vector<Items::FallbackTargets>> fallbackTargets_ {};
        // The intersection of the Boolean capabilities of all primary targets.
        Darabonba::Json features_ {};
        // The ID of the gateway instance to which the logical model belongs.
        shared_ptr<string> gatewayId_ {};
        // The logical model ID. The ID starts with "vm-".
        shared_ptr<string> logicalModelId_ {};
        // The aggregated information about the capabilities of the primary targets.
        shared_ptr<Items::Meta> meta_ {};
        // The client logical call name. It supports a maximum of 256 bytes in UTF-8, must not contain spaces or slashes, and must not start with "auto".
        shared_ptr<string> name_ {};
        // Specifies whether activation is required. This parameter is returned only for the Auto policy. The value is true if the AI Credits Router commodity is not activated, and false if it is activated. This parameter is omitted if the read operation fails or the status is unknown. This parameter is omitted for the Mapping and Weighted policies.
        shared_ptr<bool> requiresActivation_ {};
        // The response model type. If the value is Actual, the public name of the actual model is returned. If the value is Logical, the entry name of the logical model is returned.
        shared_ptr<string> responseModel_ {};
        // The object version number. The initial value is 1 upon creation and increments after each successful update.
        shared_ptr<int64_t> revision_ {};
        // The routing policy. Valid values: Mapping, Weighted, and Auto. If the value is Auto, the targets parameter must be an empty array and the slots parameter is required.
        shared_ptr<string> routingPolicy_ {};
        // The slots. This parameter is returned only for the Auto policy. Each of the simple, standard, and complex slots contains 1 to 3 source cards. The three slots are globally deduplicated by modelCardId. This parameter is omitted for the Mapping and Weighted policies.
        shared_ptr<Items::Slots> slots_ {};
        // The primary targets. For the Mapping policy, exactly one target is allowed. For the Weighted policy, the sum of original relative weights must be greater than 0. For the Auto policy, this must be an empty array.
        shared_ptr<vector<Items::Targets>> targets_ {};
        // The last modification time. The time is in the ISO 8601 (RFC 3339) format and UTC time zone, such as 2026-05-15T10:00:00Z.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of logical models.
      shared_ptr<vector<Data::Items>> items_ {};
      // The maximum number of entries returned for the current request.
      shared_ptr<int32_t> maxResults_ {};
      // The cursor token for querying the next page. This parameter is not returned if no more data is available.
      shared_ptr<string> nextToken_ {};
      // The total number of entries.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListLogicalModelsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListLogicalModelsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListLogicalModelsResponseBody::Data) };
    inline ListLogicalModelsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListLogicalModelsResponseBody::Data) };
    inline ListLogicalModelsResponseBody& setData(const ListLogicalModelsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListLogicalModelsResponseBody& setData(ListLogicalModelsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListLogicalModelsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogicalModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<ListLogicalModelsResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

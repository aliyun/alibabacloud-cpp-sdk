// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWLOGICALMODELUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWLOGICALMODELUPDATEREQUEST_HPP_
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
  class PreviewLogicalModelUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewLogicalModelUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(callStrategy, callStrategy_);
      DARABONBA_PTR_TO_JSON(fallbackTargets, fallbackTargets_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(responseModel, responseModel_);
      DARABONBA_PTR_TO_JSON(routingPolicy, routingPolicy_);
      DARABONBA_PTR_TO_JSON(slots, slots_);
      DARABONBA_PTR_TO_JSON(targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewLogicalModelUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(callStrategy, callStrategy_);
      DARABONBA_PTR_FROM_JSON(fallbackTargets, fallbackTargets_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(responseModel, responseModel_);
      DARABONBA_PTR_FROM_JSON(routingPolicy, routingPolicy_);
      DARABONBA_PTR_FROM_JSON(slots, slots_);
      DARABONBA_PTR_FROM_JSON(targets, targets_);
    };
    PreviewLogicalModelUpdateRequest() = default ;
    PreviewLogicalModelUpdateRequest(const PreviewLogicalModelUpdateRequest &) = default ;
    PreviewLogicalModelUpdateRequest(PreviewLogicalModelUpdateRequest &&) = default ;
    PreviewLogicalModelUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewLogicalModelUpdateRequest() = default ;
    PreviewLogicalModelUpdateRequest& operator=(const PreviewLogicalModelUpdateRequest &) = default ;
    PreviewLogicalModelUpdateRequest& operator=(PreviewLogicalModelUpdateRequest &&) = default ;
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
      // The actual source model card ID within the same instance, which starts with msc-. VM or service overrides are not supported.
      // 
      // This parameter is required.
      shared_ptr<string> modelCardId_ {};
      // The weight value. Valid values: integers from 0 to 10000. The original value is preserved. For Mapping, 0 is allowed.
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
        // The actual source card ID within the same instance, which starts with msc-. VM or service overrides are not supported.
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
        // The actual source card ID within the same instance, which starts with msc-. VM or service overrides are not supported.
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
        // The actual source card ID within the same instance, which starts with msc-. VM or service overrides are not supported.
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
      // The complex slot, which requires 1 to 3 source cards. Cards across the three slots are globally deduplicated by modelCardId.
      // 
      // This parameter is required.
      shared_ptr<vector<Slots::Complex>> complex_ {};
      // The simple slot, which requires 1 to 3 source cards. Cards across the three slots are globally deduplicated by modelCardId.
      // 
      // This parameter is required.
      shared_ptr<vector<Slots::Simple>> simple_ {};
      // The standard slot, which requires 1 to 3 source cards. Cards across the three slots are globally deduplicated by modelCardId.
      // 
      // This parameter is required.
      shared_ptr<vector<Slots::Standard>> standard_ {};
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
      // The actual source card ID within the same instance.
      // 
      // This parameter is required.
      shared_ptr<string> modelCardId_ {};
    };

    virtual bool empty() const override { return this->callStrategy_ == nullptr
        && this->fallbackTargets_ == nullptr && this->name_ == nullptr && this->responseModel_ == nullptr && this->routingPolicy_ == nullptr && this->slots_ == nullptr
        && this->targets_ == nullptr; };
    // callStrategy Field Functions 
    bool hasCallStrategy() const { return this->callStrategy_ != nullptr;};
    void deleteCallStrategy() { this->callStrategy_ = nullptr;};
    inline string getCallStrategy() const { DARABONBA_PTR_GET_DEFAULT(callStrategy_, "") };
    inline PreviewLogicalModelUpdateRequest& setCallStrategy(string callStrategy) { DARABONBA_PTR_SET_VALUE(callStrategy_, callStrategy) };


    // fallbackTargets Field Functions 
    bool hasFallbackTargets() const { return this->fallbackTargets_ != nullptr;};
    void deleteFallbackTargets() { this->fallbackTargets_ = nullptr;};
    inline const vector<PreviewLogicalModelUpdateRequest::FallbackTargets> & getFallbackTargets() const { DARABONBA_PTR_GET_CONST(fallbackTargets_, vector<PreviewLogicalModelUpdateRequest::FallbackTargets>) };
    inline vector<PreviewLogicalModelUpdateRequest::FallbackTargets> getFallbackTargets() { DARABONBA_PTR_GET(fallbackTargets_, vector<PreviewLogicalModelUpdateRequest::FallbackTargets>) };
    inline PreviewLogicalModelUpdateRequest& setFallbackTargets(const vector<PreviewLogicalModelUpdateRequest::FallbackTargets> & fallbackTargets) { DARABONBA_PTR_SET_VALUE(fallbackTargets_, fallbackTargets) };
    inline PreviewLogicalModelUpdateRequest& setFallbackTargets(vector<PreviewLogicalModelUpdateRequest::FallbackTargets> && fallbackTargets) { DARABONBA_PTR_SET_RVALUE(fallbackTargets_, fallbackTargets) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PreviewLogicalModelUpdateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // responseModel Field Functions 
    bool hasResponseModel() const { return this->responseModel_ != nullptr;};
    void deleteResponseModel() { this->responseModel_ = nullptr;};
    inline string getResponseModel() const { DARABONBA_PTR_GET_DEFAULT(responseModel_, "") };
    inline PreviewLogicalModelUpdateRequest& setResponseModel(string responseModel) { DARABONBA_PTR_SET_VALUE(responseModel_, responseModel) };


    // routingPolicy Field Functions 
    bool hasRoutingPolicy() const { return this->routingPolicy_ != nullptr;};
    void deleteRoutingPolicy() { this->routingPolicy_ = nullptr;};
    inline string getRoutingPolicy() const { DARABONBA_PTR_GET_DEFAULT(routingPolicy_, "") };
    inline PreviewLogicalModelUpdateRequest& setRoutingPolicy(string routingPolicy) { DARABONBA_PTR_SET_VALUE(routingPolicy_, routingPolicy) };


    // slots Field Functions 
    bool hasSlots() const { return this->slots_ != nullptr;};
    void deleteSlots() { this->slots_ = nullptr;};
    inline const PreviewLogicalModelUpdateRequest::Slots & getSlots() const { DARABONBA_PTR_GET_CONST(slots_, PreviewLogicalModelUpdateRequest::Slots) };
    inline PreviewLogicalModelUpdateRequest::Slots getSlots() { DARABONBA_PTR_GET(slots_, PreviewLogicalModelUpdateRequest::Slots) };
    inline PreviewLogicalModelUpdateRequest& setSlots(const PreviewLogicalModelUpdateRequest::Slots & slots) { DARABONBA_PTR_SET_VALUE(slots_, slots) };
    inline PreviewLogicalModelUpdateRequest& setSlots(PreviewLogicalModelUpdateRequest::Slots && slots) { DARABONBA_PTR_SET_RVALUE(slots_, slots) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<PreviewLogicalModelUpdateRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<PreviewLogicalModelUpdateRequest::Targets>) };
    inline vector<PreviewLogicalModelUpdateRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<PreviewLogicalModelUpdateRequest::Targets>) };
    inline PreviewLogicalModelUpdateRequest& setTargets(const vector<PreviewLogicalModelUpdateRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline PreviewLogicalModelUpdateRequest& setTargets(vector<PreviewLogicalModelUpdateRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The call strategy, which is required for new Auto write requests. Valid values: balanced, cheap, fast, and quality. The new version uses only the basic call name. Do not submit this parameter for Mapping or Weighted. The server performs conditional validation.
    shared_ptr<string> callStrategy_ {};
    // An ordered list of up to 5 fallback targets. The targets are deduplicated by the actual card ID. This can be an empty array.
    // 
    // This parameter is required.
    shared_ptr<vector<PreviewLogicalModelUpdateRequest::FallbackTargets>> fallbackTargets_ {};
    // The client logical call name. The value can be up to 256 bytes in UTF-8 encoding, must not contain spaces or slashes, and must not start with auto.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The response model type. If set to Actual, the public name of the actual model is returned. If set to Logical, the entry name is returned, including SSE.
    // 
    // This parameter is required.
    shared_ptr<string> responseModel_ {};
    // The routing policy. Valid values: Mapping, Weighted, and Auto. If you set this parameter to Auto, targets must be an empty array and slots is required.
    // 
    // This parameter is required.
    shared_ptr<string> routingPolicy_ {};
    // The slots configuration, which is submitted only for Auto. Each of the simple, standard, and complex slots requires 1 to 3 source cards. Cards across the three slots are globally deduplicated by modelCardId. Omit this parameter for Mapping or Weighted.
    shared_ptr<PreviewLogicalModelUpdateRequest::Slots> slots_ {};
    // The primary targets. For Mapping, exactly one item is required. For Weighted, the sum of the original relative weights must be greater than 0. For Auto, this must be an empty array.
    // 
    // This parameter is required.
    shared_ptr<vector<PreviewLogicalModelUpdateRequest::Targets>> targets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

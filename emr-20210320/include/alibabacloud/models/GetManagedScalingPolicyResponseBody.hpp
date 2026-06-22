// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGEDSCALINGPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGEDSCALINGPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetManagedScalingPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagedScalingPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagedScalingPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
    };
    GetManagedScalingPolicyResponseBody() = default ;
    GetManagedScalingPolicyResponseBody(const GetManagedScalingPolicyResponseBody &) = default ;
    GetManagedScalingPolicyResponseBody(GetManagedScalingPolicyResponseBody &&) = default ;
    GetManagedScalingPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagedScalingPolicyResponseBody() = default ;
    GetManagedScalingPolicyResponseBody& operator=(const GetManagedScalingPolicyResponseBody &) = default ;
    GetManagedScalingPolicyResponseBody& operator=(GetManagedScalingPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Constraints, constraints_);
        DARABONBA_PTR_TO_JSON(ScalingPolicyId, scalingPolicyId_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
        DARABONBA_PTR_FROM_JSON(ScalingPolicyId, scalingPolicyId_);
      };
      ScalingPolicy() = default ;
      ScalingPolicy(const ScalingPolicy &) = default ;
      ScalingPolicy(ScalingPolicy &&) = default ;
      ScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingPolicy() = default ;
      ScalingPolicy& operator=(const ScalingPolicy &) = default ;
      ScalingPolicy& operator=(ScalingPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Constraints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Constraints& obj) { 
          DARABONBA_PTR_TO_JSON(MaxCapacity, maxCapacity_);
          DARABONBA_PTR_TO_JSON(MaxOnDemandCapacity, maxOnDemandCapacity_);
          DARABONBA_PTR_TO_JSON(MinCapacity, minCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, Constraints& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxCapacity, maxCapacity_);
          DARABONBA_PTR_FROM_JSON(MaxOnDemandCapacity, maxOnDemandCapacity_);
          DARABONBA_PTR_FROM_JSON(MinCapacity, minCapacity_);
        };
        Constraints() = default ;
        Constraints(const Constraints &) = default ;
        Constraints(Constraints &&) = default ;
        Constraints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Constraints() = default ;
        Constraints& operator=(const Constraints &) = default ;
        Constraints& operator=(Constraints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxCapacity_ == nullptr
        && this->maxOnDemandCapacity_ == nullptr && this->minCapacity_ == nullptr; };
        // maxCapacity Field Functions 
        bool hasMaxCapacity() const { return this->maxCapacity_ != nullptr;};
        void deleteMaxCapacity() { this->maxCapacity_ = nullptr;};
        inline int32_t getMaxCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxCapacity_, 0) };
        inline Constraints& setMaxCapacity(int32_t maxCapacity) { DARABONBA_PTR_SET_VALUE(maxCapacity_, maxCapacity) };


        // maxOnDemandCapacity Field Functions 
        bool hasMaxOnDemandCapacity() const { return this->maxOnDemandCapacity_ != nullptr;};
        void deleteMaxOnDemandCapacity() { this->maxOnDemandCapacity_ = nullptr;};
        inline int32_t getMaxOnDemandCapacity() const { DARABONBA_PTR_GET_DEFAULT(maxOnDemandCapacity_, 0) };
        inline Constraints& setMaxOnDemandCapacity(int32_t maxOnDemandCapacity) { DARABONBA_PTR_SET_VALUE(maxOnDemandCapacity_, maxOnDemandCapacity) };


        // minCapacity Field Functions 
        bool hasMinCapacity() const { return this->minCapacity_ != nullptr;};
        void deleteMinCapacity() { this->minCapacity_ = nullptr;};
        inline int32_t getMinCapacity() const { DARABONBA_PTR_GET_DEFAULT(minCapacity_, 0) };
        inline Constraints& setMinCapacity(int32_t minCapacity) { DARABONBA_PTR_SET_VALUE(minCapacity_, minCapacity) };


      protected:
        // The maximum value.
        shared_ptr<int32_t> maxCapacity_ {};
        // The maximum number of pay-as-you-go task nodes.
        shared_ptr<int32_t> maxOnDemandCapacity_ {};
        // The minimum value.
        shared_ptr<int32_t> minCapacity_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->constraints_ == nullptr && this->scalingPolicyId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ScalingPolicy& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // constraints Field Functions 
      bool hasConstraints() const { return this->constraints_ != nullptr;};
      void deleteConstraints() { this->constraints_ = nullptr;};
      inline const ScalingPolicy::Constraints & getConstraints() const { DARABONBA_PTR_GET_CONST(constraints_, ScalingPolicy::Constraints) };
      inline ScalingPolicy::Constraints getConstraints() { DARABONBA_PTR_GET(constraints_, ScalingPolicy::Constraints) };
      inline ScalingPolicy& setConstraints(const ScalingPolicy::Constraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
      inline ScalingPolicy& setConstraints(ScalingPolicy::Constraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


      // scalingPolicyId Field Functions 
      bool hasScalingPolicyId() const { return this->scalingPolicyId_ != nullptr;};
      void deleteScalingPolicyId() { this->scalingPolicyId_ = nullptr;};
      inline string getScalingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyId_, "") };
      inline ScalingPolicy& setScalingPolicyId(string scalingPolicyId) { DARABONBA_PTR_SET_VALUE(scalingPolicyId_, scalingPolicyId) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The constraints on the maximum and minimum values.
      shared_ptr<ScalingPolicy::Constraints> constraints_ {};
      // The scaling policy ID.
      shared_ptr<string> scalingPolicyId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scalingPolicy_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetManagedScalingPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline const GetManagedScalingPolicyResponseBody::ScalingPolicy & getScalingPolicy() const { DARABONBA_PTR_GET_CONST(scalingPolicy_, GetManagedScalingPolicyResponseBody::ScalingPolicy) };
    inline GetManagedScalingPolicyResponseBody::ScalingPolicy getScalingPolicy() { DARABONBA_PTR_GET(scalingPolicy_, GetManagedScalingPolicyResponseBody::ScalingPolicy) };
    inline GetManagedScalingPolicyResponseBody& setScalingPolicy(const GetManagedScalingPolicyResponseBody::ScalingPolicy & scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };
    inline GetManagedScalingPolicyResponseBody& setScalingPolicy(GetManagedScalingPolicyResponseBody::ScalingPolicy && scalingPolicy) { DARABONBA_PTR_SET_RVALUE(scalingPolicy_, scalingPolicy) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The elastic scaling policy.
    shared_ptr<GetManagedScalingPolicyResponseBody::ScalingPolicy> scalingPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

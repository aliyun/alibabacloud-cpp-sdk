// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssuranceAutoRenewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssuranceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceRenewAttributes, elasticityAssuranceRenewAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssuranceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceRenewAttributes, elasticityAssuranceRenewAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody() = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody(const DescribeElasticityAssuranceAutoRenewAttributeResponseBody &) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody(DescribeElasticityAssuranceAutoRenewAttributeResponseBody &&) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssuranceAutoRenewAttributeResponseBody() = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody& operator=(const DescribeElasticityAssuranceAutoRenewAttributeResponseBody &) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody& operator=(DescribeElasticityAssuranceAutoRenewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticityAssuranceRenewAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticityAssuranceRenewAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticityAssuranceRenewAttribute, elasticityAssuranceRenewAttribute_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticityAssuranceRenewAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticityAssuranceRenewAttribute, elasticityAssuranceRenewAttribute_);
      };
      ElasticityAssuranceRenewAttributes() = default ;
      ElasticityAssuranceRenewAttributes(const ElasticityAssuranceRenewAttributes &) = default ;
      ElasticityAssuranceRenewAttributes(ElasticityAssuranceRenewAttributes &&) = default ;
      ElasticityAssuranceRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticityAssuranceRenewAttributes() = default ;
      ElasticityAssuranceRenewAttributes& operator=(const ElasticityAssuranceRenewAttributes &) = default ;
      ElasticityAssuranceRenewAttributes& operator=(ElasticityAssuranceRenewAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ElasticityAssuranceRenewAttribute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticityAssuranceRenewAttribute& obj) { 
          DARABONBA_PTR_TO_JSON(Period, period_);
          DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
          DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticityAssuranceRenewAttribute& obj) { 
          DARABONBA_PTR_FROM_JSON(Period, period_);
          DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
          DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
        };
        ElasticityAssuranceRenewAttribute() = default ;
        ElasticityAssuranceRenewAttribute(const ElasticityAssuranceRenewAttribute &) = default ;
        ElasticityAssuranceRenewAttribute(ElasticityAssuranceRenewAttribute &&) = default ;
        ElasticityAssuranceRenewAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticityAssuranceRenewAttribute() = default ;
        ElasticityAssuranceRenewAttribute& operator=(const ElasticityAssuranceRenewAttribute &) = default ;
        ElasticityAssuranceRenewAttribute& operator=(ElasticityAssuranceRenewAttribute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->privatePoolOptionsId_ == nullptr && this->renewalStatus_ == nullptr; };
        // period Field Functions 
        bool hasPeriod() const { return this->period_ != nullptr;};
        void deletePeriod() { this->period_ = nullptr;};
        inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
        inline ElasticityAssuranceRenewAttribute& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


        // periodUnit Field Functions 
        bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
        void deletePeriodUnit() { this->periodUnit_ = nullptr;};
        inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
        inline ElasticityAssuranceRenewAttribute& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


        // privatePoolOptionsId Field Functions 
        bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
        void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
        inline string getPrivatePoolOptionsId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsId_, "") };
        inline ElasticityAssuranceRenewAttribute& setPrivatePoolOptionsId(string privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };


        // renewalStatus Field Functions 
        bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
        void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
        inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
        inline ElasticityAssuranceRenewAttribute& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


      protected:
        // The auto-renewal period. Valid values: Valid values: 1, 2, 3, 6, 12, 24, and 36.
        shared_ptr<int32_t> period_ {};
        // The unit of the auto-renewal period. Valid values:
        // 
        // *   Month (default)
        // *   Year
        shared_ptr<string> periodUnit_ {};
        // The ID of the elasticity assurance.
        shared_ptr<string> privatePoolOptionsId_ {};
        // Indicates whether auto-renewal is enabled for the elasticity assurance. Valid values:
        // 
        // *   AutoRenewal: Auto-renewal is enabled for the elasticity assurance.
        // *   Normal: Auto-renewal is disabled for the elasticity assurance.
        // *   NotRenewal: The elasticity assurance is not renewed.
        shared_ptr<string> renewalStatus_ {};
      };

      virtual bool empty() const override { return this->elasticityAssuranceRenewAttribute_ == nullptr; };
      // elasticityAssuranceRenewAttribute Field Functions 
      bool hasElasticityAssuranceRenewAttribute() const { return this->elasticityAssuranceRenewAttribute_ != nullptr;};
      void deleteElasticityAssuranceRenewAttribute() { this->elasticityAssuranceRenewAttribute_ = nullptr;};
      inline const vector<ElasticityAssuranceRenewAttributes::ElasticityAssuranceRenewAttribute> & getElasticityAssuranceRenewAttribute() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceRenewAttribute_, vector<ElasticityAssuranceRenewAttributes::ElasticityAssuranceRenewAttribute>) };
      inline vector<ElasticityAssuranceRenewAttributes::ElasticityAssuranceRenewAttribute> getElasticityAssuranceRenewAttribute() { DARABONBA_PTR_GET(elasticityAssuranceRenewAttribute_, vector<ElasticityAssuranceRenewAttributes::ElasticityAssuranceRenewAttribute>) };
      inline ElasticityAssuranceRenewAttributes& setElasticityAssuranceRenewAttribute(const vector<ElasticityAssuranceRenewAttributes::ElasticityAssuranceRenewAttribute> & elasticityAssuranceRenewAttribute) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceRenewAttribute_, elasticityAssuranceRenewAttribute) };
      inline ElasticityAssuranceRenewAttributes& setElasticityAssuranceRenewAttribute(vector<ElasticityAssuranceRenewAttributes::ElasticityAssuranceRenewAttribute> && elasticityAssuranceRenewAttribute) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceRenewAttribute_, elasticityAssuranceRenewAttribute) };


    protected:
      shared_ptr<vector<ElasticityAssuranceRenewAttributes::ElasticityAssuranceRenewAttribute>> elasticityAssuranceRenewAttribute_ {};
    };

    virtual bool empty() const override { return this->elasticityAssuranceRenewAttributes_ == nullptr
        && this->requestId_ == nullptr; };
    // elasticityAssuranceRenewAttributes Field Functions 
    bool hasElasticityAssuranceRenewAttributes() const { return this->elasticityAssuranceRenewAttributes_ != nullptr;};
    void deleteElasticityAssuranceRenewAttributes() { this->elasticityAssuranceRenewAttributes_ = nullptr;};
    inline const DescribeElasticityAssuranceAutoRenewAttributeResponseBody::ElasticityAssuranceRenewAttributes & getElasticityAssuranceRenewAttributes() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceRenewAttributes_, DescribeElasticityAssuranceAutoRenewAttributeResponseBody::ElasticityAssuranceRenewAttributes) };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBody::ElasticityAssuranceRenewAttributes getElasticityAssuranceRenewAttributes() { DARABONBA_PTR_GET(elasticityAssuranceRenewAttributes_, DescribeElasticityAssuranceAutoRenewAttributeResponseBody::ElasticityAssuranceRenewAttributes) };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBody& setElasticityAssuranceRenewAttributes(const DescribeElasticityAssuranceAutoRenewAttributeResponseBody::ElasticityAssuranceRenewAttributes & elasticityAssuranceRenewAttributes) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceRenewAttributes_, elasticityAssuranceRenewAttributes) };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBody& setElasticityAssuranceRenewAttributes(DescribeElasticityAssuranceAutoRenewAttributeResponseBody::ElasticityAssuranceRenewAttributes && elasticityAssuranceRenewAttributes) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceRenewAttributes_, elasticityAssuranceRenewAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The auto-renewal attribute of the elasticity assurances.
    shared_ptr<DescribeElasticityAssuranceAutoRenewAttributeResponseBody::ElasticityAssuranceRenewAttributes> elasticityAssuranceRenewAttributes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

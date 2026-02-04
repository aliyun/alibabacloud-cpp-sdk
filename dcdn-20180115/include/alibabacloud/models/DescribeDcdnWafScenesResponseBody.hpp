// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSCENESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFSCENESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafScenesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafScenesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScenes, defenseScenes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafScenesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScenes, defenseScenes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnWafScenesResponseBody() = default ;
    DescribeDcdnWafScenesResponseBody(const DescribeDcdnWafScenesResponseBody &) = default ;
    DescribeDcdnWafScenesResponseBody(DescribeDcdnWafScenesResponseBody &&) = default ;
    DescribeDcdnWafScenesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafScenesResponseBody() = default ;
    DescribeDcdnWafScenesResponseBody& operator=(const DescribeDcdnWafScenesResponseBody &) = default ;
    DescribeDcdnWafScenesResponseBody& operator=(DescribeDcdnWafScenesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DefenseScenes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefenseScenes& obj) { 
        DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_TO_JSON(PolicyCount, policyCount_);
        DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      };
      friend void from_json(const Darabonba::Json& j, DefenseScenes& obj) { 
        DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
        DARABONBA_PTR_FROM_JSON(PolicyCount, policyCount_);
        DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      };
      DefenseScenes() = default ;
      DefenseScenes(const DefenseScenes &) = default ;
      DefenseScenes(DefenseScenes &&) = default ;
      DefenseScenes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefenseScenes() = default ;
      DefenseScenes& operator=(const DefenseScenes &) = default ;
      DefenseScenes& operator=(DefenseScenes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defenseScene_ == nullptr
        && this->policyCount_ == nullptr && this->ruleCount_ == nullptr; };
      // defenseScene Field Functions 
      bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
      void deleteDefenseScene() { this->defenseScene_ = nullptr;};
      inline string getDefenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
      inline DefenseScenes& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


      // policyCount Field Functions 
      bool hasPolicyCount() const { return this->policyCount_ != nullptr;};
      void deletePolicyCount() { this->policyCount_ = nullptr;};
      inline int32_t getPolicyCount() const { DARABONBA_PTR_GET_DEFAULT(policyCount_, 0) };
      inline DefenseScenes& setPolicyCount(int32_t policyCount) { DARABONBA_PTR_SET_VALUE(policyCount_, policyCount) };


      // ruleCount Field Functions 
      bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
      void deleteRuleCount() { this->ruleCount_ = nullptr;};
      inline int32_t getRuleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
      inline DefenseScenes& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    protected:
      // The type of the protection policy, which is the same as the DefenseScenes parameter in request parameters.
      shared_ptr<string> defenseScene_ {};
      // The total number of policies of this type that were configured.
      shared_ptr<int32_t> policyCount_ {};
      // The total number of protection rules that were configured in this type of the policy.
      shared_ptr<int32_t> ruleCount_ {};
    };

    virtual bool empty() const override { return this->defenseScenes_ == nullptr
        && this->requestId_ == nullptr; };
    // defenseScenes Field Functions 
    bool hasDefenseScenes() const { return this->defenseScenes_ != nullptr;};
    void deleteDefenseScenes() { this->defenseScenes_ = nullptr;};
    inline const vector<DescribeDcdnWafScenesResponseBody::DefenseScenes> & getDefenseScenes() const { DARABONBA_PTR_GET_CONST(defenseScenes_, vector<DescribeDcdnWafScenesResponseBody::DefenseScenes>) };
    inline vector<DescribeDcdnWafScenesResponseBody::DefenseScenes> getDefenseScenes() { DARABONBA_PTR_GET(defenseScenes_, vector<DescribeDcdnWafScenesResponseBody::DefenseScenes>) };
    inline DescribeDcdnWafScenesResponseBody& setDefenseScenes(const vector<DescribeDcdnWafScenesResponseBody::DefenseScenes> & defenseScenes) { DARABONBA_PTR_SET_VALUE(defenseScenes_, defenseScenes) };
    inline DescribeDcdnWafScenesResponseBody& setDefenseScenes(vector<DescribeDcdnWafScenesResponseBody::DefenseScenes> && defenseScenes) { DARABONBA_PTR_SET_RVALUE(defenseScenes_, defenseScenes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafScenesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types of the protection policies.
    shared_ptr<vector<DescribeDcdnWafScenesResponseBody::DefenseScenes>> defenseScenes_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

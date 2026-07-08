// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULESFORTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULESFORTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class ListConfigRulesForTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRulesForTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRulesForTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConfigRulesForTargetResponseBody() = default ;
    ListConfigRulesForTargetResponseBody(const ListConfigRulesForTargetResponseBody &) = default ;
    ListConfigRulesForTargetResponseBody(ListConfigRulesForTargetResponseBody &&) = default ;
    ListConfigRulesForTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRulesForTargetResponseBody() = default ;
    ListConfigRulesForTargetResponseBody& operator=(const ListConfigRulesForTargetResponseBody &) = default ;
    ListConfigRulesForTargetResponseBody& operator=(ListConfigRulesForTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
        DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(Remediation, remediation_);
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
        DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(Remediation, remediation_);
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
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
      virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->configRuleId_ == nullptr && this->policyType_ == nullptr && this->remediation_ == nullptr && this->tagKey_ == nullptr && this->tagValue_ == nullptr
        && this->targetId_ == nullptr && this->targetType_ == nullptr; };
      // aggregatorId Field Functions 
      bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
      void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
      inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
      inline Data& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


      // configRuleId Field Functions 
      bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
      void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
      inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
      inline Data& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline Data& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // remediation Field Functions 
      bool hasRemediation() const { return this->remediation_ != nullptr;};
      void deleteRemediation() { this->remediation_ = nullptr;};
      inline bool getRemediation() const { DARABONBA_PTR_GET_DEFAULT(remediation_, false) };
      inline Data& setRemediation(bool remediation) { DARABONBA_PTR_SET_VALUE(remediation_, remediation) };


      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Data& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Data& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Data& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Data& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The ID of the account group.
      // 
      // You can use the ID to query the content of the related resource non-compliance report in Cloud Config.
      // 
      // > This parameter is returned only if you use the Tag Policy feature in multi-account mode.
      shared_ptr<string> aggregatorId_ {};
      // The ID of the rule.
      shared_ptr<string> configRuleId_ {};
      // The use scenario of the tag policy. Valid values:
      // 
      // - tags: enables tags with specified tag values to be added to resources.
      // 
      // - rg_inherit: enables resources in a resource group to automatically inherit tags from the resource group.
      shared_ptr<string> policyType_ {};
      // Indicates whether automatic remediation is enabled. Valid values:
      // 
      // - true
      // 
      // - false
      shared_ptr<bool> remediation_ {};
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value for automatic remediation.
      shared_ptr<string> tagValue_ {};
      // The ID of the object.
      shared_ptr<string> targetId_ {};
      // The type of the object. Valid values:
      // 
      // - USER: the current logon account. This value is available if you use the Tag Policy feature in single-account mode.
      // 
      // - ROOT: the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
      // 
      // - FOLDER: a folder other than the Root folder in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
      // 
      // - ACCOUNT: a member in the resource directory. This value is available if you use the Tag Policy feature in multi-account mode.
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListConfigRulesForTargetResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListConfigRulesForTargetResponseBody::Data>) };
    inline vector<ListConfigRulesForTargetResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListConfigRulesForTargetResponseBody::Data>) };
    inline ListConfigRulesForTargetResponseBody& setData(const vector<ListConfigRulesForTargetResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConfigRulesForTargetResponseBody& setData(vector<ListConfigRulesForTargetResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConfigRulesForTargetResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConfigRulesForTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The tag detection tasks.
    shared_ptr<vector<ListConfigRulesForTargetResponseBody::Data>> data_ {};
    // Indicates whether the next query is required.
    // 
    // - If the value of this parameter is empty (`"NextToken": ""`), all results are returned, and the next query is not required.
    // 
    // - If the value of this parameter is not empty, the next query is required, and the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif

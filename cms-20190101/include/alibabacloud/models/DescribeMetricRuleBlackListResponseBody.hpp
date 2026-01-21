// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULEBLACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleBlackListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleBlackListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DescribeMetricRuleBlackList, describeMetricRuleBlackList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleBlackListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DescribeMetricRuleBlackList, describeMetricRuleBlackList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMetricRuleBlackListResponseBody() = default ;
    DescribeMetricRuleBlackListResponseBody(const DescribeMetricRuleBlackListResponseBody &) = default ;
    DescribeMetricRuleBlackListResponseBody(DescribeMetricRuleBlackListResponseBody &&) = default ;
    DescribeMetricRuleBlackListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleBlackListResponseBody() = default ;
    DescribeMetricRuleBlackListResponseBody& operator=(const DescribeMetricRuleBlackListResponseBody &) = default ;
    DescribeMetricRuleBlackListResponseBody& operator=(DescribeMetricRuleBlackListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DescribeMetricRuleBlackList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DescribeMetricRuleBlackList& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(EnableEndTime, enableEndTime_);
        DARABONBA_PTR_TO_JSON(EnableStartTime, enableStartTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Instances, instances_);
        DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
        DARABONBA_PTR_TO_JSON(ScopeValue, scopeValue_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DescribeMetricRuleBlackList& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(EnableEndTime, enableEndTime_);
        DARABONBA_PTR_FROM_JSON(EnableStartTime, enableStartTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Instances, instances_);
        DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
        DARABONBA_PTR_FROM_JSON(ScopeValue, scopeValue_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DescribeMetricRuleBlackList() = default ;
      DescribeMetricRuleBlackList(const DescribeMetricRuleBlackList &) = default ;
      DescribeMetricRuleBlackList(DescribeMetricRuleBlackList &&) = default ;
      DescribeMetricRuleBlackList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DescribeMetricRuleBlackList() = default ;
      DescribeMetricRuleBlackList& operator=(const DescribeMetricRuleBlackList &) = default ;
      DescribeMetricRuleBlackList& operator=(DescribeMetricRuleBlackList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Resource, resource_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
        };
        Metrics() = default ;
        Metrics(const Metrics &) = default ;
        Metrics(Metrics &&) = default ;
        Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metrics() = default ;
        Metrics& operator=(const Metrics &) = default ;
        Metrics& operator=(Metrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->metricName_ == nullptr
        && this->resource_ == nullptr; };
        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline Metrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
        inline Metrics& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      protected:
        // The metric name.
        shared_ptr<string> metricName_ {};
        // The extended dimension of the instance. For example, `{"device":"C:"}` specifies that the blacklist policy is applied to all C disks of the specified Elastic Compute Service (ECS) instance.
        shared_ptr<string> resource_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->createTime_ == nullptr && this->effectiveTime_ == nullptr && this->enableEndTime_ == nullptr && this->enableStartTime_ == nullptr && this->id_ == nullptr
        && this->instances_ == nullptr && this->isEnable_ == nullptr && this->metrics_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr
        && this->scopeType_ == nullptr && this->scopeValue_ == nullptr && this->updateTime_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline DescribeMetricRuleBlackList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DescribeMetricRuleBlackList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline DescribeMetricRuleBlackList& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // enableEndTime Field Functions 
      bool hasEnableEndTime() const { return this->enableEndTime_ != nullptr;};
      void deleteEnableEndTime() { this->enableEndTime_ = nullptr;};
      inline int64_t getEnableEndTime() const { DARABONBA_PTR_GET_DEFAULT(enableEndTime_, 0L) };
      inline DescribeMetricRuleBlackList& setEnableEndTime(int64_t enableEndTime) { DARABONBA_PTR_SET_VALUE(enableEndTime_, enableEndTime) };


      // enableStartTime Field Functions 
      bool hasEnableStartTime() const { return this->enableStartTime_ != nullptr;};
      void deleteEnableStartTime() { this->enableStartTime_ = nullptr;};
      inline int64_t getEnableStartTime() const { DARABONBA_PTR_GET_DEFAULT(enableStartTime_, 0L) };
      inline DescribeMetricRuleBlackList& setEnableStartTime(int64_t enableStartTime) { DARABONBA_PTR_SET_VALUE(enableStartTime_, enableStartTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DescribeMetricRuleBlackList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<string> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
      inline vector<string> getInstances() { DARABONBA_PTR_GET(instances_, vector<string>) };
      inline DescribeMetricRuleBlackList& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline DescribeMetricRuleBlackList& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // isEnable Field Functions 
      bool hasIsEnable() const { return this->isEnable_ != nullptr;};
      void deleteIsEnable() { this->isEnable_ = nullptr;};
      inline bool getIsEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, false) };
      inline DescribeMetricRuleBlackList& setIsEnable(bool isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const vector<DescribeMetricRuleBlackList::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<DescribeMetricRuleBlackList::Metrics>) };
      inline vector<DescribeMetricRuleBlackList::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<DescribeMetricRuleBlackList::Metrics>) };
      inline DescribeMetricRuleBlackList& setMetrics(const vector<DescribeMetricRuleBlackList::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline DescribeMetricRuleBlackList& setMetrics(vector<DescribeMetricRuleBlackList::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DescribeMetricRuleBlackList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline DescribeMetricRuleBlackList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // scopeType Field Functions 
      bool hasScopeType() const { return this->scopeType_ != nullptr;};
      void deleteScopeType() { this->scopeType_ = nullptr;};
      inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
      inline DescribeMetricRuleBlackList& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


      // scopeValue Field Functions 
      bool hasScopeValue() const { return this->scopeValue_ != nullptr;};
      void deleteScopeValue() { this->scopeValue_ = nullptr;};
      inline const vector<string> & getScopeValue() const { DARABONBA_PTR_GET_CONST(scopeValue_, vector<string>) };
      inline vector<string> getScopeValue() { DARABONBA_PTR_GET(scopeValue_, vector<string>) };
      inline DescribeMetricRuleBlackList& setScopeValue(const vector<string> & scopeValue) { DARABONBA_PTR_SET_VALUE(scopeValue_, scopeValue) };
      inline DescribeMetricRuleBlackList& setScopeValue(vector<string> && scopeValue) { DARABONBA_PTR_SET_RVALUE(scopeValue_, scopeValue) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline DescribeMetricRuleBlackList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The category of the cloud service. For example, ApsaraDB for Redis includes the following categories: ApsaraDB for Redis (standard architecture), ApsaraDB for Redis (cluster architecture), and ApsaraDB for Redis (read/write splitting architecture). In this case, the valid values of this parameter for ApsaraDB for Redis include `kvstore_standard`, `kvstore_sharding`, and `kvstore_splitrw`.
      shared_ptr<string> category_ {};
      // The timestamp when the blacklist policy was created.
      // 
      // Unit: milliseconds.
      shared_ptr<string> createTime_ {};
      // The time range within which the blacklist policy is effective.
      shared_ptr<string> effectiveTime_ {};
      // The timestamp when the blacklist policy started to take effect.
      // 
      // Unit: milliseconds.
      shared_ptr<int64_t> enableEndTime_ {};
      // The timestamp when the blacklist policy expired.
      // 
      // Unit: milliseconds.
      shared_ptr<int64_t> enableStartTime_ {};
      // The ID of the blacklist policy.
      shared_ptr<string> id_ {};
      // The IDs of the instances that belong to the specified cloud service.
      shared_ptr<vector<string>> instances_ {};
      // The status of the blacklist policy. Valid values:
      // 
      // *   true: The blacklist policy is enabled.
      // *   false: The blacklist policy is disabled.
      shared_ptr<bool> isEnable_ {};
      // The metrics of the instance.
      shared_ptr<vector<DescribeMetricRuleBlackList::Metrics>> metrics_ {};
      // The name of the blacklist policy.
      shared_ptr<string> name_ {};
      // The namespace of the cloud service.
      shared_ptr<string> namespace_ {};
      // The effective scope of the blacklist policy. Valid values:
      // 
      // *   USER: The blacklist policy takes effect only within the current Alibaba Cloud account.
      // *   GROUP: The blacklist policy takes effect only within the specified application group.
      shared_ptr<string> scopeType_ {};
      // The IDs of the application groups.
      shared_ptr<vector<string>> scopeValue_ {};
      // The timestamp when the blacklist policy was modified.
      // 
      // Unit: milliseconds.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->describeMetricRuleBlackList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetricRuleBlackListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // describeMetricRuleBlackList Field Functions 
    bool hasDescribeMetricRuleBlackList() const { return this->describeMetricRuleBlackList_ != nullptr;};
    void deleteDescribeMetricRuleBlackList() { this->describeMetricRuleBlackList_ = nullptr;};
    inline const vector<DescribeMetricRuleBlackListResponseBody::DescribeMetricRuleBlackList> & getDescribeMetricRuleBlackList() const { DARABONBA_PTR_GET_CONST(describeMetricRuleBlackList_, vector<DescribeMetricRuleBlackListResponseBody::DescribeMetricRuleBlackList>) };
    inline vector<DescribeMetricRuleBlackListResponseBody::DescribeMetricRuleBlackList> getDescribeMetricRuleBlackList() { DARABONBA_PTR_GET(describeMetricRuleBlackList_, vector<DescribeMetricRuleBlackListResponseBody::DescribeMetricRuleBlackList>) };
    inline DescribeMetricRuleBlackListResponseBody& setDescribeMetricRuleBlackList(const vector<DescribeMetricRuleBlackListResponseBody::DescribeMetricRuleBlackList> & describeMetricRuleBlackList) { DARABONBA_PTR_SET_VALUE(describeMetricRuleBlackList_, describeMetricRuleBlackList) };
    inline DescribeMetricRuleBlackListResponseBody& setDescribeMetricRuleBlackList(vector<DescribeMetricRuleBlackListResponseBody::DescribeMetricRuleBlackList> && describeMetricRuleBlackList) { DARABONBA_PTR_SET_RVALUE(describeMetricRuleBlackList_, describeMetricRuleBlackList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleBlackListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleBlackListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleBlackListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMetricRuleBlackListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The categories of the Alibaba Cloud service. For example, ApsaraDB for Redis includes the following categories: ApsaraDB for Redis (standard architecture), ApsaraDB for Redis (cluster architecture), and ApsaraDB for Redis (read/write splitting architecture). In this case, the valid values of this parameter for ApsaraDB for Redis include `kvstore_standard`, `kvstore_sharding`, and `kvstore_splitrw`.
    shared_ptr<string> code_ {};
    // The queried blacklist policies.
    shared_ptr<vector<DescribeMetricRuleBlackListResponseBody::DescribeMetricRuleBlackList>> describeMetricRuleBlackList_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The namespace of the cloud service.
    shared_ptr<string> requestId_ {};
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of different cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<bool> success_ {};
    // The timestamp when the blacklist policy was created.
    // 
    // Unit: milliseconds.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

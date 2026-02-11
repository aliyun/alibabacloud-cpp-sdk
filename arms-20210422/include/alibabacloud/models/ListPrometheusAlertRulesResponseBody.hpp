// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListPrometheusAlertRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrometheusAlertRules, prometheusAlertRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrometheusAlertRules, prometheusAlertRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrometheusAlertRulesResponseBody() = default ;
    ListPrometheusAlertRulesResponseBody(const ListPrometheusAlertRulesResponseBody &) = default ;
    ListPrometheusAlertRulesResponseBody(ListPrometheusAlertRulesResponseBody &&) = default ;
    ListPrometheusAlertRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusAlertRulesResponseBody() = default ;
    ListPrometheusAlertRulesResponseBody& operator=(const ListPrometheusAlertRulesResponseBody &) = default ;
    ListPrometheusAlertRulesResponseBody& operator=(ListPrometheusAlertRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrometheusAlertRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrometheusAlertRules& obj) { 
        DARABONBA_PTR_TO_JSON(AlertId, alertId_);
        DARABONBA_PTR_TO_JSON(AlertName, alertName_);
        DARABONBA_PTR_TO_JSON(Annotations, annotations_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(DispatchRuleId, dispatchRuleId_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PrometheusAlertRules& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
        DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
        DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(DispatchRuleId, dispatchRuleId_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      PrometheusAlertRules() = default ;
      PrometheusAlertRules(const PrometheusAlertRules &) = default ;
      PrometheusAlertRules(PrometheusAlertRules &&) = default ;
      PrometheusAlertRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrometheusAlertRules() = default ;
      PrometheusAlertRules& operator=(const PrometheusAlertRules &) = default ;
      PrometheusAlertRules& operator=(PrometheusAlertRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
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
        inline Labels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
      };

      class Annotations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Annotations& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Annotations& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Annotations() = default ;
        Annotations(const Annotations &) = default ;
        Annotations(Annotations &&) = default ;
        Annotations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Annotations() = default ;
        Annotations& operator=(const Annotations &) = default ;
        Annotations& operator=(Annotations &&) = default ;
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
        inline Annotations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Annotations& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->alertId_ == nullptr
        && this->alertName_ == nullptr && this->annotations_ == nullptr && this->clusterId_ == nullptr && this->dispatchRuleId_ == nullptr && this->duration_ == nullptr
        && this->expression_ == nullptr && this->labels_ == nullptr && this->message_ == nullptr && this->notifyType_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
      // alertId Field Functions 
      bool hasAlertId() const { return this->alertId_ != nullptr;};
      void deleteAlertId() { this->alertId_ = nullptr;};
      inline int64_t getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
      inline PrometheusAlertRules& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


      // alertName Field Functions 
      bool hasAlertName() const { return this->alertName_ != nullptr;};
      void deleteAlertName() { this->alertName_ = nullptr;};
      inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
      inline PrometheusAlertRules& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline const vector<PrometheusAlertRules::Annotations> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<PrometheusAlertRules::Annotations>) };
      inline vector<PrometheusAlertRules::Annotations> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<PrometheusAlertRules::Annotations>) };
      inline PrometheusAlertRules& setAnnotations(const vector<PrometheusAlertRules::Annotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
      inline PrometheusAlertRules& setAnnotations(vector<PrometheusAlertRules::Annotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline PrometheusAlertRules& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // dispatchRuleId Field Functions 
      bool hasDispatchRuleId() const { return this->dispatchRuleId_ != nullptr;};
      void deleteDispatchRuleId() { this->dispatchRuleId_ = nullptr;};
      inline int64_t getDispatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleId_, 0L) };
      inline PrometheusAlertRules& setDispatchRuleId(int64_t dispatchRuleId) { DARABONBA_PTR_SET_VALUE(dispatchRuleId_, dispatchRuleId) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline PrometheusAlertRules& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline PrometheusAlertRules& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<PrometheusAlertRules::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<PrometheusAlertRules::Labels>) };
      inline vector<PrometheusAlertRules::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<PrometheusAlertRules::Labels>) };
      inline PrometheusAlertRules& setLabels(const vector<PrometheusAlertRules::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline PrometheusAlertRules& setLabels(vector<PrometheusAlertRules::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline PrometheusAlertRules& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // notifyType Field Functions 
      bool hasNotifyType() const { return this->notifyType_ != nullptr;};
      void deleteNotifyType() { this->notifyType_ = nullptr;};
      inline string getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
      inline PrometheusAlertRules& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline PrometheusAlertRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PrometheusAlertRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<int64_t> alertId_ {};
      shared_ptr<string> alertName_ {};
      shared_ptr<vector<PrometheusAlertRules::Annotations>> annotations_ {};
      shared_ptr<string> clusterId_ {};
      shared_ptr<int64_t> dispatchRuleId_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> expression_ {};
      shared_ptr<vector<PrometheusAlertRules::Labels>> labels_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> notifyType_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->prometheusAlertRules_ == nullptr
        && this->requestId_ == nullptr; };
    // prometheusAlertRules Field Functions 
    bool hasPrometheusAlertRules() const { return this->prometheusAlertRules_ != nullptr;};
    void deletePrometheusAlertRules() { this->prometheusAlertRules_ = nullptr;};
    inline const vector<ListPrometheusAlertRulesResponseBody::PrometheusAlertRules> & getPrometheusAlertRules() const { DARABONBA_PTR_GET_CONST(prometheusAlertRules_, vector<ListPrometheusAlertRulesResponseBody::PrometheusAlertRules>) };
    inline vector<ListPrometheusAlertRulesResponseBody::PrometheusAlertRules> getPrometheusAlertRules() { DARABONBA_PTR_GET(prometheusAlertRules_, vector<ListPrometheusAlertRulesResponseBody::PrometheusAlertRules>) };
    inline ListPrometheusAlertRulesResponseBody& setPrometheusAlertRules(const vector<ListPrometheusAlertRulesResponseBody::PrometheusAlertRules> & prometheusAlertRules) { DARABONBA_PTR_SET_VALUE(prometheusAlertRules_, prometheusAlertRules) };
    inline ListPrometheusAlertRulesResponseBody& setPrometheusAlertRules(vector<ListPrometheusAlertRulesResponseBody::PrometheusAlertRules> && prometheusAlertRules) { DARABONBA_PTR_SET_RVALUE(prometheusAlertRules_, prometheusAlertRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusAlertRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListPrometheusAlertRulesResponseBody::PrometheusAlertRules>> prometheusAlertRules_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif

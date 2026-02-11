// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTTEMPLATESRESPONSEBODY_HPP_
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
  class ListPrometheusAlertTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusAlertTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrometheusAlertTemplates, prometheusAlertTemplates_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusAlertTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrometheusAlertTemplates, prometheusAlertTemplates_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPrometheusAlertTemplatesResponseBody() = default ;
    ListPrometheusAlertTemplatesResponseBody(const ListPrometheusAlertTemplatesResponseBody &) = default ;
    ListPrometheusAlertTemplatesResponseBody(ListPrometheusAlertTemplatesResponseBody &&) = default ;
    ListPrometheusAlertTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusAlertTemplatesResponseBody() = default ;
    ListPrometheusAlertTemplatesResponseBody& operator=(const ListPrometheusAlertTemplatesResponseBody &) = default ;
    ListPrometheusAlertTemplatesResponseBody& operator=(ListPrometheusAlertTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrometheusAlertTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrometheusAlertTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(AlertName, alertName_);
        DARABONBA_PTR_TO_JSON(Annotations, annotations_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, PrometheusAlertTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
        DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      PrometheusAlertTemplates() = default ;
      PrometheusAlertTemplates(const PrometheusAlertTemplates &) = default ;
      PrometheusAlertTemplates(PrometheusAlertTemplates &&) = default ;
      PrometheusAlertTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrometheusAlertTemplates() = default ;
      PrometheusAlertTemplates& operator=(const PrometheusAlertTemplates &) = default ;
      PrometheusAlertTemplates& operator=(PrometheusAlertTemplates &&) = default ;
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

      virtual bool empty() const override { return this->alertName_ == nullptr
        && this->annotations_ == nullptr && this->description_ == nullptr && this->duration_ == nullptr && this->expression_ == nullptr && this->labels_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
      // alertName Field Functions 
      bool hasAlertName() const { return this->alertName_ != nullptr;};
      void deleteAlertName() { this->alertName_ = nullptr;};
      inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
      inline PrometheusAlertTemplates& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


      // annotations Field Functions 
      bool hasAnnotations() const { return this->annotations_ != nullptr;};
      void deleteAnnotations() { this->annotations_ = nullptr;};
      inline const vector<PrometheusAlertTemplates::Annotations> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<PrometheusAlertTemplates::Annotations>) };
      inline vector<PrometheusAlertTemplates::Annotations> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<PrometheusAlertTemplates::Annotations>) };
      inline PrometheusAlertTemplates& setAnnotations(const vector<PrometheusAlertTemplates::Annotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
      inline PrometheusAlertTemplates& setAnnotations(vector<PrometheusAlertTemplates::Annotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PrometheusAlertTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline PrometheusAlertTemplates& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline PrometheusAlertTemplates& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<PrometheusAlertTemplates::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<PrometheusAlertTemplates::Labels>) };
      inline vector<PrometheusAlertTemplates::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<PrometheusAlertTemplates::Labels>) };
      inline PrometheusAlertTemplates& setLabels(const vector<PrometheusAlertTemplates::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline PrometheusAlertTemplates& setLabels(vector<PrometheusAlertTemplates::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PrometheusAlertTemplates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline PrometheusAlertTemplates& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> alertName_ {};
      shared_ptr<vector<PrometheusAlertTemplates::Annotations>> annotations_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> duration_ {};
      shared_ptr<string> expression_ {};
      shared_ptr<vector<PrometheusAlertTemplates::Labels>> labels_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->prometheusAlertTemplates_ == nullptr
        && this->requestId_ == nullptr; };
    // prometheusAlertTemplates Field Functions 
    bool hasPrometheusAlertTemplates() const { return this->prometheusAlertTemplates_ != nullptr;};
    void deletePrometheusAlertTemplates() { this->prometheusAlertTemplates_ = nullptr;};
    inline const vector<ListPrometheusAlertTemplatesResponseBody::PrometheusAlertTemplates> & getPrometheusAlertTemplates() const { DARABONBA_PTR_GET_CONST(prometheusAlertTemplates_, vector<ListPrometheusAlertTemplatesResponseBody::PrometheusAlertTemplates>) };
    inline vector<ListPrometheusAlertTemplatesResponseBody::PrometheusAlertTemplates> getPrometheusAlertTemplates() { DARABONBA_PTR_GET(prometheusAlertTemplates_, vector<ListPrometheusAlertTemplatesResponseBody::PrometheusAlertTemplates>) };
    inline ListPrometheusAlertTemplatesResponseBody& setPrometheusAlertTemplates(const vector<ListPrometheusAlertTemplatesResponseBody::PrometheusAlertTemplates> & prometheusAlertTemplates) { DARABONBA_PTR_SET_VALUE(prometheusAlertTemplates_, prometheusAlertTemplates) };
    inline ListPrometheusAlertTemplatesResponseBody& setPrometheusAlertTemplates(vector<ListPrometheusAlertTemplatesResponseBody::PrometheusAlertTemplates> && prometheusAlertTemplates) { DARABONBA_PTR_SET_RVALUE(prometheusAlertTemplates_, prometheusAlertTemplates) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusAlertTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListPrometheusAlertTemplatesResponseBody::PrometheusAlertTemplates>> prometheusAlertTemplates_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTTEMPLATESRESPONSEBODYPROMETHEUSALERTTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTTEMPLATESRESPONSEBODYPROMETHEUSALERTTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations.hpp>
#include <alibabacloud/models/ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates() = default ;
    ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates(const ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates &) = default ;
    ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates(ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates &&) = default ;
    ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates() = default ;
    ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& operator=(const ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates &) = default ;
    ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& operator=(ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertName_ != nullptr
        && this->annotations_ != nullptr && this->description_ != nullptr && this->duration_ != nullptr && this->expression_ != nullptr && this->labels_ != nullptr
        && this->type_ != nullptr && this->version_ != nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations>) };
    inline vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations>) };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setAnnotations(const vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setAnnotations(vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels>) };
    inline vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels>) };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setLabels(const vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setLabels(vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplates& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the alert rule.
    std::shared_ptr<string> alertName_ = nullptr;
    // The annotations of the alert rule.
    std::shared_ptr<vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesAnnotations>> annotations_ = nullptr;
    // The content of the alert notification. Tags can be referenced in the {{$labels.xxx}} format.
    std::shared_ptr<string> description_ = nullptr;
    // The duration of the alert. Valid values: 1 to 1440. Unit: minutes.
    std::shared_ptr<string> duration_ = nullptr;
    // The expression of the alert rule.
    std::shared_ptr<string> expression_ = nullptr;
    // The tags of the alert rule.
    std::shared_ptr<vector<Models::ListPrometheusAlertTemplatesResponseBodyPrometheusAlertTemplatesLabels>> labels_ = nullptr;
    // The type of the alert rule.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the alert rule.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

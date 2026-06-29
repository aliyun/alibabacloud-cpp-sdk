// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_TASKTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/TaskTemplateOptionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class TaskTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(ResourceKey, resourceKey_);
      DARABONBA_PTR_TO_JSON(SelectQuestions, selectQuestions_);
      DARABONBA_PTR_TO_JSON(TemplateOptionMap, templateOptionMap_);
      DARABONBA_PTR_TO_JSON(TemplateRelationId, templateRelationId_);
    };
    friend void from_json(const Darabonba::Json& j, TaskTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(ResourceKey, resourceKey_);
      DARABONBA_PTR_FROM_JSON(SelectQuestions, selectQuestions_);
      DARABONBA_PTR_FROM_JSON(TemplateOptionMap, templateOptionMap_);
      DARABONBA_PTR_FROM_JSON(TemplateRelationId, templateRelationId_);
    };
    TaskTemplateConfig() = default ;
    TaskTemplateConfig(const TaskTemplateConfig &) = default ;
    TaskTemplateConfig(TaskTemplateConfig &&) = default ;
    TaskTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskTemplateConfig() = default ;
    TaskTemplateConfig& operator=(const TaskTemplateConfig &) = default ;
    TaskTemplateConfig& operator=(TaskTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exif_ == nullptr
        && this->resourceKey_ == nullptr && this->selectQuestions_ == nullptr && this->templateOptionMap_ == nullptr && this->templateRelationId_ == nullptr; };
    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline const map<string, string> & getExif() const { DARABONBA_PTR_GET_CONST(exif_, map<string, string>) };
    inline map<string, string> getExif() { DARABONBA_PTR_GET(exif_, map<string, string>) };
    inline TaskTemplateConfig& setExif(const map<string, string> & exif) { DARABONBA_PTR_SET_VALUE(exif_, exif) };
    inline TaskTemplateConfig& setExif(map<string, string> && exif) { DARABONBA_PTR_SET_RVALUE(exif_, exif) };


    // resourceKey Field Functions 
    bool hasResourceKey() const { return this->resourceKey_ != nullptr;};
    void deleteResourceKey() { this->resourceKey_ = nullptr;};
    inline string getResourceKey() const { DARABONBA_PTR_GET_DEFAULT(resourceKey_, "") };
    inline TaskTemplateConfig& setResourceKey(string resourceKey) { DARABONBA_PTR_SET_VALUE(resourceKey_, resourceKey) };


    // selectQuestions Field Functions 
    bool hasSelectQuestions() const { return this->selectQuestions_ != nullptr;};
    void deleteSelectQuestions() { this->selectQuestions_ = nullptr;};
    inline const vector<string> & getSelectQuestions() const { DARABONBA_PTR_GET_CONST(selectQuestions_, vector<string>) };
    inline vector<string> getSelectQuestions() { DARABONBA_PTR_GET(selectQuestions_, vector<string>) };
    inline TaskTemplateConfig& setSelectQuestions(const vector<string> & selectQuestions) { DARABONBA_PTR_SET_VALUE(selectQuestions_, selectQuestions) };
    inline TaskTemplateConfig& setSelectQuestions(vector<string> && selectQuestions) { DARABONBA_PTR_SET_RVALUE(selectQuestions_, selectQuestions) };


    // templateOptionMap Field Functions 
    bool hasTemplateOptionMap() const { return this->templateOptionMap_ != nullptr;};
    void deleteTemplateOptionMap() { this->templateOptionMap_ = nullptr;};
    inline const map<string, TaskTemplateOptionConfig> & getTemplateOptionMap() const { DARABONBA_PTR_GET_CONST(templateOptionMap_, map<string, TaskTemplateOptionConfig>) };
    inline map<string, TaskTemplateOptionConfig> getTemplateOptionMap() { DARABONBA_PTR_GET(templateOptionMap_, map<string, TaskTemplateOptionConfig>) };
    inline TaskTemplateConfig& setTemplateOptionMap(const map<string, TaskTemplateOptionConfig> & templateOptionMap) { DARABONBA_PTR_SET_VALUE(templateOptionMap_, templateOptionMap) };
    inline TaskTemplateConfig& setTemplateOptionMap(map<string, TaskTemplateOptionConfig> && templateOptionMap) { DARABONBA_PTR_SET_RVALUE(templateOptionMap_, templateOptionMap) };


    // templateRelationId Field Functions 
    bool hasTemplateRelationId() const { return this->templateRelationId_ != nullptr;};
    void deleteTemplateRelationId() { this->templateRelationId_ = nullptr;};
    inline string getTemplateRelationId() const { DARABONBA_PTR_GET_DEFAULT(templateRelationId_, "") };
    inline TaskTemplateConfig& setTemplateRelationId(string templateRelationId) { DARABONBA_PTR_SET_VALUE(templateRelationId_, templateRelationId) };


  protected:
    // Additional information for template configuration.
    shared_ptr<map<string, string>> exif_ {};
    // Display field corresponding to the View.
    shared_ptr<string> resourceKey_ {};
    // List of questions in the template.
    shared_ptr<vector<string>> selectQuestions_ {};
    // Template options configuration.
    shared_ptr<map<string, TaskTemplateOptionConfig>> templateOptionMap_ {};
    // Template ID on which this depends.
    shared_ptr<string> templateRelationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif

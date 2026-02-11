// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ListAlertTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertProvider, alertProvider_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateProvider, templateProvider_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertProvider, alertProvider_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateProvider, templateProvider_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListAlertTemplatesRequest() = default ;
    ListAlertTemplatesRequest(const ListAlertTemplatesRequest &) = default ;
    ListAlertTemplatesRequest(ListAlertTemplatesRequest &&) = default ;
    ListAlertTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertTemplatesRequest() = default ;
    ListAlertTemplatesRequest& operator=(const ListAlertTemplatesRequest &) = default ;
    ListAlertTemplatesRequest& operator=(ListAlertTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertProvider_ == nullptr
        && this->labels_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->templateProvider_ == nullptr
        && this->type_ == nullptr; };
    // alertProvider Field Functions 
    bool hasAlertProvider() const { return this->alertProvider_ != nullptr;};
    void deleteAlertProvider() { this->alertProvider_ = nullptr;};
    inline string getAlertProvider() const { DARABONBA_PTR_GET_DEFAULT(alertProvider_, "") };
    inline ListAlertTemplatesRequest& setAlertProvider(string alertProvider) { DARABONBA_PTR_SET_VALUE(alertProvider_, alertProvider) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListAlertTemplatesRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertTemplatesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertTemplatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline ListAlertTemplatesRequest& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateProvider Field Functions 
    bool hasTemplateProvider() const { return this->templateProvider_ != nullptr;};
    void deleteTemplateProvider() { this->templateProvider_ = nullptr;};
    inline string getTemplateProvider() const { DARABONBA_PTR_GET_DEFAULT(templateProvider_, "") };
    inline ListAlertTemplatesRequest& setTemplateProvider(string templateProvider) { DARABONBA_PTR_SET_VALUE(templateProvider_, templateProvider) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertTemplatesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> alertProvider_ {};
    shared_ptr<string> labels_ {};
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> status_ {};
    shared_ptr<string> templateProvider_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif

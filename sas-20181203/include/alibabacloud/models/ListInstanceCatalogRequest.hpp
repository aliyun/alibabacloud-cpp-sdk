// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCECATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCECATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OnlyCustom, onlyCustom_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequirementIds, requirementIds_);
      DARABONBA_PTR_TO_JSON(StandardIds, standardIds_);
      DARABONBA_PTR_TO_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OnlyCustom, onlyCustom_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequirementIds, requirementIds_);
      DARABONBA_PTR_FROM_JSON(StandardIds, standardIds_);
      DARABONBA_PTR_FROM_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    ListInstanceCatalogRequest() = default ;
    ListInstanceCatalogRequest(const ListInstanceCatalogRequest &) = default ;
    ListInstanceCatalogRequest(ListInstanceCatalogRequest &&) = default ;
    ListInstanceCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceCatalogRequest() = default ;
    ListInstanceCatalogRequest& operator=(const ListInstanceCatalogRequest &) = default ;
    ListInstanceCatalogRequest& operator=(ListInstanceCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->onlyCustom_ == nullptr && return this->regionId_ == nullptr && return this->requirementIds_ == nullptr && return this->standardIds_ == nullptr && return this->taskSources_ == nullptr
        && return this->types_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListInstanceCatalogRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // onlyCustom Field Functions 
    bool hasOnlyCustom() const { return this->onlyCustom_ != nullptr;};
    void deleteOnlyCustom() { this->onlyCustom_ = nullptr;};
    inline bool onlyCustom() const { DARABONBA_PTR_GET_DEFAULT(onlyCustom_, false) };
    inline ListInstanceCatalogRequest& setOnlyCustom(bool onlyCustom) { DARABONBA_PTR_SET_VALUE(onlyCustom_, onlyCustom) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstanceCatalogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requirementIds Field Functions 
    bool hasRequirementIds() const { return this->requirementIds_ != nullptr;};
    void deleteRequirementIds() { this->requirementIds_ = nullptr;};
    inline const vector<int64_t> & requirementIds() const { DARABONBA_PTR_GET_CONST(requirementIds_, vector<int64_t>) };
    inline vector<int64_t> requirementIds() { DARABONBA_PTR_GET(requirementIds_, vector<int64_t>) };
    inline ListInstanceCatalogRequest& setRequirementIds(const vector<int64_t> & requirementIds) { DARABONBA_PTR_SET_VALUE(requirementIds_, requirementIds) };
    inline ListInstanceCatalogRequest& setRequirementIds(vector<int64_t> && requirementIds) { DARABONBA_PTR_SET_RVALUE(requirementIds_, requirementIds) };


    // standardIds Field Functions 
    bool hasStandardIds() const { return this->standardIds_ != nullptr;};
    void deleteStandardIds() { this->standardIds_ = nullptr;};
    inline const vector<int64_t> & standardIds() const { DARABONBA_PTR_GET_CONST(standardIds_, vector<int64_t>) };
    inline vector<int64_t> standardIds() { DARABONBA_PTR_GET(standardIds_, vector<int64_t>) };
    inline ListInstanceCatalogRequest& setStandardIds(const vector<int64_t> & standardIds) { DARABONBA_PTR_SET_VALUE(standardIds_, standardIds) };
    inline ListInstanceCatalogRequest& setStandardIds(vector<int64_t> && standardIds) { DARABONBA_PTR_SET_RVALUE(standardIds_, standardIds) };


    // taskSources Field Functions 
    bool hasTaskSources() const { return this->taskSources_ != nullptr;};
    void deleteTaskSources() { this->taskSources_ = nullptr;};
    inline const vector<string> & taskSources() const { DARABONBA_PTR_GET_CONST(taskSources_, vector<string>) };
    inline vector<string> taskSources() { DARABONBA_PTR_GET(taskSources_, vector<string>) };
    inline ListInstanceCatalogRequest& setTaskSources(const vector<string> & taskSources) { DARABONBA_PTR_SET_VALUE(taskSources_, taskSources) };
    inline ListInstanceCatalogRequest& setTaskSources(vector<string> && taskSources) { DARABONBA_PTR_SET_RVALUE(taskSources_, taskSources) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListInstanceCatalogRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListInstanceCatalogRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Specifies whether to filter the assets that support custom checks. Valid values:
    // 
    // *   **true**: Filter assets that support custom checks.
    // *   **false**: All assets are selected. This is the default value.
    std::shared_ptr<bool> onlyCustom_ = nullptr;
    // The ID of the region in which the asset resides. Valid values:
    // 
    // *   **cn-hangzhou**: International
    // *   **ap-southeast-1**: Singapore
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of requirement items.
    std::shared_ptr<vector<int64_t>> requirementIds_ = nullptr;
    // The IDs of standards.
    std::shared_ptr<vector<int64_t>> standardIds_ = nullptr;
    // List of task sources.
    std::shared_ptr<vector<string>> taskSources_ = nullptr;
    // The types of check standards.
    std::shared_ptr<vector<string>> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

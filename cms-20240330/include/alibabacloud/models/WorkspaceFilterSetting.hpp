// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKSPACEFILTERSETTING_HPP_
#define ALIBABACLOUD_MODELS_WORKSPACEFILTERSETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class WorkspaceFilterSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WorkspaceFilterSetting& obj) { 
      DARABONBA_PTR_TO_JSON(tagSelector, tagSelector_);
      DARABONBA_PTR_TO_JSON(workspaceUuids, workspaceUuids_);
    };
    friend void from_json(const Darabonba::Json& j, WorkspaceFilterSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(tagSelector, tagSelector_);
      DARABONBA_PTR_FROM_JSON(workspaceUuids, workspaceUuids_);
    };
    WorkspaceFilterSetting() = default ;
    WorkspaceFilterSetting(const WorkspaceFilterSetting &) = default ;
    WorkspaceFilterSetting(WorkspaceFilterSetting &&) = default ;
    WorkspaceFilterSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WorkspaceFilterSetting() = default ;
    WorkspaceFilterSetting& operator=(const WorkspaceFilterSetting &) = default ;
    WorkspaceFilterSetting& operator=(WorkspaceFilterSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagSelector_ == nullptr
        && return this->workspaceUuids_ == nullptr; };
    // tagSelector Field Functions 
    bool hasTagSelector() const { return this->tagSelector_ != nullptr;};
    void deleteTagSelector() { this->tagSelector_ = nullptr;};
    inline const FilterSetting & tagSelector() const { DARABONBA_PTR_GET_CONST(tagSelector_, FilterSetting) };
    inline FilterSetting tagSelector() { DARABONBA_PTR_GET(tagSelector_, FilterSetting) };
    inline WorkspaceFilterSetting& setTagSelector(const FilterSetting & tagSelector) { DARABONBA_PTR_SET_VALUE(tagSelector_, tagSelector) };
    inline WorkspaceFilterSetting& setTagSelector(FilterSetting && tagSelector) { DARABONBA_PTR_SET_RVALUE(tagSelector_, tagSelector) };


    // workspaceUuids Field Functions 
    bool hasWorkspaceUuids() const { return this->workspaceUuids_ != nullptr;};
    void deleteWorkspaceUuids() { this->workspaceUuids_ = nullptr;};
    inline const vector<string> & workspaceUuids() const { DARABONBA_PTR_GET_CONST(workspaceUuids_, vector<string>) };
    inline vector<string> workspaceUuids() { DARABONBA_PTR_GET(workspaceUuids_, vector<string>) };
    inline WorkspaceFilterSetting& setWorkspaceUuids(const vector<string> & workspaceUuids) { DARABONBA_PTR_SET_VALUE(workspaceUuids_, workspaceUuids) };
    inline WorkspaceFilterSetting& setWorkspaceUuids(vector<string> && workspaceUuids) { DARABONBA_PTR_SET_RVALUE(workspaceUuids_, workspaceUuids) };


  protected:
    std::shared_ptr<FilterSetting> tagSelector_ = nullptr;
    std::shared_ptr<vector<string>> workspaceUuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

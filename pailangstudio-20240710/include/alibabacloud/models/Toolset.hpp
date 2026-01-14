// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOOLSET_HPP_
#define ALIBABACLOUD_MODELS_TOOLSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class Toolset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Toolset& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
      DARABONBA_PTR_TO_JSON(ToolsetConfig, toolsetConfig_);
      DARABONBA_PTR_TO_JSON(ToolsetId, toolsetId_);
      DARABONBA_PTR_TO_JSON(ToolsetName, toolsetName_);
      DARABONBA_PTR_TO_JSON(ToolsetType, toolsetType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Toolset& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
      DARABONBA_PTR_FROM_JSON(ToolsetConfig, toolsetConfig_);
      DARABONBA_PTR_FROM_JSON(ToolsetId, toolsetId_);
      DARABONBA_PTR_FROM_JSON(ToolsetName, toolsetName_);
      DARABONBA_PTR_FROM_JSON(ToolsetType, toolsetType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Toolset() = default ;
    Toolset(const Toolset &) = default ;
    Toolset(Toolset &&) = default ;
    Toolset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Toolset() = default ;
    Toolset& operator=(const Toolset &) = default ;
    Toolset& operator=(Toolset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->tools_ == nullptr
        && this->toolsetConfig_ == nullptr && this->toolsetId_ == nullptr && this->toolsetName_ == nullptr && this->toolsetType_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Toolset& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline Toolset& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Toolset& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Toolset& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Toolset& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline string getTools() const { DARABONBA_PTR_GET_DEFAULT(tools_, "") };
    inline Toolset& setTools(string tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };


    // toolsetConfig Field Functions 
    bool hasToolsetConfig() const { return this->toolsetConfig_ != nullptr;};
    void deleteToolsetConfig() { this->toolsetConfig_ = nullptr;};
    inline string getToolsetConfig() const { DARABONBA_PTR_GET_DEFAULT(toolsetConfig_, "") };
    inline Toolset& setToolsetConfig(string toolsetConfig) { DARABONBA_PTR_SET_VALUE(toolsetConfig_, toolsetConfig) };


    // toolsetId Field Functions 
    bool hasToolsetId() const { return this->toolsetId_ != nullptr;};
    void deleteToolsetId() { this->toolsetId_ = nullptr;};
    inline string getToolsetId() const { DARABONBA_PTR_GET_DEFAULT(toolsetId_, "") };
    inline Toolset& setToolsetId(string toolsetId) { DARABONBA_PTR_SET_VALUE(toolsetId_, toolsetId) };


    // toolsetName Field Functions 
    bool hasToolsetName() const { return this->toolsetName_ != nullptr;};
    void deleteToolsetName() { this->toolsetName_ = nullptr;};
    inline string getToolsetName() const { DARABONBA_PTR_GET_DEFAULT(toolsetName_, "") };
    inline Toolset& setToolsetName(string toolsetName) { DARABONBA_PTR_SET_VALUE(toolsetName_, toolsetName) };


    // toolsetType Field Functions 
    bool hasToolsetType() const { return this->toolsetType_ != nullptr;};
    void deleteToolsetType() { this->toolsetType_ = nullptr;};
    inline string getToolsetType() const { DARABONBA_PTR_GET_DEFAULT(toolsetType_, "") };
    inline Toolset& setToolsetType(string toolsetType) { DARABONBA_PTR_SET_VALUE(toolsetType_, toolsetType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Toolset& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> accessibility_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> tools_ {};
    shared_ptr<string> toolsetConfig_ {};
    shared_ptr<string> toolsetId_ {};
    shared_ptr<string> toolsetName_ {};
    shared_ptr<string> toolsetType_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif

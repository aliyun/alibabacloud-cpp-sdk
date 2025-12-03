// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMWORKFLOWSTATUSRESPONSEBODYSTATUSES_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMWORKFLOWSTATUSRESPONSEBODYSTATUSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkItemWorkFlowStatusResponseBodyStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkItemWorkFlowStatusResponseBodyStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(workflowStageIdentifier, workflowStageIdentifier_);
      DARABONBA_PTR_TO_JSON(workflowStageName, workflowStageName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkItemWorkFlowStatusResponseBodyStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(workflowStageIdentifier, workflowStageIdentifier_);
      DARABONBA_PTR_FROM_JSON(workflowStageName, workflowStageName_);
    };
    ListWorkItemWorkFlowStatusResponseBodyStatuses() = default ;
    ListWorkItemWorkFlowStatusResponseBodyStatuses(const ListWorkItemWorkFlowStatusResponseBodyStatuses &) = default ;
    ListWorkItemWorkFlowStatusResponseBodyStatuses(ListWorkItemWorkFlowStatusResponseBodyStatuses &&) = default ;
    ListWorkItemWorkFlowStatusResponseBodyStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkItemWorkFlowStatusResponseBodyStatuses() = default ;
    ListWorkItemWorkFlowStatusResponseBodyStatuses& operator=(const ListWorkItemWorkFlowStatusResponseBodyStatuses &) = default ;
    ListWorkItemWorkFlowStatusResponseBodyStatuses& operator=(ListWorkItemWorkFlowStatusResponseBodyStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->identifier_ == nullptr && return this->modifier_ == nullptr
        && return this->name_ == nullptr && return this->resourceType_ == nullptr && return this->source_ == nullptr && return this->workflowStageIdentifier_ == nullptr && return this->workflowStageName_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // workflowStageIdentifier Field Functions 
    bool hasWorkflowStageIdentifier() const { return this->workflowStageIdentifier_ != nullptr;};
    void deleteWorkflowStageIdentifier() { this->workflowStageIdentifier_ = nullptr;};
    inline string workflowStageIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workflowStageIdentifier_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setWorkflowStageIdentifier(string workflowStageIdentifier) { DARABONBA_PTR_SET_VALUE(workflowStageIdentifier_, workflowStageIdentifier) };


    // workflowStageName Field Functions 
    bool hasWorkflowStageName() const { return this->workflowStageName_ != nullptr;};
    void deleteWorkflowStageName() { this->workflowStageName_ = nullptr;};
    inline string workflowStageName() const { DARABONBA_PTR_GET_DEFAULT(workflowStageName_, "") };
    inline ListWorkItemWorkFlowStatusResponseBodyStatuses& setWorkflowStageName(string workflowStageName) { DARABONBA_PTR_SET_VALUE(workflowStageName_, workflowStageName) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> workflowStageIdentifier_ = nullptr;
    std::shared_ptr<string> workflowStageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

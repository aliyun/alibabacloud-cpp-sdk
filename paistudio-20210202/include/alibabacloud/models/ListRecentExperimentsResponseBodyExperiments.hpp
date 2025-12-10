// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTEXPERIMENTSRESPONSEBODYEXPERIMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTEXPERIMENTSRESPONSEBODYEXPERIMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListRecentExperimentsResponseBodyExperiments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentExperimentsResponseBodyExperiments& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(ModifyCnt, modifyCnt_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecentGmtModifiedTime, recentGmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentExperimentsResponseBodyExperiments& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(ModifyCnt, modifyCnt_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecentGmtModifiedTime, recentGmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListRecentExperimentsResponseBodyExperiments() = default ;
    ListRecentExperimentsResponseBodyExperiments(const ListRecentExperimentsResponseBodyExperiments &) = default ;
    ListRecentExperimentsResponseBodyExperiments(ListRecentExperimentsResponseBodyExperiments &&) = default ;
    ListRecentExperimentsResponseBodyExperiments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentExperimentsResponseBodyExperiments() = default ;
    ListRecentExperimentsResponseBodyExperiments& operator=(const ListRecentExperimentsResponseBodyExperiments &) = default ;
    ListRecentExperimentsResponseBodyExperiments& operator=(ListRecentExperimentsResponseBodyExperiments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->experimentId_ == nullptr && return this->modifyCnt_ == nullptr && return this->name_ == nullptr && return this->recentGmtModifiedTime_ == nullptr && return this->source_ == nullptr
        && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListRecentExperimentsResponseBodyExperiments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline ListRecentExperimentsResponseBodyExperiments& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // modifyCnt Field Functions 
    bool hasModifyCnt() const { return this->modifyCnt_ != nullptr;};
    void deleteModifyCnt() { this->modifyCnt_ = nullptr;};
    inline int64_t modifyCnt() const { DARABONBA_PTR_GET_DEFAULT(modifyCnt_, 0L) };
    inline ListRecentExperimentsResponseBodyExperiments& setModifyCnt(int64_t modifyCnt) { DARABONBA_PTR_SET_VALUE(modifyCnt_, modifyCnt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRecentExperimentsResponseBodyExperiments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recentGmtModifiedTime Field Functions 
    bool hasRecentGmtModifiedTime() const { return this->recentGmtModifiedTime_ != nullptr;};
    void deleteRecentGmtModifiedTime() { this->recentGmtModifiedTime_ = nullptr;};
    inline string recentGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(recentGmtModifiedTime_, "") };
    inline ListRecentExperimentsResponseBodyExperiments& setRecentGmtModifiedTime(string recentGmtModifiedTime) { DARABONBA_PTR_SET_VALUE(recentGmtModifiedTime_, recentGmtModifiedTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListRecentExperimentsResponseBodyExperiments& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListRecentExperimentsResponseBodyExperiments& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListRecentExperimentsResponseBodyExperiments& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<int64_t> modifyCnt_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> recentGmtModifiedTime_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif

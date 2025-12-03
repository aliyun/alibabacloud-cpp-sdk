// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLRELEASEWORKFLOWSRESPONSEBODYRELEASESTAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTALLRELEASEWORKFLOWSRESPONSEBODYRELEASESTAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListAllReleaseWorkflowsResponseBodyReleaseStages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllReleaseWorkflowsResponseBodyReleaseStages& obj) { 
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sn, sn_);
      DARABONBA_PTR_TO_JSON(releaseWorkflowSn, releaseWorkflowSn_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(variableGroups, variableGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllReleaseWorkflowsResponseBodyReleaseStages& obj) { 
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sn, sn_);
      DARABONBA_PTR_FROM_JSON(releaseWorkflowSn, releaseWorkflowSn_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(variableGroups, variableGroups_);
    };
    ListAllReleaseWorkflowsResponseBodyReleaseStages() = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStages(const ListAllReleaseWorkflowsResponseBodyReleaseStages &) = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStages(ListAllReleaseWorkflowsResponseBodyReleaseStages &&) = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllReleaseWorkflowsResponseBodyReleaseStages() = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStages& operator=(const ListAllReleaseWorkflowsResponseBodyReleaseStages &) = default ;
    ListAllReleaseWorkflowsResponseBodyReleaseStages& operator=(ListAllReleaseWorkflowsResponseBodyReleaseStages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->name_ == nullptr && return this->sn_ == nullptr && return this->releaseWorkflowSn_ == nullptr && return this->order_ == nullptr && return this->variableGroups_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStages& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStages& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // releaseWorkflowSn Field Functions 
    bool hasReleaseWorkflowSn() const { return this->releaseWorkflowSn_ != nullptr;};
    void deleteReleaseWorkflowSn() { this->releaseWorkflowSn_ = nullptr;};
    inline string releaseWorkflowSn() const { DARABONBA_PTR_GET_DEFAULT(releaseWorkflowSn_, "") };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStages& setReleaseWorkflowSn(string releaseWorkflowSn) { DARABONBA_PTR_SET_VALUE(releaseWorkflowSn_, releaseWorkflowSn) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStages& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // variableGroups Field Functions 
    bool hasVariableGroups() const { return this->variableGroups_ != nullptr;};
    void deleteVariableGroups() { this->variableGroups_ = nullptr;};
    inline const vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups> & variableGroups() const { DARABONBA_PTR_GET_CONST(variableGroups_, vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups>) };
    inline vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups> variableGroups() { DARABONBA_PTR_GET(variableGroups_, vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups>) };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStages& setVariableGroups(const vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups> & variableGroups) { DARABONBA_PTR_SET_VALUE(variableGroups_, variableGroups) };
    inline ListAllReleaseWorkflowsResponseBodyReleaseStages& setVariableGroups(vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups> && variableGroups) { DARABONBA_PTR_SET_RVALUE(variableGroups_, variableGroups) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sn_ = nullptr;
    std::shared_ptr<string> releaseWorkflowSn_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStagesVariableGroups>> variableGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLRELEASEWORKFLOWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLRELEASEWORKFLOWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAllReleaseWorkflowsResponseBodyReleaseStages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListAllReleaseWorkflowsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllReleaseWorkflowsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(appName, appName_);
      DARABONBA_PTR_TO_JSON(sn, sn_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(releaseStages, releaseStages_);
      DARABONBA_PTR_TO_JSON(note, note_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllReleaseWorkflowsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(appName, appName_);
      DARABONBA_PTR_FROM_JSON(sn, sn_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(releaseStages, releaseStages_);
      DARABONBA_PTR_FROM_JSON(note, note_);
    };
    ListAllReleaseWorkflowsResponseBody() = default ;
    ListAllReleaseWorkflowsResponseBody(const ListAllReleaseWorkflowsResponseBody &) = default ;
    ListAllReleaseWorkflowsResponseBody(ListAllReleaseWorkflowsResponseBody &&) = default ;
    ListAllReleaseWorkflowsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllReleaseWorkflowsResponseBody() = default ;
    ListAllReleaseWorkflowsResponseBody& operator=(const ListAllReleaseWorkflowsResponseBody &) = default ;
    ListAllReleaseWorkflowsResponseBody& operator=(ListAllReleaseWorkflowsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->sn_ == nullptr && return this->name_ == nullptr && return this->order_ == nullptr && return this->releaseStages_ == nullptr && return this->note_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAllReleaseWorkflowsResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ListAllReleaseWorkflowsResponseBody& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllReleaseWorkflowsResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListAllReleaseWorkflowsResponseBody& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // releaseStages Field Functions 
    bool hasReleaseStages() const { return this->releaseStages_ != nullptr;};
    void deleteReleaseStages() { this->releaseStages_ = nullptr;};
    inline const vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStages> & releaseStages() const { DARABONBA_PTR_GET_CONST(releaseStages_, vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStages>) };
    inline vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStages> releaseStages() { DARABONBA_PTR_GET(releaseStages_, vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStages>) };
    inline ListAllReleaseWorkflowsResponseBody& setReleaseStages(const vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStages> & releaseStages) { DARABONBA_PTR_SET_VALUE(releaseStages_, releaseStages) };
    inline ListAllReleaseWorkflowsResponseBody& setReleaseStages(vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStages> && releaseStages) { DARABONBA_PTR_SET_RVALUE(releaseStages_, releaseStages) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline ListAllReleaseWorkflowsResponseBody& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> sn_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<vector<Models::ListAllReleaseWorkflowsResponseBodyReleaseStages>> releaseStages_ = nullptr;
    std::shared_ptr<string> note_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

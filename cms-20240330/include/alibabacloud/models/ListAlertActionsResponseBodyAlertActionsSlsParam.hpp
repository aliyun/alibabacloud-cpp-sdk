// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSSLSPARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSSLSPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActionsSlsParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActionsSlsParam& obj) { 
      DARABONBA_PTR_TO_JSON(logstore, logstore_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActionsSlsParam& obj) { 
      DARABONBA_PTR_FROM_JSON(logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListAlertActionsResponseBodyAlertActionsSlsParam() = default ;
    ListAlertActionsResponseBodyAlertActionsSlsParam(const ListAlertActionsResponseBodyAlertActionsSlsParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsSlsParam(ListAlertActionsResponseBodyAlertActionsSlsParam &&) = default ;
    ListAlertActionsResponseBodyAlertActionsSlsParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActionsSlsParam() = default ;
    ListAlertActionsResponseBodyAlertActionsSlsParam& operator=(const ListAlertActionsResponseBodyAlertActionsSlsParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsSlsParam& operator=(ListAlertActionsResponseBodyAlertActionsSlsParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstore_ == nullptr
        && return this->project_ == nullptr && return this->regionId_ == nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline ListAlertActionsResponseBodyAlertActionsSlsParam& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListAlertActionsResponseBodyAlertActionsSlsParam& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertActionsResponseBodyAlertActionsSlsParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> logstore_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

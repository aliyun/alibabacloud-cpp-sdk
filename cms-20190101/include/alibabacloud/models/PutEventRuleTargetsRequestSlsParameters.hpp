// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTSLSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTSLSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsRequestSlsParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsRequestSlsParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsRequestSlsParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    PutEventRuleTargetsRequestSlsParameters() = default ;
    PutEventRuleTargetsRequestSlsParameters(const PutEventRuleTargetsRequestSlsParameters &) = default ;
    PutEventRuleTargetsRequestSlsParameters(PutEventRuleTargetsRequestSlsParameters &&) = default ;
    PutEventRuleTargetsRequestSlsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsRequestSlsParameters() = default ;
    PutEventRuleTargetsRequestSlsParameters& operator=(const PutEventRuleTargetsRequestSlsParameters &) = default ;
    PutEventRuleTargetsRequestSlsParameters& operator=(PutEventRuleTargetsRequestSlsParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->logStore_ == nullptr && return this->project_ == nullptr && return this->region_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PutEventRuleTargetsRequestSlsParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline PutEventRuleTargetsRequestSlsParameters& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline PutEventRuleTargetsRequestSlsParameters& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline PutEventRuleTargetsRequestSlsParameters& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the Simple Log Service Logstore. Valid values of N: 1 to 5.
    std::shared_ptr<string> logStore_ = nullptr;
    // The name of the Simple Log Service project. Valid values of N: 1 to 5.
    std::shared_ptr<string> project_ = nullptr;
    // The region where Simple Log Service is deployed. Valid values of N: 1 to 5.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

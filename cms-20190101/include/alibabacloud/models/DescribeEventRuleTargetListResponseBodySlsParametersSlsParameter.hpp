// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYSLSPARAMETERSSLSPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYSLSPARAMETERSSLSPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter() = default ;
    DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter(const DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter &) = default ;
    DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter(DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter &&) = default ;
    DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter() = default ;
    DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& operator=(const DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter &) = default ;
    DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& operator=(DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->id_ == nullptr && return this->logStore_ == nullptr && return this->project_ == nullptr && return this->region_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeEventRuleTargetListResponseBodySlsParametersSlsParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The ARN of the Log Service Logstore. 
    // 
    // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields: 
    // 
    // - Service: the code of an Alibaba Cloud service
    // - Region: the region ID
    // - Account: the ID of an Alibaba Cloud account
    // - ResourceType: the resource type
    // - ResourceId: the resource ID
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the recipient.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the Logstore.
    std::shared_ptr<string> logStore_ = nullptr;
    // The name of the project.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region where the Log Service project resides.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif

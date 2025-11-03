// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODYANALYSESANALYSISMETAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGANALYSISRESPONSEBODYANALYSESANALYSISMETAVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue& obj) { 
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
    };
    DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue() = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue(const DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue &) = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue(DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue &&) = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue() = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue& operator=(const DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue &) = default ;
    DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue& operator=(DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstore_ == nullptr
        && return this->project_ == nullptr && return this->region_ == nullptr && return this->roleArn_ == nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline DescribeLogAnalysisResponseBodyAnalysesAnalysisMetaValue& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


  protected:
    // The name of the dedicated Logstore that is used to store NAS operation logs.
    std::shared_ptr<string> logstore_ = nullptr;
    // The name of the project where the dedicated Logstore resides.
    std::shared_ptr<string> project_ = nullptr;
    // The region where the dedicated Logstore resides.
    std::shared_ptr<string> region_ = nullptr;
    // The role that is used by NAS to access Simple Log Service.
    std::shared_ptr<string> roleArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif

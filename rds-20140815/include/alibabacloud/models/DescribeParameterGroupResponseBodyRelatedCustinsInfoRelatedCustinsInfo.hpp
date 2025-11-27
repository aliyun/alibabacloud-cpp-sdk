// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYRELATEDCUSTINSINFORELATEDCUSTINSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERGROUPRESPONSEBODYRELATEDCUSTINSINFORELATEDCUSTINSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedTime, appliedTime_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedTime, appliedTime_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
    };
    DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo() = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo(const DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo &) = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo(DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo &&) = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo() = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo& operator=(const DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo &) = default ;
    DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo& operator=(DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appliedTime_ == nullptr
        && return this->DBInstanceName_ == nullptr; };
    // appliedTime Field Functions 
    bool hasAppliedTime() const { return this->appliedTime_ != nullptr;};
    void deleteAppliedTime() { this->appliedTime_ = nullptr;};
    inline string appliedTime() const { DARABONBA_PTR_GET_DEFAULT(appliedTime_, "") };
    inline DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo& setAppliedTime(string appliedTime) { DARABONBA_PTR_SET_VALUE(appliedTime_, appliedTime) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeParameterGroupResponseBodyRelatedCustinsInfoRelatedCustinsInfo& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


  protected:
    // The time when the parameter template was applied.
    std::shared_ptr<string> appliedTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

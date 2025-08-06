// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTARN_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTARN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesRequestArn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestArn& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Rolearn, rolearn_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestArn& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Rolearn, rolearn_);
    };
    RunInstancesRequestArn() = default ;
    RunInstancesRequestArn(const RunInstancesRequestArn &) = default ;
    RunInstancesRequestArn(RunInstancesRequestArn &&) = default ;
    RunInstancesRequestArn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestArn() = default ;
    RunInstancesRequestArn& operator=(const RunInstancesRequestArn &) = default ;
    RunInstancesRequestArn& operator=(RunInstancesRequestArn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assumeRoleFor_ != nullptr
        && this->roleType_ != nullptr && this->rolearn_ != nullptr; };
    // assumeRoleFor Field Functions 
    bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
    void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
    inline int64_t assumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, 0L) };
    inline RunInstancesRequestArn& setAssumeRoleFor(int64_t assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline RunInstancesRequestArn& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // rolearn Field Functions 
    bool hasRolearn() const { return this->rolearn_ != nullptr;};
    void deleteRolearn() { this->rolearn_ = nullptr;};
    inline string rolearn() const { DARABONBA_PTR_GET_DEFAULT(rolearn_, "") };
    inline RunInstancesRequestArn& setRolearn(string rolearn) { DARABONBA_PTR_SET_VALUE(rolearn_, rolearn) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<int64_t> assumeRoleFor_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> roleType_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> rolearn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTARN_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTARN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateInstanceRequestArn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestArn& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(Rolearn, rolearn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestArn& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(Rolearn, rolearn_);
    };
    CreateInstanceRequestArn() = default ;
    CreateInstanceRequestArn(const CreateInstanceRequestArn &) = default ;
    CreateInstanceRequestArn(CreateInstanceRequestArn &&) = default ;
    CreateInstanceRequestArn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestArn() = default ;
    CreateInstanceRequestArn& operator=(const CreateInstanceRequestArn &) = default ;
    CreateInstanceRequestArn& operator=(CreateInstanceRequestArn &&) = default ;
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
    inline CreateInstanceRequestArn& setAssumeRoleFor(int64_t assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline CreateInstanceRequestArn& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // rolearn Field Functions 
    bool hasRolearn() const { return this->rolearn_ != nullptr;};
    void deleteRolearn() { this->rolearn_ = nullptr;};
    inline string rolearn() const { DARABONBA_PTR_GET_DEFAULT(rolearn_, "") };
    inline CreateInstanceRequestArn& setRolearn(string rolearn) { DARABONBA_PTR_SET_VALUE(rolearn_, rolearn) };


  protected:
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int64_t> assumeRoleFor_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> roleType_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> rolearn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif

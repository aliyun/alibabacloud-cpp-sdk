// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLE_HPP_
#define ALIBABACLOUD_MODELS_ROLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Principal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class Role : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Role& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(IsPredefined, isPredefined_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrincipalArn, principalArn_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, Role& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(IsPredefined, isPredefined_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrincipalArn, principalArn_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    Role() = default ;
    Role(const Role &) = default ;
    Role(Role &&) = default ;
    Role(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Role() = default ;
    Role& operator=(const Role &) = default ;
    Role& operator=(Role &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->isPredefined_ == nullptr && return this->name_ == nullptr && return this->principalArn_ == nullptr
        && return this->updateTime_ == nullptr && return this->users_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Role& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Role& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline Role& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isPredefined Field Functions 
    bool hasIsPredefined() const { return this->isPredefined_ != nullptr;};
    void deleteIsPredefined() { this->isPredefined_ = nullptr;};
    inline int32_t isPredefined() const { DARABONBA_PTR_GET_DEFAULT(isPredefined_, 0) };
    inline Role& setIsPredefined(int32_t isPredefined) { DARABONBA_PTR_SET_VALUE(isPredefined_, isPredefined) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Role& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // principalArn Field Functions 
    bool hasPrincipalArn() const { return this->principalArn_ != nullptr;};
    void deletePrincipalArn() { this->principalArn_ = nullptr;};
    inline string principalArn() const { DARABONBA_PTR_GET_DEFAULT(principalArn_, "") };
    inline Role& setPrincipalArn(string principalArn) { DARABONBA_PTR_SET_VALUE(principalArn_, principalArn) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline Role& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<Principal> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<Principal>) };
    inline vector<Principal> users() { DARABONBA_PTR_GET(users_, vector<Principal>) };
    inline Role& setUsers(const vector<Principal> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline Role& setUsers(vector<Principal> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<int32_t> isPredefined_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> principalArn_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<vector<Principal>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif

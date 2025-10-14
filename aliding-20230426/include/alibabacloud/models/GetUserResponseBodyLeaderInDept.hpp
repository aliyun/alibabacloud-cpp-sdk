// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYLEADERINDEPT_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYLEADERINDEPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetUserResponseBodyLeaderInDept : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyLeaderInDept& obj) { 
      DARABONBA_PTR_TO_JSON(deptId, deptId_);
      DARABONBA_PTR_TO_JSON(leader, leader_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyLeaderInDept& obj) { 
      DARABONBA_PTR_FROM_JSON(deptId, deptId_);
      DARABONBA_PTR_FROM_JSON(leader, leader_);
    };
    GetUserResponseBodyLeaderInDept() = default ;
    GetUserResponseBodyLeaderInDept(const GetUserResponseBodyLeaderInDept &) = default ;
    GetUserResponseBodyLeaderInDept(GetUserResponseBodyLeaderInDept &&) = default ;
    GetUserResponseBodyLeaderInDept(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyLeaderInDept() = default ;
    GetUserResponseBodyLeaderInDept& operator=(const GetUserResponseBodyLeaderInDept &) = default ;
    GetUserResponseBodyLeaderInDept& operator=(GetUserResponseBodyLeaderInDept &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deptId_ == nullptr
        && return this->leader_ == nullptr; };
    // deptId Field Functions 
    bool hasDeptId() const { return this->deptId_ != nullptr;};
    void deleteDeptId() { this->deptId_ = nullptr;};
    inline int64_t deptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, 0L) };
    inline GetUserResponseBodyLeaderInDept& setDeptId(int64_t deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


    // leader Field Functions 
    bool hasLeader() const { return this->leader_ != nullptr;};
    void deleteLeader() { this->leader_ = nullptr;};
    inline bool leader() const { DARABONBA_PTR_GET_DEFAULT(leader_, false) };
    inline GetUserResponseBodyLeaderInDept& setLeader(bool leader) { DARABONBA_PTR_SET_VALUE(leader_, leader) };


  protected:
    std::shared_ptr<int64_t> deptId_ = nullptr;
    std::shared_ptr<bool> leader_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

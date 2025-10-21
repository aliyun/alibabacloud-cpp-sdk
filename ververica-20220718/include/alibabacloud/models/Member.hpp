// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEMBER_HPP_
#define ALIBABACLOUD_MODELS_MEMBER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Member : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Member& obj) { 
      DARABONBA_PTR_TO_JSON(member, member_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, Member& obj) { 
      DARABONBA_PTR_FROM_JSON(member, member_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    Member() = default ;
    Member(const Member &) = default ;
    Member(Member &&) = default ;
    Member(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Member() = default ;
    Member& operator=(const Member &) = default ;
    Member& operator=(Member &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->member_ == nullptr
        && return this->role_ == nullptr; };
    // member Field Functions 
    bool hasMember() const { return this->member_ != nullptr;};
    void deleteMember() { this->member_ = nullptr;};
    inline string member() const { DARABONBA_PTR_GET_DEFAULT(member_, "") };
    inline Member& setMember(string member) { DARABONBA_PTR_SET_VALUE(member_, member) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline Member& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> member_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif

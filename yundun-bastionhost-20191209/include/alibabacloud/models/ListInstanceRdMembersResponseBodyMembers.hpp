// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERDMEMBERSRESPONSEBODYMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERDMEMBERSRESPONSEBODYMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListInstanceRdMembersResponseBodyMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRdMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRdMembersResponseBodyMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
    };
    ListInstanceRdMembersResponseBodyMembers() = default ;
    ListInstanceRdMembersResponseBodyMembers(const ListInstanceRdMembersResponseBodyMembers &) = default ;
    ListInstanceRdMembersResponseBodyMembers(ListInstanceRdMembersResponseBodyMembers &&) = default ;
    ListInstanceRdMembersResponseBodyMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRdMembersResponseBodyMembers() = default ;
    ListInstanceRdMembersResponseBodyMembers& operator=(const ListInstanceRdMembersResponseBodyMembers &) = default ;
    ListInstanceRdMembersResponseBodyMembers& operator=(ListInstanceRdMembersResponseBodyMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->memberId_ == nullptr; };
    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline ListInstanceRdMembersResponseBodyMembers& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


  protected:
    std::shared_ptr<string> memberId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif

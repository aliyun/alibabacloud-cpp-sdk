// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETNOTESRESPONSEBODYDATAUSER_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETNOTESRESPONSEBODYDATAUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListTicketNotesResponseBodyDataUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketNotesResponseBodyDataUser& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketNotesResponseBodyDataUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ListTicketNotesResponseBodyDataUser() = default ;
    ListTicketNotesResponseBodyDataUser(const ListTicketNotesResponseBodyDataUser &) = default ;
    ListTicketNotesResponseBodyDataUser(ListTicketNotesResponseBodyDataUser &&) = default ;
    ListTicketNotesResponseBodyDataUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketNotesResponseBodyDataUser() = default ;
    ListTicketNotesResponseBodyDataUser& operator=(const ListTicketNotesResponseBodyDataUser &) = default ;
    ListTicketNotesResponseBodyDataUser& operator=(ListTicketNotesResponseBodyDataUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->role_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTicketNotesResponseBodyDataUser& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int32_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0) };
    inline ListTicketNotesResponseBodyDataUser& setRole(int32_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    // Dialog User Name
    std::shared_ptr<string> name_ = nullptr;
    // Dialogue user role, distinguish between agent and user.
    // 2 represents agent, 3 represents user.
    std::shared_ptr<int32_t> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif

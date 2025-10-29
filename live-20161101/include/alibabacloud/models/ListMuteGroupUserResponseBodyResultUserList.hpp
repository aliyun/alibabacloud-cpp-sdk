// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMUTEGROUPUSERRESPONSEBODYRESULTUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMUTEGROUPUSERRESPONSEBODYRESULTUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListMuteGroupUserResponseBodyResultUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMuteGroupUserResponseBodyResultUserList& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMuteGroupUserResponseBodyResultUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListMuteGroupUserResponseBodyResultUserList() = default ;
    ListMuteGroupUserResponseBodyResultUserList(const ListMuteGroupUserResponseBodyResultUserList &) = default ;
    ListMuteGroupUserResponseBodyResultUserList(ListMuteGroupUserResponseBodyResultUserList &&) = default ;
    ListMuteGroupUserResponseBodyResultUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMuteGroupUserResponseBodyResultUserList() = default ;
    ListMuteGroupUserResponseBodyResultUserList& operator=(const ListMuteGroupUserResponseBodyResultUserList &) = default ;
    ListMuteGroupUserResponseBodyResultUserList& operator=(ListMuteGroupUserResponseBodyResultUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListMuteGroupUserResponseBodyResultUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the muted user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

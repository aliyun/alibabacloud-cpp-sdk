// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELPARTICIPANTSRESPONSEBODYUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELPARTICIPANTSRESPONSEBODYUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelParticipantsResponseBodyUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelParticipantsResponseBodyUserList& obj) { 
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelParticipantsResponseBodyUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeChannelParticipantsResponseBodyUserList() = default ;
    DescribeChannelParticipantsResponseBodyUserList(const DescribeChannelParticipantsResponseBodyUserList &) = default ;
    DescribeChannelParticipantsResponseBodyUserList(DescribeChannelParticipantsResponseBodyUserList &&) = default ;
    DescribeChannelParticipantsResponseBodyUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelParticipantsResponseBodyUserList() = default ;
    DescribeChannelParticipantsResponseBodyUserList& operator=(const DescribeChannelParticipantsResponseBodyUserList &) = default ;
    DescribeChannelParticipantsResponseBodyUserList& operator=(DescribeChannelParticipantsResponseBodyUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->user_ == nullptr; };
    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<string> & user() const { DARABONBA_PTR_GET_CONST(user_, vector<string>) };
    inline vector<string> user() { DARABONBA_PTR_GET(user_, vector<string>) };
    inline DescribeChannelParticipantsResponseBodyUserList& setUser(const vector<string> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline DescribeChannelParticipantsResponseBodyUserList& setUser(vector<string> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    std::shared_ptr<vector<string>> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif

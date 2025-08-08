// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERBASEINFORESPONSEBODYORDERBASEINFORELATEDUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETORDERBASEINFORESPONSEBODYORDERBASEINFORELATEDUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList& obj) { 
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList() = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList(const GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList &) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList(GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList &&) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList() = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList& operator=(const GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList &) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList& operator=(GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userIds_ != nullptr; };
    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    std::shared_ptr<vector<string>> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

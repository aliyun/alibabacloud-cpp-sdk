// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERBASEINFORESPONSEBODYORDERBASEINFORELATEDUSERNICKLIST_HPP_
#define ALIBABACLOUD_MODELS_GETORDERBASEINFORESPONSEBODYORDERBASEINFORELATEDUSERNICKLIST_HPP_
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
  class GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList& obj) { 
      DARABONBA_PTR_TO_JSON(UserNicks, userNicks_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList& obj) { 
      DARABONBA_PTR_FROM_JSON(UserNicks, userNicks_);
    };
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList() = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList(const GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList &) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList(GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList &&) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList() = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList& operator=(const GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList &) = default ;
    GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList& operator=(GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userNicks_ == nullptr; };
    // userNicks Field Functions 
    bool hasUserNicks() const { return this->userNicks_ != nullptr;};
    void deleteUserNicks() { this->userNicks_ = nullptr;};
    inline const vector<string> & userNicks() const { DARABONBA_PTR_GET_CONST(userNicks_, vector<string>) };
    inline vector<string> userNicks() { DARABONBA_PTR_GET(userNicks_, vector<string>) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList& setUserNicks(const vector<string> & userNicks) { DARABONBA_PTR_SET_VALUE(userNicks_, userNicks) };
    inline GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList& setUserNicks(vector<string> && userNicks) { DARABONBA_PTR_SET_RVALUE(userNicks_, userNicks) };


  protected:
    std::shared_ptr<vector<string>> userNicks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

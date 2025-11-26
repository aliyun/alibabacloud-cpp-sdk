// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTUSERSAY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTENTIONSRESPONSEBODYDATAINTENTLISTUSERSAY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntentionsResponseBodyDataIntentListUserSayUserSayData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListIntentionsResponseBodyDataIntentListUserSay : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntentionsResponseBodyDataIntentListUserSay& obj) { 
      DARABONBA_PTR_TO_JSON(FromId, fromId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Strict, strict_);
      DARABONBA_PTR_TO_JSON(UserSayData, userSayData_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntentionsResponseBodyDataIntentListUserSay& obj) { 
      DARABONBA_PTR_FROM_JSON(FromId, fromId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Strict, strict_);
      DARABONBA_PTR_FROM_JSON(UserSayData, userSayData_);
    };
    ListIntentionsResponseBodyDataIntentListUserSay() = default ;
    ListIntentionsResponseBodyDataIntentListUserSay(const ListIntentionsResponseBodyDataIntentListUserSay &) = default ;
    ListIntentionsResponseBodyDataIntentListUserSay(ListIntentionsResponseBodyDataIntentListUserSay &&) = default ;
    ListIntentionsResponseBodyDataIntentListUserSay(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntentionsResponseBodyDataIntentListUserSay() = default ;
    ListIntentionsResponseBodyDataIntentListUserSay& operator=(const ListIntentionsResponseBodyDataIntentListUserSay &) = default ;
    ListIntentionsResponseBodyDataIntentListUserSay& operator=(ListIntentionsResponseBodyDataIntentListUserSay &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromId_ == nullptr
        && return this->id_ == nullptr && return this->strict_ == nullptr && return this->userSayData_ == nullptr; };
    // fromId Field Functions 
    bool hasFromId() const { return this->fromId_ != nullptr;};
    void deleteFromId() { this->fromId_ = nullptr;};
    inline string fromId() const { DARABONBA_PTR_GET_DEFAULT(fromId_, "") };
    inline ListIntentionsResponseBodyDataIntentListUserSay& setFromId(string fromId) { DARABONBA_PTR_SET_VALUE(fromId_, fromId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListIntentionsResponseBodyDataIntentListUserSay& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // strict Field Functions 
    bool hasStrict() const { return this->strict_ != nullptr;};
    void deleteStrict() { this->strict_ = nullptr;};
    inline bool strict() const { DARABONBA_PTR_GET_DEFAULT(strict_, false) };
    inline ListIntentionsResponseBodyDataIntentListUserSay& setStrict(bool strict) { DARABONBA_PTR_SET_VALUE(strict_, strict) };


    // userSayData Field Functions 
    bool hasUserSayData() const { return this->userSayData_ != nullptr;};
    void deleteUserSayData() { this->userSayData_ = nullptr;};
    inline const vector<Models::ListIntentionsResponseBodyDataIntentListUserSayUserSayData> & userSayData() const { DARABONBA_PTR_GET_CONST(userSayData_, vector<Models::ListIntentionsResponseBodyDataIntentListUserSayUserSayData>) };
    inline vector<Models::ListIntentionsResponseBodyDataIntentListUserSayUserSayData> userSayData() { DARABONBA_PTR_GET(userSayData_, vector<Models::ListIntentionsResponseBodyDataIntentListUserSayUserSayData>) };
    inline ListIntentionsResponseBodyDataIntentListUserSay& setUserSayData(const vector<Models::ListIntentionsResponseBodyDataIntentListUserSayUserSayData> & userSayData) { DARABONBA_PTR_SET_VALUE(userSayData_, userSayData) };
    inline ListIntentionsResponseBodyDataIntentListUserSay& setUserSayData(vector<Models::ListIntentionsResponseBodyDataIntentListUserSayUserSayData> && userSayData) { DARABONBA_PTR_SET_RVALUE(userSayData_, userSayData) };


  protected:
    std::shared_ptr<string> fromId_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> strict_ = nullptr;
    std::shared_ptr<vector<Models::ListIntentionsResponseBodyDataIntentListUserSayUserSayData>> userSayData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

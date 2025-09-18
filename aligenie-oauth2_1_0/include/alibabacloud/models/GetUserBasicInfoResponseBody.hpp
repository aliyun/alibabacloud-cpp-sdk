// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBASICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBASICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserBasicInfoResponseBodyUnionIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class GetUserBasicInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(Nickname, nickname_);
      DARABONBA_PTR_TO_JSON(OpenId, openId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UnionIds, unionIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
      DARABONBA_PTR_FROM_JSON(OpenId, openId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UnionIds, unionIds_);
    };
    GetUserBasicInfoResponseBody() = default ;
    GetUserBasicInfoResponseBody(const GetUserBasicInfoResponseBody &) = default ;
    GetUserBasicInfoResponseBody(GetUserBasicInfoResponseBody &&) = default ;
    GetUserBasicInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserBasicInfoResponseBody() = default ;
    GetUserBasicInfoResponseBody& operator=(const GetUserBasicInfoResponseBody &) = default ;
    GetUserBasicInfoResponseBody& operator=(GetUserBasicInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avatarUrl_ != nullptr
        && this->nickname_ != nullptr && this->openId_ != nullptr && this->requestId_ != nullptr && this->unionIds_ != nullptr; };
    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline GetUserBasicInfoResponseBody& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string nickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline GetUserBasicInfoResponseBody& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // openId Field Functions 
    bool hasOpenId() const { return this->openId_ != nullptr;};
    void deleteOpenId() { this->openId_ = nullptr;};
    inline string openId() const { DARABONBA_PTR_GET_DEFAULT(openId_, "") };
    inline GetUserBasicInfoResponseBody& setOpenId(string openId) { DARABONBA_PTR_SET_VALUE(openId_, openId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserBasicInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unionIds Field Functions 
    bool hasUnionIds() const { return this->unionIds_ != nullptr;};
    void deleteUnionIds() { this->unionIds_ = nullptr;};
    inline const vector<GetUserBasicInfoResponseBodyUnionIds> & unionIds() const { DARABONBA_PTR_GET_CONST(unionIds_, vector<GetUserBasicInfoResponseBodyUnionIds>) };
    inline vector<GetUserBasicInfoResponseBodyUnionIds> unionIds() { DARABONBA_PTR_GET(unionIds_, vector<GetUserBasicInfoResponseBodyUnionIds>) };
    inline GetUserBasicInfoResponseBody& setUnionIds(const vector<GetUserBasicInfoResponseBodyUnionIds> & unionIds) { DARABONBA_PTR_SET_VALUE(unionIds_, unionIds) };
    inline GetUserBasicInfoResponseBody& setUnionIds(vector<GetUserBasicInfoResponseBodyUnionIds> && unionIds) { DARABONBA_PTR_SET_RVALUE(unionIds_, unionIds) };


  protected:
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> nickname_ = nullptr;
    std::shared_ptr<string> openId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetUserBasicInfoResponseBodyUnionIds>> unionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif

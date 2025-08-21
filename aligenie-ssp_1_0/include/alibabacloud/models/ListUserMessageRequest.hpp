// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserMessageRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListUserMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeforeTime, beforeTime_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
    };
    ListUserMessageRequest() = default ;
    ListUserMessageRequest(const ListUserMessageRequest &) = default ;
    ListUserMessageRequest(ListUserMessageRequest &&) = default ;
    ListUserMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserMessageRequest() = default ;
    ListUserMessageRequest& operator=(const ListUserMessageRequest &) = default ;
    ListUserMessageRequest& operator=(ListUserMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beforeTime_ != nullptr
        && this->userInfo_ != nullptr && this->limit_ != nullptr; };
    // beforeTime Field Functions 
    bool hasBeforeTime() const { return this->beforeTime_ != nullptr;};
    void deleteBeforeTime() { this->beforeTime_ = nullptr;};
    inline string beforeTime() const { DARABONBA_PTR_GET_DEFAULT(beforeTime_, "") };
    inline ListUserMessageRequest& setBeforeTime(string beforeTime) { DARABONBA_PTR_SET_VALUE(beforeTime_, beforeTime) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListUserMessageRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListUserMessageRequestUserInfo) };
    inline ListUserMessageRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListUserMessageRequestUserInfo) };
    inline ListUserMessageRequest& setUserInfo(const ListUserMessageRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListUserMessageRequest& setUserInfo(ListUserMessageRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListUserMessageRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


  protected:
    std::shared_ptr<string> beforeTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListUserMessageRequestUserInfo> userInfo_ = nullptr;
    std::shared_ptr<int32_t> limit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

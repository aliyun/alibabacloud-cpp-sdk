// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERINFORESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERINFORESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeUserInfoResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserInfoResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(clientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(subId, subId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserInfoResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(clientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(subId, subId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    DescribeUserInfoResponseBodyResultObject() = default ;
    DescribeUserInfoResponseBodyResultObject(const DescribeUserInfoResponseBodyResultObject &) = default ;
    DescribeUserInfoResponseBodyResultObject(DescribeUserInfoResponseBodyResultObject &&) = default ;
    DescribeUserInfoResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserInfoResponseBodyResultObject() = default ;
    DescribeUserInfoResponseBodyResultObject& operator=(const DescribeUserInfoResponseBodyResultObject &) = default ;
    DescribeUserInfoResponseBodyResultObject& operator=(DescribeUserInfoResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr
        && this->subId_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeUserInfoResponseBodyResultObject& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline DescribeUserInfoResponseBodyResultObject& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeUserInfoResponseBodyResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeUserInfoResponseBodyResultObject& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Client IP.
    std::shared_ptr<string> clientIp_ = nullptr;
    // Sub-account ID
    std::shared_ptr<string> subId_ = nullptr;
    // User UID
    std::shared_ptr<int64_t> userId_ = nullptr;
    // User name
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif

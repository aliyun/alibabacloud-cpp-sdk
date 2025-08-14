// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCERESPONSEBODYDATAUSER_HPP_
#define ALIBABACLOUD_MODELS_QUERYRUNNINGINSTANCERESPONSEBODYDATAUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryRunningInstanceResponseBodyDataUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRunningInstanceResponseBodyDataUser& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRunningInstanceResponseBodyDataUser& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    QueryRunningInstanceResponseBodyDataUser() = default ;
    QueryRunningInstanceResponseBodyDataUser(const QueryRunningInstanceResponseBodyDataUser &) = default ;
    QueryRunningInstanceResponseBodyDataUser(QueryRunningInstanceResponseBodyDataUser &&) = default ;
    QueryRunningInstanceResponseBodyDataUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRunningInstanceResponseBodyDataUser() = default ;
    QueryRunningInstanceResponseBodyDataUser& operator=(const QueryRunningInstanceResponseBodyDataUser &) = default ;
    QueryRunningInstanceResponseBodyDataUser& operator=(QueryRunningInstanceResponseBodyDataUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryRunningInstanceResponseBodyDataUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline QueryRunningInstanceResponseBodyDataUser& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif

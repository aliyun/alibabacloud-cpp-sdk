// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHARESTOUSERLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHARESTOUSERLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QuerySharesToUserListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySharesToUserListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySharesToUserListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QuerySharesToUserListRequest() = default ;
    QuerySharesToUserListRequest(const QuerySharesToUserListRequest &) = default ;
    QuerySharesToUserListRequest(QuerySharesToUserListRequest &&) = default ;
    QuerySharesToUserListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySharesToUserListRequest() = default ;
    QuerySharesToUserListRequest& operator=(const QuerySharesToUserListRequest &) = default ;
    QuerySharesToUserListRequest& operator=(QuerySharesToUserListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuerySharesToUserListRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the user. The user ID is the UserID of the Quick BI, not the UID of Alibaba Cloud.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

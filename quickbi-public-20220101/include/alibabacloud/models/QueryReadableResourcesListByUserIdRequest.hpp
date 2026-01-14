// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREADABLERESOURCESLISTBYUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryReadableResourcesListByUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReadableResourcesListByUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReadableResourcesListByUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryReadableResourcesListByUserIdRequest() = default ;
    QueryReadableResourcesListByUserIdRequest(const QueryReadableResourcesListByUserIdRequest &) = default ;
    QueryReadableResourcesListByUserIdRequest(QueryReadableResourcesListByUserIdRequest &&) = default ;
    QueryReadableResourcesListByUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReadableResourcesListByUserIdRequest() = default ;
    QueryReadableResourcesListByUserIdRequest& operator=(const QueryReadableResourcesListByUserIdRequest &) = default ;
    QueryReadableResourcesListByUserIdRequest& operator=(QueryReadableResourcesListByUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryReadableResourcesListByUserIdRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Quick BI the user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

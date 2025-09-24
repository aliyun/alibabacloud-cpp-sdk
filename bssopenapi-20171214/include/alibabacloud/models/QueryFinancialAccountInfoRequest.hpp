// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFINANCIALACCOUNTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFINANCIALACCOUNTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryFinancialAccountInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFinancialAccountInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFinancialAccountInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryFinancialAccountInfoRequest() = default ;
    QueryFinancialAccountInfoRequest(const QueryFinancialAccountInfoRequest &) = default ;
    QueryFinancialAccountInfoRequest(QueryFinancialAccountInfoRequest &&) = default ;
    QueryFinancialAccountInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFinancialAccountInfoRequest() = default ;
    QueryFinancialAccountInfoRequest& operator=(const QueryFinancialAccountInfoRequest &) = default ;
    QueryFinancialAccountInfoRequest& operator=(QueryFinancialAccountInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QueryFinancialAccountInfoRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

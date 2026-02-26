// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OrderPageQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class QueryOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryOrdersRequest() = default ;
    QueryOrdersRequest(const QueryOrdersRequest &) = default ;
    QueryOrdersRequest(QueryOrdersRequest &&) = default ;
    QueryOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrdersRequest() = default ;
    QueryOrdersRequest& operator=(const QueryOrdersRequest &) = default ;
    QueryOrdersRequest& operator=(QueryOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OrderPageQuery & getBody() const { DARABONBA_PTR_GET_CONST(body_, OrderPageQuery) };
    inline OrderPageQuery getBody() { DARABONBA_PTR_GET(body_, OrderPageQuery) };
    inline QueryOrdersRequest& setBody(const OrderPageQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryOrdersRequest& setBody(OrderPageQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<OrderPageQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif

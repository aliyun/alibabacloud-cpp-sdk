// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREDEEMRESPONSEBODYDATAREDEEM_HPP_
#define ALIBABACLOUD_MODELS_QUERYREDEEMRESPONSEBODYDATAREDEEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryRedeemResponseBodyDataRedeemRedeem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryRedeemResponseBodyDataRedeem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRedeemResponseBodyDataRedeem& obj) { 
      DARABONBA_PTR_TO_JSON(Redeem, redeem_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRedeemResponseBodyDataRedeem& obj) { 
      DARABONBA_PTR_FROM_JSON(Redeem, redeem_);
    };
    QueryRedeemResponseBodyDataRedeem() = default ;
    QueryRedeemResponseBodyDataRedeem(const QueryRedeemResponseBodyDataRedeem &) = default ;
    QueryRedeemResponseBodyDataRedeem(QueryRedeemResponseBodyDataRedeem &&) = default ;
    QueryRedeemResponseBodyDataRedeem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRedeemResponseBodyDataRedeem() = default ;
    QueryRedeemResponseBodyDataRedeem& operator=(const QueryRedeemResponseBodyDataRedeem &) = default ;
    QueryRedeemResponseBodyDataRedeem& operator=(QueryRedeemResponseBodyDataRedeem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->redeem_ != nullptr; };
    // redeem Field Functions 
    bool hasRedeem() const { return this->redeem_ != nullptr;};
    void deleteRedeem() { this->redeem_ = nullptr;};
    inline const vector<Models::QueryRedeemResponseBodyDataRedeemRedeem> & redeem() const { DARABONBA_PTR_GET_CONST(redeem_, vector<Models::QueryRedeemResponseBodyDataRedeemRedeem>) };
    inline vector<Models::QueryRedeemResponseBodyDataRedeemRedeem> redeem() { DARABONBA_PTR_GET(redeem_, vector<Models::QueryRedeemResponseBodyDataRedeemRedeem>) };
    inline QueryRedeemResponseBodyDataRedeem& setRedeem(const vector<Models::QueryRedeemResponseBodyDataRedeemRedeem> & redeem) { DARABONBA_PTR_SET_VALUE(redeem_, redeem) };
    inline QueryRedeemResponseBodyDataRedeem& setRedeem(vector<Models::QueryRedeemResponseBodyDataRedeemRedeem> && redeem) { DARABONBA_PTR_SET_RVALUE(redeem_, redeem) };


  protected:
    std::shared_ptr<vector<Models::QueryRedeemResponseBodyDataRedeemRedeem>> redeem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif

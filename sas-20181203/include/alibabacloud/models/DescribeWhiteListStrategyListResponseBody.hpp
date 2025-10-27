// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWhiteListStrategyListResponseBodyStrategies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListStrategyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListStrategyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategies, strategies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListStrategyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategies, strategies_);
    };
    DescribeWhiteListStrategyListResponseBody() = default ;
    DescribeWhiteListStrategyListResponseBody(const DescribeWhiteListStrategyListResponseBody &) = default ;
    DescribeWhiteListStrategyListResponseBody(DescribeWhiteListStrategyListResponseBody &&) = default ;
    DescribeWhiteListStrategyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListStrategyListResponseBody() = default ;
    DescribeWhiteListStrategyListResponseBody& operator=(const DescribeWhiteListStrategyListResponseBody &) = default ;
    DescribeWhiteListStrategyListResponseBody& operator=(DescribeWhiteListStrategyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->strategies_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListStrategyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategies Field Functions 
    bool hasStrategies() const { return this->strategies_ != nullptr;};
    void deleteStrategies() { this->strategies_ = nullptr;};
    inline const vector<DescribeWhiteListStrategyListResponseBodyStrategies> & strategies() const { DARABONBA_PTR_GET_CONST(strategies_, vector<DescribeWhiteListStrategyListResponseBodyStrategies>) };
    inline vector<DescribeWhiteListStrategyListResponseBodyStrategies> strategies() { DARABONBA_PTR_GET(strategies_, vector<DescribeWhiteListStrategyListResponseBodyStrategies>) };
    inline DescribeWhiteListStrategyListResponseBody& setStrategies(const vector<DescribeWhiteListStrategyListResponseBodyStrategies> & strategies) { DARABONBA_PTR_SET_VALUE(strategies_, strategies) };
    inline DescribeWhiteListStrategyListResponseBody& setStrategies(vector<DescribeWhiteListStrategyListResponseBodyStrategies> && strategies) { DARABONBA_PTR_SET_RVALUE(strategies_, strategies) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the policies.
    std::shared_ptr<vector<DescribeWhiteListStrategyListResponseBodyStrategies>> strategies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

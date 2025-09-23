// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLayer4RulesResponseBodyListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLayer4RulesResponseBody() = default ;
    DescribeLayer4RulesResponseBody(const DescribeLayer4RulesResponseBody &) = default ;
    DescribeLayer4RulesResponseBody(DescribeLayer4RulesResponseBody &&) = default ;
    DescribeLayer4RulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RulesResponseBody() = default ;
    DescribeLayer4RulesResponseBody& operator=(const DescribeLayer4RulesResponseBody &) = default ;
    DescribeLayer4RulesResponseBody& operator=(DescribeLayer4RulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listeners_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<DescribeLayer4RulesResponseBodyListeners> & listeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<DescribeLayer4RulesResponseBodyListeners>) };
    inline vector<DescribeLayer4RulesResponseBodyListeners> listeners() { DARABONBA_PTR_GET(listeners_, vector<DescribeLayer4RulesResponseBodyListeners>) };
    inline DescribeLayer4RulesResponseBody& setListeners(const vector<DescribeLayer4RulesResponseBodyListeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeLayer4RulesResponseBody& setListeners(vector<DescribeLayer4RulesResponseBodyListeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLayer4RulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeLayer4RulesResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Detailed configuration of port forwarding rules, including the forwarding port, forwarding protocol, and origin server addresses, etc.
    std::shared_ptr<vector<DescribeLayer4RulesResponseBodyListeners>> listeners_ = nullptr;
    // The ID of the current request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of returned results.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif

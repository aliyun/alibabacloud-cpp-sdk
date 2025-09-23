// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLayer4RuleAttributesResponseBodyListeners.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RuleAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RuleAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RuleAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLayer4RuleAttributesResponseBody() = default ;
    DescribeLayer4RuleAttributesResponseBody(const DescribeLayer4RuleAttributesResponseBody &) = default ;
    DescribeLayer4RuleAttributesResponseBody(DescribeLayer4RuleAttributesResponseBody &&) = default ;
    DescribeLayer4RuleAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RuleAttributesResponseBody() = default ;
    DescribeLayer4RuleAttributesResponseBody& operator=(const DescribeLayer4RuleAttributesResponseBody &) = default ;
    DescribeLayer4RuleAttributesResponseBody& operator=(DescribeLayer4RuleAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listeners_ != nullptr
        && this->requestId_ != nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<DescribeLayer4RuleAttributesResponseBodyListeners> & listeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<DescribeLayer4RuleAttributesResponseBodyListeners>) };
    inline vector<DescribeLayer4RuleAttributesResponseBodyListeners> listeners() { DARABONBA_PTR_GET(listeners_, vector<DescribeLayer4RuleAttributesResponseBodyListeners>) };
    inline DescribeLayer4RuleAttributesResponseBody& setListeners(const vector<DescribeLayer4RuleAttributesResponseBodyListeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeLayer4RuleAttributesResponseBody& setListeners(vector<DescribeLayer4RuleAttributesResponseBodyListeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLayer4RuleAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeLayer4RuleAttributesResponseBodyListeners>> listeners_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWALIASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWALIASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFlowAliasResponseBodyAlias.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DescribeFlowAliasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowAliasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowAliasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFlowAliasResponseBody() = default ;
    DescribeFlowAliasResponseBody(const DescribeFlowAliasResponseBody &) = default ;
    DescribeFlowAliasResponseBody(DescribeFlowAliasResponseBody &&) = default ;
    DescribeFlowAliasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowAliasResponseBody() = default ;
    DescribeFlowAliasResponseBody& operator=(const DescribeFlowAliasResponseBody &) = default ;
    DescribeFlowAliasResponseBody& operator=(DescribeFlowAliasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->requestId_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline const DescribeFlowAliasResponseBodyAlias & alias() const { DARABONBA_PTR_GET_CONST(alias_, DescribeFlowAliasResponseBodyAlias) };
    inline DescribeFlowAliasResponseBodyAlias alias() { DARABONBA_PTR_GET(alias_, DescribeFlowAliasResponseBodyAlias) };
    inline DescribeFlowAliasResponseBody& setAlias(const DescribeFlowAliasResponseBodyAlias & alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };
    inline DescribeFlowAliasResponseBody& setAlias(DescribeFlowAliasResponseBodyAlias && alias) { DARABONBA_PTR_SET_RVALUE(alias_, alias) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowAliasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeFlowAliasResponseBodyAlias> alias_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif

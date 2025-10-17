// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvocationsResponseBodyInvocationsInvocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocations& obj) { 
      DARABONBA_PTR_TO_JSON(Invocation, invocation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocations& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocation, invocation_);
    };
    DescribeInvocationsResponseBodyInvocations() = default ;
    DescribeInvocationsResponseBodyInvocations(const DescribeInvocationsResponseBodyInvocations &) = default ;
    DescribeInvocationsResponseBodyInvocations(DescribeInvocationsResponseBodyInvocations &&) = default ;
    DescribeInvocationsResponseBodyInvocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyInvocations() = default ;
    DescribeInvocationsResponseBodyInvocations& operator=(const DescribeInvocationsResponseBodyInvocations &) = default ;
    DescribeInvocationsResponseBodyInvocations& operator=(DescribeInvocationsResponseBodyInvocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invocation_ == nullptr; };
    // invocation Field Functions 
    bool hasInvocation() const { return this->invocation_ != nullptr;};
    void deleteInvocation() { this->invocation_ = nullptr;};
    inline const vector<Models::DescribeInvocationsResponseBodyInvocationsInvocation> & invocation() const { DARABONBA_PTR_GET_CONST(invocation_, vector<Models::DescribeInvocationsResponseBodyInvocationsInvocation>) };
    inline vector<Models::DescribeInvocationsResponseBodyInvocationsInvocation> invocation() { DARABONBA_PTR_GET(invocation_, vector<Models::DescribeInvocationsResponseBodyInvocationsInvocation>) };
    inline DescribeInvocationsResponseBodyInvocations& setInvocation(const vector<Models::DescribeInvocationsResponseBodyInvocationsInvocation> & invocation) { DARABONBA_PTR_SET_VALUE(invocation_, invocation) };
    inline DescribeInvocationsResponseBodyInvocations& setInvocation(vector<Models::DescribeInvocationsResponseBodyInvocationsInvocation> && invocation) { DARABONBA_PTR_SET_RVALUE(invocation_, invocation) };


  protected:
    // The file sending records.
    std::shared_ptr<vector<Models::DescribeInvocationsResponseBodyInvocationsInvocation>> invocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

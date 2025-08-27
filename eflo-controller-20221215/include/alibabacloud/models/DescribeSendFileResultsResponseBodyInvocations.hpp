// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENDFILERESULTSRESPONSEBODYINVOCATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSendFileResultsResponseBodyInvocationsInvocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeSendFileResultsResponseBodyInvocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSendFileResultsResponseBodyInvocations& obj) { 
      DARABONBA_PTR_TO_JSON(Invocation, invocation_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSendFileResultsResponseBodyInvocations& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocation, invocation_);
    };
    DescribeSendFileResultsResponseBodyInvocations() = default ;
    DescribeSendFileResultsResponseBodyInvocations(const DescribeSendFileResultsResponseBodyInvocations &) = default ;
    DescribeSendFileResultsResponseBodyInvocations(DescribeSendFileResultsResponseBodyInvocations &&) = default ;
    DescribeSendFileResultsResponseBodyInvocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSendFileResultsResponseBodyInvocations() = default ;
    DescribeSendFileResultsResponseBodyInvocations& operator=(const DescribeSendFileResultsResponseBodyInvocations &) = default ;
    DescribeSendFileResultsResponseBodyInvocations& operator=(DescribeSendFileResultsResponseBodyInvocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->invocation_ != nullptr; };
    // invocation Field Functions 
    bool hasInvocation() const { return this->invocation_ != nullptr;};
    void deleteInvocation() { this->invocation_ = nullptr;};
    inline const vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocation> & invocation() const { DARABONBA_PTR_GET_CONST(invocation_, vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocation>) };
    inline vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocation> invocation() { DARABONBA_PTR_GET(invocation_, vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocation>) };
    inline DescribeSendFileResultsResponseBodyInvocations& setInvocation(const vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocation> & invocation) { DARABONBA_PTR_SET_VALUE(invocation_, invocation) };
    inline DescribeSendFileResultsResponseBodyInvocations& setInvocation(vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocation> && invocation) { DARABONBA_PTR_SET_RVALUE(invocation_, invocation) };


  protected:
    // The command execution ID.
    std::shared_ptr<vector<Models::DescribeSendFileResultsResponseBodyInvocationsInvocation>> invocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionArg, functionArg_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionArg, functionArg_);
    };
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(const DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionArg_ == nullptr; };
    // functionArg Field Functions 
    bool hasFunctionArg() const { return this->functionArg_ != nullptr;};
    void deleteFunctionArg() { this->functionArg_ = nullptr;};
    inline const vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg() const { DARABONBA_PTR_GET_CONST(functionArg_, vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> functionArg() { DARABONBA_PTR_GET(functionArg_, vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(const vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg) { DARABONBA_PTR_SET_VALUE(functionArg_, functionArg) };
    inline DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> && functionArg) { DARABONBA_PTR_SET_RVALUE(functionArg_, functionArg) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>> functionArg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

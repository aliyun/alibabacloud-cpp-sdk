// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionArg, functionArg_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionArg, functionArg_);
    };
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(const DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionArg_ != nullptr; };
    // functionArg Field Functions 
    bool hasFunctionArg() const { return this->functionArg_ != nullptr;};
    void deleteFunctionArg() { this->functionArg_ = nullptr;};
    inline const vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg() const { DARABONBA_PTR_GET_CONST(functionArg_, vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> functionArg() { DARABONBA_PTR_GET(functionArg_, vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(const vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg) { DARABONBA_PTR_SET_VALUE(functionArg_, functionArg) };
    inline DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> && functionArg) { DARABONBA_PTR_SET_RVALUE(functionArg_, functionArg) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>> functionArg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

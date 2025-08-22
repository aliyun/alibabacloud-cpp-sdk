// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNIPADOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionArg, functionArg_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionArg, functionArg_);
    };
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(const DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionArg_ != nullptr; };
    // functionArg Field Functions 
    bool hasFunctionArg() const { return this->functionArg_ != nullptr;};
    void deleteFunctionArg() { this->functionArg_ = nullptr;};
    inline const vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg() const { DARABONBA_PTR_GET_CONST(functionArg_, vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> functionArg() { DARABONBA_PTR_GET(functionArg_, vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(const vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg) { DARABONBA_PTR_SET_VALUE(functionArg_, functionArg) };
    inline DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> && functionArg) { DARABONBA_PTR_SET_RVALUE(functionArg_, functionArg) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnIpaDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>> functionArg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

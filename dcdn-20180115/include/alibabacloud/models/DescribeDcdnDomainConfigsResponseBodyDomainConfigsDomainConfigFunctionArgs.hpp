// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionArg, functionArg_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionArg, functionArg_);
    };
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(const DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionArg_ != nullptr; };
    // functionArg Field Functions 
    bool hasFunctionArg() const { return this->functionArg_ != nullptr;};
    void deleteFunctionArg() { this->functionArg_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg() const { DARABONBA_PTR_GET_CONST(functionArg_, vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> functionArg() { DARABONBA_PTR_GET(functionArg_, vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(const vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg) { DARABONBA_PTR_SET_VALUE(functionArg_, functionArg) };
    inline DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> && functionArg) { DARABONBA_PTR_SET_RVALUE(functionArg_, functionArg) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>> functionArg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

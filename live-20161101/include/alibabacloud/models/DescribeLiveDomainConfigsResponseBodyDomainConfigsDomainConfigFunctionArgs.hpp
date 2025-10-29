// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINCONFIGSRESPONSEBODYDOMAINCONFIGSDOMAINCONFIGFUNCTIONARGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionArg, functionArg_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionArg, functionArg_);
    };
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs() = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(const DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &) = default ;
    DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& operator=(DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionArg_ == nullptr; };
    // functionArg Field Functions 
    bool hasFunctionArg() const { return this->functionArg_ != nullptr;};
    void deleteFunctionArg() { this->functionArg_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg() const { DARABONBA_PTR_GET_CONST(functionArg_, vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> functionArg() { DARABONBA_PTR_GET(functionArg_, vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>) };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(const vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> & functionArg) { DARABONBA_PTR_SET_VALUE(functionArg_, functionArg) };
    inline DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgs& setFunctionArg(vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg> && functionArg) { DARABONBA_PTR_SET_RVALUE(functionArg_, functionArg) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainConfigsResponseBodyDomainConfigsDomainConfigFunctionArgsFunctionArg>> functionArg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

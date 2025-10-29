// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGSFUNCTIONARGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGSFUNCTIONARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& obj) { 
      DARABONBA_PTR_TO_JSON(ArgName, argName_);
      DARABONBA_PTR_TO_JSON(ArgValue, argValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(ArgName, argName_);
      DARABONBA_PTR_FROM_JSON(ArgValue, argValue_);
    };
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs() = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs(const DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs &) = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs(DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs &&) = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs() = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& operator=(const DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs &) = default ;
    DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& operator=(DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->argName_ == nullptr
        && return this->argValue_ == nullptr; };
    // argName Field Functions 
    bool hasArgName() const { return this->argName_ != nullptr;};
    void deleteArgName() { this->argName_ = nullptr;};
    inline string argName() const { DARABONBA_PTR_GET_DEFAULT(argName_, "") };
    inline DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& setArgName(string argName) { DARABONBA_PTR_SET_VALUE(argName_, argName) };


    // argValue Field Functions 
    bool hasArgValue() const { return this->argValue_ != nullptr;};
    void deleteArgValue() { this->argValue_ = nullptr;};
    inline string argValue() const { DARABONBA_PTR_GET_DEFAULT(argValue_, "") };
    inline DescribeLiveDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& setArgValue(string argValue) { DARABONBA_PTR_SET_VALUE(argValue_, argValue) };


  protected:
    // The name of the parameter.
    std::shared_ptr<string> argName_ = nullptr;
    // The configured value.
    std::shared_ptr<string> argValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

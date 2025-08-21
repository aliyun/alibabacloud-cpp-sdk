// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGSFUNCTIONARGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINSTAGINGCONFIGRESPONSEBODYDOMAINCONFIGSFUNCTIONARGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& obj) { 
      DARABONBA_PTR_TO_JSON(ArgName, argName_);
      DARABONBA_PTR_TO_JSON(ArgValue, argValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(ArgName, argName_);
      DARABONBA_PTR_FROM_JSON(ArgValue, argValue_);
    };
    DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs() = default ;
    DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs(const DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs &) = default ;
    DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs(DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs &&) = default ;
    DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs() = default ;
    DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& operator=(const DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs &) = default ;
    DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& operator=(DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->argName_ != nullptr
        && this->argValue_ != nullptr; };
    // argName Field Functions 
    bool hasArgName() const { return this->argName_ != nullptr;};
    void deleteArgName() { this->argName_ = nullptr;};
    inline string argName() const { DARABONBA_PTR_GET_DEFAULT(argName_, "") };
    inline DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& setArgName(string argName) { DARABONBA_PTR_SET_VALUE(argName_, argName) };


    // argValue Field Functions 
    bool hasArgValue() const { return this->argValue_ != nullptr;};
    void deleteArgValue() { this->argValue_ = nullptr;};
    inline string argValue() const { DARABONBA_PTR_GET_DEFAULT(argValue_, "") };
    inline DescribeCdnDomainStagingConfigResponseBodyDomainConfigsFunctionArgs& setArgValue(string argValue) { DARABONBA_PTR_SET_VALUE(argValue_, argValue) };


  protected:
    // The configuration name.
    std::shared_ptr<string> argName_ = nullptr;
    // The configuration value.
    std::shared_ptr<string> argValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

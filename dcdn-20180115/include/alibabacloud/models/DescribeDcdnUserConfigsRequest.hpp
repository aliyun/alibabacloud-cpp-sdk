// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    DescribeDcdnUserConfigsRequest() = default ;
    DescribeDcdnUserConfigsRequest(const DescribeDcdnUserConfigsRequest &) = default ;
    DescribeDcdnUserConfigsRequest(DescribeDcdnUserConfigsRequest &&) = default ;
    DescribeDcdnUserConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserConfigsRequest() = default ;
    DescribeDcdnUserConfigsRequest& operator=(const DescribeDcdnUserConfigsRequest &) = default ;
    DescribeDcdnUserConfigsRequest& operator=(DescribeDcdnUserConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functionName_ != nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeDcdnUserConfigsRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The configuration that you want to query. Valid values:
    // 
    // *   domain_business_control: user configurations
    // *   bot_basic: the basic edition of bot traffic management, which supports authorized crawlers and provides threat intelligence
    // *   bot_Advance: the advanced edition of bot traffic management, which supports authorized crawlers and AI intelligent protection and provides threat intelligence
    // 
    // This parameter is required.
    std::shared_ptr<string> functionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

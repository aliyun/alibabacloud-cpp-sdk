// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTKIBANANODEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTKIBANANODEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultKibanaNodePropertiesAmountRange.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationResponseBodyResultKibanaNodeProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBodyResultKibanaNodeProperties& obj) { 
      DARABONBA_PTR_TO_JSON(amountRange, amountRange_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBodyResultKibanaNodeProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(amountRange, amountRange_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    GetRegionConfigurationResponseBodyResultKibanaNodeProperties() = default ;
    GetRegionConfigurationResponseBodyResultKibanaNodeProperties(const GetRegionConfigurationResponseBodyResultKibanaNodeProperties &) = default ;
    GetRegionConfigurationResponseBodyResultKibanaNodeProperties(GetRegionConfigurationResponseBodyResultKibanaNodeProperties &&) = default ;
    GetRegionConfigurationResponseBodyResultKibanaNodeProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBodyResultKibanaNodeProperties() = default ;
    GetRegionConfigurationResponseBodyResultKibanaNodeProperties& operator=(const GetRegionConfigurationResponseBodyResultKibanaNodeProperties &) = default ;
    GetRegionConfigurationResponseBodyResultKibanaNodeProperties& operator=(GetRegionConfigurationResponseBodyResultKibanaNodeProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amountRange_ != nullptr
        && this->spec_ != nullptr; };
    // amountRange Field Functions 
    bool hasAmountRange() const { return this->amountRange_ != nullptr;};
    void deleteAmountRange() { this->amountRange_ = nullptr;};
    inline const Models::GetRegionConfigurationResponseBodyResultKibanaNodePropertiesAmountRange & amountRange() const { DARABONBA_PTR_GET_CONST(amountRange_, Models::GetRegionConfigurationResponseBodyResultKibanaNodePropertiesAmountRange) };
    inline Models::GetRegionConfigurationResponseBodyResultKibanaNodePropertiesAmountRange amountRange() { DARABONBA_PTR_GET(amountRange_, Models::GetRegionConfigurationResponseBodyResultKibanaNodePropertiesAmountRange) };
    inline GetRegionConfigurationResponseBodyResultKibanaNodeProperties& setAmountRange(const Models::GetRegionConfigurationResponseBodyResultKibanaNodePropertiesAmountRange & amountRange) { DARABONBA_PTR_SET_VALUE(amountRange_, amountRange) };
    inline GetRegionConfigurationResponseBodyResultKibanaNodeProperties& setAmountRange(Models::GetRegionConfigurationResponseBodyResultKibanaNodePropertiesAmountRange && amountRange) { DARABONBA_PTR_SET_RVALUE(amountRange_, amountRange) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const vector<string> & spec() const { DARABONBA_PTR_GET_CONST(spec_, vector<string>) };
    inline vector<string> spec() { DARABONBA_PTR_GET(spec_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResultKibanaNodeProperties& setSpec(const vector<string> & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline GetRegionConfigurationResponseBodyResultKibanaNodeProperties& setSpec(vector<string> && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


  protected:
    std::shared_ptr<Models::GetRegionConfigurationResponseBodyResultKibanaNodePropertiesAmountRange> amountRange_ = nullptr;
    std::shared_ptr<vector<string>> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

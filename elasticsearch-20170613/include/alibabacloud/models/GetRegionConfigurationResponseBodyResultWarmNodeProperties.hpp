// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTWARMNODEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTWARMNODEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange.hpp>
#include <vector>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultWarmNodePropertiesDiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationResponseBodyResultWarmNodeProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBodyResultWarmNodeProperties& obj) { 
      DARABONBA_PTR_TO_JSON(amountRange, amountRange_);
      DARABONBA_PTR_TO_JSON(diskList, diskList_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBodyResultWarmNodeProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(amountRange, amountRange_);
      DARABONBA_PTR_FROM_JSON(diskList, diskList_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    GetRegionConfigurationResponseBodyResultWarmNodeProperties() = default ;
    GetRegionConfigurationResponseBodyResultWarmNodeProperties(const GetRegionConfigurationResponseBodyResultWarmNodeProperties &) = default ;
    GetRegionConfigurationResponseBodyResultWarmNodeProperties(GetRegionConfigurationResponseBodyResultWarmNodeProperties &&) = default ;
    GetRegionConfigurationResponseBodyResultWarmNodeProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBodyResultWarmNodeProperties() = default ;
    GetRegionConfigurationResponseBodyResultWarmNodeProperties& operator=(const GetRegionConfigurationResponseBodyResultWarmNodeProperties &) = default ;
    GetRegionConfigurationResponseBodyResultWarmNodeProperties& operator=(GetRegionConfigurationResponseBodyResultWarmNodeProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amountRange_ != nullptr
        && this->diskList_ != nullptr && this->spec_ != nullptr; };
    // amountRange Field Functions 
    bool hasAmountRange() const { return this->amountRange_ != nullptr;};
    void deleteAmountRange() { this->amountRange_ = nullptr;};
    inline const Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange & amountRange() const { DARABONBA_PTR_GET_CONST(amountRange_, Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange) };
    inline Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange amountRange() { DARABONBA_PTR_GET(amountRange_, Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange) };
    inline GetRegionConfigurationResponseBodyResultWarmNodeProperties& setAmountRange(const Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange & amountRange) { DARABONBA_PTR_SET_VALUE(amountRange_, amountRange) };
    inline GetRegionConfigurationResponseBodyResultWarmNodeProperties& setAmountRange(Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange && amountRange) { DARABONBA_PTR_SET_RVALUE(amountRange_, amountRange) };


    // diskList Field Functions 
    bool hasDiskList() const { return this->diskList_ != nullptr;};
    void deleteDiskList() { this->diskList_ = nullptr;};
    inline const vector<Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesDiskList> & diskList() const { DARABONBA_PTR_GET_CONST(diskList_, vector<Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesDiskList>) };
    inline vector<Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesDiskList> diskList() { DARABONBA_PTR_GET(diskList_, vector<Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesDiskList>) };
    inline GetRegionConfigurationResponseBodyResultWarmNodeProperties& setDiskList(const vector<Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesDiskList> & diskList) { DARABONBA_PTR_SET_VALUE(diskList_, diskList) };
    inline GetRegionConfigurationResponseBodyResultWarmNodeProperties& setDiskList(vector<Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesDiskList> && diskList) { DARABONBA_PTR_SET_RVALUE(diskList_, diskList) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const vector<string> & spec() const { DARABONBA_PTR_GET_CONST(spec_, vector<string>) };
    inline vector<string> spec() { DARABONBA_PTR_GET(spec_, vector<string>) };
    inline GetRegionConfigurationResponseBodyResultWarmNodeProperties& setSpec(const vector<string> & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline GetRegionConfigurationResponseBodyResultWarmNodeProperties& setSpec(vector<string> && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


  protected:
    std::shared_ptr<Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange> amountRange_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionConfigurationResponseBodyResultWarmNodePropertiesDiskList>> diskList_ = nullptr;
    std::shared_ptr<vector<string>> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif

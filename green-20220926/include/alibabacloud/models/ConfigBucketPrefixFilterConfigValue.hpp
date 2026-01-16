// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGBUCKETPREFIXFILTERCONFIGVALUE_HPP_
#define ALIBABACLOUD_MODELS_CONFIGBUCKETPREFIXFILTERCONFIGVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ConfigBucketPrefixFilterConfigValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigBucketPrefixFilterConfigValue& obj) { 
      DARABONBA_PTR_TO_JSON(PrefixFilterType, prefixFilterType_);
      DARABONBA_PTR_TO_JSON(PrefixFilters, prefixFilters_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigBucketPrefixFilterConfigValue& obj) { 
      DARABONBA_PTR_FROM_JSON(PrefixFilterType, prefixFilterType_);
      DARABONBA_PTR_FROM_JSON(PrefixFilters, prefixFilters_);
    };
    ConfigBucketPrefixFilterConfigValue() = default ;
    ConfigBucketPrefixFilterConfigValue(const ConfigBucketPrefixFilterConfigValue &) = default ;
    ConfigBucketPrefixFilterConfigValue(ConfigBucketPrefixFilterConfigValue &&) = default ;
    ConfigBucketPrefixFilterConfigValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigBucketPrefixFilterConfigValue() = default ;
    ConfigBucketPrefixFilterConfigValue& operator=(const ConfigBucketPrefixFilterConfigValue &) = default ;
    ConfigBucketPrefixFilterConfigValue& operator=(ConfigBucketPrefixFilterConfigValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prefixFilterType_ == nullptr
        && this->prefixFilters_ == nullptr; };
    // prefixFilterType Field Functions 
    bool hasPrefixFilterType() const { return this->prefixFilterType_ != nullptr;};
    void deletePrefixFilterType() { this->prefixFilterType_ = nullptr;};
    inline string getPrefixFilterType() const { DARABONBA_PTR_GET_DEFAULT(prefixFilterType_, "") };
    inline ConfigBucketPrefixFilterConfigValue& setPrefixFilterType(string prefixFilterType) { DARABONBA_PTR_SET_VALUE(prefixFilterType_, prefixFilterType) };


    // prefixFilters Field Functions 
    bool hasPrefixFilters() const { return this->prefixFilters_ != nullptr;};
    void deletePrefixFilters() { this->prefixFilters_ = nullptr;};
    inline const vector<string> & getPrefixFilters() const { DARABONBA_PTR_GET_CONST(prefixFilters_, vector<string>) };
    inline vector<string> getPrefixFilters() { DARABONBA_PTR_GET(prefixFilters_, vector<string>) };
    inline ConfigBucketPrefixFilterConfigValue& setPrefixFilters(const vector<string> & prefixFilters) { DARABONBA_PTR_SET_VALUE(prefixFilters_, prefixFilters) };
    inline ConfigBucketPrefixFilterConfigValue& setPrefixFilters(vector<string> && prefixFilters) { DARABONBA_PTR_SET_RVALUE(prefixFilters_, prefixFilters) };


  protected:
    shared_ptr<string> prefixFilterType_ {};
    shared_ptr<vector<string>> prefixFilters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif

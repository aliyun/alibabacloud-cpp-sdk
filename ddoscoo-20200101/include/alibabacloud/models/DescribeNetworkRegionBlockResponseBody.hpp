// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKREGIONBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKREGIONBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRegionBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRegionBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRegionBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkRegionBlockResponseBody() = default ;
    DescribeNetworkRegionBlockResponseBody(const DescribeNetworkRegionBlockResponseBody &) = default ;
    DescribeNetworkRegionBlockResponseBody(DescribeNetworkRegionBlockResponseBody &&) = default ;
    DescribeNetworkRegionBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRegionBlockResponseBody() = default ;
    DescribeNetworkRegionBlockResponseBody& operator=(const DescribeNetworkRegionBlockResponseBody &) = default ;
    DescribeNetworkRegionBlockResponseBody& operator=(DescribeNetworkRegionBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(Countries, countries_);
        DARABONBA_PTR_TO_JSON(Provinces, provinces_);
        DARABONBA_PTR_TO_JSON(RegionBlockSwitch, regionBlockSwitch_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(Countries, countries_);
        DARABONBA_PTR_FROM_JSON(Provinces, provinces_);
        DARABONBA_PTR_FROM_JSON(RegionBlockSwitch, regionBlockSwitch_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->countries_ == nullptr
        && this->provinces_ == nullptr && this->regionBlockSwitch_ == nullptr; };
      // countries Field Functions 
      bool hasCountries() const { return this->countries_ != nullptr;};
      void deleteCountries() { this->countries_ = nullptr;};
      inline const vector<int64_t> & getCountries() const { DARABONBA_PTR_GET_CONST(countries_, vector<int64_t>) };
      inline vector<int64_t> getCountries() { DARABONBA_PTR_GET(countries_, vector<int64_t>) };
      inline Config& setCountries(const vector<int64_t> & countries) { DARABONBA_PTR_SET_VALUE(countries_, countries) };
      inline Config& setCountries(vector<int64_t> && countries) { DARABONBA_PTR_SET_RVALUE(countries_, countries) };


      // provinces Field Functions 
      bool hasProvinces() const { return this->provinces_ != nullptr;};
      void deleteProvinces() { this->provinces_ = nullptr;};
      inline const vector<int64_t> & getProvinces() const { DARABONBA_PTR_GET_CONST(provinces_, vector<int64_t>) };
      inline vector<int64_t> getProvinces() { DARABONBA_PTR_GET(provinces_, vector<int64_t>) };
      inline Config& setProvinces(const vector<int64_t> & provinces) { DARABONBA_PTR_SET_VALUE(provinces_, provinces) };
      inline Config& setProvinces(vector<int64_t> && provinces) { DARABONBA_PTR_SET_RVALUE(provinces_, provinces) };


      // regionBlockSwitch Field Functions 
      bool hasRegionBlockSwitch() const { return this->regionBlockSwitch_ != nullptr;};
      void deleteRegionBlockSwitch() { this->regionBlockSwitch_ = nullptr;};
      inline string getRegionBlockSwitch() const { DARABONBA_PTR_GET_DEFAULT(regionBlockSwitch_, "") };
      inline Config& setRegionBlockSwitch(string regionBlockSwitch) { DARABONBA_PTR_SET_VALUE(regionBlockSwitch_, regionBlockSwitch) };


    protected:
      // The codes of the countries or areas from which the requests are blocked.
      shared_ptr<vector<int64_t>> countries_ {};
      // The codes of the administrative regions in China from which the requests are blocked.
      shared_ptr<vector<int64_t>> provinces_ {};
      // The status of the Location Blacklist policy. Valid values:
      // 
      // *   **on**: enabled
      // *   **off**: disabled
      shared_ptr<string> regionBlockSwitch_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeNetworkRegionBlockResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, DescribeNetworkRegionBlockResponseBody::Config) };
    inline DescribeNetworkRegionBlockResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, DescribeNetworkRegionBlockResponseBody::Config) };
    inline DescribeNetworkRegionBlockResponseBody& setConfig(const DescribeNetworkRegionBlockResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeNetworkRegionBlockResponseBody& setConfig(DescribeNetworkRegionBlockResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkRegionBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of blocked locations.
    shared_ptr<DescribeNetworkRegionBlockResponseBody::Config> config_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATASERVICEDOMAINCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATASERVICEDOMAINCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppInfoResponseBodyDataServiceDomainConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppInfoResponseBodyDataServiceDomainConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(PropagatorTypes, propagatorTypes_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(Tracing, tracing_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppInfoResponseBodyDataServiceDomainConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(PropagatorTypes, propagatorTypes_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
    };
    GetRumAppInfoResponseBodyDataServiceDomainConfigs() = default ;
    GetRumAppInfoResponseBodyDataServiceDomainConfigs(const GetRumAppInfoResponseBodyDataServiceDomainConfigs &) = default ;
    GetRumAppInfoResponseBodyDataServiceDomainConfigs(GetRumAppInfoResponseBodyDataServiceDomainConfigs &&) = default ;
    GetRumAppInfoResponseBodyDataServiceDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppInfoResponseBodyDataServiceDomainConfigs() = default ;
    GetRumAppInfoResponseBodyDataServiceDomainConfigs& operator=(const GetRumAppInfoResponseBodyDataServiceDomainConfigs &) = default ;
    GetRumAppInfoResponseBodyDataServiceDomainConfigs& operator=(GetRumAppInfoResponseBodyDataServiceDomainConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->domain_ != nullptr && this->propagatorTypes_ != nullptr && this->samplingRate_ != nullptr && this->tracing_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRumAppInfoResponseBodyDataServiceDomainConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetRumAppInfoResponseBodyDataServiceDomainConfigs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // propagatorTypes Field Functions 
    bool hasPropagatorTypes() const { return this->propagatorTypes_ != nullptr;};
    void deletePropagatorTypes() { this->propagatorTypes_ = nullptr;};
    inline const vector<string> & propagatorTypes() const { DARABONBA_PTR_GET_CONST(propagatorTypes_, vector<string>) };
    inline vector<string> propagatorTypes() { DARABONBA_PTR_GET(propagatorTypes_, vector<string>) };
    inline GetRumAppInfoResponseBodyDataServiceDomainConfigs& setPropagatorTypes(const vector<string> & propagatorTypes) { DARABONBA_PTR_SET_VALUE(propagatorTypes_, propagatorTypes) };
    inline GetRumAppInfoResponseBodyDataServiceDomainConfigs& setPropagatorTypes(vector<string> && propagatorTypes) { DARABONBA_PTR_SET_RVALUE(propagatorTypes_, propagatorTypes) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline int32_t samplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0) };
    inline GetRumAppInfoResponseBodyDataServiceDomainConfigs& setSamplingRate(int32_t samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // tracing Field Functions 
    bool hasTracing() const { return this->tracing_ != nullptr;};
    void deleteTracing() { this->tracing_ = nullptr;};
    inline bool tracing() const { DARABONBA_PTR_GET_DEFAULT(tracing_, false) };
    inline GetRumAppInfoResponseBodyDataServiceDomainConfigs& setTracing(bool tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The domain name or IP address.
    std::shared_ptr<string> domain_ = nullptr;
    // The trace propagation protocols. This parameter is required if the tracing analysis feature is enabled.
    std::shared_ptr<vector<string>> propagatorTypes_ = nullptr;
    // The sampling rate of a trace. Valid values: (0, 100].
    std::shared_ptr<int32_t> samplingRate_ = nullptr;
    // Indicates whether the tracing analysis feature is enabled. To enable the tracing analysis feature, you must activate Managed Service for OpenTelemetry. Valid values:
    // 
    // *   `true`: enables the tracing analysis feature. If you enable the tracing analysis feature, related headers are inserted into requests for the domain name.
    // *   `false`: disables the tracing analysis feature.
    std::shared_ptr<bool> tracing_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

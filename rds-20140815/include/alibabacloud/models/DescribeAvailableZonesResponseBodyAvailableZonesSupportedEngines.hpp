// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(SupportedEngineVersions, supportedEngineVersions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(SupportedEngineVersions, supportedEngineVersions_);
    };
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines() = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines(const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines &) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines(DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines &&) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines() = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines& operator=(const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines &) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines& operator=(DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && return this->supportedEngineVersions_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // supportedEngineVersions Field Functions 
    bool hasSupportedEngineVersions() const { return this->supportedEngineVersions_ != nullptr;};
    void deleteSupportedEngineVersions() { this->supportedEngineVersions_ = nullptr;};
    inline const vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions> & supportedEngineVersions() const { DARABONBA_PTR_GET_CONST(supportedEngineVersions_, vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions>) };
    inline vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions> supportedEngineVersions() { DARABONBA_PTR_GET(supportedEngineVersions_, vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions>) };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines& setSupportedEngineVersions(const vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions> & supportedEngineVersions) { DARABONBA_PTR_SET_VALUE(supportedEngineVersions_, supportedEngineVersions) };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEngines& setSupportedEngineVersions(vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions> && supportedEngineVersions) { DARABONBA_PTR_SET_RVALUE(supportedEngineVersions_, supportedEngineVersions) };


  protected:
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine versions that are available for purchase.
    std::shared_ptr<vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions>> supportedEngineVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

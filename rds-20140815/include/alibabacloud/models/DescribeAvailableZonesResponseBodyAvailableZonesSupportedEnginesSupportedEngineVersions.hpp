// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINESSUPPORTEDENGINEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESRESPONSEBODYAVAILABLEZONESSUPPORTEDENGINESSUPPORTEDENGINEVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedCategorys, supportedCategorys_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedCategorys, supportedCategorys_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions() = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions(const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions &) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions(DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions &&) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions() = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions& operator=(const DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions &) = default ;
    DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions& operator=(DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supportedCategorys_ == nullptr
        && return this->version_ == nullptr; };
    // supportedCategorys Field Functions 
    bool hasSupportedCategorys() const { return this->supportedCategorys_ != nullptr;};
    void deleteSupportedCategorys() { this->supportedCategorys_ = nullptr;};
    inline const vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys> & supportedCategorys() const { DARABONBA_PTR_GET_CONST(supportedCategorys_, vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys>) };
    inline vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys> supportedCategorys() { DARABONBA_PTR_GET(supportedCategorys_, vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys>) };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions& setSupportedCategorys(const vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys> & supportedCategorys) { DARABONBA_PTR_SET_VALUE(supportedCategorys_, supportedCategorys) };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions& setSupportedCategorys(vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys> && supportedCategorys) { DARABONBA_PTR_SET_RVALUE(supportedCategorys_, supportedCategorys) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The RDS editions that are available that are available for purchase.
    std::shared_ptr<vector<Models::DescribeAvailableZonesResponseBodyAvailableZonesSupportedEnginesSupportedEngineVersionsSupportedCategorys>> supportedCategorys_ = nullptr;
    // The database engine version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

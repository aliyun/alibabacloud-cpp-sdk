// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYASPATHS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRYASPATHS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths& obj) { 
      DARABONBA_PTR_TO_JSON(AsPath, asPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPath, asPath_);
    };
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths &&) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths& operator=(const DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths& operator=(DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asPath_ != nullptr; };
    // asPath Field Functions 
    bool hasAsPath() const { return this->asPath_ != nullptr;};
    void deleteAsPath() { this->asPath_ = nullptr;};
    inline const vector<string> & asPath() const { DARABONBA_PTR_GET_CONST(asPath_, vector<string>) };
    inline vector<string> asPath() { DARABONBA_PTR_GET(asPath_, vector<string>) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths& setAsPath(const vector<string> & asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };
    inline DescribeCenRegionDomainRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths& setAsPath(vector<string> && asPath) { DARABONBA_PTR_SET_RVALUE(asPath_, asPath) };


  protected:
    std::shared_ptr<vector<string>> asPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif

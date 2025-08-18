// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESITECOVERAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESITECOVERAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSiteCoverageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSiteCoverageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSiteCoverageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateSiteCoverageRequest() = default ;
    UpdateSiteCoverageRequest(const UpdateSiteCoverageRequest &) = default ;
    UpdateSiteCoverageRequest(UpdateSiteCoverageRequest &&) = default ;
    UpdateSiteCoverageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSiteCoverageRequest() = default ;
    UpdateSiteCoverageRequest& operator=(const UpdateSiteCoverageRequest &) = default ;
    UpdateSiteCoverageRequest& operator=(UpdateSiteCoverageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coverage_ != nullptr
        && this->siteId_ != nullptr; };
    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string coverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline UpdateSiteCoverageRequest& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateSiteCoverageRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The desired service location. Valid values:
    // 
    // *   **domestic**: the Chinese mainland
    // *   **global**: global
    // *   **overseas**: outside the Chinese mainland
    // 
    // This parameter is required.
    std::shared_ptr<string> coverage_ = nullptr;
    // The website ID. You can call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

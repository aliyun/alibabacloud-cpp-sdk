// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEMBEDDEDINFORESPONSEBODYRESULTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_QUERYEMBEDDEDINFORESPONSEBODYRESULTDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryEmbeddedInfoResponseBodyResultDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEmbeddedInfoResponseBodyResultDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DashboardOfflineQuery, dashboardOfflineQuery_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Report, report_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEmbeddedInfoResponseBodyResultDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DashboardOfflineQuery, dashboardOfflineQuery_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Report, report_);
    };
    QueryEmbeddedInfoResponseBodyResultDetail() = default ;
    QueryEmbeddedInfoResponseBodyResultDetail(const QueryEmbeddedInfoResponseBodyResultDetail &) = default ;
    QueryEmbeddedInfoResponseBodyResultDetail(QueryEmbeddedInfoResponseBodyResultDetail &&) = default ;
    QueryEmbeddedInfoResponseBodyResultDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEmbeddedInfoResponseBodyResultDetail() = default ;
    QueryEmbeddedInfoResponseBodyResultDetail& operator=(const QueryEmbeddedInfoResponseBodyResultDetail &) = default ;
    QueryEmbeddedInfoResponseBodyResultDetail& operator=(QueryEmbeddedInfoResponseBodyResultDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dashboardOfflineQuery_ == nullptr
        && return this->page_ == nullptr && return this->report_ == nullptr; };
    // dashboardOfflineQuery Field Functions 
    bool hasDashboardOfflineQuery() const { return this->dashboardOfflineQuery_ != nullptr;};
    void deleteDashboardOfflineQuery() { this->dashboardOfflineQuery_ = nullptr;};
    inline int32_t dashboardOfflineQuery() const { DARABONBA_PTR_GET_DEFAULT(dashboardOfflineQuery_, 0) };
    inline QueryEmbeddedInfoResponseBodyResultDetail& setDashboardOfflineQuery(int32_t dashboardOfflineQuery) { DARABONBA_PTR_SET_VALUE(dashboardOfflineQuery_, dashboardOfflineQuery) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline QueryEmbeddedInfoResponseBodyResultDetail& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline int32_t report() const { DARABONBA_PTR_GET_DEFAULT(report_, 0) };
    inline QueryEmbeddedInfoResponseBodyResultDetail& setReport(int32_t report) { DARABONBA_PTR_SET_VALUE(report_, report) };


  protected:
    // The number of embedded self-service fetching.
    std::shared_ptr<int32_t> dashboardOfflineQuery_ = nullptr;
    // The number of embedded dashboards.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of embedded spreadsheets.
    std::shared_ptr<int32_t> report_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

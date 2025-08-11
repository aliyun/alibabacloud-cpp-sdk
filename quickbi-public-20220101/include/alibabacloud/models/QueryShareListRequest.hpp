// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSHARELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSHARELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryShareListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryShareListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryShareListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    QueryShareListRequest() = default ;
    QueryShareListRequest(const QueryShareListRequest &) = default ;
    QueryShareListRequest(QueryShareListRequest &&) = default ;
    QueryShareListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryShareListRequest() = default ;
    QueryShareListRequest& operator=(const QueryShareListRequest &) = default ;
    QueryShareListRequest& operator=(QueryShareListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reportId_ != nullptr; };
    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline QueryShareListRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The ID of the work. The works include data portal, dashboard, spreadsheet, self-service data retrieval, ad-hoc analysis, data entry, and data screen.
    // 
    // This parameter is required.
    std::shared_ptr<string> reportId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

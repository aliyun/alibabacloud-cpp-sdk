// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGSUMMARYTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGSUMMARYTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetCatalogSummaryTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogSummaryTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogSummaryTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
    };
    GetCatalogSummaryTrendRequest() = default ;
    GetCatalogSummaryTrendRequest(const GetCatalogSummaryTrendRequest &) = default ;
    GetCatalogSummaryTrendRequest(GetCatalogSummaryTrendRequest &&) = default ;
    GetCatalogSummaryTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogSummaryTrendRequest() = default ;
    GetCatalogSummaryTrendRequest& operator=(const GetCatalogSummaryTrendRequest &) = default ;
    GetCatalogSummaryTrendRequest& operator=(GetCatalogSummaryTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endDate_ != nullptr
        && this->startDate_ != nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetCatalogSummaryTrendRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetCatalogSummaryTrendRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif

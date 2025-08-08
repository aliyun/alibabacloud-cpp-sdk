// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFOCREATEDAPPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFOCREATEDAPPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ListFoCreatedAppsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFoCreatedAppsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ReportUrl, reportUrl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListFoCreatedAppsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ReportUrl, reportUrl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListFoCreatedAppsResponseBodyData() = default ;
    ListFoCreatedAppsResponseBodyData(const ListFoCreatedAppsResponseBodyData &) = default ;
    ListFoCreatedAppsResponseBodyData(ListFoCreatedAppsResponseBodyData &&) = default ;
    ListFoCreatedAppsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFoCreatedAppsResponseBodyData() = default ;
    ListFoCreatedAppsResponseBodyData& operator=(const ListFoCreatedAppsResponseBodyData &) = default ;
    ListFoCreatedAppsResponseBodyData& operator=(ListFoCreatedAppsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->reportUrl_ != nullptr && this->status_ != nullptr && this->title_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListFoCreatedAppsResponseBodyData& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // reportUrl Field Functions 
    bool hasReportUrl() const { return this->reportUrl_ != nullptr;};
    void deleteReportUrl() { this->reportUrl_ = nullptr;};
    inline string reportUrl() const { DARABONBA_PTR_GET_DEFAULT(reportUrl_, "") };
    inline ListFoCreatedAppsResponseBodyData& setReportUrl(string reportUrl) { DARABONBA_PTR_SET_VALUE(reportUrl_, reportUrl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFoCreatedAppsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListFoCreatedAppsResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The application ID.
    std::shared_ptr<string> applicationId_ = nullptr;
    // The URL of the error report.
    std::shared_ptr<string> reportUrl_ = nullptr;
    // The state of the application.
    std::shared_ptr<string> status_ = nullptr;
    // The title.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif

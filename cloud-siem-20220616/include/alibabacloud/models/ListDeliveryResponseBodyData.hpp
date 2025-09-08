// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELIVERYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDELIVERYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeliveryResponseBodyDataProductList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDeliveryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeliveryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DashboardUrl, dashboardUrl_);
      DARABONBA_PTR_TO_JSON(DisplaySwitchOrNot, displaySwitchOrNot_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProductList, productList_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SearchUrl, searchUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeliveryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DashboardUrl, dashboardUrl_);
      DARABONBA_PTR_FROM_JSON(DisplaySwitchOrNot, displaySwitchOrNot_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProductList, productList_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SearchUrl, searchUrl_);
    };
    ListDeliveryResponseBodyData() = default ;
    ListDeliveryResponseBodyData(const ListDeliveryResponseBodyData &) = default ;
    ListDeliveryResponseBodyData(ListDeliveryResponseBodyData &&) = default ;
    ListDeliveryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeliveryResponseBodyData() = default ;
    ListDeliveryResponseBodyData& operator=(const ListDeliveryResponseBodyData &) = default ;
    ListDeliveryResponseBodyData& operator=(ListDeliveryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dashboardUrl_ != nullptr
        && this->displaySwitchOrNot_ != nullptr && this->logStoreName_ != nullptr && this->productList_ != nullptr && this->projectName_ != nullptr && this->searchUrl_ != nullptr; };
    // dashboardUrl Field Functions 
    bool hasDashboardUrl() const { return this->dashboardUrl_ != nullptr;};
    void deleteDashboardUrl() { this->dashboardUrl_ = nullptr;};
    inline string dashboardUrl() const { DARABONBA_PTR_GET_DEFAULT(dashboardUrl_, "") };
    inline ListDeliveryResponseBodyData& setDashboardUrl(string dashboardUrl) { DARABONBA_PTR_SET_VALUE(dashboardUrl_, dashboardUrl) };


    // displaySwitchOrNot Field Functions 
    bool hasDisplaySwitchOrNot() const { return this->displaySwitchOrNot_ != nullptr;};
    void deleteDisplaySwitchOrNot() { this->displaySwitchOrNot_ = nullptr;};
    inline bool displaySwitchOrNot() const { DARABONBA_PTR_GET_DEFAULT(displaySwitchOrNot_, false) };
    inline ListDeliveryResponseBodyData& setDisplaySwitchOrNot(bool displaySwitchOrNot) { DARABONBA_PTR_SET_VALUE(displaySwitchOrNot_, displaySwitchOrNot) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline ListDeliveryResponseBodyData& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // productList Field Functions 
    bool hasProductList() const { return this->productList_ != nullptr;};
    void deleteProductList() { this->productList_ = nullptr;};
    inline const vector<Models::ListDeliveryResponseBodyDataProductList> & productList() const { DARABONBA_PTR_GET_CONST(productList_, vector<Models::ListDeliveryResponseBodyDataProductList>) };
    inline vector<Models::ListDeliveryResponseBodyDataProductList> productList() { DARABONBA_PTR_GET(productList_, vector<Models::ListDeliveryResponseBodyDataProductList>) };
    inline ListDeliveryResponseBodyData& setProductList(const vector<Models::ListDeliveryResponseBodyDataProductList> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
    inline ListDeliveryResponseBodyData& setProductList(vector<Models::ListDeliveryResponseBodyDataProductList> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListDeliveryResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // searchUrl Field Functions 
    bool hasSearchUrl() const { return this->searchUrl_ != nullptr;};
    void deleteSearchUrl() { this->searchUrl_ = nullptr;};
    inline string searchUrl() const { DARABONBA_PTR_GET_DEFAULT(searchUrl_, "") };
    inline ListDeliveryResponseBodyData& setSearchUrl(string searchUrl) { DARABONBA_PTR_SET_VALUE(searchUrl_, searchUrl) };


  protected:
    // The URL that is displayed in charts.
    std::shared_ptr<string> dashboardUrl_ = nullptr;
    // Indicates whether the log delivery switch is displayed. Default value: true. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> displaySwitchOrNot_ = nullptr;
    // The name of the Logstore for the threat analysis feature on the user side. The value is in the cloud_siem format.
    std::shared_ptr<string> logStoreName_ = nullptr;
    // The cloud services.
    std::shared_ptr<vector<Models::ListDeliveryResponseBodyDataProductList>> productList_ = nullptr;
    // The name of the project for the threat analysis feature in Simple Log service on the user side. The value is in the aliyun-cloudsiem-data-${aliUid}-${region} format.
    std::shared_ptr<string> projectName_ = nullptr;
    // The URL that is used for log analysis.
    std::shared_ptr<string> searchUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif

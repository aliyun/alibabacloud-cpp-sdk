// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPERFORMANCEVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPERFORMANCEVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyPerformanceViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPerformanceViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ViewDetail, viewDetail_);
      DARABONBA_PTR_TO_JSON(ViewName, viewName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPerformanceViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ViewDetail, viewDetail_);
      DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
    };
    ModifyPerformanceViewRequest() = default ;
    ModifyPerformanceViewRequest(const ModifyPerformanceViewRequest &) = default ;
    ModifyPerformanceViewRequest(ModifyPerformanceViewRequest &&) = default ;
    ModifyPerformanceViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPerformanceViewRequest() = default ;
    ModifyPerformanceViewRequest& operator=(const ModifyPerformanceViewRequest &) = default ;
    ModifyPerformanceViewRequest& operator=(ModifyPerformanceViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ViewDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ViewDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(ChartLinked, chartLinked_);
        DARABONBA_PTR_TO_JSON(ChartsPerLine, chartsPerLine_);
      };
      friend void from_json(const Darabonba::Json& j, ViewDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(ChartLinked, chartLinked_);
        DARABONBA_PTR_FROM_JSON(ChartsPerLine, chartsPerLine_);
      };
      ViewDetail() = default ;
      ViewDetail(const ViewDetail &) = default ;
      ViewDetail(ViewDetail &&) = default ;
      ViewDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ViewDetail() = default ;
      ViewDetail& operator=(const ViewDetail &) = default ;
      ViewDetail& operator=(ViewDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Categories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Categories& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Keys, keys_);
        };
        friend void from_json(const Darabonba::Json& j, Categories& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Keys, keys_);
        };
        Categories() = default ;
        Categories(const Categories &) = default ;
        Categories(Categories &&) = default ;
        Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Categories() = default ;
        Categories& operator=(const Categories &) = default ;
        Categories& operator=(Categories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Keys : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Keys& obj) { 
            DARABONBA_PTR_TO_JSON(KeyName, keyName_);
            DARABONBA_PTR_TO_JSON(Selected, selected_);
          };
          friend void from_json(const Darabonba::Json& j, Keys& obj) { 
            DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
            DARABONBA_PTR_FROM_JSON(Selected, selected_);
          };
          Keys() = default ;
          Keys(const Keys &) = default ;
          Keys(Keys &&) = default ;
          Keys(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Keys() = default ;
          Keys& operator=(const Keys &) = default ;
          Keys& operator=(Keys &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->keyName_ == nullptr
        && this->selected_ == nullptr; };
          // keyName Field Functions 
          bool hasKeyName() const { return this->keyName_ != nullptr;};
          void deleteKeyName() { this->keyName_ = nullptr;};
          inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
          inline Keys& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


          // selected Field Functions 
          bool hasSelected() const { return this->selected_ != nullptr;};
          void deleteSelected() { this->selected_ = nullptr;};
          inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
          inline Keys& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


        protected:
          // The name of the metric.
          shared_ptr<string> keyName_ {};
          // Specifies whether to select the metric. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> selected_ {};
        };

        virtual bool empty() const override { return this->category_ == nullptr
        && this->keys_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Categories& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // keys Field Functions 
        bool hasKeys() const { return this->keys_ != nullptr;};
        void deleteKeys() { this->keys_ = nullptr;};
        inline const vector<Categories::Keys> & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, vector<Categories::Keys>) };
        inline vector<Categories::Keys> getKeys() { DARABONBA_PTR_GET(keys_, vector<Categories::Keys>) };
        inline Categories& setKeys(const vector<Categories::Keys> & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
        inline Categories& setKeys(vector<Categories::Keys> && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


      protected:
        // The name of the metric category. Valid values:
        // 
        // *   **Node**
        // *   **DiskData**
        // *   **WorkLoad**
        // *   **ResourceGroup**
        shared_ptr<string> category_ {};
        // The metrics.
        shared_ptr<vector<Categories::Keys>> keys_ {};
      };

      virtual bool empty() const override { return this->categories_ == nullptr
        && this->chartLinked_ == nullptr && this->chartsPerLine_ == nullptr; };
      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<ViewDetail::Categories> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<ViewDetail::Categories>) };
      inline vector<ViewDetail::Categories> getCategories() { DARABONBA_PTR_GET(categories_, vector<ViewDetail::Categories>) };
      inline ViewDetail& setCategories(const vector<ViewDetail::Categories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline ViewDetail& setCategories(vector<ViewDetail::Categories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // chartLinked Field Functions 
      bool hasChartLinked() const { return this->chartLinked_ != nullptr;};
      void deleteChartLinked() { this->chartLinked_ = nullptr;};
      inline bool getChartLinked() const { DARABONBA_PTR_GET_DEFAULT(chartLinked_, false) };
      inline ViewDetail& setChartLinked(bool chartLinked) { DARABONBA_PTR_SET_VALUE(chartLinked_, chartLinked) };


      // chartsPerLine Field Functions 
      bool hasChartsPerLine() const { return this->chartsPerLine_ != nullptr;};
      void deleteChartsPerLine() { this->chartsPerLine_ = nullptr;};
      inline int32_t getChartsPerLine() const { DARABONBA_PTR_GET_DEFAULT(chartsPerLine_, 0) };
      inline ViewDetail& setChartsPerLine(int32_t chartsPerLine) { DARABONBA_PTR_SET_VALUE(chartsPerLine_, chartsPerLine) };


    protected:
      // The metric categories.
      shared_ptr<vector<ViewDetail::Categories>> categories_ {};
      // Specifies whether to enable the filter interaction feature. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> chartLinked_ {};
      // The number of charts to display in each row.
      shared_ptr<int32_t> chartsPerLine_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->viewDetail_ == nullptr && this->viewName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyPerformanceViewRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPerformanceViewRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPerformanceViewRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPerformanceViewRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPerformanceViewRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPerformanceViewRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // viewDetail Field Functions 
    bool hasViewDetail() const { return this->viewDetail_ != nullptr;};
    void deleteViewDetail() { this->viewDetail_ = nullptr;};
    inline const ModifyPerformanceViewRequest::ViewDetail & getViewDetail() const { DARABONBA_PTR_GET_CONST(viewDetail_, ModifyPerformanceViewRequest::ViewDetail) };
    inline ModifyPerformanceViewRequest::ViewDetail getViewDetail() { DARABONBA_PTR_GET(viewDetail_, ModifyPerformanceViewRequest::ViewDetail) };
    inline ModifyPerformanceViewRequest& setViewDetail(const ModifyPerformanceViewRequest::ViewDetail & viewDetail) { DARABONBA_PTR_SET_VALUE(viewDetail_, viewDetail) };
    inline ModifyPerformanceViewRequest& setViewDetail(ModifyPerformanceViewRequest::ViewDetail && viewDetail) { DARABONBA_PTR_SET_RVALUE(viewDetail_, viewDetail) };


    // viewName Field Functions 
    bool hasViewName() const { return this->viewName_ != nullptr;};
    void deleteViewName() { this->viewName_ = nullptr;};
    inline string getViewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
    inline ModifyPerformanceViewRequest& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/612397.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The new information about the monitoring view.
    // 
    // This parameter is required.
    shared_ptr<ModifyPerformanceViewRequest::ViewDetail> viewDetail_ {};
    // The name of the monitoring view.
    // 
    // This parameter is required.
    shared_ptr<string> viewName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

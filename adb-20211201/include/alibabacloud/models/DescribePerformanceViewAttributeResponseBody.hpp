// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWATTRIBUTERESPONSEBODY_HPP_
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
  class DescribePerformanceViewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePerformanceViewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(CreateFromViewType, createFromViewType_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FillOriginViewKeys, fillOriginViewKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ViewDetail, viewDetail_);
      DARABONBA_PTR_TO_JSON(ViewName, viewName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePerformanceViewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(CreateFromViewType, createFromViewType_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FillOriginViewKeys, fillOriginViewKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ViewDetail, viewDetail_);
      DARABONBA_PTR_FROM_JSON(ViewName, viewName_);
    };
    DescribePerformanceViewAttributeResponseBody() = default ;
    DescribePerformanceViewAttributeResponseBody(const DescribePerformanceViewAttributeResponseBody &) = default ;
    DescribePerformanceViewAttributeResponseBody(DescribePerformanceViewAttributeResponseBody &&) = default ;
    DescribePerformanceViewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePerformanceViewAttributeResponseBody() = default ;
    DescribePerformanceViewAttributeResponseBody& operator=(const DescribePerformanceViewAttributeResponseBody &) = default ;
    DescribePerformanceViewAttributeResponseBody& operator=(DescribePerformanceViewAttributeResponseBody &&) = default ;
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
            DARABONBA_PTR_TO_JSON(EnableAutoMc, enableAutoMc_);
            DARABONBA_PTR_TO_JSON(Engine, engine_);
            DARABONBA_PTR_TO_JSON(GroupType, groupType_);
            DARABONBA_PTR_TO_JSON(KeyName, keyName_);
            DARABONBA_PTR_TO_JSON(Selected, selected_);
          };
          friend void from_json(const Darabonba::Json& j, Keys& obj) { 
            DARABONBA_PTR_FROM_JSON(EnableAutoMc, enableAutoMc_);
            DARABONBA_PTR_FROM_JSON(Engine, engine_);
            DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
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
          virtual bool empty() const override { return this->enableAutoMc_ == nullptr
        && this->engine_ == nullptr && this->groupType_ == nullptr && this->keyName_ == nullptr && this->selected_ == nullptr; };
          // enableAutoMc Field Functions 
          bool hasEnableAutoMc() const { return this->enableAutoMc_ != nullptr;};
          void deleteEnableAutoMc() { this->enableAutoMc_ = nullptr;};
          inline bool getEnableAutoMc() const { DARABONBA_PTR_GET_DEFAULT(enableAutoMc_, false) };
          inline Keys& setEnableAutoMc(bool enableAutoMc) { DARABONBA_PTR_SET_VALUE(enableAutoMc_, enableAutoMc) };


          // engine Field Functions 
          bool hasEngine() const { return this->engine_ != nullptr;};
          void deleteEngine() { this->engine_ = nullptr;};
          inline const vector<string> & getEngine() const { DARABONBA_PTR_GET_CONST(engine_, vector<string>) };
          inline vector<string> getEngine() { DARABONBA_PTR_GET(engine_, vector<string>) };
          inline Keys& setEngine(const vector<string> & engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };
          inline Keys& setEngine(vector<string> && engine) { DARABONBA_PTR_SET_RVALUE(engine_, engine) };


          // groupType Field Functions 
          bool hasGroupType() const { return this->groupType_ != nullptr;};
          void deleteGroupType() { this->groupType_ = nullptr;};
          inline const vector<string> & getGroupType() const { DARABONBA_PTR_GET_CONST(groupType_, vector<string>) };
          inline vector<string> getGroupType() { DARABONBA_PTR_GET(groupType_, vector<string>) };
          inline Keys& setGroupType(const vector<string> & groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };
          inline Keys& setGroupType(vector<string> && groupType) { DARABONBA_PTR_SET_RVALUE(groupType_, groupType) };


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
          // Indicates whether the multi-cluster feature is enabled. Valid values:
          // 
          // - true
          // 
          // - false
          shared_ptr<bool> enableAutoMc_ {};
          // The database engine of the cluster. Valid values:
          // 
          // *  AnalyticDB
          shared_ptr<vector<string>> engine_ {};
          // The type of the resource group. Valid values:
          // 
          // *   **Interactive**
          // *   **Job**
          // 
          // >  For more information about resource groups, see [Resource group overview](https://help.aliyun.com/document_detail/428610.html).
          shared_ptr<vector<string>> groupType_ {};
          // The name of the metric.
          shared_ptr<string> keyName_ {};
          // Specifies whether to select the metric. Valid values:
          // 
          // *   **true**
          // *   **false**
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
      // The metric category.
      shared_ptr<vector<ViewDetail::Categories>> categories_ {};
      // Specifies whether to enable the filter interaction feature. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> chartLinked_ {};
      // The number of charts to display in each row.
      shared_ptr<int32_t> chartsPerLine_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->createFromViewType_ == nullptr && this->DBClusterId_ == nullptr && this->fillOriginViewKeys_ == nullptr && this->requestId_ == nullptr && this->viewDetail_ == nullptr
        && this->viewName_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // createFromViewType Field Functions 
    bool hasCreateFromViewType() const { return this->createFromViewType_ != nullptr;};
    void deleteCreateFromViewType() { this->createFromViewType_ = nullptr;};
    inline string getCreateFromViewType() const { DARABONBA_PTR_GET_DEFAULT(createFromViewType_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setCreateFromViewType(string createFromViewType) { DARABONBA_PTR_SET_VALUE(createFromViewType_, createFromViewType) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fillOriginViewKeys Field Functions 
    bool hasFillOriginViewKeys() const { return this->fillOriginViewKeys_ != nullptr;};
    void deleteFillOriginViewKeys() { this->fillOriginViewKeys_ = nullptr;};
    inline bool getFillOriginViewKeys() const { DARABONBA_PTR_GET_DEFAULT(fillOriginViewKeys_, false) };
    inline DescribePerformanceViewAttributeResponseBody& setFillOriginViewKeys(bool fillOriginViewKeys) { DARABONBA_PTR_SET_VALUE(fillOriginViewKeys_, fillOriginViewKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // viewDetail Field Functions 
    bool hasViewDetail() const { return this->viewDetail_ != nullptr;};
    void deleteViewDetail() { this->viewDetail_ = nullptr;};
    inline const DescribePerformanceViewAttributeResponseBody::ViewDetail & getViewDetail() const { DARABONBA_PTR_GET_CONST(viewDetail_, DescribePerformanceViewAttributeResponseBody::ViewDetail) };
    inline DescribePerformanceViewAttributeResponseBody::ViewDetail getViewDetail() { DARABONBA_PTR_GET(viewDetail_, DescribePerformanceViewAttributeResponseBody::ViewDetail) };
    inline DescribePerformanceViewAttributeResponseBody& setViewDetail(const DescribePerformanceViewAttributeResponseBody::ViewDetail & viewDetail) { DARABONBA_PTR_SET_VALUE(viewDetail_, viewDetail) };
    inline DescribePerformanceViewAttributeResponseBody& setViewDetail(DescribePerformanceViewAttributeResponseBody::ViewDetail && viewDetail) { DARABONBA_PTR_SET_RVALUE(viewDetail_, viewDetail) };


    // viewName Field Functions 
    bool hasViewName() const { return this->viewName_ != nullptr;};
    void deleteViewName() { this->viewName_ = nullptr;};
    inline string getViewName() const { DARABONBA_PTR_GET_DEFAULT(viewName_, "") };
    inline DescribePerformanceViewAttributeResponseBody& setViewName(string viewName) { DARABONBA_PTR_SET_VALUE(viewName_, viewName) };


  protected:
    // The details about the access denial.
    // 
    // >  This parameter is returned only if Resource Access Management (RAM) permission verification failed.
    shared_ptr<string> accessDeniedDetail_ {};
    // The type of the view.
    shared_ptr<string> createFromViewType_ {};
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the information about all AnalyticDB for MySQL clusters within a region, including cluster IDs.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to populate the names of the metrics in the original monitoring view when you view the monitoring view. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> fillOriginViewKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the monitoring view.
    shared_ptr<DescribePerformanceViewAttributeResponseBody::ViewDetail> viewDetail_ {};
    // The name of the view.
    shared_ptr<string> viewName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

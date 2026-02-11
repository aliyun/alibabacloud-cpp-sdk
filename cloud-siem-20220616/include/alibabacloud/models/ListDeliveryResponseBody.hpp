// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDELIVERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataProductListLogMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeliveryResponseBody() = default ;
    ListDeliveryResponseBody(const ListDeliveryResponseBody &) = default ;
    ListDeliveryResponseBody(ListDeliveryResponseBody &&) = default ;
    ListDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeliveryResponseBody() = default ;
    ListDeliveryResponseBody& operator=(const ListDeliveryResponseBody &) = default ;
    ListDeliveryResponseBody& operator=(ListDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DashboardUrl, dashboardUrl_);
        DARABONBA_PTR_TO_JSON(DisplaySwitchOrNot, displaySwitchOrNot_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_TO_JSON(ProductList, productList_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(SearchUrl, searchUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DashboardUrl, dashboardUrl_);
        DARABONBA_PTR_FROM_JSON(DisplaySwitchOrNot, displaySwitchOrNot_);
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
        DARABONBA_PTR_FROM_JSON(ProductList, productList_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(SearchUrl, searchUrl_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ProductList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProductList& obj) { 
          DARABONBA_PTR_TO_JSON(LogList, logList_);
          DARABONBA_PTR_TO_JSON(LogMap, logMap_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(ProductName, productName_);
        };
        friend void from_json(const Darabonba::Json& j, ProductList& obj) { 
          DARABONBA_PTR_FROM_JSON(LogList, logList_);
          DARABONBA_PTR_FROM_JSON(LogMap, logMap_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        };
        ProductList() = default ;
        ProductList(const ProductList &) = default ;
        ProductList(ProductList &&) = default ;
        ProductList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ProductList() = default ;
        ProductList& operator=(const ProductList &) = default ;
        ProductList& operator=(ProductList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LogList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogList& obj) { 
            DARABONBA_PTR_TO_JSON(CanOperateOrNot, canOperateOrNot_);
            DARABONBA_PTR_TO_JSON(ExtraParameters, extraParameters_);
            DARABONBA_PTR_TO_JSON(LogCode, logCode_);
            DARABONBA_PTR_TO_JSON(LogName, logName_);
            DARABONBA_PTR_TO_JSON(LogNameEn, logNameEn_);
            DARABONBA_PTR_TO_JSON(LogNameKey, logNameKey_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Topic, topic_);
          };
          friend void from_json(const Darabonba::Json& j, LogList& obj) { 
            DARABONBA_PTR_FROM_JSON(CanOperateOrNot, canOperateOrNot_);
            DARABONBA_PTR_FROM_JSON(ExtraParameters, extraParameters_);
            DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
            DARABONBA_PTR_FROM_JSON(LogName, logName_);
            DARABONBA_PTR_FROM_JSON(LogNameEn, logNameEn_);
            DARABONBA_PTR_FROM_JSON(LogNameKey, logNameKey_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Topic, topic_);
          };
          LogList() = default ;
          LogList(const LogList &) = default ;
          LogList(LogList &&) = default ;
          LogList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogList() = default ;
          LogList& operator=(const LogList &) = default ;
          LogList& operator=(LogList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ExtraParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ExtraParameters& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ExtraParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            ExtraParameters() = default ;
            ExtraParameters(const ExtraParameters &) = default ;
            ExtraParameters(ExtraParameters &&) = default ;
            ExtraParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ExtraParameters() = default ;
            ExtraParameters& operator=(const ExtraParameters &) = default ;
            ExtraParameters& operator=(ExtraParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline ExtraParameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ExtraParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The ID of the extended parameter.
            shared_ptr<string> key_ {};
            // The value of the extended parameter.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->canOperateOrNot_ == nullptr
        && this->extraParameters_ == nullptr && this->logCode_ == nullptr && this->logName_ == nullptr && this->logNameEn_ == nullptr && this->logNameKey_ == nullptr
        && this->status_ == nullptr && this->topic_ == nullptr; };
          // canOperateOrNot Field Functions 
          bool hasCanOperateOrNot() const { return this->canOperateOrNot_ != nullptr;};
          void deleteCanOperateOrNot() { this->canOperateOrNot_ = nullptr;};
          inline bool getCanOperateOrNot() const { DARABONBA_PTR_GET_DEFAULT(canOperateOrNot_, false) };
          inline LogList& setCanOperateOrNot(bool canOperateOrNot) { DARABONBA_PTR_SET_VALUE(canOperateOrNot_, canOperateOrNot) };


          // extraParameters Field Functions 
          bool hasExtraParameters() const { return this->extraParameters_ != nullptr;};
          void deleteExtraParameters() { this->extraParameters_ = nullptr;};
          inline const vector<LogList::ExtraParameters> & getExtraParameters() const { DARABONBA_PTR_GET_CONST(extraParameters_, vector<LogList::ExtraParameters>) };
          inline vector<LogList::ExtraParameters> getExtraParameters() { DARABONBA_PTR_GET(extraParameters_, vector<LogList::ExtraParameters>) };
          inline LogList& setExtraParameters(const vector<LogList::ExtraParameters> & extraParameters) { DARABONBA_PTR_SET_VALUE(extraParameters_, extraParameters) };
          inline LogList& setExtraParameters(vector<LogList::ExtraParameters> && extraParameters) { DARABONBA_PTR_SET_RVALUE(extraParameters_, extraParameters) };


          // logCode Field Functions 
          bool hasLogCode() const { return this->logCode_ != nullptr;};
          void deleteLogCode() { this->logCode_ = nullptr;};
          inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
          inline LogList& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


          // logName Field Functions 
          bool hasLogName() const { return this->logName_ != nullptr;};
          void deleteLogName() { this->logName_ = nullptr;};
          inline string getLogName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
          inline LogList& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


          // logNameEn Field Functions 
          bool hasLogNameEn() const { return this->logNameEn_ != nullptr;};
          void deleteLogNameEn() { this->logNameEn_ = nullptr;};
          inline string getLogNameEn() const { DARABONBA_PTR_GET_DEFAULT(logNameEn_, "") };
          inline LogList& setLogNameEn(string logNameEn) { DARABONBA_PTR_SET_VALUE(logNameEn_, logNameEn) };


          // logNameKey Field Functions 
          bool hasLogNameKey() const { return this->logNameKey_ != nullptr;};
          void deleteLogNameKey() { this->logNameKey_ = nullptr;};
          inline string getLogNameKey() const { DARABONBA_PTR_GET_DEFAULT(logNameKey_, "") };
          inline LogList& setLogNameKey(string logNameKey) { DARABONBA_PTR_SET_VALUE(logNameKey_, logNameKey) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
          inline LogList& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
          inline LogList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        protected:
          // Indicates whether the log delivery feature can be enabled or disabled. The feature can be enabled or disabled only by the administrator of the threat analysis feature. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> canOperateOrNot_ {};
          // The extended parameter.
          shared_ptr<vector<LogList::ExtraParameters>> extraParameters_ {};
          // The code of the log.
          shared_ptr<string> logCode_ {};
          // This parameter is deprecated.
          shared_ptr<string> logName_ {};
          // This parameter is deprecated.
          shared_ptr<string> logNameEn_ {};
          // The language code of the log that is used to indicate the language in which the log is displayed.
          shared_ptr<string> logNameKey_ {};
          // The status of the log delivery. Valid values:
          // 
          // *   true: The logs are being delivered.
          // *   false: The log delivery feature is disabled.
          shared_ptr<bool> status_ {};
          // The topic of the log in the Logstore. The value is an index field in the Logstore that can be used to distinguish different logs.
          shared_ptr<string> topic_ {};
        };

        virtual bool empty() const override { return this->logList_ == nullptr
        && this->logMap_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr; };
        // logList Field Functions 
        bool hasLogList() const { return this->logList_ != nullptr;};
        void deleteLogList() { this->logList_ = nullptr;};
        inline const vector<ProductList::LogList> & getLogList() const { DARABONBA_PTR_GET_CONST(logList_, vector<ProductList::LogList>) };
        inline vector<ProductList::LogList> getLogList() { DARABONBA_PTR_GET(logList_, vector<ProductList::LogList>) };
        inline ProductList& setLogList(const vector<ProductList::LogList> & logList) { DARABONBA_PTR_SET_VALUE(logList_, logList) };
        inline ProductList& setLogList(vector<ProductList::LogList> && logList) { DARABONBA_PTR_SET_RVALUE(logList_, logList) };


        // logMap Field Functions 
        bool hasLogMap() const { return this->logMap_ != nullptr;};
        void deleteLogMap() { this->logMap_ = nullptr;};
        inline const map<string, vector<DataProductListLogMapValue>> & getLogMap() const { DARABONBA_PTR_GET_CONST(logMap_, map<string, vector<DataProductListLogMapValue>>) };
        inline map<string, vector<DataProductListLogMapValue>> getLogMap() { DARABONBA_PTR_GET(logMap_, map<string, vector<DataProductListLogMapValue>>) };
        inline ProductList& setLogMap(const map<string, vector<DataProductListLogMapValue>> & logMap) { DARABONBA_PTR_SET_VALUE(logMap_, logMap) };
        inline ProductList& setLogMap(map<string, vector<DataProductListLogMapValue>> && logMap) { DARABONBA_PTR_SET_RVALUE(logMap_, logMap) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline ProductList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline ProductList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      protected:
        // The logs of the cloud services.
        shared_ptr<vector<ProductList::LogList>> logList_ {};
        // The log group. For example, in Security Center, the logs of hosts and networks are stored in different groups. Key indicates the group information, and value indicates the logs in the group.
        shared_ptr<map<string, vector<DataProductListLogMapValue>>> logMap_ {};
        // The code of the cloud service. Valid values:
        // 
        // *   qcloud_waf
        // *   qlcoud_cfw
        // *   hcloud_waf
        // *   hcloud_cfw
        // *   ddos
        // *   sas
        // *   cfw
        // *   config
        // *   csk
        // *   fc
        // *   rds
        // *   nas
        // *   apigateway
        // *   cdn
        // *   mongodb
        // *   eip
        // *   slb
        // *   vpc
        // *   actiontrail
        // *   waf
        // *   bastionhost
        // *   oss
        // *   polardb
        shared_ptr<string> productCode_ {};
        // This parameter is deprecated.
        shared_ptr<string> productName_ {};
      };

      virtual bool empty() const override { return this->dashboardUrl_ == nullptr
        && this->displaySwitchOrNot_ == nullptr && this->logStoreName_ == nullptr && this->productList_ == nullptr && this->projectName_ == nullptr && this->searchUrl_ == nullptr; };
      // dashboardUrl Field Functions 
      bool hasDashboardUrl() const { return this->dashboardUrl_ != nullptr;};
      void deleteDashboardUrl() { this->dashboardUrl_ = nullptr;};
      inline string getDashboardUrl() const { DARABONBA_PTR_GET_DEFAULT(dashboardUrl_, "") };
      inline Data& setDashboardUrl(string dashboardUrl) { DARABONBA_PTR_SET_VALUE(dashboardUrl_, dashboardUrl) };


      // displaySwitchOrNot Field Functions 
      bool hasDisplaySwitchOrNot() const { return this->displaySwitchOrNot_ != nullptr;};
      void deleteDisplaySwitchOrNot() { this->displaySwitchOrNot_ = nullptr;};
      inline bool getDisplaySwitchOrNot() const { DARABONBA_PTR_GET_DEFAULT(displaySwitchOrNot_, false) };
      inline Data& setDisplaySwitchOrNot(bool displaySwitchOrNot) { DARABONBA_PTR_SET_VALUE(displaySwitchOrNot_, displaySwitchOrNot) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline Data& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


      // productList Field Functions 
      bool hasProductList() const { return this->productList_ != nullptr;};
      void deleteProductList() { this->productList_ = nullptr;};
      inline const vector<Data::ProductList> & getProductList() const { DARABONBA_PTR_GET_CONST(productList_, vector<Data::ProductList>) };
      inline vector<Data::ProductList> getProductList() { DARABONBA_PTR_GET(productList_, vector<Data::ProductList>) };
      inline Data& setProductList(const vector<Data::ProductList> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
      inline Data& setProductList(vector<Data::ProductList> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // searchUrl Field Functions 
      bool hasSearchUrl() const { return this->searchUrl_ != nullptr;};
      void deleteSearchUrl() { this->searchUrl_ = nullptr;};
      inline string getSearchUrl() const { DARABONBA_PTR_GET_DEFAULT(searchUrl_, "") };
      inline Data& setSearchUrl(string searchUrl) { DARABONBA_PTR_SET_VALUE(searchUrl_, searchUrl) };


    protected:
      // The URL that is displayed in charts.
      shared_ptr<string> dashboardUrl_ {};
      // Indicates whether the log delivery switch is displayed. Default value: true. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> displaySwitchOrNot_ {};
      // The name of the Logstore for the threat analysis feature on the user side. The value is in the cloud_siem format.
      shared_ptr<string> logStoreName_ {};
      // The cloud services.
      shared_ptr<vector<Data::ProductList>> productList_ {};
      // The name of the project for the threat analysis feature in Simple Log service on the user side. The value is in the aliyun-cloudsiem-data-${aliUid}-${region} format.
      shared_ptr<string> projectName_ {};
      // The URL that is used for log analysis.
      shared_ptr<string> searchUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDeliveryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDeliveryResponseBody::Data) };
    inline ListDeliveryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDeliveryResponseBody::Data) };
    inline ListDeliveryResponseBody& setData(const ListDeliveryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDeliveryResponseBody& setData(ListDeliveryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<ListDeliveryResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif

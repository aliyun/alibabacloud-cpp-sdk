// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataBatchIngestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataBatchIngestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataBatchIngestion, dataBatchIngestion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataBatchIngestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataBatchIngestion, dataBatchIngestion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataBatchIngestionResponseBody() = default ;
    GetDataBatchIngestionResponseBody(const GetDataBatchIngestionResponseBody &) = default ;
    GetDataBatchIngestionResponseBody(GetDataBatchIngestionResponseBody &&) = default ;
    GetDataBatchIngestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataBatchIngestionResponseBody() = default ;
    GetDataBatchIngestionResponseBody& operator=(const GetDataBatchIngestionResponseBody &) = default ;
    GetDataBatchIngestionResponseBody& operator=(GetDataBatchIngestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataBatchIngestion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataBatchIngestion& obj) { 
        DARABONBA_PTR_TO_JSON(ApsaraDataIngestionIds, apsaraDataIngestionIds_);
        DARABONBA_PTR_TO_JSON(AutoScanNew, autoScanNew_);
        DARABONBA_PTR_TO_JSON(DataBatchIngestionEffectTime, dataBatchIngestionEffectTime_);
        DARABONBA_PTR_TO_JSON(DataBatchIngestionMode, dataBatchIngestionMode_);
        DARABONBA_PTR_TO_JSON(DataBatchIngestionSetTime, dataBatchIngestionSetTime_);
        DARABONBA_PTR_TO_JSON(DataBatchIngestionStatus, dataBatchIngestionStatus_);
        DARABONBA_PTR_TO_JSON(DataIngestions, dataIngestions_);
        DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
        DARABONBA_PTR_TO_JSON(LogUserIds, logUserIds_);
        DARABONBA_PTR_TO_JSON(RecommendDataIngestionIds, recommendDataIngestionIds_);
      };
      friend void from_json(const Darabonba::Json& j, DataBatchIngestion& obj) { 
        DARABONBA_PTR_FROM_JSON(ApsaraDataIngestionIds, apsaraDataIngestionIds_);
        DARABONBA_PTR_FROM_JSON(AutoScanNew, autoScanNew_);
        DARABONBA_PTR_FROM_JSON(DataBatchIngestionEffectTime, dataBatchIngestionEffectTime_);
        DARABONBA_PTR_FROM_JSON(DataBatchIngestionMode, dataBatchIngestionMode_);
        DARABONBA_PTR_FROM_JSON(DataBatchIngestionSetTime, dataBatchIngestionSetTime_);
        DARABONBA_PTR_FROM_JSON(DataBatchIngestionStatus, dataBatchIngestionStatus_);
        DARABONBA_PTR_FROM_JSON(DataIngestions, dataIngestions_);
        DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
        DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIds_);
        DARABONBA_PTR_FROM_JSON(RecommendDataIngestionIds, recommendDataIngestionIds_);
      };
      DataBatchIngestion() = default ;
      DataBatchIngestion(const DataBatchIngestion &) = default ;
      DataBatchIngestion(DataBatchIngestion &&) = default ;
      DataBatchIngestion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataBatchIngestion() = default ;
      DataBatchIngestion& operator=(const DataBatchIngestion &) = default ;
      DataBatchIngestion& operator=(DataBatchIngestion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataIngestions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataIngestions& obj) { 
          DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
          DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
          DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
        };
        friend void from_json(const Darabonba::Json& j, DataIngestions& obj) { 
          DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
          DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
          DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
        };
        DataIngestions() = default ;
        DataIngestions(const DataIngestions &) = default ;
        DataIngestions(DataIngestions &&) = default ;
        DataIngestions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataIngestions() = default ;
        DataIngestions& operator=(const DataIngestions &) = default ;
        DataIngestions& operator=(DataIngestions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataIngestionId_ == nullptr
        && this->dataIngestionStatus_ == nullptr && this->dataSourceId_ == nullptr && this->productId_ == nullptr && this->vendorId_ == nullptr; };
        // dataIngestionId Field Functions 
        bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
        void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
        inline string getDataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
        inline DataIngestions& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


        // dataIngestionStatus Field Functions 
        bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
        void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
        inline string getDataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
        inline DataIngestions& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


        // dataSourceId Field Functions 
        bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
        void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
        inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
        inline DataIngestions& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline DataIngestions& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // vendorId Field Functions 
        bool hasVendorId() const { return this->vendorId_ != nullptr;};
        void deleteVendorId() { this->vendorId_ = nullptr;};
        inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
        inline DataIngestions& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


      protected:
        shared_ptr<string> dataIngestionId_ {};
        shared_ptr<string> dataIngestionStatus_ {};
        shared_ptr<string> dataSourceId_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> vendorId_ {};
      };

      virtual bool empty() const override { return this->apsaraDataIngestionIds_ == nullptr
        && this->autoScanNew_ == nullptr && this->dataBatchIngestionEffectTime_ == nullptr && this->dataBatchIngestionMode_ == nullptr && this->dataBatchIngestionSetTime_ == nullptr && this->dataBatchIngestionStatus_ == nullptr
        && this->dataIngestions_ == nullptr && this->dataSourceRecognizeEnabled_ == nullptr && this->logUserIds_ == nullptr && this->recommendDataIngestionIds_ == nullptr; };
      // apsaraDataIngestionIds Field Functions 
      bool hasApsaraDataIngestionIds() const { return this->apsaraDataIngestionIds_ != nullptr;};
      void deleteApsaraDataIngestionIds() { this->apsaraDataIngestionIds_ = nullptr;};
      inline const vector<string> & getApsaraDataIngestionIds() const { DARABONBA_PTR_GET_CONST(apsaraDataIngestionIds_, vector<string>) };
      inline vector<string> getApsaraDataIngestionIds() { DARABONBA_PTR_GET(apsaraDataIngestionIds_, vector<string>) };
      inline DataBatchIngestion& setApsaraDataIngestionIds(const vector<string> & apsaraDataIngestionIds) { DARABONBA_PTR_SET_VALUE(apsaraDataIngestionIds_, apsaraDataIngestionIds) };
      inline DataBatchIngestion& setApsaraDataIngestionIds(vector<string> && apsaraDataIngestionIds) { DARABONBA_PTR_SET_RVALUE(apsaraDataIngestionIds_, apsaraDataIngestionIds) };


      // autoScanNew Field Functions 
      bool hasAutoScanNew() const { return this->autoScanNew_ != nullptr;};
      void deleteAutoScanNew() { this->autoScanNew_ = nullptr;};
      inline string getAutoScanNew() const { DARABONBA_PTR_GET_DEFAULT(autoScanNew_, "") };
      inline DataBatchIngestion& setAutoScanNew(string autoScanNew) { DARABONBA_PTR_SET_VALUE(autoScanNew_, autoScanNew) };


      // dataBatchIngestionEffectTime Field Functions 
      bool hasDataBatchIngestionEffectTime() const { return this->dataBatchIngestionEffectTime_ != nullptr;};
      void deleteDataBatchIngestionEffectTime() { this->dataBatchIngestionEffectTime_ = nullptr;};
      inline string getDataBatchIngestionEffectTime() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionEffectTime_, "") };
      inline DataBatchIngestion& setDataBatchIngestionEffectTime(string dataBatchIngestionEffectTime) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionEffectTime_, dataBatchIngestionEffectTime) };


      // dataBatchIngestionMode Field Functions 
      bool hasDataBatchIngestionMode() const { return this->dataBatchIngestionMode_ != nullptr;};
      void deleteDataBatchIngestionMode() { this->dataBatchIngestionMode_ = nullptr;};
      inline string getDataBatchIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionMode_, "") };
      inline DataBatchIngestion& setDataBatchIngestionMode(string dataBatchIngestionMode) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionMode_, dataBatchIngestionMode) };


      // dataBatchIngestionSetTime Field Functions 
      bool hasDataBatchIngestionSetTime() const { return this->dataBatchIngestionSetTime_ != nullptr;};
      void deleteDataBatchIngestionSetTime() { this->dataBatchIngestionSetTime_ = nullptr;};
      inline string getDataBatchIngestionSetTime() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionSetTime_, "") };
      inline DataBatchIngestion& setDataBatchIngestionSetTime(string dataBatchIngestionSetTime) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionSetTime_, dataBatchIngestionSetTime) };


      // dataBatchIngestionStatus Field Functions 
      bool hasDataBatchIngestionStatus() const { return this->dataBatchIngestionStatus_ != nullptr;};
      void deleteDataBatchIngestionStatus() { this->dataBatchIngestionStatus_ = nullptr;};
      inline string getDataBatchIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionStatus_, "") };
      inline DataBatchIngestion& setDataBatchIngestionStatus(string dataBatchIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionStatus_, dataBatchIngestionStatus) };


      // dataIngestions Field Functions 
      bool hasDataIngestions() const { return this->dataIngestions_ != nullptr;};
      void deleteDataIngestions() { this->dataIngestions_ = nullptr;};
      inline const vector<DataBatchIngestion::DataIngestions> & getDataIngestions() const { DARABONBA_PTR_GET_CONST(dataIngestions_, vector<DataBatchIngestion::DataIngestions>) };
      inline vector<DataBatchIngestion::DataIngestions> getDataIngestions() { DARABONBA_PTR_GET(dataIngestions_, vector<DataBatchIngestion::DataIngestions>) };
      inline DataBatchIngestion& setDataIngestions(const vector<DataBatchIngestion::DataIngestions> & dataIngestions) { DARABONBA_PTR_SET_VALUE(dataIngestions_, dataIngestions) };
      inline DataBatchIngestion& setDataIngestions(vector<DataBatchIngestion::DataIngestions> && dataIngestions) { DARABONBA_PTR_SET_RVALUE(dataIngestions_, dataIngestions) };


      // dataSourceRecognizeEnabled Field Functions 
      bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
      void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
      inline bool getDataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
      inline DataBatchIngestion& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


      // logUserIds Field Functions 
      bool hasLogUserIds() const { return this->logUserIds_ != nullptr;};
      void deleteLogUserIds() { this->logUserIds_ = nullptr;};
      inline const vector<string> & getLogUserIds() const { DARABONBA_PTR_GET_CONST(logUserIds_, vector<string>) };
      inline vector<string> getLogUserIds() { DARABONBA_PTR_GET(logUserIds_, vector<string>) };
      inline DataBatchIngestion& setLogUserIds(const vector<string> & logUserIds) { DARABONBA_PTR_SET_VALUE(logUserIds_, logUserIds) };
      inline DataBatchIngestion& setLogUserIds(vector<string> && logUserIds) { DARABONBA_PTR_SET_RVALUE(logUserIds_, logUserIds) };


      // recommendDataIngestionIds Field Functions 
      bool hasRecommendDataIngestionIds() const { return this->recommendDataIngestionIds_ != nullptr;};
      void deleteRecommendDataIngestionIds() { this->recommendDataIngestionIds_ = nullptr;};
      inline const vector<string> & getRecommendDataIngestionIds() const { DARABONBA_PTR_GET_CONST(recommendDataIngestionIds_, vector<string>) };
      inline vector<string> getRecommendDataIngestionIds() { DARABONBA_PTR_GET(recommendDataIngestionIds_, vector<string>) };
      inline DataBatchIngestion& setRecommendDataIngestionIds(const vector<string> & recommendDataIngestionIds) { DARABONBA_PTR_SET_VALUE(recommendDataIngestionIds_, recommendDataIngestionIds) };
      inline DataBatchIngestion& setRecommendDataIngestionIds(vector<string> && recommendDataIngestionIds) { DARABONBA_PTR_SET_RVALUE(recommendDataIngestionIds_, recommendDataIngestionIds) };


    protected:
      shared_ptr<vector<string>> apsaraDataIngestionIds_ {};
      shared_ptr<string> autoScanNew_ {};
      shared_ptr<string> dataBatchIngestionEffectTime_ {};
      shared_ptr<string> dataBatchIngestionMode_ {};
      shared_ptr<string> dataBatchIngestionSetTime_ {};
      shared_ptr<string> dataBatchIngestionStatus_ {};
      shared_ptr<vector<DataBatchIngestion::DataIngestions>> dataIngestions_ {};
      shared_ptr<bool> dataSourceRecognizeEnabled_ {};
      shared_ptr<vector<string>> logUserIds_ {};
      shared_ptr<vector<string>> recommendDataIngestionIds_ {};
    };

    virtual bool empty() const override { return this->dataBatchIngestion_ == nullptr
        && this->requestId_ == nullptr; };
    // dataBatchIngestion Field Functions 
    bool hasDataBatchIngestion() const { return this->dataBatchIngestion_ != nullptr;};
    void deleteDataBatchIngestion() { this->dataBatchIngestion_ = nullptr;};
    inline const GetDataBatchIngestionResponseBody::DataBatchIngestion & getDataBatchIngestion() const { DARABONBA_PTR_GET_CONST(dataBatchIngestion_, GetDataBatchIngestionResponseBody::DataBatchIngestion) };
    inline GetDataBatchIngestionResponseBody::DataBatchIngestion getDataBatchIngestion() { DARABONBA_PTR_GET(dataBatchIngestion_, GetDataBatchIngestionResponseBody::DataBatchIngestion) };
    inline GetDataBatchIngestionResponseBody& setDataBatchIngestion(const GetDataBatchIngestionResponseBody::DataBatchIngestion & dataBatchIngestion) { DARABONBA_PTR_SET_VALUE(dataBatchIngestion_, dataBatchIngestion) };
    inline GetDataBatchIngestionResponseBody& setDataBatchIngestion(GetDataBatchIngestionResponseBody::DataBatchIngestion && dataBatchIngestion) { DARABONBA_PTR_SET_RVALUE(dataBatchIngestion_, dataBatchIngestion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataBatchIngestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetDataBatchIngestionResponseBody::DataBatchIngestion> dataBatchIngestion_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif

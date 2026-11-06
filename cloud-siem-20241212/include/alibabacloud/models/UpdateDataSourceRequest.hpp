// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
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
  class UpdateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(DataSourceStores, dataSourceStores_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(DataSourceStores, dataSourceStores_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest(UpdateDataSourceRequest &&) = default ;
    UpdateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceRequest() = default ;
    UpdateDataSourceRequest& operator=(const UpdateDataSourceRequest &) = default ;
    UpdateDataSourceRequest& operator=(UpdateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSourceStores : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSourceStores& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
        DARABONBA_PTR_TO_JSON(DataSourceStoreId, dataSourceStoreId_);
        DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
        DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      };
      friend void from_json(const Darabonba::Json& j, DataSourceStores& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
        DARABONBA_PTR_FROM_JSON(DataSourceStoreId, dataSourceStoreId_);
        DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
        DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      };
      DataSourceStores() = default ;
      DataSourceStores(const DataSourceStores &) = default ;
      DataSourceStores(DataSourceStores &&) = default ;
      DataSourceStores(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSourceStores() = default ;
      DataSourceStores& operator=(const DataSourceStores &) = default ;
      DataSourceStores& operator=(DataSourceStores &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSourceStoreFrom_ == nullptr
        && this->dataSourceStoreId_ == nullptr && this->logProjectName_ == nullptr && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr; };
      // dataSourceStoreFrom Field Functions 
      bool hasDataSourceStoreFrom() const { return this->dataSourceStoreFrom_ != nullptr;};
      void deleteDataSourceStoreFrom() { this->dataSourceStoreFrom_ = nullptr;};
      inline string getDataSourceStoreFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreFrom_, "") };
      inline DataSourceStores& setDataSourceStoreFrom(string dataSourceStoreFrom) { DARABONBA_PTR_SET_VALUE(dataSourceStoreFrom_, dataSourceStoreFrom) };


      // dataSourceStoreId Field Functions 
      bool hasDataSourceStoreId() const { return this->dataSourceStoreId_ != nullptr;};
      void deleteDataSourceStoreId() { this->dataSourceStoreId_ = nullptr;};
      inline string getDataSourceStoreId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreId_, "") };
      inline DataSourceStores& setDataSourceStoreId(string dataSourceStoreId) { DARABONBA_PTR_SET_VALUE(dataSourceStoreId_, dataSourceStoreId) };


      // logProjectName Field Functions 
      bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
      void deleteLogProjectName() { this->logProjectName_ = nullptr;};
      inline string getLogProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
      inline DataSourceStores& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


      // logRegionId Field Functions 
      bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
      void deleteLogRegionId() { this->logRegionId_ = nullptr;};
      inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
      inline DataSourceStores& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


      // logStoreName Field Functions 
      bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
      void deleteLogStoreName() { this->logStoreName_ = nullptr;};
      inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
      inline DataSourceStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    protected:
      shared_ptr<string> dataSourceStoreFrom_ {};
      shared_ptr<string> dataSourceStoreId_ {};
      shared_ptr<string> logProjectName_ {};
      shared_ptr<string> logRegionId_ {};
      shared_ptr<string> logStoreName_ {};
    };

    virtual bool empty() const override { return this->dataSourceFrom_ == nullptr
        && this->dataSourceId_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceRecognizeEnabled_ == nullptr && this->dataSourceStores_ == nullptr && this->lang_ == nullptr
        && this->logProjectName_ == nullptr && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr && this->logUserId_ == nullptr && this->orderField_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // dataSourceFrom Field Functions 
    bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
    void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
    inline string getDataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
    inline UpdateDataSourceRequest& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline UpdateDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline UpdateDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool getDataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline UpdateDataSourceRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceStores Field Functions 
    bool hasDataSourceStores() const { return this->dataSourceStores_ != nullptr;};
    void deleteDataSourceStores() { this->dataSourceStores_ = nullptr;};
    inline const vector<UpdateDataSourceRequest::DataSourceStores> & getDataSourceStores() const { DARABONBA_PTR_GET_CONST(dataSourceStores_, vector<UpdateDataSourceRequest::DataSourceStores>) };
    inline vector<UpdateDataSourceRequest::DataSourceStores> getDataSourceStores() { DARABONBA_PTR_GET(dataSourceStores_, vector<UpdateDataSourceRequest::DataSourceStores>) };
    inline UpdateDataSourceRequest& setDataSourceStores(const vector<UpdateDataSourceRequest::DataSourceStores> & dataSourceStores) { DARABONBA_PTR_SET_VALUE(dataSourceStores_, dataSourceStores) };
    inline UpdateDataSourceRequest& setDataSourceStores(vector<UpdateDataSourceRequest::DataSourceStores> && dataSourceStores) { DARABONBA_PTR_SET_RVALUE(dataSourceStores_, dataSourceStores) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataSourceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string getLogProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline UpdateDataSourceRequest& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline UpdateDataSourceRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline UpdateDataSourceRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline int64_t getLogUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
    inline UpdateDataSourceRequest& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline UpdateDataSourceRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataSourceRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> dataSourceFrom_ {};
    shared_ptr<string> dataSourceId_ {};
    shared_ptr<string> dataSourceName_ {};
    shared_ptr<bool> dataSourceRecognizeEnabled_ {};
    shared_ptr<vector<UpdateDataSourceRequest::DataSourceStores>> dataSourceStores_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> logProjectName_ {};
    shared_ptr<string> logRegionId_ {};
    shared_ptr<string> logStoreName_ {};
    shared_ptr<int64_t> logUserId_ {};
    shared_ptr<string> orderField_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif

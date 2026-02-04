// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
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
  class CreateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_TO_JSON(DataSourceReferences, dataSourceReferences_);
      DARABONBA_PTR_TO_JSON(DataSourceStores, dataSourceStores_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_FROM_JSON(DataSourceReferences, dataSourceReferences_);
      DARABONBA_PTR_FROM_JSON(DataSourceStores, dataSourceStores_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    CreateDataSourceRequest() = default ;
    CreateDataSourceRequest(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest(CreateDataSourceRequest &&) = default ;
    CreateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequest() = default ;
    CreateDataSourceRequest& operator=(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest& operator=(CreateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSourceStores : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSourceStores& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
        DARABONBA_PTR_TO_JSON(DataSourceStoreId, dataSourceStoreId_);
        DARABONBA_PTR_TO_JSON(DataSourceStoreStatus, dataSourceStoreStatus_);
        DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
        DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
        DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      };
      friend void from_json(const Darabonba::Json& j, DataSourceStores& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
        DARABONBA_PTR_FROM_JSON(DataSourceStoreId, dataSourceStoreId_);
        DARABONBA_PTR_FROM_JSON(DataSourceStoreStatus, dataSourceStoreStatus_);
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
        && this->dataSourceStoreId_ == nullptr && this->dataSourceStoreStatus_ == nullptr && this->logProjectName_ == nullptr && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr; };
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


      // dataSourceStoreStatus Field Functions 
      bool hasDataSourceStoreStatus() const { return this->dataSourceStoreStatus_ != nullptr;};
      void deleteDataSourceStoreStatus() { this->dataSourceStoreStatus_ = nullptr;};
      inline string getDataSourceStoreStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreStatus_, "") };
      inline DataSourceStores& setDataSourceStoreStatus(string dataSourceStoreStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStoreStatus_, dataSourceStoreStatus) };


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
      shared_ptr<string> dataSourceStoreStatus_ {};
      shared_ptr<string> logProjectName_ {};
      shared_ptr<string> logRegionId_ {};
      shared_ptr<string> logStoreName_ {};
    };

    virtual bool empty() const override { return this->dataSourceFrom_ == nullptr
        && this->dataSourceIds_ == nullptr && this->dataSourceName_ == nullptr && this->dataSourceRecognizeEnabled_ == nullptr && this->dataSourceRecognizer_ == nullptr && this->dataSourceReferences_ == nullptr
        && this->dataSourceStores_ == nullptr && this->dataSourceTemplateId_ == nullptr && this->dataSourceType_ == nullptr && this->lang_ == nullptr && this->logProjectName_ == nullptr
        && this->logRegionId_ == nullptr && this->logStoreName_ == nullptr && this->logUserId_ == nullptr && this->order_ == nullptr && this->regionId_ == nullptr
        && this->roleFor_ == nullptr; };
    // dataSourceFrom Field Functions 
    bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
    void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
    inline string getDataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
    inline CreateDataSourceRequest& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


    // dataSourceIds Field Functions 
    bool hasDataSourceIds() const { return this->dataSourceIds_ != nullptr;};
    void deleteDataSourceIds() { this->dataSourceIds_ = nullptr;};
    inline const vector<string> & getDataSourceIds() const { DARABONBA_PTR_GET_CONST(dataSourceIds_, vector<string>) };
    inline vector<string> getDataSourceIds() { DARABONBA_PTR_GET(dataSourceIds_, vector<string>) };
    inline CreateDataSourceRequest& setDataSourceIds(const vector<string> & dataSourceIds) { DARABONBA_PTR_SET_VALUE(dataSourceIds_, dataSourceIds) };
    inline CreateDataSourceRequest& setDataSourceIds(vector<string> && dataSourceIds) { DARABONBA_PTR_SET_RVALUE(dataSourceIds_, dataSourceIds) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline CreateDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool getDataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline CreateDataSourceRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceRecognizer Field Functions 
    bool hasDataSourceRecognizer() const { return this->dataSourceRecognizer_ != nullptr;};
    void deleteDataSourceRecognizer() { this->dataSourceRecognizer_ = nullptr;};
    inline string getDataSourceRecognizer() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizer_, "") };
    inline CreateDataSourceRequest& setDataSourceRecognizer(string dataSourceRecognizer) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizer_, dataSourceRecognizer) };


    // dataSourceReferences Field Functions 
    bool hasDataSourceReferences() const { return this->dataSourceReferences_ != nullptr;};
    void deleteDataSourceReferences() { this->dataSourceReferences_ = nullptr;};
    inline const vector<string> & getDataSourceReferences() const { DARABONBA_PTR_GET_CONST(dataSourceReferences_, vector<string>) };
    inline vector<string> getDataSourceReferences() { DARABONBA_PTR_GET(dataSourceReferences_, vector<string>) };
    inline CreateDataSourceRequest& setDataSourceReferences(const vector<string> & dataSourceReferences) { DARABONBA_PTR_SET_VALUE(dataSourceReferences_, dataSourceReferences) };
    inline CreateDataSourceRequest& setDataSourceReferences(vector<string> && dataSourceReferences) { DARABONBA_PTR_SET_RVALUE(dataSourceReferences_, dataSourceReferences) };


    // dataSourceStores Field Functions 
    bool hasDataSourceStores() const { return this->dataSourceStores_ != nullptr;};
    void deleteDataSourceStores() { this->dataSourceStores_ = nullptr;};
    inline const vector<CreateDataSourceRequest::DataSourceStores> & getDataSourceStores() const { DARABONBA_PTR_GET_CONST(dataSourceStores_, vector<CreateDataSourceRequest::DataSourceStores>) };
    inline vector<CreateDataSourceRequest::DataSourceStores> getDataSourceStores() { DARABONBA_PTR_GET(dataSourceStores_, vector<CreateDataSourceRequest::DataSourceStores>) };
    inline CreateDataSourceRequest& setDataSourceStores(const vector<CreateDataSourceRequest::DataSourceStores> & dataSourceStores) { DARABONBA_PTR_SET_VALUE(dataSourceStores_, dataSourceStores) };
    inline CreateDataSourceRequest& setDataSourceStores(vector<CreateDataSourceRequest::DataSourceStores> && dataSourceStores) { DARABONBA_PTR_SET_RVALUE(dataSourceStores_, dataSourceStores) };


    // dataSourceTemplateId Field Functions 
    bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
    void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
    inline string getDataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
    inline CreateDataSourceRequest& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateDataSourceRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataSourceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string getLogProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline CreateDataSourceRequest& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline CreateDataSourceRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline CreateDataSourceRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline int64_t getLogUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
    inline CreateDataSourceRequest& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline CreateDataSourceRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateDataSourceRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> dataSourceFrom_ {};
    shared_ptr<vector<string>> dataSourceIds_ {};
    shared_ptr<string> dataSourceName_ {};
    shared_ptr<bool> dataSourceRecognizeEnabled_ {};
    shared_ptr<string> dataSourceRecognizer_ {};
    shared_ptr<vector<string>> dataSourceReferences_ {};
    shared_ptr<vector<CreateDataSourceRequest::DataSourceStores>> dataSourceStores_ {};
    shared_ptr<string> dataSourceTemplateId_ {};
    shared_ptr<string> dataSourceType_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> logProjectName_ {};
    shared_ptr<string> logRegionId_ {};
    shared_ptr<string> logStoreName_ {};
    shared_ptr<int64_t> logUserId_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDataSourceRequestDataSourceStores.hpp>
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
    virtual bool empty() const override { return this->dataSourceFrom_ == nullptr
        && return this->dataSourceId_ == nullptr && return this->dataSourceName_ == nullptr && return this->dataSourceRecognizeEnabled_ == nullptr && return this->dataSourceStores_ == nullptr && return this->lang_ == nullptr
        && return this->logProjectName_ == nullptr && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr && return this->logUserId_ == nullptr && return this->orderField_ == nullptr
        && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataSourceFrom Field Functions 
    bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
    void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
    inline string dataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
    inline UpdateDataSourceRequest& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline UpdateDataSourceRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline UpdateDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool dataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline UpdateDataSourceRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceStores Field Functions 
    bool hasDataSourceStores() const { return this->dataSourceStores_ != nullptr;};
    void deleteDataSourceStores() { this->dataSourceStores_ = nullptr;};
    inline const vector<UpdateDataSourceRequestDataSourceStores> & dataSourceStores() const { DARABONBA_PTR_GET_CONST(dataSourceStores_, vector<UpdateDataSourceRequestDataSourceStores>) };
    inline vector<UpdateDataSourceRequestDataSourceStores> dataSourceStores() { DARABONBA_PTR_GET(dataSourceStores_, vector<UpdateDataSourceRequestDataSourceStores>) };
    inline UpdateDataSourceRequest& setDataSourceStores(const vector<UpdateDataSourceRequestDataSourceStores> & dataSourceStores) { DARABONBA_PTR_SET_VALUE(dataSourceStores_, dataSourceStores) };
    inline UpdateDataSourceRequest& setDataSourceStores(vector<UpdateDataSourceRequestDataSourceStores> && dataSourceStores) { DARABONBA_PTR_SET_RVALUE(dataSourceStores_, dataSourceStores) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataSourceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string logProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline UpdateDataSourceRequest& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline UpdateDataSourceRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline UpdateDataSourceRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline int64_t logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
    inline UpdateDataSourceRequest& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string orderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline UpdateDataSourceRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataSourceRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataSourceFrom_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceName_ = nullptr;
    std::shared_ptr<bool> dataSourceRecognizeEnabled_ = nullptr;
    std::shared_ptr<vector<UpdateDataSourceRequestDataSourceStores>> dataSourceStores_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> logProjectName_ = nullptr;
    std::shared_ptr<string> logRegionId_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<int64_t> logUserId_ = nullptr;
    std::shared_ptr<string> orderField_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif

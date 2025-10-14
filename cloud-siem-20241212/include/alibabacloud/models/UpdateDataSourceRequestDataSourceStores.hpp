// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUESTDATASOURCESTORES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCEREQUESTDATASOURCESTORES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataSourceRequestDataSourceStores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceRequestDataSourceStores& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceStoreId, dataSourceStoreId_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceRequestDataSourceStores& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceStoreFrom, dataSourceStoreFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceStoreId, dataSourceStoreId_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
    };
    UpdateDataSourceRequestDataSourceStores() = default ;
    UpdateDataSourceRequestDataSourceStores(const UpdateDataSourceRequestDataSourceStores &) = default ;
    UpdateDataSourceRequestDataSourceStores(UpdateDataSourceRequestDataSourceStores &&) = default ;
    UpdateDataSourceRequestDataSourceStores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceRequestDataSourceStores() = default ;
    UpdateDataSourceRequestDataSourceStores& operator=(const UpdateDataSourceRequestDataSourceStores &) = default ;
    UpdateDataSourceRequestDataSourceStores& operator=(UpdateDataSourceRequestDataSourceStores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceStoreFrom_ == nullptr
        && return this->dataSourceStoreId_ == nullptr && return this->logProjectName_ == nullptr && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr; };
    // dataSourceStoreFrom Field Functions 
    bool hasDataSourceStoreFrom() const { return this->dataSourceStoreFrom_ != nullptr;};
    void deleteDataSourceStoreFrom() { this->dataSourceStoreFrom_ = nullptr;};
    inline string dataSourceStoreFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreFrom_, "") };
    inline UpdateDataSourceRequestDataSourceStores& setDataSourceStoreFrom(string dataSourceStoreFrom) { DARABONBA_PTR_SET_VALUE(dataSourceStoreFrom_, dataSourceStoreFrom) };


    // dataSourceStoreId Field Functions 
    bool hasDataSourceStoreId() const { return this->dataSourceStoreId_ != nullptr;};
    void deleteDataSourceStoreId() { this->dataSourceStoreId_ = nullptr;};
    inline string dataSourceStoreId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStoreId_, "") };
    inline UpdateDataSourceRequestDataSourceStores& setDataSourceStoreId(string dataSourceStoreId) { DARABONBA_PTR_SET_VALUE(dataSourceStoreId_, dataSourceStoreId) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string logProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline UpdateDataSourceRequestDataSourceStores& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline UpdateDataSourceRequestDataSourceStores& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline UpdateDataSourceRequestDataSourceStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


  protected:
    std::shared_ptr<string> dataSourceStoreFrom_ = nullptr;
    std::shared_ptr<string> dataSourceStoreId_ = nullptr;
    std::shared_ptr<string> logProjectName_ = nullptr;
    std::shared_ptr<string> logRegionId_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif

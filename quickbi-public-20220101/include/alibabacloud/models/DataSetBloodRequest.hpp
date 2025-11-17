// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETBLOODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DATASETBLOODREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DataSetBloodRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSetBloodRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetIds, dataSetIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorksType, worksType_);
    };
    friend void from_json(const Darabonba::Json& j, DataSetBloodRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetIds, dataSetIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
    };
    DataSetBloodRequest() = default ;
    DataSetBloodRequest(const DataSetBloodRequest &) = default ;
    DataSetBloodRequest(DataSetBloodRequest &&) = default ;
    DataSetBloodRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSetBloodRequest() = default ;
    DataSetBloodRequest& operator=(const DataSetBloodRequest &) = default ;
    DataSetBloodRequest& operator=(DataSetBloodRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSetIds_ == nullptr
        && return this->userId_ == nullptr && return this->worksType_ == nullptr; };
    // dataSetIds Field Functions 
    bool hasDataSetIds() const { return this->dataSetIds_ != nullptr;};
    void deleteDataSetIds() { this->dataSetIds_ = nullptr;};
    inline string dataSetIds() const { DARABONBA_PTR_GET_DEFAULT(dataSetIds_, "") };
    inline DataSetBloodRequest& setDataSetIds(string dataSetIds) { DARABONBA_PTR_SET_VALUE(dataSetIds_, dataSetIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DataSetBloodRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // worksType Field Functions 
    bool hasWorksType() const { return this->worksType_ != nullptr;};
    void deleteWorksType() { this->worksType_ = nullptr;};
    inline string worksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
    inline DataSetBloodRequest& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


  protected:
    // List of dataset IDs, separated by English commas.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSetIds_ = nullptr;
    // Specify the owner of the report, which is the userId.
    std::shared_ptr<string> userId_ = nullptr;
    // Specify the type of report:
    // - REPORT: Workbooks
    // - dashboardOfflineQuery: Downloads
    // - DASHBOARD: Dashboard
    // - ANALYSIS: Ad Hoc Analysis
    // - SCREEN: Visualization Screen
    // - PAGE: Old dashboard
    std::shared_ptr<string> worksType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

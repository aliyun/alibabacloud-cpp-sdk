// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(WithStatistics, withStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(WithStatistics, withStatistics_);
    };
    GetDatasetRequest() = default ;
    GetDatasetRequest(const GetDatasetRequest &) = default ;
    GetDatasetRequest(GetDatasetRequest &&) = default ;
    GetDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetRequest() = default ;
    GetDatasetRequest& operator=(const GetDatasetRequest &) = default ;
    GetDatasetRequest& operator=(GetDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetName_ != nullptr
        && this->projectName_ != nullptr && this->withStatistics_ != nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline GetDatasetRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetDatasetRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // withStatistics Field Functions 
    bool hasWithStatistics() const { return this->withStatistics_ != nullptr;};
    void deleteWithStatistics() { this->withStatistics_ = nullptr;};
    inline bool withStatistics() const { DARABONBA_PTR_GET_DEFAULT(withStatistics_, false) };
    inline GetDatasetRequest& setWithStatistics(bool withStatistics) { DARABONBA_PTR_SET_VALUE(withStatistics_, withStatistics) };


  protected:
    // The name of the dataset. You can obtain the name of the dataset from the response of the [CreateDataset](https://help.aliyun.com/document_detail/478160.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // Specifies whether to enable real-time retrieval of file statistics. Default value: false.
    // 
    // *   If you set the value to true, FileCount and TotalFileSize in the response return true and valid values.
    // *   If you set the value to false, FileCount and TotalFileSize in the response return invalid values or 0.
    std::shared_ptr<bool> withStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif

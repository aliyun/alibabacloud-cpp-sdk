// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
    virtual bool empty() const override { this->datasetId_ != nullptr
        && this->datasetName_ != nullptr && this->workspaceId_ != nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline GetDatasetRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline GetDatasetRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDatasetRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

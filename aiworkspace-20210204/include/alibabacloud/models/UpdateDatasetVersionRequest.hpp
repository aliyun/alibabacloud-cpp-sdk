// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UserMetricsEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateDatasetVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DatasetTaskRamRole, datasetTaskRamRole_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(UserMetricsEndpoints, userMetricsEndpoints_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DatasetTaskRamRole, datasetTaskRamRole_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(UserMetricsEndpoints, userMetricsEndpoints_);
    };
    UpdateDatasetVersionRequest() = default ;
    UpdateDatasetVersionRequest(const UpdateDatasetVersionRequest &) = default ;
    UpdateDatasetVersionRequest(UpdateDatasetVersionRequest &&) = default ;
    UpdateDatasetVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetVersionRequest() = default ;
    UpdateDatasetVersionRequest& operator=(const UpdateDatasetVersionRequest &) = default ;
    UpdateDatasetVersionRequest& operator=(UpdateDatasetVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCount_ == nullptr
        && this->dataSize_ == nullptr && this->datasetTaskRamRole_ == nullptr && this->description_ == nullptr && this->options_ == nullptr && this->userMetricsEndpoints_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int64_t getDataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0L) };
    inline UpdateDatasetVersionRequest& setDataCount(int64_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline UpdateDatasetVersionRequest& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // datasetTaskRamRole Field Functions 
    bool hasDatasetTaskRamRole() const { return this->datasetTaskRamRole_ != nullptr;};
    void deleteDatasetTaskRamRole() { this->datasetTaskRamRole_ = nullptr;};
    inline string getDatasetTaskRamRole() const { DARABONBA_PTR_GET_DEFAULT(datasetTaskRamRole_, "") };
    inline UpdateDatasetVersionRequest& setDatasetTaskRamRole(string datasetTaskRamRole) { DARABONBA_PTR_SET_VALUE(datasetTaskRamRole_, datasetTaskRamRole) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDatasetVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateDatasetVersionRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // userMetricsEndpoints Field Functions 
    bool hasUserMetricsEndpoints() const { return this->userMetricsEndpoints_ != nullptr;};
    void deleteUserMetricsEndpoints() { this->userMetricsEndpoints_ = nullptr;};
    inline const vector<UserMetricsEndpoint> & getUserMetricsEndpoints() const { DARABONBA_PTR_GET_CONST(userMetricsEndpoints_, vector<UserMetricsEndpoint>) };
    inline vector<UserMetricsEndpoint> getUserMetricsEndpoints() { DARABONBA_PTR_GET(userMetricsEndpoints_, vector<UserMetricsEndpoint>) };
    inline UpdateDatasetVersionRequest& setUserMetricsEndpoints(const vector<UserMetricsEndpoint> & userMetricsEndpoints) { DARABONBA_PTR_SET_VALUE(userMetricsEndpoints_, userMetricsEndpoints) };
    inline UpdateDatasetVersionRequest& setUserMetricsEndpoints(vector<UserMetricsEndpoint> && userMetricsEndpoints) { DARABONBA_PTR_SET_RVALUE(userMetricsEndpoints_, userMetricsEndpoints) };


  protected:
    // The number of dataset files.
    shared_ptr<int64_t> dataCount_ {};
    // The size of the space occupied by dataset files. Unit: bytes.
    shared_ptr<int64_t> dataSize_ {};
    // DatasetTaskRamRole
    shared_ptr<string> datasetTaskRamRole_ {};
    // The custom description of the dataset, which is used to distinguish different datasets.
    shared_ptr<string> description_ {};
    // The extended field in JsonString format. When DLC uses the dataset, you can specify the default mount path of the dataset by configuring the mountPath field.
    shared_ptr<string> options_ {};
    shared_ptr<vector<UserMetricsEndpoint>> userMetricsEndpoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

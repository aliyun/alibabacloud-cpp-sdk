// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETFILEMETASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETFILEMETASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetFileMetaResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetFileMetasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetFileMetasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedDetails, failedDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SucceedDetails, succeedDetails_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetFileMetasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedDetails, failedDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SucceedDetails, succeedDetails_);
    };
    CreateDatasetFileMetasResponseBody() = default ;
    CreateDatasetFileMetasResponseBody(const CreateDatasetFileMetasResponseBody &) = default ;
    CreateDatasetFileMetasResponseBody(CreateDatasetFileMetasResponseBody &&) = default ;
    CreateDatasetFileMetasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetFileMetasResponseBody() = default ;
    CreateDatasetFileMetasResponseBody& operator=(const CreateDatasetFileMetasResponseBody &) = default ;
    CreateDatasetFileMetasResponseBody& operator=(CreateDatasetFileMetasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedDetails_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->succeedDetails_ == nullptr; };
    // failedDetails Field Functions 
    bool hasFailedDetails() const { return this->failedDetails_ != nullptr;};
    void deleteFailedDetails() { this->failedDetails_ = nullptr;};
    inline const vector<DatasetFileMetaResponse> & failedDetails() const { DARABONBA_PTR_GET_CONST(failedDetails_, vector<DatasetFileMetaResponse>) };
    inline vector<DatasetFileMetaResponse> failedDetails() { DARABONBA_PTR_GET(failedDetails_, vector<DatasetFileMetaResponse>) };
    inline CreateDatasetFileMetasResponseBody& setFailedDetails(const vector<DatasetFileMetaResponse> & failedDetails) { DARABONBA_PTR_SET_VALUE(failedDetails_, failedDetails) };
    inline CreateDatasetFileMetasResponseBody& setFailedDetails(vector<DatasetFileMetaResponse> && failedDetails) { DARABONBA_PTR_SET_RVALUE(failedDetails_, failedDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDatasetFileMetasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline CreateDatasetFileMetasResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // succeedDetails Field Functions 
    bool hasSucceedDetails() const { return this->succeedDetails_ != nullptr;};
    void deleteSucceedDetails() { this->succeedDetails_ = nullptr;};
    inline const vector<DatasetFileMetaResponse> & succeedDetails() const { DARABONBA_PTR_GET_CONST(succeedDetails_, vector<DatasetFileMetaResponse>) };
    inline vector<DatasetFileMetaResponse> succeedDetails() { DARABONBA_PTR_GET(succeedDetails_, vector<DatasetFileMetaResponse>) };
    inline CreateDatasetFileMetasResponseBody& setSucceedDetails(const vector<DatasetFileMetaResponse> & succeedDetails) { DARABONBA_PTR_SET_VALUE(succeedDetails_, succeedDetails) };
    inline CreateDatasetFileMetasResponseBody& setSucceedDetails(vector<DatasetFileMetaResponse> && succeedDetails) { DARABONBA_PTR_SET_RVALUE(succeedDetails_, succeedDetails) };


  protected:
    // The metadata that failed to be created.
    std::shared_ptr<vector<DatasetFileMetaResponse>> failedDetails_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the metadata records of all dataset files were created. The value true indicates that the metadata records of all dataset files are created. If the value is false, view the failure details specified by FailedDetails.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> status_ = nullptr;
    // The metadata that is created.
    std::shared_ptr<vector<DatasetFileMetaResponse>> succeedDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETFILEMETASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETFILEMETASRESPONSEBODY_HPP_
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
  class UpdateDatasetFileMetasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetFileMetasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedDetails, failedDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetFileMetasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedDetails, failedDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateDatasetFileMetasResponseBody() = default ;
    UpdateDatasetFileMetasResponseBody(const UpdateDatasetFileMetasResponseBody &) = default ;
    UpdateDatasetFileMetasResponseBody(UpdateDatasetFileMetasResponseBody &&) = default ;
    UpdateDatasetFileMetasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetFileMetasResponseBody() = default ;
    UpdateDatasetFileMetasResponseBody& operator=(const UpdateDatasetFileMetasResponseBody &) = default ;
    UpdateDatasetFileMetasResponseBody& operator=(UpdateDatasetFileMetasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedDetails_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr; };
    // failedDetails Field Functions 
    bool hasFailedDetails() const { return this->failedDetails_ != nullptr;};
    void deleteFailedDetails() { this->failedDetails_ = nullptr;};
    inline const vector<DatasetFileMetaResponse> & getFailedDetails() const { DARABONBA_PTR_GET_CONST(failedDetails_, vector<DatasetFileMetaResponse>) };
    inline vector<DatasetFileMetaResponse> getFailedDetails() { DARABONBA_PTR_GET(failedDetails_, vector<DatasetFileMetaResponse>) };
    inline UpdateDatasetFileMetasResponseBody& setFailedDetails(const vector<DatasetFileMetaResponse> & failedDetails) { DARABONBA_PTR_SET_VALUE(failedDetails_, failedDetails) };
    inline UpdateDatasetFileMetasResponseBody& setFailedDetails(vector<DatasetFileMetaResponse> && failedDetails) { DARABONBA_PTR_SET_RVALUE(failedDetails_, failedDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDatasetFileMetasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline UpdateDatasetFileMetasResponseBody& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The metadata records that fail to be updated for the dataset files.
    shared_ptr<vector<DatasetFileMetaResponse>> failedDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the metadata records of all dataset files were updated. Valid values: true and false. If the value is false, view the failure details specified by FailedDetails.
    shared_ptr<bool> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

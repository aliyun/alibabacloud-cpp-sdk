// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetJobId, datasetJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetJobId, datasetJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDatasetJobResponseBody() = default ;
    CreateDatasetJobResponseBody(const CreateDatasetJobResponseBody &) = default ;
    CreateDatasetJobResponseBody(CreateDatasetJobResponseBody &&) = default ;
    CreateDatasetJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetJobResponseBody() = default ;
    CreateDatasetJobResponseBody& operator=(const CreateDatasetJobResponseBody &) = default ;
    CreateDatasetJobResponseBody& operator=(CreateDatasetJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // datasetJobId Field Functions 
    bool hasDatasetJobId() const { return this->datasetJobId_ != nullptr;};
    void deleteDatasetJobId() { this->datasetJobId_ = nullptr;};
    inline string getDatasetJobId() const { DARABONBA_PTR_GET_DEFAULT(datasetJobId_, "") };
    inline CreateDatasetJobResponseBody& setDatasetJobId(string datasetJobId) { DARABONBA_PTR_SET_VALUE(datasetJobId_, datasetJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDatasetJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the dataset job.
    shared_ptr<string> datasetJobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

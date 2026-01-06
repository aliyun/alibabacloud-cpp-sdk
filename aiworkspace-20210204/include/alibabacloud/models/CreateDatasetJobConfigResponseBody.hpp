// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETJOBCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETJOBCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetJobConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetJobConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetJobConfigId, datasetJobConfigId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetJobConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetJobConfigId, datasetJobConfigId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDatasetJobConfigResponseBody() = default ;
    CreateDatasetJobConfigResponseBody(const CreateDatasetJobConfigResponseBody &) = default ;
    CreateDatasetJobConfigResponseBody(CreateDatasetJobConfigResponseBody &&) = default ;
    CreateDatasetJobConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetJobConfigResponseBody() = default ;
    CreateDatasetJobConfigResponseBody& operator=(const CreateDatasetJobConfigResponseBody &) = default ;
    CreateDatasetJobConfigResponseBody& operator=(CreateDatasetJobConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetJobConfigId_ == nullptr
        && this->requestId_ == nullptr; };
    // datasetJobConfigId Field Functions 
    bool hasDatasetJobConfigId() const { return this->datasetJobConfigId_ != nullptr;};
    void deleteDatasetJobConfigId() { this->datasetJobConfigId_ = nullptr;};
    inline string getDatasetJobConfigId() const { DARABONBA_PTR_GET_DEFAULT(datasetJobConfigId_, "") };
    inline CreateDatasetJobConfigResponseBody& setDatasetJobConfigId(string datasetJobConfigId) { DARABONBA_PTR_SET_VALUE(datasetJobConfigId_, datasetJobConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDatasetJobConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration ID.
    shared_ptr<string> datasetJobConfigId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

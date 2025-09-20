// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Dataset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dataset, dataset_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dataset, dataset_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDatasetResponseBody() = default ;
    CreateDatasetResponseBody(const CreateDatasetResponseBody &) = default ;
    CreateDatasetResponseBody(CreateDatasetResponseBody &&) = default ;
    CreateDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetResponseBody() = default ;
    CreateDatasetResponseBody& operator=(const CreateDatasetResponseBody &) = default ;
    CreateDatasetResponseBody& operator=(CreateDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataset_ != nullptr
        && this->requestId_ != nullptr; };
    // dataset Field Functions 
    bool hasDataset() const { return this->dataset_ != nullptr;};
    void deleteDataset() { this->dataset_ = nullptr;};
    inline const Dataset & dataset() const { DARABONBA_PTR_GET_CONST(dataset_, Dataset) };
    inline Dataset dataset() { DARABONBA_PTR_GET(dataset_, Dataset) };
    inline CreateDatasetResponseBody& setDataset(const Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
    inline CreateDatasetResponseBody& setDataset(Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the dataset.
    std::shared_ptr<Dataset> dataset_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif

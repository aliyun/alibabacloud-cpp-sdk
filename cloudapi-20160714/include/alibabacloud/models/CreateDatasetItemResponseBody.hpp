// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateDatasetItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetItemId, datasetItemId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDatasetItemResponseBody() = default ;
    CreateDatasetItemResponseBody(const CreateDatasetItemResponseBody &) = default ;
    CreateDatasetItemResponseBody(CreateDatasetItemResponseBody &&) = default ;
    CreateDatasetItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetItemResponseBody() = default ;
    CreateDatasetItemResponseBody& operator=(const CreateDatasetItemResponseBody &) = default ;
    CreateDatasetItemResponseBody& operator=(CreateDatasetItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetItemId_ == nullptr
        && return this->requestId_ == nullptr; };
    // datasetItemId Field Functions 
    bool hasDatasetItemId() const { return this->datasetItemId_ != nullptr;};
    void deleteDatasetItemId() { this->datasetItemId_ = nullptr;};
    inline string datasetItemId() const { DARABONBA_PTR_GET_DEFAULT(datasetItemId_, "") };
    inline CreateDatasetItemResponseBody& setDatasetItemId(string datasetItemId) { DARABONBA_PTR_SET_VALUE(datasetItemId_, datasetItemId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDatasetItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> datasetItemId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

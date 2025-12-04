// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Dataset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dataset, dataset_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dataset, dataset_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDatasetResponseBody() = default ;
    GetDatasetResponseBody(const GetDatasetResponseBody &) = default ;
    GetDatasetResponseBody(GetDatasetResponseBody &&) = default ;
    GetDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetResponseBody() = default ;
    GetDatasetResponseBody& operator=(const GetDatasetResponseBody &) = default ;
    GetDatasetResponseBody& operator=(GetDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataset_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // dataset Field Functions 
    bool hasDataset() const { return this->dataset_ != nullptr;};
    void deleteDataset() { this->dataset_ = nullptr;};
    inline const Dataset & dataset() const { DARABONBA_PTR_GET_CONST(dataset_, Dataset) };
    inline Dataset dataset() { DARABONBA_PTR_GET(dataset_, Dataset) };
    inline GetDatasetResponseBody& setDataset(const Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
    inline GetDatasetResponseBody& setDataset(Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDatasetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Dataset> dataset_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DatasetVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDatasetVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDatasetVersionResponseBody() = default ;
    GetDatasetVersionResponseBody(const GetDatasetVersionResponseBody &) = default ;
    GetDatasetVersionResponseBody(GetDatasetVersionResponseBody &&) = default ;
    GetDatasetVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetVersionResponseBody() = default ;
    GetDatasetVersionResponseBody& operator=(const GetDatasetVersionResponseBody &) = default ;
    GetDatasetVersionResponseBody& operator=(GetDatasetVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetVersion_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline const DatasetVersion & datasetVersion() const { DARABONBA_PTR_GET_CONST(datasetVersion_, DatasetVersion) };
    inline DatasetVersion datasetVersion() { DARABONBA_PTR_GET(datasetVersion_, DatasetVersion) };
    inline GetDatasetVersionResponseBody& setDatasetVersion(const DatasetVersion & datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };
    inline GetDatasetVersionResponseBody& setDatasetVersion(DatasetVersion && datasetVersion) { DARABONBA_PTR_SET_RVALUE(datasetVersion_, datasetVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDatasetVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<DatasetVersion> datasetVersion_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

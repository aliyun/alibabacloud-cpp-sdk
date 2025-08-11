// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETBLOODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DATASETBLOODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataSetBloodResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DataSetBloodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSetBloodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DataSetBloodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DataSetBloodResponseBody() = default ;
    DataSetBloodResponseBody(const DataSetBloodResponseBody &) = default ;
    DataSetBloodResponseBody(DataSetBloodResponseBody &&) = default ;
    DataSetBloodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSetBloodResponseBody() = default ;
    DataSetBloodResponseBody& operator=(const DataSetBloodResponseBody &) = default ;
    DataSetBloodResponseBody& operator=(DataSetBloodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->success_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DataSetBloodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DataSetBloodResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<DataSetBloodResponseBodyResult>) };
    inline vector<DataSetBloodResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<DataSetBloodResponseBodyResult>) };
    inline DataSetBloodResponseBody& setResult(const vector<DataSetBloodResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DataSetBloodResponseBody& setResult(vector<DataSetBloodResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DataSetBloodResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Array of works.
    std::shared_ptr<vector<DataSetBloodResponseBodyResult>> result_ = nullptr;
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: Request succeeded
    // - false: Request failed
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeSampleDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HasSampleData, hasSampleData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SampleDataStatus, sampleDataStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HasSampleData, hasSampleData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SampleDataStatus, sampleDataStatus_);
    };
    DescribeSampleDataResponseBody() = default ;
    DescribeSampleDataResponseBody(const DescribeSampleDataResponseBody &) = default ;
    DescribeSampleDataResponseBody(DescribeSampleDataResponseBody &&) = default ;
    DescribeSampleDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDataResponseBody() = default ;
    DescribeSampleDataResponseBody& operator=(const DescribeSampleDataResponseBody &) = default ;
    DescribeSampleDataResponseBody& operator=(DescribeSampleDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->errorMessage_ == nullptr && return this->hasSampleData_ == nullptr && return this->requestId_ == nullptr && return this->sampleDataStatus_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSampleDataResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeSampleDataResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // hasSampleData Field Functions 
    bool hasHasSampleData() const { return this->hasSampleData_ != nullptr;};
    void deleteHasSampleData() { this->hasSampleData_ = nullptr;};
    inline bool hasSampleData() const { DARABONBA_PTR_GET_DEFAULT(hasSampleData_, false) };
    inline DescribeSampleDataResponseBody& setHasSampleData(bool hasSampleData) { DARABONBA_PTR_SET_VALUE(hasSampleData_, hasSampleData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSampleDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sampleDataStatus Field Functions 
    bool hasSampleDataStatus() const { return this->sampleDataStatus_ != nullptr;};
    void deleteSampleDataStatus() { this->sampleDataStatus_ = nullptr;};
    inline string sampleDataStatus() const { DARABONBA_PTR_GET_DEFAULT(sampleDataStatus_, "") };
    inline DescribeSampleDataResponseBody& setSampleDataStatus(string sampleDataStatus) { DARABONBA_PTR_SET_VALUE(sampleDataStatus_, sampleDataStatus) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The error message returned if an error occurs. This message does not affect the execution of the operation.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Indicates whether a sample dataset is loaded to the instance. Valid values:
    // 
    // *   **true**: A sample dataset is loaded.
    // *   **false**: No sample dataset is loaded.
    std::shared_ptr<bool> hasSampleData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The loading status of the sample dataset. Valid values:
    // 
    // *   **loaded**
    // *   **loading**
    // *   **unload**
    std::shared_ptr<string> sampleDataStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTTASKVALIDATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTTASKVALIDATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeImportTaskValidationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportTaskValidationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportTaskValidationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImportTaskValidationResponseBody() = default ;
    DescribeImportTaskValidationResponseBody(const DescribeImportTaskValidationResponseBody &) = default ;
    DescribeImportTaskValidationResponseBody(DescribeImportTaskValidationResponseBody &&) = default ;
    DescribeImportTaskValidationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportTaskValidationResponseBody() = default ;
    DescribeImportTaskValidationResponseBody& operator=(const DescribeImportTaskValidationResponseBody &) = default ;
    DescribeImportTaskValidationResponseBody& operator=(DescribeImportTaskValidationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline DescribeImportTaskValidationResponseBody& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImportTaskValidationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeImportTaskValidationResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImportTaskValidationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> detail_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

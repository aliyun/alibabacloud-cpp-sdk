// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEBUCKETSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEBUCKETSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateBucketScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateBucketScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
      DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
    };
    friend void from_json(const Darabonba::Json& j, OperateBucketScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
      DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
    };
    OperateBucketScanTaskRequest() = default ;
    OperateBucketScanTaskRequest(const OperateBucketScanTaskRequest &) = default ;
    OperateBucketScanTaskRequest(OperateBucketScanTaskRequest &&) = default ;
    OperateBucketScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateBucketScanTaskRequest() = default ;
    OperateBucketScanTaskRequest& operator=(const OperateBucketScanTaskRequest &) = default ;
    OperateBucketScanTaskRequest& operator=(OperateBucketScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->operateCode_ == nullptr; };
    // bucketName Field Functions 
    bool hasBucketName() const { return this->bucketName_ != nullptr;};
    void deleteBucketName() { this->bucketName_ = nullptr;};
    inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
    inline OperateBucketScanTaskRequest& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


    // operateCode Field Functions 
    bool hasOperateCode() const { return this->operateCode_ != nullptr;};
    void deleteOperateCode() { this->operateCode_ = nullptr;};
    inline int32_t getOperateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, 0) };
    inline OperateBucketScanTaskRequest& setOperateCode(int32_t operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


  protected:
    // The name of the bucket.
    shared_ptr<string> bucketName_ {};
    // The operation that you want to perform on the bucket. Valid value:
    // 
    // *   **1**: cancels the bucket check.
    shared_ptr<int32_t> operateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

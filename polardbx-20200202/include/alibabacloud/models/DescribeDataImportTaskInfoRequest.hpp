// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAIMPORTTASKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDataImportTaskInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataImportTaskInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FailPageNumber, failPageNumber_);
      DARABONBA_PTR_TO_JSON(FailPageSize, failPageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_TO_JSON(SuccessPageNumber, successPageNumber_);
      DARABONBA_PTR_TO_JSON(SuccessPageSize, successPageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataImportTaskInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FailPageNumber, failPageNumber_);
      DARABONBA_PTR_FROM_JSON(FailPageSize, failPageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_FROM_JSON(SuccessPageNumber, successPageNumber_);
      DARABONBA_PTR_FROM_JSON(SuccessPageSize, successPageSize_);
    };
    DescribeDataImportTaskInfoRequest() = default ;
    DescribeDataImportTaskInfoRequest(const DescribeDataImportTaskInfoRequest &) = default ;
    DescribeDataImportTaskInfoRequest(DescribeDataImportTaskInfoRequest &&) = default ;
    DescribeDataImportTaskInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataImportTaskInfoRequest() = default ;
    DescribeDataImportTaskInfoRequest& operator=(const DescribeDataImportTaskInfoRequest &) = default ;
    DescribeDataImportTaskInfoRequest& operator=(DescribeDataImportTaskInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failPageNumber_ == nullptr
        && this->failPageSize_ == nullptr && this->regionId_ == nullptr && this->slinkTaskId_ == nullptr && this->successPageNumber_ == nullptr && this->successPageSize_ == nullptr; };
    // failPageNumber Field Functions 
    bool hasFailPageNumber() const { return this->failPageNumber_ != nullptr;};
    void deleteFailPageNumber() { this->failPageNumber_ = nullptr;};
    inline int32_t getFailPageNumber() const { DARABONBA_PTR_GET_DEFAULT(failPageNumber_, 0) };
    inline DescribeDataImportTaskInfoRequest& setFailPageNumber(int32_t failPageNumber) { DARABONBA_PTR_SET_VALUE(failPageNumber_, failPageNumber) };


    // failPageSize Field Functions 
    bool hasFailPageSize() const { return this->failPageSize_ != nullptr;};
    void deleteFailPageSize() { this->failPageSize_ = nullptr;};
    inline int32_t getFailPageSize() const { DARABONBA_PTR_GET_DEFAULT(failPageSize_, 0) };
    inline DescribeDataImportTaskInfoRequest& setFailPageSize(int32_t failPageSize) { DARABONBA_PTR_SET_VALUE(failPageSize_, failPageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataImportTaskInfoRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline DescribeDataImportTaskInfoRequest& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


    // successPageNumber Field Functions 
    bool hasSuccessPageNumber() const { return this->successPageNumber_ != nullptr;};
    void deleteSuccessPageNumber() { this->successPageNumber_ = nullptr;};
    inline int64_t getSuccessPageNumber() const { DARABONBA_PTR_GET_DEFAULT(successPageNumber_, 0L) };
    inline DescribeDataImportTaskInfoRequest& setSuccessPageNumber(int64_t successPageNumber) { DARABONBA_PTR_SET_VALUE(successPageNumber_, successPageNumber) };


    // successPageSize Field Functions 
    bool hasSuccessPageSize() const { return this->successPageSize_ != nullptr;};
    void deleteSuccessPageSize() { this->successPageSize_ = nullptr;};
    inline int64_t getSuccessPageSize() const { DARABONBA_PTR_GET_DEFAULT(successPageSize_, 0L) };
    inline DescribeDataImportTaskInfoRequest& setSuccessPageSize(int64_t successPageSize) { DARABONBA_PTR_SET_VALUE(successPageSize_, successPageSize) };


  protected:
    shared_ptr<int32_t> failPageNumber_ {};
    shared_ptr<int32_t> failPageSize_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> slinkTaskId_ {};
    shared_ptr<int64_t> successPageNumber_ {};
    shared_ptr<int64_t> successPageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif

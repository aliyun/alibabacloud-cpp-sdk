// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSRESPONSEBODYRECORDRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSRESPONSEBODYRECORDRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateRecordsResponseBodyRecordResultListFailed.hpp>
#include <alibabacloud/models/BatchCreateRecordsResponseBodyRecordResultListSuccess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsResponseBodyRecordResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsResponseBodyRecordResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsResponseBodyRecordResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    BatchCreateRecordsResponseBodyRecordResultList() = default ;
    BatchCreateRecordsResponseBodyRecordResultList(const BatchCreateRecordsResponseBodyRecordResultList &) = default ;
    BatchCreateRecordsResponseBodyRecordResultList(BatchCreateRecordsResponseBodyRecordResultList &&) = default ;
    BatchCreateRecordsResponseBodyRecordResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsResponseBodyRecordResultList() = default ;
    BatchCreateRecordsResponseBodyRecordResultList& operator=(const BatchCreateRecordsResponseBodyRecordResultList &) = default ;
    BatchCreateRecordsResponseBodyRecordResultList& operator=(BatchCreateRecordsResponseBodyRecordResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failed_ != nullptr
        && this->success_ != nullptr && this->totalCount_ != nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline const vector<Models::BatchCreateRecordsResponseBodyRecordResultListFailed> & failed() const { DARABONBA_PTR_GET_CONST(failed_, vector<Models::BatchCreateRecordsResponseBodyRecordResultListFailed>) };
    inline vector<Models::BatchCreateRecordsResponseBodyRecordResultListFailed> failed() { DARABONBA_PTR_GET(failed_, vector<Models::BatchCreateRecordsResponseBodyRecordResultListFailed>) };
    inline BatchCreateRecordsResponseBodyRecordResultList& setFailed(const vector<Models::BatchCreateRecordsResponseBodyRecordResultListFailed> & failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };
    inline BatchCreateRecordsResponseBodyRecordResultList& setFailed(vector<Models::BatchCreateRecordsResponseBodyRecordResultListFailed> && failed) { DARABONBA_PTR_SET_RVALUE(failed_, failed) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline const vector<Models::BatchCreateRecordsResponseBodyRecordResultListSuccess> & success() const { DARABONBA_PTR_GET_CONST(success_, vector<Models::BatchCreateRecordsResponseBodyRecordResultListSuccess>) };
    inline vector<Models::BatchCreateRecordsResponseBodyRecordResultListSuccess> success() { DARABONBA_PTR_GET(success_, vector<Models::BatchCreateRecordsResponseBodyRecordResultListSuccess>) };
    inline BatchCreateRecordsResponseBodyRecordResultList& setSuccess(const vector<Models::BatchCreateRecordsResponseBodyRecordResultListSuccess> & success) { DARABONBA_PTR_SET_VALUE(success_, success) };
    inline BatchCreateRecordsResponseBodyRecordResultList& setSuccess(vector<Models::BatchCreateRecordsResponseBodyRecordResultListSuccess> && success) { DARABONBA_PTR_SET_RVALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline BatchCreateRecordsResponseBodyRecordResultList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The records that failed to be created.
    std::shared_ptr<vector<Models::BatchCreateRecordsResponseBodyRecordResultListFailed>> failed_ = nullptr;
    // The records that have been created.
    std::shared_ptr<vector<Models::BatchCreateRecordsResponseBodyRecordResultListSuccess>> success_ = nullptr;
    // The total number of returned records.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

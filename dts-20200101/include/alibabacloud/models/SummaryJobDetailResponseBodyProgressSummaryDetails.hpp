// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMMARYJOBDETAILRESPONSEBODYPROGRESSSUMMARYDETAILS_HPP_
#define ALIBABACLOUD_MODELS_SUMMARYJOBDETAILRESPONSEBODYPROGRESSSUMMARYDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SummaryJobDetailResponseBodyProgressSummaryDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SummaryJobDetailResponseBodyProgressSummaryDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, SummaryJobDetailResponseBodyProgressSummaryDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    SummaryJobDetailResponseBodyProgressSummaryDetails() = default ;
    SummaryJobDetailResponseBodyProgressSummaryDetails(const SummaryJobDetailResponseBodyProgressSummaryDetails &) = default ;
    SummaryJobDetailResponseBodyProgressSummaryDetails(SummaryJobDetailResponseBodyProgressSummaryDetails &&) = default ;
    SummaryJobDetailResponseBodyProgressSummaryDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SummaryJobDetailResponseBodyProgressSummaryDetails() = default ;
    SummaryJobDetailResponseBodyProgressSummaryDetails& operator=(const SummaryJobDetailResponseBodyProgressSummaryDetails &) = default ;
    SummaryJobDetailResponseBodyProgressSummaryDetails& operator=(SummaryJobDetailResponseBodyProgressSummaryDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->state_ == nullptr && return this->totalCount_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SummaryJobDetailResponseBodyProgressSummaryDetails& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline SummaryJobDetailResponseBodyProgressSummaryDetails& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline SummaryJobDetailResponseBodyProgressSummaryDetails& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The type of migrated or synchronized object. Valid values: **Table**, **Constraint**, **Index**, **View**, **Materialize View**, **Type**, **Synonym**, **Trigger**, **Function**, **Procedure**, **Package**, **Default**, **Rule**, **PlanGuide**, and **Sequence**.
    std::shared_ptr<string> key_ = nullptr;
    // The state of the data migration or data synchronization task. Valid values:
    // 
    // *   **0**: The task was complete.
    // *   **1**: The task was waiting to start.
    // *   **2**: The task was being initialized.
    // *   **3**: The task was in progress.
    // *   **4**: An error occurred.
    // *   **5**: The task failed.
    std::shared_ptr<int32_t> state_ = nullptr;
    // The total number of migrated or synchronized objects.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif

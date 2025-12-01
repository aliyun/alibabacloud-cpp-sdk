// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULPAGESUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVULPAGESUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetVulPageSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulPageSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CompletedCount, completedCount_);
      DARABONBA_PTR_TO_JSON(HandingCount, handingCount_);
      DARABONBA_PTR_TO_JSON(HighCount, highCount_);
      DARABONBA_PTR_TO_JSON(LowCount, lowCount_);
      DARABONBA_PTR_TO_JSON(MediumCount, mediumCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WaitHandleCount, waitHandleCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulPageSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CompletedCount, completedCount_);
      DARABONBA_PTR_FROM_JSON(HandingCount, handingCount_);
      DARABONBA_PTR_FROM_JSON(HighCount, highCount_);
      DARABONBA_PTR_FROM_JSON(LowCount, lowCount_);
      DARABONBA_PTR_FROM_JSON(MediumCount, mediumCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WaitHandleCount, waitHandleCount_);
    };
    GetVulPageSummaryResponseBodyData() = default ;
    GetVulPageSummaryResponseBodyData(const GetVulPageSummaryResponseBodyData &) = default ;
    GetVulPageSummaryResponseBodyData(GetVulPageSummaryResponseBodyData &&) = default ;
    GetVulPageSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulPageSummaryResponseBodyData() = default ;
    GetVulPageSummaryResponseBodyData& operator=(const GetVulPageSummaryResponseBodyData &) = default ;
    GetVulPageSummaryResponseBodyData& operator=(GetVulPageSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completedCount_ == nullptr
        && return this->handingCount_ == nullptr && return this->highCount_ == nullptr && return this->lowCount_ == nullptr && return this->mediumCount_ == nullptr && return this->totalCount_ == nullptr
        && return this->waitHandleCount_ == nullptr; };
    // completedCount Field Functions 
    bool hasCompletedCount() const { return this->completedCount_ != nullptr;};
    void deleteCompletedCount() { this->completedCount_ = nullptr;};
    inline int64_t completedCount() const { DARABONBA_PTR_GET_DEFAULT(completedCount_, 0L) };
    inline GetVulPageSummaryResponseBodyData& setCompletedCount(int64_t completedCount) { DARABONBA_PTR_SET_VALUE(completedCount_, completedCount) };


    // handingCount Field Functions 
    bool hasHandingCount() const { return this->handingCount_ != nullptr;};
    void deleteHandingCount() { this->handingCount_ = nullptr;};
    inline int64_t handingCount() const { DARABONBA_PTR_GET_DEFAULT(handingCount_, 0L) };
    inline GetVulPageSummaryResponseBodyData& setHandingCount(int64_t handingCount) { DARABONBA_PTR_SET_VALUE(handingCount_, handingCount) };


    // highCount Field Functions 
    bool hasHighCount() const { return this->highCount_ != nullptr;};
    void deleteHighCount() { this->highCount_ = nullptr;};
    inline int64_t highCount() const { DARABONBA_PTR_GET_DEFAULT(highCount_, 0L) };
    inline GetVulPageSummaryResponseBodyData& setHighCount(int64_t highCount) { DARABONBA_PTR_SET_VALUE(highCount_, highCount) };


    // lowCount Field Functions 
    bool hasLowCount() const { return this->lowCount_ != nullptr;};
    void deleteLowCount() { this->lowCount_ = nullptr;};
    inline int64_t lowCount() const { DARABONBA_PTR_GET_DEFAULT(lowCount_, 0L) };
    inline GetVulPageSummaryResponseBodyData& setLowCount(int64_t lowCount) { DARABONBA_PTR_SET_VALUE(lowCount_, lowCount) };


    // mediumCount Field Functions 
    bool hasMediumCount() const { return this->mediumCount_ != nullptr;};
    void deleteMediumCount() { this->mediumCount_ = nullptr;};
    inline int64_t mediumCount() const { DARABONBA_PTR_GET_DEFAULT(mediumCount_, 0L) };
    inline GetVulPageSummaryResponseBodyData& setMediumCount(int64_t mediumCount) { DARABONBA_PTR_SET_VALUE(mediumCount_, mediumCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetVulPageSummaryResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // waitHandleCount Field Functions 
    bool hasWaitHandleCount() const { return this->waitHandleCount_ != nullptr;};
    void deleteWaitHandleCount() { this->waitHandleCount_ = nullptr;};
    inline int64_t waitHandleCount() const { DARABONBA_PTR_GET_DEFAULT(waitHandleCount_, 0L) };
    inline GetVulPageSummaryResponseBodyData& setWaitHandleCount(int64_t waitHandleCount) { DARABONBA_PTR_SET_VALUE(waitHandleCount_, waitHandleCount) };


  protected:
    // Number of completed items.
    std::shared_ptr<int64_t> completedCount_ = nullptr;
    // Number of items being handled.
    std::shared_ptr<int64_t> handingCount_ = nullptr;
    // Number of high-risk items.
    std::shared_ptr<int64_t> highCount_ = nullptr;
    // Number of low-risk items.
    std::shared_ptr<int64_t> lowCount_ = nullptr;
    // Number of medium-risk items.
    std::shared_ptr<int64_t> mediumCount_ = nullptr;
    // Total number of items.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // Number of unhandled items.
    std::shared_ptr<int64_t> waitHandleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif

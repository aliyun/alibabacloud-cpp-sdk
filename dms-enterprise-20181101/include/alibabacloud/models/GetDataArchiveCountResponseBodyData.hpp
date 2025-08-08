// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVECOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVECOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveCountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveCountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(ProcessingCount, processingCount_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveCountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(ProcessingCount, processingCount_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetDataArchiveCountResponseBodyData() = default ;
    GetDataArchiveCountResponseBodyData(const GetDataArchiveCountResponseBodyData &) = default ;
    GetDataArchiveCountResponseBodyData(GetDataArchiveCountResponseBodyData &&) = default ;
    GetDataArchiveCountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveCountResponseBodyData() = default ;
    GetDataArchiveCountResponseBodyData& operator=(const GetDataArchiveCountResponseBodyData &) = default ;
    GetDataArchiveCountResponseBodyData& operator=(GetDataArchiveCountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failCount_ != nullptr
        && this->processingCount_ != nullptr && this->successCount_ != nullptr && this->totalCount_ != nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int64_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0L) };
    inline GetDataArchiveCountResponseBodyData& setFailCount(int64_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // processingCount Field Functions 
    bool hasProcessingCount() const { return this->processingCount_ != nullptr;};
    void deleteProcessingCount() { this->processingCount_ = nullptr;};
    inline int64_t processingCount() const { DARABONBA_PTR_GET_DEFAULT(processingCount_, 0L) };
    inline GetDataArchiveCountResponseBodyData& setProcessingCount(int64_t processingCount) { DARABONBA_PTR_SET_VALUE(processingCount_, processingCount) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int64_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
    inline GetDataArchiveCountResponseBodyData& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetDataArchiveCountResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of tickets that data archiving failed.
    std::shared_ptr<int64_t> failCount_ = nullptr;
    // The number of tickets that data archiving is in progress.
    std::shared_ptr<int64_t> processingCount_ = nullptr;
    // The number of tickets that data archiving is successful.
    std::shared_ptr<int64_t> successCount_ = nullptr;
    // The total number of data archiving tickets.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

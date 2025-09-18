// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HEALTHSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_HEALTHSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class HealthSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HealthSummary& obj) { 
      DARABONBA_PTR_TO_JSON(BadCount, badCount_);
      DARABONBA_PTR_TO_JSON(GoodCount, goodCount_);
      DARABONBA_PTR_TO_JSON(NoneCount, noneCount_);
      DARABONBA_PTR_TO_JSON(StoppedCount, stoppedCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UnknownCount, unknownCount_);
      DARABONBA_PTR_TO_JSON(WarningCount, warningCount_);
    };
    friend void from_json(const Darabonba::Json& j, HealthSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(BadCount, badCount_);
      DARABONBA_PTR_FROM_JSON(GoodCount, goodCount_);
      DARABONBA_PTR_FROM_JSON(NoneCount, noneCount_);
      DARABONBA_PTR_FROM_JSON(StoppedCount, stoppedCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UnknownCount, unknownCount_);
      DARABONBA_PTR_FROM_JSON(WarningCount, warningCount_);
    };
    HealthSummary() = default ;
    HealthSummary(const HealthSummary &) = default ;
    HealthSummary(HealthSummary &&) = default ;
    HealthSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HealthSummary() = default ;
    HealthSummary& operator=(const HealthSummary &) = default ;
    HealthSummary& operator=(HealthSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->badCount_ != nullptr
        && this->goodCount_ != nullptr && this->noneCount_ != nullptr && this->stoppedCount_ != nullptr && this->totalCount_ != nullptr && this->unknownCount_ != nullptr
        && this->warningCount_ != nullptr; };
    // badCount Field Functions 
    bool hasBadCount() const { return this->badCount_ != nullptr;};
    void deleteBadCount() { this->badCount_ = nullptr;};
    inline int64_t badCount() const { DARABONBA_PTR_GET_DEFAULT(badCount_, 0L) };
    inline HealthSummary& setBadCount(int64_t badCount) { DARABONBA_PTR_SET_VALUE(badCount_, badCount) };


    // goodCount Field Functions 
    bool hasGoodCount() const { return this->goodCount_ != nullptr;};
    void deleteGoodCount() { this->goodCount_ = nullptr;};
    inline int64_t goodCount() const { DARABONBA_PTR_GET_DEFAULT(goodCount_, 0L) };
    inline HealthSummary& setGoodCount(int64_t goodCount) { DARABONBA_PTR_SET_VALUE(goodCount_, goodCount) };


    // noneCount Field Functions 
    bool hasNoneCount() const { return this->noneCount_ != nullptr;};
    void deleteNoneCount() { this->noneCount_ = nullptr;};
    inline int64_t noneCount() const { DARABONBA_PTR_GET_DEFAULT(noneCount_, 0L) };
    inline HealthSummary& setNoneCount(int64_t noneCount) { DARABONBA_PTR_SET_VALUE(noneCount_, noneCount) };


    // stoppedCount Field Functions 
    bool hasStoppedCount() const { return this->stoppedCount_ != nullptr;};
    void deleteStoppedCount() { this->stoppedCount_ = nullptr;};
    inline int64_t stoppedCount() const { DARABONBA_PTR_GET_DEFAULT(stoppedCount_, 0L) };
    inline HealthSummary& setStoppedCount(int64_t stoppedCount) { DARABONBA_PTR_SET_VALUE(stoppedCount_, stoppedCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline HealthSummary& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // unknownCount Field Functions 
    bool hasUnknownCount() const { return this->unknownCount_ != nullptr;};
    void deleteUnknownCount() { this->unknownCount_ = nullptr;};
    inline int64_t unknownCount() const { DARABONBA_PTR_GET_DEFAULT(unknownCount_, 0L) };
    inline HealthSummary& setUnknownCount(int64_t unknownCount) { DARABONBA_PTR_SET_VALUE(unknownCount_, unknownCount) };


    // warningCount Field Functions 
    bool hasWarningCount() const { return this->warningCount_ != nullptr;};
    void deleteWarningCount() { this->warningCount_ = nullptr;};
    inline int64_t warningCount() const { DARABONBA_PTR_GET_DEFAULT(warningCount_, 0L) };
    inline HealthSummary& setWarningCount(int64_t warningCount) { DARABONBA_PTR_SET_VALUE(warningCount_, warningCount) };


  protected:
    std::shared_ptr<int64_t> badCount_ = nullptr;
    std::shared_ptr<int64_t> goodCount_ = nullptr;
    std::shared_ptr<int64_t> noneCount_ = nullptr;
    std::shared_ptr<int64_t> stoppedCount_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<int64_t> unknownCount_ = nullptr;
    std::shared_ptr<int64_t> warningCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif

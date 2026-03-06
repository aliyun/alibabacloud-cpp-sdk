// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTANODESTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_QUOTANODESTATISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AllocatedHyperNodeDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaNodeStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaNodeStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(ActualMinHyperNodeNum, actualMinHyperNodeNum_);
      DARABONBA_PTR_TO_JSON(ActualMinNodeNum, actualMinNodeNum_);
      DARABONBA_PTR_TO_JSON(AllocatedHyperNodeDetails, allocatedHyperNodeDetails_);
      DARABONBA_PTR_TO_JSON(AllocatedHyperNodeNum, allocatedHyperNodeNum_);
      DARABONBA_PTR_TO_JSON(AllocatedNodeNum, allocatedNodeNum_);
      DARABONBA_PTR_TO_JSON(EmptyNodeNum, emptyNodeNum_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaNodeStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualMinHyperNodeNum, actualMinHyperNodeNum_);
      DARABONBA_PTR_FROM_JSON(ActualMinNodeNum, actualMinNodeNum_);
      DARABONBA_PTR_FROM_JSON(AllocatedHyperNodeDetails, allocatedHyperNodeDetails_);
      DARABONBA_PTR_FROM_JSON(AllocatedHyperNodeNum, allocatedHyperNodeNum_);
      DARABONBA_PTR_FROM_JSON(AllocatedNodeNum, allocatedNodeNum_);
      DARABONBA_PTR_FROM_JSON(EmptyNodeNum, emptyNodeNum_);
    };
    QuotaNodeStatistics() = default ;
    QuotaNodeStatistics(const QuotaNodeStatistics &) = default ;
    QuotaNodeStatistics(QuotaNodeStatistics &&) = default ;
    QuotaNodeStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaNodeStatistics() = default ;
    QuotaNodeStatistics& operator=(const QuotaNodeStatistics &) = default ;
    QuotaNodeStatistics& operator=(QuotaNodeStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualMinHyperNodeNum_ == nullptr
        && this->actualMinNodeNum_ == nullptr && this->allocatedHyperNodeDetails_ == nullptr && this->allocatedHyperNodeNum_ == nullptr && this->allocatedNodeNum_ == nullptr && this->emptyNodeNum_ == nullptr; };
    // actualMinHyperNodeNum Field Functions 
    bool hasActualMinHyperNodeNum() const { return this->actualMinHyperNodeNum_ != nullptr;};
    void deleteActualMinHyperNodeNum() { this->actualMinHyperNodeNum_ = nullptr;};
    inline int64_t getActualMinHyperNodeNum() const { DARABONBA_PTR_GET_DEFAULT(actualMinHyperNodeNum_, 0L) };
    inline QuotaNodeStatistics& setActualMinHyperNodeNum(int64_t actualMinHyperNodeNum) { DARABONBA_PTR_SET_VALUE(actualMinHyperNodeNum_, actualMinHyperNodeNum) };


    // actualMinNodeNum Field Functions 
    bool hasActualMinNodeNum() const { return this->actualMinNodeNum_ != nullptr;};
    void deleteActualMinNodeNum() { this->actualMinNodeNum_ = nullptr;};
    inline int64_t getActualMinNodeNum() const { DARABONBA_PTR_GET_DEFAULT(actualMinNodeNum_, 0L) };
    inline QuotaNodeStatistics& setActualMinNodeNum(int64_t actualMinNodeNum) { DARABONBA_PTR_SET_VALUE(actualMinNodeNum_, actualMinNodeNum) };


    // allocatedHyperNodeDetails Field Functions 
    bool hasAllocatedHyperNodeDetails() const { return this->allocatedHyperNodeDetails_ != nullptr;};
    void deleteAllocatedHyperNodeDetails() { this->allocatedHyperNodeDetails_ = nullptr;};
    inline const vector<AllocatedHyperNodeDetail> & getAllocatedHyperNodeDetails() const { DARABONBA_PTR_GET_CONST(allocatedHyperNodeDetails_, vector<AllocatedHyperNodeDetail>) };
    inline vector<AllocatedHyperNodeDetail> getAllocatedHyperNodeDetails() { DARABONBA_PTR_GET(allocatedHyperNodeDetails_, vector<AllocatedHyperNodeDetail>) };
    inline QuotaNodeStatistics& setAllocatedHyperNodeDetails(const vector<AllocatedHyperNodeDetail> & allocatedHyperNodeDetails) { DARABONBA_PTR_SET_VALUE(allocatedHyperNodeDetails_, allocatedHyperNodeDetails) };
    inline QuotaNodeStatistics& setAllocatedHyperNodeDetails(vector<AllocatedHyperNodeDetail> && allocatedHyperNodeDetails) { DARABONBA_PTR_SET_RVALUE(allocatedHyperNodeDetails_, allocatedHyperNodeDetails) };


    // allocatedHyperNodeNum Field Functions 
    bool hasAllocatedHyperNodeNum() const { return this->allocatedHyperNodeNum_ != nullptr;};
    void deleteAllocatedHyperNodeNum() { this->allocatedHyperNodeNum_ = nullptr;};
    inline int64_t getAllocatedHyperNodeNum() const { DARABONBA_PTR_GET_DEFAULT(allocatedHyperNodeNum_, 0L) };
    inline QuotaNodeStatistics& setAllocatedHyperNodeNum(int64_t allocatedHyperNodeNum) { DARABONBA_PTR_SET_VALUE(allocatedHyperNodeNum_, allocatedHyperNodeNum) };


    // allocatedNodeNum Field Functions 
    bool hasAllocatedNodeNum() const { return this->allocatedNodeNum_ != nullptr;};
    void deleteAllocatedNodeNum() { this->allocatedNodeNum_ = nullptr;};
    inline int64_t getAllocatedNodeNum() const { DARABONBA_PTR_GET_DEFAULT(allocatedNodeNum_, 0L) };
    inline QuotaNodeStatistics& setAllocatedNodeNum(int64_t allocatedNodeNum) { DARABONBA_PTR_SET_VALUE(allocatedNodeNum_, allocatedNodeNum) };


    // emptyNodeNum Field Functions 
    bool hasEmptyNodeNum() const { return this->emptyNodeNum_ != nullptr;};
    void deleteEmptyNodeNum() { this->emptyNodeNum_ = nullptr;};
    inline int64_t getEmptyNodeNum() const { DARABONBA_PTR_GET_DEFAULT(emptyNodeNum_, 0L) };
    inline QuotaNodeStatistics& setEmptyNodeNum(int64_t emptyNodeNum) { DARABONBA_PTR_SET_VALUE(emptyNodeNum_, emptyNodeNum) };


  protected:
    shared_ptr<int64_t> actualMinHyperNodeNum_ {};
    shared_ptr<int64_t> actualMinNodeNum_ {};
    shared_ptr<vector<AllocatedHyperNodeDetail>> allocatedHyperNodeDetails_ {};
    shared_ptr<int64_t> allocatedHyperNodeNum_ {};
    shared_ptr<int64_t> allocatedNodeNum_ {};
    shared_ptr<int64_t> emptyNodeNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

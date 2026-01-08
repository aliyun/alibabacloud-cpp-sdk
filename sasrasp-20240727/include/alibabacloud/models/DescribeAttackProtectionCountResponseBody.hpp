// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKPROTECTIONCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKPROTECTIONCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasRasp20240727
{
namespace Models
{
  class DescribeAttackProtectionCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackProtectionCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BlockHighCount, blockHighCount_);
      DARABONBA_PTR_TO_JSON(BlockLowCount, blockLowCount_);
      DARABONBA_PTR_TO_JSON(BlockMediumCount, blockMediumCount_);
      DARABONBA_PTR_TO_JSON(MonitorHighCount, monitorHighCount_);
      DARABONBA_PTR_TO_JSON(MonitorLowCount, monitorLowCount_);
      DARABONBA_PTR_TO_JSON(MonitorMediumCount, monitorMediumCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRequestCount, totalRequestCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackProtectionCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockHighCount, blockHighCount_);
      DARABONBA_PTR_FROM_JSON(BlockLowCount, blockLowCount_);
      DARABONBA_PTR_FROM_JSON(BlockMediumCount, blockMediumCount_);
      DARABONBA_PTR_FROM_JSON(MonitorHighCount, monitorHighCount_);
      DARABONBA_PTR_FROM_JSON(MonitorLowCount, monitorLowCount_);
      DARABONBA_PTR_FROM_JSON(MonitorMediumCount, monitorMediumCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRequestCount, totalRequestCount_);
    };
    DescribeAttackProtectionCountResponseBody() = default ;
    DescribeAttackProtectionCountResponseBody(const DescribeAttackProtectionCountResponseBody &) = default ;
    DescribeAttackProtectionCountResponseBody(DescribeAttackProtectionCountResponseBody &&) = default ;
    DescribeAttackProtectionCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackProtectionCountResponseBody() = default ;
    DescribeAttackProtectionCountResponseBody& operator=(const DescribeAttackProtectionCountResponseBody &) = default ;
    DescribeAttackProtectionCountResponseBody& operator=(DescribeAttackProtectionCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockHighCount_ == nullptr
        && this->blockLowCount_ == nullptr && this->blockMediumCount_ == nullptr && this->monitorHighCount_ == nullptr && this->monitorLowCount_ == nullptr && this->monitorMediumCount_ == nullptr
        && this->requestId_ == nullptr && this->totalRequestCount_ == nullptr; };
    // blockHighCount Field Functions 
    bool hasBlockHighCount() const { return this->blockHighCount_ != nullptr;};
    void deleteBlockHighCount() { this->blockHighCount_ = nullptr;};
    inline int64_t getBlockHighCount() const { DARABONBA_PTR_GET_DEFAULT(blockHighCount_, 0L) };
    inline DescribeAttackProtectionCountResponseBody& setBlockHighCount(int64_t blockHighCount) { DARABONBA_PTR_SET_VALUE(blockHighCount_, blockHighCount) };


    // blockLowCount Field Functions 
    bool hasBlockLowCount() const { return this->blockLowCount_ != nullptr;};
    void deleteBlockLowCount() { this->blockLowCount_ = nullptr;};
    inline int64_t getBlockLowCount() const { DARABONBA_PTR_GET_DEFAULT(blockLowCount_, 0L) };
    inline DescribeAttackProtectionCountResponseBody& setBlockLowCount(int64_t blockLowCount) { DARABONBA_PTR_SET_VALUE(blockLowCount_, blockLowCount) };


    // blockMediumCount Field Functions 
    bool hasBlockMediumCount() const { return this->blockMediumCount_ != nullptr;};
    void deleteBlockMediumCount() { this->blockMediumCount_ = nullptr;};
    inline int64_t getBlockMediumCount() const { DARABONBA_PTR_GET_DEFAULT(blockMediumCount_, 0L) };
    inline DescribeAttackProtectionCountResponseBody& setBlockMediumCount(int64_t blockMediumCount) { DARABONBA_PTR_SET_VALUE(blockMediumCount_, blockMediumCount) };


    // monitorHighCount Field Functions 
    bool hasMonitorHighCount() const { return this->monitorHighCount_ != nullptr;};
    void deleteMonitorHighCount() { this->monitorHighCount_ = nullptr;};
    inline int64_t getMonitorHighCount() const { DARABONBA_PTR_GET_DEFAULT(monitorHighCount_, 0L) };
    inline DescribeAttackProtectionCountResponseBody& setMonitorHighCount(int64_t monitorHighCount) { DARABONBA_PTR_SET_VALUE(monitorHighCount_, monitorHighCount) };


    // monitorLowCount Field Functions 
    bool hasMonitorLowCount() const { return this->monitorLowCount_ != nullptr;};
    void deleteMonitorLowCount() { this->monitorLowCount_ = nullptr;};
    inline int64_t getMonitorLowCount() const { DARABONBA_PTR_GET_DEFAULT(monitorLowCount_, 0L) };
    inline DescribeAttackProtectionCountResponseBody& setMonitorLowCount(int64_t monitorLowCount) { DARABONBA_PTR_SET_VALUE(monitorLowCount_, monitorLowCount) };


    // monitorMediumCount Field Functions 
    bool hasMonitorMediumCount() const { return this->monitorMediumCount_ != nullptr;};
    void deleteMonitorMediumCount() { this->monitorMediumCount_ = nullptr;};
    inline int64_t getMonitorMediumCount() const { DARABONBA_PTR_GET_DEFAULT(monitorMediumCount_, 0L) };
    inline DescribeAttackProtectionCountResponseBody& setMonitorMediumCount(int64_t monitorMediumCount) { DARABONBA_PTR_SET_VALUE(monitorMediumCount_, monitorMediumCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttackProtectionCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRequestCount Field Functions 
    bool hasTotalRequestCount() const { return this->totalRequestCount_ != nullptr;};
    void deleteTotalRequestCount() { this->totalRequestCount_ = nullptr;};
    inline int64_t getTotalRequestCount() const { DARABONBA_PTR_GET_DEFAULT(totalRequestCount_, 0L) };
    inline DescribeAttackProtectionCountResponseBody& setTotalRequestCount(int64_t totalRequestCount) { DARABONBA_PTR_SET_VALUE(totalRequestCount_, totalRequestCount) };


  protected:
    shared_ptr<int64_t> blockHighCount_ {};
    shared_ptr<int64_t> blockLowCount_ {};
    shared_ptr<int64_t> blockMediumCount_ {};
    shared_ptr<int64_t> monitorHighCount_ {};
    shared_ptr<int64_t> monitorLowCount_ {};
    shared_ptr<int64_t> monitorMediumCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalRequestCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SasRasp20240727
#endif

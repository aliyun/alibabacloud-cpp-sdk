// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVREALTIMEQPSDATARESPONSEBODYAGGREGATEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVREALTIMEQPSDATARESPONSEBODYAGGREGATEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeKvRealTimeQpsDataResponseBodyAggregateData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKvRealTimeQpsDataResponseBodyAggregateData& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(KeyAcc, keyAcc_);
      DARABONBA_PTR_TO_JSON(KeySuccAcc, keySuccAcc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKvRealTimeQpsDataResponseBodyAggregateData& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(KeyAcc, keyAcc_);
      DARABONBA_PTR_FROM_JSON(KeySuccAcc, keySuccAcc_);
    };
    DescribeKvRealTimeQpsDataResponseBodyAggregateData() = default ;
    DescribeKvRealTimeQpsDataResponseBodyAggregateData(const DescribeKvRealTimeQpsDataResponseBodyAggregateData &) = default ;
    DescribeKvRealTimeQpsDataResponseBodyAggregateData(DescribeKvRealTimeQpsDataResponseBodyAggregateData &&) = default ;
    DescribeKvRealTimeQpsDataResponseBodyAggregateData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKvRealTimeQpsDataResponseBodyAggregateData() = default ;
    DescribeKvRealTimeQpsDataResponseBodyAggregateData& operator=(const DescribeKvRealTimeQpsDataResponseBodyAggregateData &) = default ;
    DescribeKvRealTimeQpsDataResponseBodyAggregateData& operator=(DescribeKvRealTimeQpsDataResponseBodyAggregateData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acc_ != nullptr
        && this->accessType_ != nullptr && this->keyAcc_ != nullptr && this->keySuccAcc_ != nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline int64_t acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
    inline DescribeKvRealTimeQpsDataResponseBodyAggregateData& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline DescribeKvRealTimeQpsDataResponseBodyAggregateData& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // keyAcc Field Functions 
    bool hasKeyAcc() const { return this->keyAcc_ != nullptr;};
    void deleteKeyAcc() { this->keyAcc_ = nullptr;};
    inline int64_t keyAcc() const { DARABONBA_PTR_GET_DEFAULT(keyAcc_, 0L) };
    inline DescribeKvRealTimeQpsDataResponseBodyAggregateData& setKeyAcc(int64_t keyAcc) { DARABONBA_PTR_SET_VALUE(keyAcc_, keyAcc) };


    // keySuccAcc Field Functions 
    bool hasKeySuccAcc() const { return this->keySuccAcc_ != nullptr;};
    void deleteKeySuccAcc() { this->keySuccAcc_ = nullptr;};
    inline int64_t keySuccAcc() const { DARABONBA_PTR_GET_DEFAULT(keySuccAcc_, 0L) };
    inline DescribeKvRealTimeQpsDataResponseBodyAggregateData& setKeySuccAcc(int64_t keySuccAcc) { DARABONBA_PTR_SET_VALUE(keySuccAcc_, keySuccAcc) };


  protected:
    std::shared_ptr<int64_t> acc_ = nullptr;
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<int64_t> keyAcc_ = nullptr;
    std::shared_ptr<int64_t> keySuccAcc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

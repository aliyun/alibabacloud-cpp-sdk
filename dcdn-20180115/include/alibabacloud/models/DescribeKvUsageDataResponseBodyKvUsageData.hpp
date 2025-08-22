// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVUSAGEDATARESPONSEBODYKVUSAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVUSAGEDATARESPONSEBODYKVUSAGEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeKvUsageDataResponseBodyKvUsageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKvUsageDataResponseBodyKvUsageData& obj) { 
      DARABONBA_PTR_TO_JSON(Acc, acc_);
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKvUsageDataResponseBodyKvUsageData& obj) { 
      DARABONBA_PTR_FROM_JSON(Acc, acc_);
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeKvUsageDataResponseBodyKvUsageData() = default ;
    DescribeKvUsageDataResponseBodyKvUsageData(const DescribeKvUsageDataResponseBodyKvUsageData &) = default ;
    DescribeKvUsageDataResponseBodyKvUsageData(DescribeKvUsageDataResponseBodyKvUsageData &&) = default ;
    DescribeKvUsageDataResponseBodyKvUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKvUsageDataResponseBodyKvUsageData() = default ;
    DescribeKvUsageDataResponseBodyKvUsageData& operator=(const DescribeKvUsageDataResponseBodyKvUsageData &) = default ;
    DescribeKvUsageDataResponseBodyKvUsageData& operator=(DescribeKvUsageDataResponseBodyKvUsageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acc_ != nullptr
        && this->accessType_ != nullptr && this->namespaceId_ != nullptr && this->timeStamp_ != nullptr; };
    // acc Field Functions 
    bool hasAcc() const { return this->acc_ != nullptr;};
    void deleteAcc() { this->acc_ = nullptr;};
    inline int64_t acc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
    inline DescribeKvUsageDataResponseBodyKvUsageData& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline DescribeKvUsageDataResponseBodyKvUsageData& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeKvUsageDataResponseBodyKvUsageData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeKvUsageDataResponseBodyKvUsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of visits.
    std::shared_ptr<int64_t> acc_ = nullptr;
    // The request method. This parameter is available only when the **SplitBy** parameter is set to **type**.
    std::shared_ptr<string> accessType_ = nullptr;
    // The namespace ID. This parameter is available only when the **SplitBy** parameter is set to **namespace**.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

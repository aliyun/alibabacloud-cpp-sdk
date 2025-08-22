// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVREALTIMEQPSDATARESPONSEBODYKVQPSDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVREALTIMEQPSDATARESPONSEBODYKVQPSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeKvRealTimeQpsDataResponseBodyKvQpsData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKvRealTimeQpsDataResponseBodyKvQpsData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(KeyQps, keyQps_);
      DARABONBA_PTR_TO_JSON(KeySuccQps, keySuccQps_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Qps, qps_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKvRealTimeQpsDataResponseBodyKvQpsData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(KeyQps, keyQps_);
      DARABONBA_PTR_FROM_JSON(KeySuccQps, keySuccQps_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Qps, qps_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeKvRealTimeQpsDataResponseBodyKvQpsData() = default ;
    DescribeKvRealTimeQpsDataResponseBodyKvQpsData(const DescribeKvRealTimeQpsDataResponseBodyKvQpsData &) = default ;
    DescribeKvRealTimeQpsDataResponseBodyKvQpsData(DescribeKvRealTimeQpsDataResponseBodyKvQpsData &&) = default ;
    DescribeKvRealTimeQpsDataResponseBodyKvQpsData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKvRealTimeQpsDataResponseBodyKvQpsData() = default ;
    DescribeKvRealTimeQpsDataResponseBodyKvQpsData& operator=(const DescribeKvRealTimeQpsDataResponseBodyKvQpsData &) = default ;
    DescribeKvRealTimeQpsDataResponseBodyKvQpsData& operator=(DescribeKvRealTimeQpsDataResponseBodyKvQpsData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessType_ != nullptr
        && this->keyQps_ != nullptr && this->keySuccQps_ != nullptr && this->namespaceId_ != nullptr && this->qps_ != nullptr && this->timeStamp_ != nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline DescribeKvRealTimeQpsDataResponseBodyKvQpsData& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // keyQps Field Functions 
    bool hasKeyQps() const { return this->keyQps_ != nullptr;};
    void deleteKeyQps() { this->keyQps_ = nullptr;};
    inline int64_t keyQps() const { DARABONBA_PTR_GET_DEFAULT(keyQps_, 0L) };
    inline DescribeKvRealTimeQpsDataResponseBodyKvQpsData& setKeyQps(int64_t keyQps) { DARABONBA_PTR_SET_VALUE(keyQps_, keyQps) };


    // keySuccQps Field Functions 
    bool hasKeySuccQps() const { return this->keySuccQps_ != nullptr;};
    void deleteKeySuccQps() { this->keySuccQps_ = nullptr;};
    inline int64_t keySuccQps() const { DARABONBA_PTR_GET_DEFAULT(keySuccQps_, 0L) };
    inline DescribeKvRealTimeQpsDataResponseBodyKvQpsData& setKeySuccQps(int64_t keySuccQps) { DARABONBA_PTR_SET_VALUE(keySuccQps_, keySuccQps) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeKvRealTimeQpsDataResponseBodyKvQpsData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // qps Field Functions 
    bool hasQps() const { return this->qps_ != nullptr;};
    void deleteQps() { this->qps_ = nullptr;};
    inline int64_t qps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
    inline DescribeKvRealTimeQpsDataResponseBodyKvQpsData& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeKvRealTimeQpsDataResponseBodyKvQpsData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<int64_t> keyQps_ = nullptr;
    std::shared_ptr<int64_t> keySuccQps_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<int64_t> qps_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif

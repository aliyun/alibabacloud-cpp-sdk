// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSUDPIPSEGMENTSRESPONSEBODYIPSEGMENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSUDPIPSEGMENTSRESPONSEBODYIPSEGMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsUdpIpSegmentsResponseBodyIpSegments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsUdpIpSegmentsResponseBodyIpSegments& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsUdpIpSegmentsResponseBodyIpSegments& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
    };
    DescribePdnsUdpIpSegmentsResponseBodyIpSegments() = default ;
    DescribePdnsUdpIpSegmentsResponseBodyIpSegments(const DescribePdnsUdpIpSegmentsResponseBodyIpSegments &) = default ;
    DescribePdnsUdpIpSegmentsResponseBodyIpSegments(DescribePdnsUdpIpSegmentsResponseBodyIpSegments &&) = default ;
    DescribePdnsUdpIpSegmentsResponseBodyIpSegments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsUdpIpSegmentsResponseBodyIpSegments() = default ;
    DescribePdnsUdpIpSegmentsResponseBodyIpSegments& operator=(const DescribePdnsUdpIpSegmentsResponseBodyIpSegments &) = default ;
    DescribePdnsUdpIpSegmentsResponseBodyIpSegments& operator=(DescribePdnsUdpIpSegmentsResponseBodyIpSegments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createDate_ == nullptr
        && return this->createTimestamp_ == nullptr && return this->id_ == nullptr && return this->ip_ == nullptr && return this->mask_ == nullptr && return this->name_ == nullptr
        && return this->secretKey_ == nullptr && return this->state_ == nullptr && return this->updateDate_ == nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline int64_t mask() const { DARABONBA_PTR_GET_DEFAULT(mask_, 0L) };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setMask(int64_t mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline DescribePdnsUdpIpSegmentsResponseBodyIpSegments& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


  protected:
    std::shared_ptr<string> createDate_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<int64_t> mask_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> secretKey_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> updateDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

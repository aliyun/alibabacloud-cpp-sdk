// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOCCWHITELISTRESPONSEBODYAUTOCCWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOCCWHITELISTRESPONSEBODYAUTOCCWHITELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(DestIp, destIp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(DestIp, destIp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist() = default ;
    DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist(const DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist &) = default ;
    DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist(DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist &&) = default ;
    DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist() = default ;
    DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist& operator=(const DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist &) = default ;
    DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist& operator=(DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destIp_ == nullptr
        && return this->endTime_ == nullptr && return this->sourceIp_ == nullptr && return this->type_ == nullptr; };
    // destIp Field Functions 
    bool hasDestIp() const { return this->destIp_ != nullptr;};
    void deleteDestIp() { this->destIp_ = nullptr;};
    inline string destIp() const { DARABONBA_PTR_GET_DEFAULT(destIp_, "") };
    inline DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist& setDestIp(string destIp) { DARABONBA_PTR_SET_VALUE(destIp_, destIp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAutoCcWhitelistResponseBodyAutoCcWhitelist& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IP address of the instance.
    std::shared_ptr<string> destIp_ = nullptr;
    // The validity period of the IP address in the whitelist. Unit: seconds. **0** indicates that the IP address in the whitelist never expires.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The IP addresses that is contained in the IP address whitelist.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The mode of how an IP address is added to the whitelist. Valid values:
    // 
    // *   **manual**: manually added
    // *   **auto**: automatically added
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

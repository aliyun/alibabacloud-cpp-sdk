// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNFULLDOMAINSBLOCKIPHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNFULLDOMAINSBLOCKIPHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnFullDomainsBlockIPHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnFullDomainsBlockIPHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IPBlockInfo, IPBlockInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnFullDomainsBlockIPHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IPBlockInfo, IPBlockInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnFullDomainsBlockIPHistoryResponseBody() = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBody(const DescribeCdnFullDomainsBlockIPHistoryResponseBody &) = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBody(DescribeCdnFullDomainsBlockIPHistoryResponseBody &&) = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnFullDomainsBlockIPHistoryResponseBody() = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBody& operator=(const DescribeCdnFullDomainsBlockIPHistoryResponseBody &) = default ;
    DescribeCdnFullDomainsBlockIPHistoryResponseBody& operator=(DescribeCdnFullDomainsBlockIPHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IPBlockInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IPBlockInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BlockIP, blockIP_);
        DARABONBA_PTR_TO_JSON(DeliverTime, deliverTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, IPBlockInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockIP, blockIP_);
        DARABONBA_PTR_FROM_JSON(DeliverTime, deliverTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      IPBlockInfo() = default ;
      IPBlockInfo(const IPBlockInfo &) = default ;
      IPBlockInfo(IPBlockInfo &&) = default ;
      IPBlockInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IPBlockInfo() = default ;
      IPBlockInfo& operator=(const IPBlockInfo &) = default ;
      IPBlockInfo& operator=(IPBlockInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->blockIP_ == nullptr
        && this->deliverTime_ == nullptr && this->status_ == nullptr; };
      // blockIP Field Functions 
      bool hasBlockIP() const { return this->blockIP_ != nullptr;};
      void deleteBlockIP() { this->blockIP_ = nullptr;};
      inline string getBlockIP() const { DARABONBA_PTR_GET_DEFAULT(blockIP_, "") };
      inline IPBlockInfo& setBlockIP(string blockIP) { DARABONBA_PTR_SET_VALUE(blockIP_, blockIP) };


      // deliverTime Field Functions 
      bool hasDeliverTime() const { return this->deliverTime_ != nullptr;};
      void deleteDeliverTime() { this->deliverTime_ = nullptr;};
      inline string getDeliverTime() const { DARABONBA_PTR_GET_DEFAULT(deliverTime_, "") };
      inline IPBlockInfo& setDeliverTime(string deliverTime) { DARABONBA_PTR_SET_VALUE(deliverTime_, deliverTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline IPBlockInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The blocked IP address or CIDR block.
      shared_ptr<string> blockIP_ {};
      // The delivery time.
      shared_ptr<string> deliverTime_ {};
      // The delivery status.
      // 
      // *   Success
      // *   Failed
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->IPBlockInfo_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // IPBlockInfo Field Functions 
    bool hasIPBlockInfo() const { return this->IPBlockInfo_ != nullptr;};
    void deleteIPBlockInfo() { this->IPBlockInfo_ = nullptr;};
    inline const vector<DescribeCdnFullDomainsBlockIPHistoryResponseBody::IPBlockInfo> & getIPBlockInfo() const { DARABONBA_PTR_GET_CONST(IPBlockInfo_, vector<DescribeCdnFullDomainsBlockIPHistoryResponseBody::IPBlockInfo>) };
    inline vector<DescribeCdnFullDomainsBlockIPHistoryResponseBody::IPBlockInfo> getIPBlockInfo() { DARABONBA_PTR_GET(IPBlockInfo_, vector<DescribeCdnFullDomainsBlockIPHistoryResponseBody::IPBlockInfo>) };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setIPBlockInfo(const vector<DescribeCdnFullDomainsBlockIPHistoryResponseBody::IPBlockInfo> & iPBlockInfo) { DARABONBA_PTR_SET_VALUE(IPBlockInfo_, iPBlockInfo) };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setIPBlockInfo(vector<DescribeCdnFullDomainsBlockIPHistoryResponseBody::IPBlockInfo> && iPBlockInfo) { DARABONBA_PTR_SET_RVALUE(IPBlockInfo_, iPBlockInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // The value of Code is not 0 in the following scenarios:
    // 
    // *   The format of the IP address is invalid.
    // *   The format of the time is invalid.
    // *   Other abnormal scenarios.
    shared_ptr<int32_t> code_ {};
    // The description of the status returned.
    shared_ptr<string> description_ {};
    // The result of the operation.
    shared_ptr<vector<DescribeCdnFullDomainsBlockIPHistoryResponseBody::IPBlockInfo>> IPBlockInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

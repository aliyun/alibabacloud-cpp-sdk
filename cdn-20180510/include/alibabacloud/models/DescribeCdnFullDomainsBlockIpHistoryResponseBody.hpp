// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNFULLDOMAINSBLOCKIPHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNFULLDOMAINSBLOCKIPHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo.hpp>
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
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->description_ == nullptr && return this->IPBlockInfo_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // IPBlockInfo Field Functions 
    bool hasIPBlockInfo() const { return this->IPBlockInfo_ != nullptr;};
    void deleteIPBlockInfo() { this->IPBlockInfo_ = nullptr;};
    inline const vector<DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo> & IPBlockInfo() const { DARABONBA_PTR_GET_CONST(IPBlockInfo_, vector<DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo>) };
    inline vector<DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo> IPBlockInfo() { DARABONBA_PTR_GET(IPBlockInfo_, vector<DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo>) };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setIPBlockInfo(const vector<DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo> & IPBlockInfo) { DARABONBA_PTR_SET_VALUE(IPBlockInfo_, IPBlockInfo) };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setIPBlockInfo(vector<DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo> && IPBlockInfo) { DARABONBA_PTR_SET_RVALUE(IPBlockInfo_, IPBlockInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnFullDomainsBlockIPHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // The value of Code is not 0 in the following scenarios:
    // 
    // *   The format of the IP address is invalid.
    // *   The format of the time is invalid.
    // *   Other abnormal scenarios.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The description of the status returned.
    std::shared_ptr<string> description_ = nullptr;
    // The result of the operation.
    std::shared_ptr<vector<DescribeCdnFullDomainsBlockIPHistoryResponseBodyIPBlockInfo>> IPBlockInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif

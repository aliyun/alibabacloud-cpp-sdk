// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPools.hpp>
#include <alibabacloud/models/DescribeGtmAccessStrategyAvailableConfigResponseBodyLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategyAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategyAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AddrPools, addrPools_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuggestSetDefaultLine, suggestSetDefaultLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategyAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AddrPools, addrPools_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuggestSetDefaultLine, suggestSetDefaultLine_);
    };
    DescribeGtmAccessStrategyAvailableConfigResponseBody() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody(const DescribeGtmAccessStrategyAvailableConfigResponseBody &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody(DescribeGtmAccessStrategyAvailableConfigResponseBody &&) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategyAvailableConfigResponseBody() = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody& operator=(const DescribeGtmAccessStrategyAvailableConfigResponseBody &) = default ;
    DescribeGtmAccessStrategyAvailableConfigResponseBody& operator=(DescribeGtmAccessStrategyAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addrPools_ != nullptr
        && this->lines_ != nullptr && this->requestId_ != nullptr && this->suggestSetDefaultLine_ != nullptr; };
    // addrPools Field Functions 
    bool hasAddrPools() const { return this->addrPools_ != nullptr;};
    void deleteAddrPools() { this->addrPools_ = nullptr;};
    inline const DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPools & addrPools() const { DARABONBA_PTR_GET_CONST(addrPools_, DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPools) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPools addrPools() { DARABONBA_PTR_GET(addrPools_, DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPools) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setAddrPools(const DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPools & addrPools) { DARABONBA_PTR_SET_VALUE(addrPools_, addrPools) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setAddrPools(DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPools && addrPools) { DARABONBA_PTR_SET_RVALUE(addrPools_, addrPools) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const DescribeGtmAccessStrategyAvailableConfigResponseBodyLines & lines() const { DARABONBA_PTR_GET_CONST(lines_, DescribeGtmAccessStrategyAvailableConfigResponseBodyLines) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBodyLines lines() { DARABONBA_PTR_GET(lines_, DescribeGtmAccessStrategyAvailableConfigResponseBodyLines) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setLines(const DescribeGtmAccessStrategyAvailableConfigResponseBodyLines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setLines(DescribeGtmAccessStrategyAvailableConfigResponseBodyLines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suggestSetDefaultLine Field Functions 
    bool hasSuggestSetDefaultLine() const { return this->suggestSetDefaultLine_ != nullptr;};
    void deleteSuggestSetDefaultLine() { this->suggestSetDefaultLine_ = nullptr;};
    inline bool suggestSetDefaultLine() const { DARABONBA_PTR_GET_DEFAULT(suggestSetDefaultLine_, false) };
    inline DescribeGtmAccessStrategyAvailableConfigResponseBody& setSuggestSetDefaultLine(bool suggestSetDefaultLine) { DARABONBA_PTR_SET_VALUE(suggestSetDefaultLine_, suggestSetDefaultLine) };


  protected:
    // The address pools.
    std::shared_ptr<DescribeGtmAccessStrategyAvailableConfigResponseBodyAddrPools> addrPools_ = nullptr;
    // The Domain Name System (DNS) request sources.
    std::shared_ptr<DescribeGtmAccessStrategyAvailableConfigResponseBodyLines> lines_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the global line is recommended.
    std::shared_ptr<bool> suggestSetDefaultLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

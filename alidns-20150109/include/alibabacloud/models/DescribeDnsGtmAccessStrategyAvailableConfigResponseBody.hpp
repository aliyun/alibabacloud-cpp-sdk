// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLines.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines.hpp>
#include <alibabacloud/models/DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainAddrPools, domainAddrPools_);
      DARABONBA_PTR_TO_JSON(Ipv4AddrPools, ipv4AddrPools_);
      DARABONBA_PTR_TO_JSON(Ipv6AddrPools, ipv6AddrPools_);
      DARABONBA_PTR_TO_JSON(Lines, lines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SelectedDomainLines, selectedDomainLines_);
      DARABONBA_PTR_TO_JSON(SelectedIpv4Lines, selectedIpv4Lines_);
      DARABONBA_PTR_TO_JSON(SelectedIpv6Lines, selectedIpv6Lines_);
      DARABONBA_PTR_TO_JSON(SuggestSetDefaultLine, suggestSetDefaultLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainAddrPools, domainAddrPools_);
      DARABONBA_PTR_FROM_JSON(Ipv4AddrPools, ipv4AddrPools_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddrPools, ipv6AddrPools_);
      DARABONBA_PTR_FROM_JSON(Lines, lines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SelectedDomainLines, selectedDomainLines_);
      DARABONBA_PTR_FROM_JSON(SelectedIpv4Lines, selectedIpv4Lines_);
      DARABONBA_PTR_FROM_JSON(SelectedIpv6Lines, selectedIpv6Lines_);
      DARABONBA_PTR_FROM_JSON(SuggestSetDefaultLine, suggestSetDefaultLine_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBody() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBody &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainAddrPools_ == nullptr
        && return this->ipv4AddrPools_ == nullptr && return this->ipv6AddrPools_ == nullptr && return this->lines_ == nullptr && return this->requestId_ == nullptr && return this->selectedDomainLines_ == nullptr
        && return this->selectedIpv4Lines_ == nullptr && return this->selectedIpv6Lines_ == nullptr && return this->suggestSetDefaultLine_ == nullptr; };
    // domainAddrPools Field Functions 
    bool hasDomainAddrPools() const { return this->domainAddrPools_ != nullptr;};
    void deleteDomainAddrPools() { this->domainAddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools & domainAddrPools() const { DARABONBA_PTR_GET_CONST(domainAddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools domainAddrPools() { DARABONBA_PTR_GET(domainAddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setDomainAddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools & domainAddrPools) { DARABONBA_PTR_SET_VALUE(domainAddrPools_, domainAddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setDomainAddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools && domainAddrPools) { DARABONBA_PTR_SET_RVALUE(domainAddrPools_, domainAddrPools) };


    // ipv4AddrPools Field Functions 
    bool hasIpv4AddrPools() const { return this->ipv4AddrPools_ != nullptr;};
    void deleteIpv4AddrPools() { this->ipv4AddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools & ipv4AddrPools() const { DARABONBA_PTR_GET_CONST(ipv4AddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools ipv4AddrPools() { DARABONBA_PTR_GET(ipv4AddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setIpv4AddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools & ipv4AddrPools) { DARABONBA_PTR_SET_VALUE(ipv4AddrPools_, ipv4AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setIpv4AddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools && ipv4AddrPools) { DARABONBA_PTR_SET_RVALUE(ipv4AddrPools_, ipv4AddrPools) };


    // ipv6AddrPools Field Functions 
    bool hasIpv6AddrPools() const { return this->ipv6AddrPools_ != nullptr;};
    void deleteIpv6AddrPools() { this->ipv6AddrPools_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools & ipv6AddrPools() const { DARABONBA_PTR_GET_CONST(ipv6AddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools ipv6AddrPools() { DARABONBA_PTR_GET(ipv6AddrPools_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setIpv6AddrPools(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools & ipv6AddrPools) { DARABONBA_PTR_SET_VALUE(ipv6AddrPools_, ipv6AddrPools) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setIpv6AddrPools(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools && ipv6AddrPools) { DARABONBA_PTR_SET_RVALUE(ipv6AddrPools_, ipv6AddrPools) };


    // lines Field Functions 
    bool hasLines() const { return this->lines_ != nullptr;};
    void deleteLines() { this->lines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLines & lines() const { DARABONBA_PTR_GET_CONST(lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLines lines() { DARABONBA_PTR_GET(lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setLines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLines & lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setLines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLines && lines) { DARABONBA_PTR_SET_RVALUE(lines_, lines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selectedDomainLines Field Functions 
    bool hasSelectedDomainLines() const { return this->selectedDomainLines_ != nullptr;};
    void deleteSelectedDomainLines() { this->selectedDomainLines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines & selectedDomainLines() const { DARABONBA_PTR_GET_CONST(selectedDomainLines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines selectedDomainLines() { DARABONBA_PTR_GET(selectedDomainLines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedDomainLines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines & selectedDomainLines) { DARABONBA_PTR_SET_VALUE(selectedDomainLines_, selectedDomainLines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedDomainLines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines && selectedDomainLines) { DARABONBA_PTR_SET_RVALUE(selectedDomainLines_, selectedDomainLines) };


    // selectedIpv4Lines Field Functions 
    bool hasSelectedIpv4Lines() const { return this->selectedIpv4Lines_ != nullptr;};
    void deleteSelectedIpv4Lines() { this->selectedIpv4Lines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines & selectedIpv4Lines() const { DARABONBA_PTR_GET_CONST(selectedIpv4Lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines selectedIpv4Lines() { DARABONBA_PTR_GET(selectedIpv4Lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedIpv4Lines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines & selectedIpv4Lines) { DARABONBA_PTR_SET_VALUE(selectedIpv4Lines_, selectedIpv4Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedIpv4Lines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines && selectedIpv4Lines) { DARABONBA_PTR_SET_RVALUE(selectedIpv4Lines_, selectedIpv4Lines) };


    // selectedIpv6Lines Field Functions 
    bool hasSelectedIpv6Lines() const { return this->selectedIpv6Lines_ != nullptr;};
    void deleteSelectedIpv6Lines() { this->selectedIpv6Lines_ = nullptr;};
    inline const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines & selectedIpv6Lines() const { DARABONBA_PTR_GET_CONST(selectedIpv6Lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines selectedIpv6Lines() { DARABONBA_PTR_GET(selectedIpv6Lines_, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedIpv6Lines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines & selectedIpv6Lines) { DARABONBA_PTR_SET_VALUE(selectedIpv6Lines_, selectedIpv6Lines) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSelectedIpv6Lines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines && selectedIpv6Lines) { DARABONBA_PTR_SET_RVALUE(selectedIpv6Lines_, selectedIpv6Lines) };


    // suggestSetDefaultLine Field Functions 
    bool hasSuggestSetDefaultLine() const { return this->suggestSetDefaultLine_ != nullptr;};
    void deleteSuggestSetDefaultLine() { this->suggestSetDefaultLine_ = nullptr;};
    inline bool suggestSetDefaultLine() const { DARABONBA_PTR_GET_DEFAULT(suggestSetDefaultLine_, false) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBody& setSuggestSetDefaultLine(bool suggestSetDefaultLine) { DARABONBA_PTR_SET_VALUE(suggestSetDefaultLine_, suggestSetDefaultLine) };


  protected:
    // The available address pools of the domain name type.
    std::shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyDomainAddrPools> domainAddrPools_ = nullptr;
    // The available address pools of the IPv4 type.
    std::shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv4AddrPools> ipv4AddrPools_ = nullptr;
    // The available address pools of the IPv6 type.
    std::shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyIpv6AddrPools> ipv6AddrPools_ = nullptr;
    // The source regions.
    std::shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBodyLines> lines_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines> selectedDomainLines_ = nullptr;
    std::shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines> selectedIpv4Lines_ = nullptr;
    std::shared_ptr<DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines> selectedIpv6Lines_ = nullptr;
    // Indicates whether we recommend that you set the source region to global.
    std::shared_ptr<bool> suggestSetDefaultLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

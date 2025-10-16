// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLSUMMARYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLSUMMARYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallSummaryInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableVpcFirewallQuota, availableVpcFirewallQuota_);
      DARABONBA_PTR_TO_JSON(CenExpressConnectVpcCount, cenExpressConnectVpcCount_);
      DARABONBA_PTR_TO_JSON(CenFirewallVpcCount, cenFirewallVpcCount_);
      DARABONBA_PTR_TO_JSON(CenTrVpcCount, cenTrVpcCount_);
      DARABONBA_PTR_TO_JSON(ClosedCenFirewallCount, closedCenFirewallCount_);
      DARABONBA_PTR_TO_JSON(ClosedExpressConnectFirewallCount, closedExpressConnectFirewallCount_);
      DARABONBA_PTR_TO_JSON(ClosedVpcFirewallCount, closedVpcFirewallCount_);
      DARABONBA_PTR_TO_JSON(ConfiguredCenFirewallCount, configuredCenFirewallCount_);
      DARABONBA_PTR_TO_JSON(ConfiguredCenFirewallRegionCount, configuredCenFirewallRegionCount_);
      DARABONBA_PTR_TO_JSON(ConfiguredCenFirewallVpcCount, configuredCenFirewallVpcCount_);
      DARABONBA_PTR_TO_JSON(ConfiguredCenTrFirewallCount, configuredCenTrFirewallCount_);
      DARABONBA_PTR_TO_JSON(ConfiguredExpressConnectFirewallCount, configuredExpressConnectFirewallCount_);
      DARABONBA_PTR_TO_JSON(ConfiguredExpressConnectVpcCount, configuredExpressConnectVpcCount_);
      DARABONBA_PTR_TO_JSON(ConfiguredVpcFirewallCount, configuredVpcFirewallCount_);
      DARABONBA_PTR_TO_JSON(ConfiguredVpcFirewallVpcCount, configuredVpcFirewallVpcCount_);
      DARABONBA_PTR_TO_JSON(ExpressConnectVpcCount, expressConnectVpcCount_);
      DARABONBA_PTR_TO_JSON(NotConfiguredCenFirewallCount, notConfiguredCenFirewallCount_);
      DARABONBA_PTR_TO_JSON(NotConfiguredCenTrFirewallCount, notConfiguredCenTrFirewallCount_);
      DARABONBA_PTR_TO_JSON(NotConfiguredExpressConnectFirewallCount, notConfiguredExpressConnectFirewallCount_);
      DARABONBA_PTR_TO_JSON(NotConfiguredVpcFirewallCount, notConfiguredVpcFirewallCount_);
      DARABONBA_PTR_TO_JSON(OpenedCenExpressConnectVpcCount, openedCenExpressConnectVpcCount_);
      DARABONBA_PTR_TO_JSON(OpenedCenFirewallCount, openedCenFirewallCount_);
      DARABONBA_PTR_TO_JSON(OpenedCenFirewallVpcCount, openedCenFirewallVpcCount_);
      DARABONBA_PTR_TO_JSON(OpenedCenTrFirewallVpcCount, openedCenTrFirewallVpcCount_);
      DARABONBA_PTR_TO_JSON(OpenedEcrCount, openedEcrCount_);
      DARABONBA_PTR_TO_JSON(OpenedExpressConnectFirewallCount, openedExpressConnectFirewallCount_);
      DARABONBA_PTR_TO_JSON(OpenedExpressConnectVpcCount, openedExpressConnectVpcCount_);
      DARABONBA_PTR_TO_JSON(OpenedPeerTrCount, openedPeerTrCount_);
      DARABONBA_PTR_TO_JSON(OpenedVbrCount, openedVbrCount_);
      DARABONBA_PTR_TO_JSON(OpenedVpcCount, openedVpcCount_);
      DARABONBA_PTR_TO_JSON(OpenedVpcFirewallCount, openedVpcFirewallCount_);
      DARABONBA_PTR_TO_JSON(OpenedVpnCount, openedVpnCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalEcrCount, totalEcrCount_);
      DARABONBA_PTR_TO_JSON(TotalPeerTrCount, totalPeerTrCount_);
      DARABONBA_PTR_TO_JSON(TotalVbrCount, totalVbrCount_);
      DARABONBA_PTR_TO_JSON(TotalVpcCount, totalVpcCount_);
      DARABONBA_PTR_TO_JSON(TotalVpcFirewallQuota, totalVpcFirewallQuota_);
      DARABONBA_PTR_TO_JSON(TotalVpnCount, totalVpnCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableVpcFirewallQuota, availableVpcFirewallQuota_);
      DARABONBA_PTR_FROM_JSON(CenExpressConnectVpcCount, cenExpressConnectVpcCount_);
      DARABONBA_PTR_FROM_JSON(CenFirewallVpcCount, cenFirewallVpcCount_);
      DARABONBA_PTR_FROM_JSON(CenTrVpcCount, cenTrVpcCount_);
      DARABONBA_PTR_FROM_JSON(ClosedCenFirewallCount, closedCenFirewallCount_);
      DARABONBA_PTR_FROM_JSON(ClosedExpressConnectFirewallCount, closedExpressConnectFirewallCount_);
      DARABONBA_PTR_FROM_JSON(ClosedVpcFirewallCount, closedVpcFirewallCount_);
      DARABONBA_PTR_FROM_JSON(ConfiguredCenFirewallCount, configuredCenFirewallCount_);
      DARABONBA_PTR_FROM_JSON(ConfiguredCenFirewallRegionCount, configuredCenFirewallRegionCount_);
      DARABONBA_PTR_FROM_JSON(ConfiguredCenFirewallVpcCount, configuredCenFirewallVpcCount_);
      DARABONBA_PTR_FROM_JSON(ConfiguredCenTrFirewallCount, configuredCenTrFirewallCount_);
      DARABONBA_PTR_FROM_JSON(ConfiguredExpressConnectFirewallCount, configuredExpressConnectFirewallCount_);
      DARABONBA_PTR_FROM_JSON(ConfiguredExpressConnectVpcCount, configuredExpressConnectVpcCount_);
      DARABONBA_PTR_FROM_JSON(ConfiguredVpcFirewallCount, configuredVpcFirewallCount_);
      DARABONBA_PTR_FROM_JSON(ConfiguredVpcFirewallVpcCount, configuredVpcFirewallVpcCount_);
      DARABONBA_PTR_FROM_JSON(ExpressConnectVpcCount, expressConnectVpcCount_);
      DARABONBA_PTR_FROM_JSON(NotConfiguredCenFirewallCount, notConfiguredCenFirewallCount_);
      DARABONBA_PTR_FROM_JSON(NotConfiguredCenTrFirewallCount, notConfiguredCenTrFirewallCount_);
      DARABONBA_PTR_FROM_JSON(NotConfiguredExpressConnectFirewallCount, notConfiguredExpressConnectFirewallCount_);
      DARABONBA_PTR_FROM_JSON(NotConfiguredVpcFirewallCount, notConfiguredVpcFirewallCount_);
      DARABONBA_PTR_FROM_JSON(OpenedCenExpressConnectVpcCount, openedCenExpressConnectVpcCount_);
      DARABONBA_PTR_FROM_JSON(OpenedCenFirewallCount, openedCenFirewallCount_);
      DARABONBA_PTR_FROM_JSON(OpenedCenFirewallVpcCount, openedCenFirewallVpcCount_);
      DARABONBA_PTR_FROM_JSON(OpenedCenTrFirewallVpcCount, openedCenTrFirewallVpcCount_);
      DARABONBA_PTR_FROM_JSON(OpenedEcrCount, openedEcrCount_);
      DARABONBA_PTR_FROM_JSON(OpenedExpressConnectFirewallCount, openedExpressConnectFirewallCount_);
      DARABONBA_PTR_FROM_JSON(OpenedExpressConnectVpcCount, openedExpressConnectVpcCount_);
      DARABONBA_PTR_FROM_JSON(OpenedPeerTrCount, openedPeerTrCount_);
      DARABONBA_PTR_FROM_JSON(OpenedVbrCount, openedVbrCount_);
      DARABONBA_PTR_FROM_JSON(OpenedVpcCount, openedVpcCount_);
      DARABONBA_PTR_FROM_JSON(OpenedVpcFirewallCount, openedVpcFirewallCount_);
      DARABONBA_PTR_FROM_JSON(OpenedVpnCount, openedVpnCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalEcrCount, totalEcrCount_);
      DARABONBA_PTR_FROM_JSON(TotalPeerTrCount, totalPeerTrCount_);
      DARABONBA_PTR_FROM_JSON(TotalVbrCount, totalVbrCount_);
      DARABONBA_PTR_FROM_JSON(TotalVpcCount, totalVpcCount_);
      DARABONBA_PTR_FROM_JSON(TotalVpcFirewallQuota, totalVpcFirewallQuota_);
      DARABONBA_PTR_FROM_JSON(TotalVpnCount, totalVpnCount_);
    };
    DescribeVpcFirewallSummaryInfoResponseBody() = default ;
    DescribeVpcFirewallSummaryInfoResponseBody(const DescribeVpcFirewallSummaryInfoResponseBody &) = default ;
    DescribeVpcFirewallSummaryInfoResponseBody(DescribeVpcFirewallSummaryInfoResponseBody &&) = default ;
    DescribeVpcFirewallSummaryInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallSummaryInfoResponseBody() = default ;
    DescribeVpcFirewallSummaryInfoResponseBody& operator=(const DescribeVpcFirewallSummaryInfoResponseBody &) = default ;
    DescribeVpcFirewallSummaryInfoResponseBody& operator=(DescribeVpcFirewallSummaryInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableVpcFirewallQuota_ == nullptr
        && return this->cenExpressConnectVpcCount_ == nullptr && return this->cenFirewallVpcCount_ == nullptr && return this->cenTrVpcCount_ == nullptr && return this->closedCenFirewallCount_ == nullptr && return this->closedExpressConnectFirewallCount_ == nullptr
        && return this->closedVpcFirewallCount_ == nullptr && return this->configuredCenFirewallCount_ == nullptr && return this->configuredCenFirewallRegionCount_ == nullptr && return this->configuredCenFirewallVpcCount_ == nullptr && return this->configuredCenTrFirewallCount_ == nullptr
        && return this->configuredExpressConnectFirewallCount_ == nullptr && return this->configuredExpressConnectVpcCount_ == nullptr && return this->configuredVpcFirewallCount_ == nullptr && return this->configuredVpcFirewallVpcCount_ == nullptr && return this->expressConnectVpcCount_ == nullptr
        && return this->notConfiguredCenFirewallCount_ == nullptr && return this->notConfiguredCenTrFirewallCount_ == nullptr && return this->notConfiguredExpressConnectFirewallCount_ == nullptr && return this->notConfiguredVpcFirewallCount_ == nullptr && return this->openedCenExpressConnectVpcCount_ == nullptr
        && return this->openedCenFirewallCount_ == nullptr && return this->openedCenFirewallVpcCount_ == nullptr && return this->openedCenTrFirewallVpcCount_ == nullptr && return this->openedEcrCount_ == nullptr && return this->openedExpressConnectFirewallCount_ == nullptr
        && return this->openedExpressConnectVpcCount_ == nullptr && return this->openedPeerTrCount_ == nullptr && return this->openedVbrCount_ == nullptr && return this->openedVpcCount_ == nullptr && return this->openedVpcFirewallCount_ == nullptr
        && return this->openedVpnCount_ == nullptr && return this->requestId_ == nullptr && return this->totalEcrCount_ == nullptr && return this->totalPeerTrCount_ == nullptr && return this->totalVbrCount_ == nullptr
        && return this->totalVpcCount_ == nullptr && return this->totalVpcFirewallQuota_ == nullptr && return this->totalVpnCount_ == nullptr; };
    // availableVpcFirewallQuota Field Functions 
    bool hasAvailableVpcFirewallQuota() const { return this->availableVpcFirewallQuota_ != nullptr;};
    void deleteAvailableVpcFirewallQuota() { this->availableVpcFirewallQuota_ = nullptr;};
    inline int32_t availableVpcFirewallQuota() const { DARABONBA_PTR_GET_DEFAULT(availableVpcFirewallQuota_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setAvailableVpcFirewallQuota(int32_t availableVpcFirewallQuota) { DARABONBA_PTR_SET_VALUE(availableVpcFirewallQuota_, availableVpcFirewallQuota) };


    // cenExpressConnectVpcCount Field Functions 
    bool hasCenExpressConnectVpcCount() const { return this->cenExpressConnectVpcCount_ != nullptr;};
    void deleteCenExpressConnectVpcCount() { this->cenExpressConnectVpcCount_ = nullptr;};
    inline int32_t cenExpressConnectVpcCount() const { DARABONBA_PTR_GET_DEFAULT(cenExpressConnectVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setCenExpressConnectVpcCount(int32_t cenExpressConnectVpcCount) { DARABONBA_PTR_SET_VALUE(cenExpressConnectVpcCount_, cenExpressConnectVpcCount) };


    // cenFirewallVpcCount Field Functions 
    bool hasCenFirewallVpcCount() const { return this->cenFirewallVpcCount_ != nullptr;};
    void deleteCenFirewallVpcCount() { this->cenFirewallVpcCount_ = nullptr;};
    inline int32_t cenFirewallVpcCount() const { DARABONBA_PTR_GET_DEFAULT(cenFirewallVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setCenFirewallVpcCount(int32_t cenFirewallVpcCount) { DARABONBA_PTR_SET_VALUE(cenFirewallVpcCount_, cenFirewallVpcCount) };


    // cenTrVpcCount Field Functions 
    bool hasCenTrVpcCount() const { return this->cenTrVpcCount_ != nullptr;};
    void deleteCenTrVpcCount() { this->cenTrVpcCount_ = nullptr;};
    inline int32_t cenTrVpcCount() const { DARABONBA_PTR_GET_DEFAULT(cenTrVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setCenTrVpcCount(int32_t cenTrVpcCount) { DARABONBA_PTR_SET_VALUE(cenTrVpcCount_, cenTrVpcCount) };


    // closedCenFirewallCount Field Functions 
    bool hasClosedCenFirewallCount() const { return this->closedCenFirewallCount_ != nullptr;};
    void deleteClosedCenFirewallCount() { this->closedCenFirewallCount_ = nullptr;};
    inline int32_t closedCenFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(closedCenFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setClosedCenFirewallCount(int32_t closedCenFirewallCount) { DARABONBA_PTR_SET_VALUE(closedCenFirewallCount_, closedCenFirewallCount) };


    // closedExpressConnectFirewallCount Field Functions 
    bool hasClosedExpressConnectFirewallCount() const { return this->closedExpressConnectFirewallCount_ != nullptr;};
    void deleteClosedExpressConnectFirewallCount() { this->closedExpressConnectFirewallCount_ = nullptr;};
    inline int32_t closedExpressConnectFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(closedExpressConnectFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setClosedExpressConnectFirewallCount(int32_t closedExpressConnectFirewallCount) { DARABONBA_PTR_SET_VALUE(closedExpressConnectFirewallCount_, closedExpressConnectFirewallCount) };


    // closedVpcFirewallCount Field Functions 
    bool hasClosedVpcFirewallCount() const { return this->closedVpcFirewallCount_ != nullptr;};
    void deleteClosedVpcFirewallCount() { this->closedVpcFirewallCount_ = nullptr;};
    inline int32_t closedVpcFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(closedVpcFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setClosedVpcFirewallCount(int32_t closedVpcFirewallCount) { DARABONBA_PTR_SET_VALUE(closedVpcFirewallCount_, closedVpcFirewallCount) };


    // configuredCenFirewallCount Field Functions 
    bool hasConfiguredCenFirewallCount() const { return this->configuredCenFirewallCount_ != nullptr;};
    void deleteConfiguredCenFirewallCount() { this->configuredCenFirewallCount_ = nullptr;};
    inline int32_t configuredCenFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(configuredCenFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setConfiguredCenFirewallCount(int32_t configuredCenFirewallCount) { DARABONBA_PTR_SET_VALUE(configuredCenFirewallCount_, configuredCenFirewallCount) };


    // configuredCenFirewallRegionCount Field Functions 
    bool hasConfiguredCenFirewallRegionCount() const { return this->configuredCenFirewallRegionCount_ != nullptr;};
    void deleteConfiguredCenFirewallRegionCount() { this->configuredCenFirewallRegionCount_ = nullptr;};
    inline int32_t configuredCenFirewallRegionCount() const { DARABONBA_PTR_GET_DEFAULT(configuredCenFirewallRegionCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setConfiguredCenFirewallRegionCount(int32_t configuredCenFirewallRegionCount) { DARABONBA_PTR_SET_VALUE(configuredCenFirewallRegionCount_, configuredCenFirewallRegionCount) };


    // configuredCenFirewallVpcCount Field Functions 
    bool hasConfiguredCenFirewallVpcCount() const { return this->configuredCenFirewallVpcCount_ != nullptr;};
    void deleteConfiguredCenFirewallVpcCount() { this->configuredCenFirewallVpcCount_ = nullptr;};
    inline int32_t configuredCenFirewallVpcCount() const { DARABONBA_PTR_GET_DEFAULT(configuredCenFirewallVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setConfiguredCenFirewallVpcCount(int32_t configuredCenFirewallVpcCount) { DARABONBA_PTR_SET_VALUE(configuredCenFirewallVpcCount_, configuredCenFirewallVpcCount) };


    // configuredCenTrFirewallCount Field Functions 
    bool hasConfiguredCenTrFirewallCount() const { return this->configuredCenTrFirewallCount_ != nullptr;};
    void deleteConfiguredCenTrFirewallCount() { this->configuredCenTrFirewallCount_ = nullptr;};
    inline int32_t configuredCenTrFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(configuredCenTrFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setConfiguredCenTrFirewallCount(int32_t configuredCenTrFirewallCount) { DARABONBA_PTR_SET_VALUE(configuredCenTrFirewallCount_, configuredCenTrFirewallCount) };


    // configuredExpressConnectFirewallCount Field Functions 
    bool hasConfiguredExpressConnectFirewallCount() const { return this->configuredExpressConnectFirewallCount_ != nullptr;};
    void deleteConfiguredExpressConnectFirewallCount() { this->configuredExpressConnectFirewallCount_ = nullptr;};
    inline int32_t configuredExpressConnectFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(configuredExpressConnectFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setConfiguredExpressConnectFirewallCount(int32_t configuredExpressConnectFirewallCount) { DARABONBA_PTR_SET_VALUE(configuredExpressConnectFirewallCount_, configuredExpressConnectFirewallCount) };


    // configuredExpressConnectVpcCount Field Functions 
    bool hasConfiguredExpressConnectVpcCount() const { return this->configuredExpressConnectVpcCount_ != nullptr;};
    void deleteConfiguredExpressConnectVpcCount() { this->configuredExpressConnectVpcCount_ = nullptr;};
    inline int32_t configuredExpressConnectVpcCount() const { DARABONBA_PTR_GET_DEFAULT(configuredExpressConnectVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setConfiguredExpressConnectVpcCount(int32_t configuredExpressConnectVpcCount) { DARABONBA_PTR_SET_VALUE(configuredExpressConnectVpcCount_, configuredExpressConnectVpcCount) };


    // configuredVpcFirewallCount Field Functions 
    bool hasConfiguredVpcFirewallCount() const { return this->configuredVpcFirewallCount_ != nullptr;};
    void deleteConfiguredVpcFirewallCount() { this->configuredVpcFirewallCount_ = nullptr;};
    inline int32_t configuredVpcFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(configuredVpcFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setConfiguredVpcFirewallCount(int32_t configuredVpcFirewallCount) { DARABONBA_PTR_SET_VALUE(configuredVpcFirewallCount_, configuredVpcFirewallCount) };


    // configuredVpcFirewallVpcCount Field Functions 
    bool hasConfiguredVpcFirewallVpcCount() const { return this->configuredVpcFirewallVpcCount_ != nullptr;};
    void deleteConfiguredVpcFirewallVpcCount() { this->configuredVpcFirewallVpcCount_ = nullptr;};
    inline int32_t configuredVpcFirewallVpcCount() const { DARABONBA_PTR_GET_DEFAULT(configuredVpcFirewallVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setConfiguredVpcFirewallVpcCount(int32_t configuredVpcFirewallVpcCount) { DARABONBA_PTR_SET_VALUE(configuredVpcFirewallVpcCount_, configuredVpcFirewallVpcCount) };


    // expressConnectVpcCount Field Functions 
    bool hasExpressConnectVpcCount() const { return this->expressConnectVpcCount_ != nullptr;};
    void deleteExpressConnectVpcCount() { this->expressConnectVpcCount_ = nullptr;};
    inline int32_t expressConnectVpcCount() const { DARABONBA_PTR_GET_DEFAULT(expressConnectVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setExpressConnectVpcCount(int32_t expressConnectVpcCount) { DARABONBA_PTR_SET_VALUE(expressConnectVpcCount_, expressConnectVpcCount) };


    // notConfiguredCenFirewallCount Field Functions 
    bool hasNotConfiguredCenFirewallCount() const { return this->notConfiguredCenFirewallCount_ != nullptr;};
    void deleteNotConfiguredCenFirewallCount() { this->notConfiguredCenFirewallCount_ = nullptr;};
    inline int32_t notConfiguredCenFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(notConfiguredCenFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setNotConfiguredCenFirewallCount(int32_t notConfiguredCenFirewallCount) { DARABONBA_PTR_SET_VALUE(notConfiguredCenFirewallCount_, notConfiguredCenFirewallCount) };


    // notConfiguredCenTrFirewallCount Field Functions 
    bool hasNotConfiguredCenTrFirewallCount() const { return this->notConfiguredCenTrFirewallCount_ != nullptr;};
    void deleteNotConfiguredCenTrFirewallCount() { this->notConfiguredCenTrFirewallCount_ = nullptr;};
    inline int32_t notConfiguredCenTrFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(notConfiguredCenTrFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setNotConfiguredCenTrFirewallCount(int32_t notConfiguredCenTrFirewallCount) { DARABONBA_PTR_SET_VALUE(notConfiguredCenTrFirewallCount_, notConfiguredCenTrFirewallCount) };


    // notConfiguredExpressConnectFirewallCount Field Functions 
    bool hasNotConfiguredExpressConnectFirewallCount() const { return this->notConfiguredExpressConnectFirewallCount_ != nullptr;};
    void deleteNotConfiguredExpressConnectFirewallCount() { this->notConfiguredExpressConnectFirewallCount_ = nullptr;};
    inline int32_t notConfiguredExpressConnectFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(notConfiguredExpressConnectFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setNotConfiguredExpressConnectFirewallCount(int32_t notConfiguredExpressConnectFirewallCount) { DARABONBA_PTR_SET_VALUE(notConfiguredExpressConnectFirewallCount_, notConfiguredExpressConnectFirewallCount) };


    // notConfiguredVpcFirewallCount Field Functions 
    bool hasNotConfiguredVpcFirewallCount() const { return this->notConfiguredVpcFirewallCount_ != nullptr;};
    void deleteNotConfiguredVpcFirewallCount() { this->notConfiguredVpcFirewallCount_ = nullptr;};
    inline int32_t notConfiguredVpcFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(notConfiguredVpcFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setNotConfiguredVpcFirewallCount(int32_t notConfiguredVpcFirewallCount) { DARABONBA_PTR_SET_VALUE(notConfiguredVpcFirewallCount_, notConfiguredVpcFirewallCount) };


    // openedCenExpressConnectVpcCount Field Functions 
    bool hasOpenedCenExpressConnectVpcCount() const { return this->openedCenExpressConnectVpcCount_ != nullptr;};
    void deleteOpenedCenExpressConnectVpcCount() { this->openedCenExpressConnectVpcCount_ = nullptr;};
    inline int32_t openedCenExpressConnectVpcCount() const { DARABONBA_PTR_GET_DEFAULT(openedCenExpressConnectVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedCenExpressConnectVpcCount(int32_t openedCenExpressConnectVpcCount) { DARABONBA_PTR_SET_VALUE(openedCenExpressConnectVpcCount_, openedCenExpressConnectVpcCount) };


    // openedCenFirewallCount Field Functions 
    bool hasOpenedCenFirewallCount() const { return this->openedCenFirewallCount_ != nullptr;};
    void deleteOpenedCenFirewallCount() { this->openedCenFirewallCount_ = nullptr;};
    inline int32_t openedCenFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(openedCenFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedCenFirewallCount(int32_t openedCenFirewallCount) { DARABONBA_PTR_SET_VALUE(openedCenFirewallCount_, openedCenFirewallCount) };


    // openedCenFirewallVpcCount Field Functions 
    bool hasOpenedCenFirewallVpcCount() const { return this->openedCenFirewallVpcCount_ != nullptr;};
    void deleteOpenedCenFirewallVpcCount() { this->openedCenFirewallVpcCount_ = nullptr;};
    inline int32_t openedCenFirewallVpcCount() const { DARABONBA_PTR_GET_DEFAULT(openedCenFirewallVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedCenFirewallVpcCount(int32_t openedCenFirewallVpcCount) { DARABONBA_PTR_SET_VALUE(openedCenFirewallVpcCount_, openedCenFirewallVpcCount) };


    // openedCenTrFirewallVpcCount Field Functions 
    bool hasOpenedCenTrFirewallVpcCount() const { return this->openedCenTrFirewallVpcCount_ != nullptr;};
    void deleteOpenedCenTrFirewallVpcCount() { this->openedCenTrFirewallVpcCount_ = nullptr;};
    inline int32_t openedCenTrFirewallVpcCount() const { DARABONBA_PTR_GET_DEFAULT(openedCenTrFirewallVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedCenTrFirewallVpcCount(int32_t openedCenTrFirewallVpcCount) { DARABONBA_PTR_SET_VALUE(openedCenTrFirewallVpcCount_, openedCenTrFirewallVpcCount) };


    // openedEcrCount Field Functions 
    bool hasOpenedEcrCount() const { return this->openedEcrCount_ != nullptr;};
    void deleteOpenedEcrCount() { this->openedEcrCount_ = nullptr;};
    inline int32_t openedEcrCount() const { DARABONBA_PTR_GET_DEFAULT(openedEcrCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedEcrCount(int32_t openedEcrCount) { DARABONBA_PTR_SET_VALUE(openedEcrCount_, openedEcrCount) };


    // openedExpressConnectFirewallCount Field Functions 
    bool hasOpenedExpressConnectFirewallCount() const { return this->openedExpressConnectFirewallCount_ != nullptr;};
    void deleteOpenedExpressConnectFirewallCount() { this->openedExpressConnectFirewallCount_ = nullptr;};
    inline int32_t openedExpressConnectFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(openedExpressConnectFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedExpressConnectFirewallCount(int32_t openedExpressConnectFirewallCount) { DARABONBA_PTR_SET_VALUE(openedExpressConnectFirewallCount_, openedExpressConnectFirewallCount) };


    // openedExpressConnectVpcCount Field Functions 
    bool hasOpenedExpressConnectVpcCount() const { return this->openedExpressConnectVpcCount_ != nullptr;};
    void deleteOpenedExpressConnectVpcCount() { this->openedExpressConnectVpcCount_ = nullptr;};
    inline int32_t openedExpressConnectVpcCount() const { DARABONBA_PTR_GET_DEFAULT(openedExpressConnectVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedExpressConnectVpcCount(int32_t openedExpressConnectVpcCount) { DARABONBA_PTR_SET_VALUE(openedExpressConnectVpcCount_, openedExpressConnectVpcCount) };


    // openedPeerTrCount Field Functions 
    bool hasOpenedPeerTrCount() const { return this->openedPeerTrCount_ != nullptr;};
    void deleteOpenedPeerTrCount() { this->openedPeerTrCount_ = nullptr;};
    inline int32_t openedPeerTrCount() const { DARABONBA_PTR_GET_DEFAULT(openedPeerTrCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedPeerTrCount(int32_t openedPeerTrCount) { DARABONBA_PTR_SET_VALUE(openedPeerTrCount_, openedPeerTrCount) };


    // openedVbrCount Field Functions 
    bool hasOpenedVbrCount() const { return this->openedVbrCount_ != nullptr;};
    void deleteOpenedVbrCount() { this->openedVbrCount_ = nullptr;};
    inline int32_t openedVbrCount() const { DARABONBA_PTR_GET_DEFAULT(openedVbrCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedVbrCount(int32_t openedVbrCount) { DARABONBA_PTR_SET_VALUE(openedVbrCount_, openedVbrCount) };


    // openedVpcCount Field Functions 
    bool hasOpenedVpcCount() const { return this->openedVpcCount_ != nullptr;};
    void deleteOpenedVpcCount() { this->openedVpcCount_ = nullptr;};
    inline int32_t openedVpcCount() const { DARABONBA_PTR_GET_DEFAULT(openedVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedVpcCount(int32_t openedVpcCount) { DARABONBA_PTR_SET_VALUE(openedVpcCount_, openedVpcCount) };


    // openedVpcFirewallCount Field Functions 
    bool hasOpenedVpcFirewallCount() const { return this->openedVpcFirewallCount_ != nullptr;};
    void deleteOpenedVpcFirewallCount() { this->openedVpcFirewallCount_ = nullptr;};
    inline int32_t openedVpcFirewallCount() const { DARABONBA_PTR_GET_DEFAULT(openedVpcFirewallCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedVpcFirewallCount(int32_t openedVpcFirewallCount) { DARABONBA_PTR_SET_VALUE(openedVpcFirewallCount_, openedVpcFirewallCount) };


    // openedVpnCount Field Functions 
    bool hasOpenedVpnCount() const { return this->openedVpnCount_ != nullptr;};
    void deleteOpenedVpnCount() { this->openedVpnCount_ = nullptr;};
    inline int32_t openedVpnCount() const { DARABONBA_PTR_GET_DEFAULT(openedVpnCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setOpenedVpnCount(int32_t openedVpnCount) { DARABONBA_PTR_SET_VALUE(openedVpnCount_, openedVpnCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalEcrCount Field Functions 
    bool hasTotalEcrCount() const { return this->totalEcrCount_ != nullptr;};
    void deleteTotalEcrCount() { this->totalEcrCount_ = nullptr;};
    inline int32_t totalEcrCount() const { DARABONBA_PTR_GET_DEFAULT(totalEcrCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setTotalEcrCount(int32_t totalEcrCount) { DARABONBA_PTR_SET_VALUE(totalEcrCount_, totalEcrCount) };


    // totalPeerTrCount Field Functions 
    bool hasTotalPeerTrCount() const { return this->totalPeerTrCount_ != nullptr;};
    void deleteTotalPeerTrCount() { this->totalPeerTrCount_ = nullptr;};
    inline int32_t totalPeerTrCount() const { DARABONBA_PTR_GET_DEFAULT(totalPeerTrCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setTotalPeerTrCount(int32_t totalPeerTrCount) { DARABONBA_PTR_SET_VALUE(totalPeerTrCount_, totalPeerTrCount) };


    // totalVbrCount Field Functions 
    bool hasTotalVbrCount() const { return this->totalVbrCount_ != nullptr;};
    void deleteTotalVbrCount() { this->totalVbrCount_ = nullptr;};
    inline int32_t totalVbrCount() const { DARABONBA_PTR_GET_DEFAULT(totalVbrCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setTotalVbrCount(int32_t totalVbrCount) { DARABONBA_PTR_SET_VALUE(totalVbrCount_, totalVbrCount) };


    // totalVpcCount Field Functions 
    bool hasTotalVpcCount() const { return this->totalVpcCount_ != nullptr;};
    void deleteTotalVpcCount() { this->totalVpcCount_ = nullptr;};
    inline int32_t totalVpcCount() const { DARABONBA_PTR_GET_DEFAULT(totalVpcCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setTotalVpcCount(int32_t totalVpcCount) { DARABONBA_PTR_SET_VALUE(totalVpcCount_, totalVpcCount) };


    // totalVpcFirewallQuota Field Functions 
    bool hasTotalVpcFirewallQuota() const { return this->totalVpcFirewallQuota_ != nullptr;};
    void deleteTotalVpcFirewallQuota() { this->totalVpcFirewallQuota_ = nullptr;};
    inline int32_t totalVpcFirewallQuota() const { DARABONBA_PTR_GET_DEFAULT(totalVpcFirewallQuota_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setTotalVpcFirewallQuota(int32_t totalVpcFirewallQuota) { DARABONBA_PTR_SET_VALUE(totalVpcFirewallQuota_, totalVpcFirewallQuota) };


    // totalVpnCount Field Functions 
    bool hasTotalVpnCount() const { return this->totalVpnCount_ != nullptr;};
    void deleteTotalVpnCount() { this->totalVpnCount_ = nullptr;};
    inline int32_t totalVpnCount() const { DARABONBA_PTR_GET_DEFAULT(totalVpnCount_, 0) };
    inline DescribeVpcFirewallSummaryInfoResponseBody& setTotalVpnCount(int32_t totalVpnCount) { DARABONBA_PTR_SET_VALUE(totalVpnCount_, totalVpnCount) };


  protected:
    std::shared_ptr<int32_t> availableVpcFirewallQuota_ = nullptr;
    std::shared_ptr<int32_t> cenExpressConnectVpcCount_ = nullptr;
    std::shared_ptr<int32_t> cenFirewallVpcCount_ = nullptr;
    std::shared_ptr<int32_t> cenTrVpcCount_ = nullptr;
    std::shared_ptr<int32_t> closedCenFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> closedExpressConnectFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> closedVpcFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> configuredCenFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> configuredCenFirewallRegionCount_ = nullptr;
    std::shared_ptr<int32_t> configuredCenFirewallVpcCount_ = nullptr;
    std::shared_ptr<int32_t> configuredCenTrFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> configuredExpressConnectFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> configuredExpressConnectVpcCount_ = nullptr;
    std::shared_ptr<int32_t> configuredVpcFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> configuredVpcFirewallVpcCount_ = nullptr;
    std::shared_ptr<int32_t> expressConnectVpcCount_ = nullptr;
    std::shared_ptr<int32_t> notConfiguredCenFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> notConfiguredCenTrFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> notConfiguredExpressConnectFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> notConfiguredVpcFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> openedCenExpressConnectVpcCount_ = nullptr;
    std::shared_ptr<int32_t> openedCenFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> openedCenFirewallVpcCount_ = nullptr;
    std::shared_ptr<int32_t> openedCenTrFirewallVpcCount_ = nullptr;
    std::shared_ptr<int32_t> openedEcrCount_ = nullptr;
    std::shared_ptr<int32_t> openedExpressConnectFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> openedExpressConnectVpcCount_ = nullptr;
    std::shared_ptr<int32_t> openedPeerTrCount_ = nullptr;
    std::shared_ptr<int32_t> openedVbrCount_ = nullptr;
    std::shared_ptr<int32_t> openedVpcCount_ = nullptr;
    std::shared_ptr<int32_t> openedVpcFirewallCount_ = nullptr;
    std::shared_ptr<int32_t> openedVpnCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalEcrCount_ = nullptr;
    std::shared_ptr<int32_t> totalPeerTrCount_ = nullptr;
    std::shared_ptr<int32_t> totalVbrCount_ = nullptr;
    std::shared_ptr<int32_t> totalVpcCount_ = nullptr;
    std::shared_ptr<int32_t> totalVpcFirewallQuota_ = nullptr;
    std::shared_ptr<int32_t> totalVpnCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

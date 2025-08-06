// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYQOELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYQOELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayQoeListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayQoeListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(ItemConfigs, itemConfigs_);
      DARABONBA_PTR_TO_JSON(MetricTypes, metricTypesShrink_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(OrderName, orderName_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayQoeListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BeginTs, beginTs_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(ItemConfigs, itemConfigs_);
      DARABONBA_PTR_FROM_JSON(MetricTypes, metricTypesShrink_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(OrderName, orderName_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
    };
    DescribePlayQoeListShrinkRequest() = default ;
    DescribePlayQoeListShrinkRequest(const DescribePlayQoeListShrinkRequest &) = default ;
    DescribePlayQoeListShrinkRequest(DescribePlayQoeListShrinkRequest &&) = default ;
    DescribePlayQoeListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayQoeListShrinkRequest() = default ;
    DescribePlayQoeListShrinkRequest& operator=(const DescribePlayQoeListShrinkRequest &) = default ;
    DescribePlayQoeListShrinkRequest& operator=(DescribePlayQoeListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->beginTs_ != nullptr && this->definition_ != nullptr && this->endTs_ != nullptr && this->itemConfigs_ != nullptr && this->metricTypesShrink_ != nullptr
        && this->network_ != nullptr && this->orderName_ != nullptr && this->orderType_ != nullptr && this->os_ != nullptr && this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->terminalType_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribePlayQoeListShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // beginTs Field Functions 
    bool hasBeginTs() const { return this->beginTs_ != nullptr;};
    void deleteBeginTs() { this->beginTs_ = nullptr;};
    inline int64_t beginTs() const { DARABONBA_PTR_GET_DEFAULT(beginTs_, 0L) };
    inline DescribePlayQoeListShrinkRequest& setBeginTs(int64_t beginTs) { DARABONBA_PTR_SET_VALUE(beginTs_, beginTs) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline DescribePlayQoeListShrinkRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t endTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline DescribePlayQoeListShrinkRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // itemConfigs Field Functions 
    bool hasItemConfigs() const { return this->itemConfigs_ != nullptr;};
    void deleteItemConfigs() { this->itemConfigs_ = nullptr;};
    inline string itemConfigs() const { DARABONBA_PTR_GET_DEFAULT(itemConfigs_, "") };
    inline DescribePlayQoeListShrinkRequest& setItemConfigs(string itemConfigs) { DARABONBA_PTR_SET_VALUE(itemConfigs_, itemConfigs) };


    // metricTypesShrink Field Functions 
    bool hasMetricTypesShrink() const { return this->metricTypesShrink_ != nullptr;};
    void deleteMetricTypesShrink() { this->metricTypesShrink_ = nullptr;};
    inline string metricTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(metricTypesShrink_, "") };
    inline DescribePlayQoeListShrinkRequest& setMetricTypesShrink(string metricTypesShrink) { DARABONBA_PTR_SET_VALUE(metricTypesShrink_, metricTypesShrink) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string network() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline DescribePlayQoeListShrinkRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // orderName Field Functions 
    bool hasOrderName() const { return this->orderName_ != nullptr;};
    void deleteOrderName() { this->orderName_ = nullptr;};
    inline string orderName() const { DARABONBA_PTR_GET_DEFAULT(orderName_, "") };
    inline DescribePlayQoeListShrinkRequest& setOrderName(string orderName) { DARABONBA_PTR_SET_VALUE(orderName_, orderName) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribePlayQoeListShrinkRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribePlayQoeListShrinkRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline DescribePlayQoeListShrinkRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePlayQoeListShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline DescribePlayQoeListShrinkRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> beginTs_ = nullptr;
    std::shared_ptr<string> definition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTs_ = nullptr;
    std::shared_ptr<string> itemConfigs_ = nullptr;
    std::shared_ptr<string> metricTypesShrink_ = nullptr;
    std::shared_ptr<string> network_ = nullptr;
    std::shared_ptr<string> orderName_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> terminalType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

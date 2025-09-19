// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPEDSECURITYEVENTMARKMISSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPEDSECURITYEVENTMARKMISSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGroupedSecurityEventMarkMissListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupedSecurityEventMarkMissListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DisposalWay, disposalWay_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupedSecurityEventMarkMissListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DisposalWay, disposalWay_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    QueryGroupedSecurityEventMarkMissListRequest() = default ;
    QueryGroupedSecurityEventMarkMissListRequest(const QueryGroupedSecurityEventMarkMissListRequest &) = default ;
    QueryGroupedSecurityEventMarkMissListRequest(QueryGroupedSecurityEventMarkMissListRequest &&) = default ;
    QueryGroupedSecurityEventMarkMissListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupedSecurityEventMarkMissListRequest() = default ;
    QueryGroupedSecurityEventMarkMissListRequest& operator=(const QueryGroupedSecurityEventMarkMissListRequest &) = default ;
    QueryGroupedSecurityEventMarkMissListRequest& operator=(QueryGroupedSecurityEventMarkMissListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->disposalWay_ != nullptr && this->eventName_ != nullptr && this->from_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr
        && this->remark_ != nullptr && this->sourceIp_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryGroupedSecurityEventMarkMissListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // disposalWay Field Functions 
    bool hasDisposalWay() const { return this->disposalWay_ != nullptr;};
    void deleteDisposalWay() { this->disposalWay_ = nullptr;};
    inline string disposalWay() const { DARABONBA_PTR_GET_DEFAULT(disposalWay_, "") };
    inline QueryGroupedSecurityEventMarkMissListRequest& setDisposalWay(string disposalWay) { DARABONBA_PTR_SET_VALUE(disposalWay_, disposalWay) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline QueryGroupedSecurityEventMarkMissListRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline QueryGroupedSecurityEventMarkMissListRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryGroupedSecurityEventMarkMissListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryGroupedSecurityEventMarkMissListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline QueryGroupedSecurityEventMarkMissListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline QueryGroupedSecurityEventMarkMissListRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The handling method. Valid values:
    // 
    // *   **1**: Automatically Added to Whitelist
    // *   **2**: Defense Without Notification
    std::shared_ptr<string> disposalWay_ = nullptr;
    // The name of the alert event. The value indicates a subtype.
    std::shared_ptr<string> eventName_ = nullptr;
    // The ID of the request source. Set the value to sas.
    std::shared_ptr<string> from_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The condition that is used to query alert events by asset. You can specify a value of the following types:
    // 
    // *   The IP address of the asset.
    // *   The public IP address of the asset.
    // *   The private IP address of the asset.
    // *   The name of the asset.
    std::shared_ptr<string> remark_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

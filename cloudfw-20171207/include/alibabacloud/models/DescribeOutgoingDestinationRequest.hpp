// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclCoverage, aclCoverage_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsAITraffic, isAITraffic_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_TO_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_TO_JSON(SecuritySuggest, securitySuggest_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclCoverage, aclCoverage_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsAITraffic, isAITraffic_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_FROM_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_FROM_JSON(SecuritySuggest, securitySuggest_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    DescribeOutgoingDestinationRequest() = default ;
    DescribeOutgoingDestinationRequest(const DescribeOutgoingDestinationRequest &) = default ;
    DescribeOutgoingDestinationRequest(DescribeOutgoingDestinationRequest &&) = default ;
    DescribeOutgoingDestinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationRequest() = default ;
    DescribeOutgoingDestinationRequest& operator=(const DescribeOutgoingDestinationRequest &) = default ;
    DescribeOutgoingDestinationRequest& operator=(DescribeOutgoingDestinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclCoverage_ == nullptr
        && this->applicationName_ == nullptr && this->categoryId_ == nullptr && this->currentPage_ == nullptr && this->dstIP_ == nullptr && this->endTime_ == nullptr
        && this->isAITraffic_ == nullptr && this->lang_ == nullptr && this->order_ == nullptr && this->pageSize_ == nullptr && this->port_ == nullptr
        && this->privateIP_ == nullptr && this->publicIP_ == nullptr && this->securitySuggest_ == nullptr && this->sort_ == nullptr && this->sourceIp_ == nullptr
        && this->startTime_ == nullptr && this->tagId_ == nullptr; };
    // aclCoverage Field Functions 
    bool hasAclCoverage() const { return this->aclCoverage_ != nullptr;};
    void deleteAclCoverage() { this->aclCoverage_ = nullptr;};
    inline string getAclCoverage() const { DARABONBA_PTR_GET_DEFAULT(aclCoverage_, "") };
    inline DescribeOutgoingDestinationRequest& setAclCoverage(string aclCoverage) { DARABONBA_PTR_SET_VALUE(aclCoverage_, aclCoverage) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeOutgoingDestinationRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDestinationRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeOutgoingDestinationRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeOutgoingDestinationRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeOutgoingDestinationRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isAITraffic Field Functions 
    bool hasIsAITraffic() const { return this->isAITraffic_ != nullptr;};
    void deleteIsAITraffic() { this->isAITraffic_ = nullptr;};
    inline string getIsAITraffic() const { DARABONBA_PTR_GET_DEFAULT(isAITraffic_, "") };
    inline DescribeOutgoingDestinationRequest& setIsAITraffic(string isAITraffic) { DARABONBA_PTR_SET_VALUE(isAITraffic_, isAITraffic) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOutgoingDestinationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeOutgoingDestinationRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeOutgoingDestinationRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeOutgoingDestinationRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeOutgoingDestinationRequest& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string getPublicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeOutgoingDestinationRequest& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // securitySuggest Field Functions 
    bool hasSecuritySuggest() const { return this->securitySuggest_ != nullptr;};
    void deleteSecuritySuggest() { this->securitySuggest_ = nullptr;};
    inline string getSecuritySuggest() const { DARABONBA_PTR_GET_DEFAULT(securitySuggest_, "") };
    inline DescribeOutgoingDestinationRequest& setSecuritySuggest(string securitySuggest) { DARABONBA_PTR_SET_VALUE(securitySuggest_, securitySuggest) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeOutgoingDestinationRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeOutgoingDestinationRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeOutgoingDestinationRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline DescribeOutgoingDestinationRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    shared_ptr<string> aclCoverage_ {};
    shared_ptr<string> applicationName_ {};
    shared_ptr<string> categoryId_ {};
    shared_ptr<string> currentPage_ {};
    shared_ptr<string> dstIP_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> isAITraffic_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> port_ {};
    shared_ptr<string> privateIP_ {};
    shared_ptr<string> publicIP_ {};
    shared_ptr<string> securitySuggest_ {};
    shared_ptr<string> sort_ {};
    shared_ptr<string> sourceIp_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    shared_ptr<string> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

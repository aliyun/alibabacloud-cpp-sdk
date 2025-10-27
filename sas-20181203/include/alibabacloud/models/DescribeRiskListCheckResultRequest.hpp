// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKLISTCHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKLISTCHECKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskListCheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskListCheckResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskListCheckResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeRiskListCheckResultRequest() = default ;
    DescribeRiskListCheckResultRequest(const DescribeRiskListCheckResultRequest &) = default ;
    DescribeRiskListCheckResultRequest(DescribeRiskListCheckResultRequest &&) = default ;
    DescribeRiskListCheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskListCheckResultRequest() = default ;
    DescribeRiskListCheckResultRequest& operator=(const DescribeRiskListCheckResultRequest &) = default ;
    DescribeRiskListCheckResultRequest& operator=(DescribeRiskListCheckResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->instanceIds_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceIp_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeRiskListCheckResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeRiskListCheckResultRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeRiskListCheckResultRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRiskListCheckResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRiskListCheckResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRiskListCheckResultRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeRiskListCheckResultRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The number of the page to return. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The instance IDs of the cloud services that you want to query. Separate multiple IDs with commas (,).
    // 
    // > If you do not specify this parameter, an empty list is returned.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

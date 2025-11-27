// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(IsGlobe, isGlobe_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(IsGlobe, isGlobe_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    QuerySendStatisticsRequest() = default ;
    QuerySendStatisticsRequest(const QuerySendStatisticsRequest &) = default ;
    QuerySendStatisticsRequest(QuerySendStatisticsRequest &&) = default ;
    QuerySendStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendStatisticsRequest() = default ;
    QuerySendStatisticsRequest& operator=(const QuerySendStatisticsRequest &) = default ;
    QuerySendStatisticsRequest& operator=(QuerySendStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->isGlobe_ == nullptr && return this->ownerId_ == nullptr && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->signName_ == nullptr && return this->startDate_ == nullptr && return this->templateType_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QuerySendStatisticsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // isGlobe Field Functions 
    bool hasIsGlobe() const { return this->isGlobe_ != nullptr;};
    void deleteIsGlobe() { this->isGlobe_ = nullptr;};
    inline int32_t isGlobe() const { DARABONBA_PTR_GET_DEFAULT(isGlobe_, 0) };
    inline QuerySendStatisticsRequest& setIsGlobe(int32_t isGlobe) { DARABONBA_PTR_SET_VALUE(isGlobe_, isGlobe) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySendStatisticsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline QuerySendStatisticsRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySendStatisticsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySendStatisticsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySendStatisticsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QuerySendStatisticsRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QuerySendStatisticsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int32_t templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
    inline QuerySendStatisticsRequest& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The end of the time range to query. Format: yyyyMMdd. Example: 20181225.
    // 
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // The site from where the message is sent. Valid values:
    // 
    // *   **1**: China site
    // *   **2**: international site
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> isGlobe_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Default value: **1**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    // The number of entries to return on each page. Valid values: **1 to 50**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The signature.
    std::shared_ptr<string> signName_ = nullptr;
    // The beginning of the time range to query. Format: yyyyMMdd. Example: 20181225.
    // 
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
    // The type of the message template. Valid values: Valid values:
    // 
    // *   **0**: verification code
    // *   **1**: notification
    // *   **2**: promotional message (Enterprise users only)
    // *   **3**: international purpose (Enterprise users only)
    // *   **7**: digital message
    std::shared_ptr<int32_t> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif

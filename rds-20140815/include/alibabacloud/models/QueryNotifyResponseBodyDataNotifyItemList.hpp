// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNOTIFYRESPONSEBODYDATANOTIFYITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYNOTIFYRESPONSEBODYDATANOTIFYITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class QueryNotifyResponseBodyDataNotifyItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNotifyResponseBodyDataNotifyItemList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ConfirmFlag, confirmFlag_);
      DARABONBA_PTR_TO_JSON(Confirmor, confirmor_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdempotentCount, idempotentCount_);
      DARABONBA_PTR_TO_JSON(IdempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(NotifyElement, notifyElement_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNotifyResponseBodyDataNotifyItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ConfirmFlag, confirmFlag_);
      DARABONBA_PTR_FROM_JSON(Confirmor, confirmor_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdempotentCount, idempotentCount_);
      DARABONBA_PTR_FROM_JSON(IdempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(NotifyElement, notifyElement_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryNotifyResponseBodyDataNotifyItemList() = default ;
    QueryNotifyResponseBodyDataNotifyItemList(const QueryNotifyResponseBodyDataNotifyItemList &) = default ;
    QueryNotifyResponseBodyDataNotifyItemList(QueryNotifyResponseBodyDataNotifyItemList &&) = default ;
    QueryNotifyResponseBodyDataNotifyItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNotifyResponseBodyDataNotifyItemList() = default ;
    QueryNotifyResponseBodyDataNotifyItemList& operator=(const QueryNotifyResponseBodyDataNotifyItemList &) = default ;
    QueryNotifyResponseBodyDataNotifyItemList& operator=(QueryNotifyResponseBodyDataNotifyItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->confirmFlag_ == nullptr && return this->confirmor_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->idempotentCount_ == nullptr && return this->idempotentId_ == nullptr && return this->level_ == nullptr && return this->notifyElement_ == nullptr && return this->templateName_ == nullptr
        && return this->type_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline QueryNotifyResponseBodyDataNotifyItemList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // confirmFlag Field Functions 
    bool hasConfirmFlag() const { return this->confirmFlag_ != nullptr;};
    void deleteConfirmFlag() { this->confirmFlag_ = nullptr;};
    inline bool confirmFlag() const { DARABONBA_PTR_GET_DEFAULT(confirmFlag_, false) };
    inline QueryNotifyResponseBodyDataNotifyItemList& setConfirmFlag(bool confirmFlag) { DARABONBA_PTR_SET_VALUE(confirmFlag_, confirmFlag) };


    // confirmor Field Functions 
    bool hasConfirmor() const { return this->confirmor_ != nullptr;};
    void deleteConfirmor() { this->confirmor_ = nullptr;};
    inline int64_t confirmor() const { DARABONBA_PTR_GET_DEFAULT(confirmor_, 0L) };
    inline QueryNotifyResponseBodyDataNotifyItemList& setConfirmor(int64_t confirmor) { DARABONBA_PTR_SET_VALUE(confirmor_, confirmor) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline QueryNotifyResponseBodyDataNotifyItemList& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryNotifyResponseBodyDataNotifyItemList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryNotifyResponseBodyDataNotifyItemList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idempotentCount Field Functions 
    bool hasIdempotentCount() const { return this->idempotentCount_ != nullptr;};
    void deleteIdempotentCount() { this->idempotentCount_ = nullptr;};
    inline string idempotentCount() const { DARABONBA_PTR_GET_DEFAULT(idempotentCount_, "") };
    inline QueryNotifyResponseBodyDataNotifyItemList& setIdempotentCount(string idempotentCount) { DARABONBA_PTR_SET_VALUE(idempotentCount_, idempotentCount) };


    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string idempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline QueryNotifyResponseBodyDataNotifyItemList& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline QueryNotifyResponseBodyDataNotifyItemList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // notifyElement Field Functions 
    bool hasNotifyElement() const { return this->notifyElement_ != nullptr;};
    void deleteNotifyElement() { this->notifyElement_ = nullptr;};
    inline string notifyElement() const { DARABONBA_PTR_GET_DEFAULT(notifyElement_, "") };
    inline QueryNotifyResponseBodyDataNotifyItemList& setNotifyElement(string notifyElement) { DARABONBA_PTR_SET_VALUE(notifyElement_, notifyElement) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline QueryNotifyResponseBodyDataNotifyItemList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryNotifyResponseBodyDataNotifyItemList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // Indicates whether the notification has been confirmed. You can call the [ConfirmNotify](https://help.aliyun.com/document_detail/610444.html) operation to mark the notification as confirmed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> confirmFlag_ = nullptr;
    // The UID of the contact who called the [ConfirmNotify](https://help.aliyun.com/document_detail/610444.html) operation to mark the notification as confirmed. The contact belongs to the current Alibaba Cloud account.
    // 
    // The value **0** indicates that the notification is automatically confirmed by the system.
    std::shared_ptr<int64_t> confirmor_ = nullptr;
    // The time when the notification was created.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the notification was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the notification.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of times that repeatedly sent notifications are blocked.
    std::shared_ptr<string> idempotentCount_ = nullptr;
    // This parameter ensures the idempotence of the notification and prevents the notification from being repeatedly sent.
    std::shared_ptr<string> idempotentId_ = nullptr;
    // The level of the notification. Valid values:
    // 
    // *   **help**
    // *   **success**
    // *   **warning**
    // *   **error**
    // *   **loading**
    // *   **notice**
    std::shared_ptr<string> level_ = nullptr;
    // The element in the notification template. This parameter is a JSON string. Fields in the JSON string vary based on the value of the **TemplateName** parameter.
    // 
    // *   If the **TemplateName** parameter is **RenewalRecommend**, the JSON string contains the following fields:
    // 
    //     *   **instanceName**: the ID of the instance that is about to expire
    //     *   **reservedTime**: the remaining validity period of the instance in days
    // 
    // *   If the **TemplateName** parameter is **InstanceCreateFailed**, the JSON string contains the following fields:
    // 
    //     *   **orderId**: the ID of the order to purchase the instance
    //     *   **reason**: the cause of the instance creation failure
    std::shared_ptr<string> notifyElement_ = nullptr;
    // The template of the notification. Valid values:
    // 
    // *   **RenewalRecommend**: The template that is used to notify of renewal suggestions.
    // *   **InstanceCreateFailed**: The template that is used to notify that an instance fails to be created and is refunded.
    std::shared_ptr<string> templateName_ = nullptr;
    // The type of the notification. Valid values:
    // 
    // *   **Sell**: sales notification
    // *   **Operation**: O\\&M notification
    // *   **Promotion**: promotion notification
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

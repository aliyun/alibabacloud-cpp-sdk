// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATENOTICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATENOTICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class BatchUpdateNoticeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateNoticeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NoticeBiz, noticeBiz_);
      DARABONBA_PTR_TO_JSON(NoticeStatus, noticeStatus_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateNoticeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NoticeBiz, noticeBiz_);
      DARABONBA_PTR_FROM_JSON(NoticeStatus, noticeStatus_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    BatchUpdateNoticeStatusRequest() = default ;
    BatchUpdateNoticeStatusRequest(const BatchUpdateNoticeStatusRequest &) = default ;
    BatchUpdateNoticeStatusRequest(BatchUpdateNoticeStatusRequest &&) = default ;
    BatchUpdateNoticeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateNoticeStatusRequest() = default ;
    BatchUpdateNoticeStatusRequest& operator=(const BatchUpdateNoticeStatusRequest &) = default ;
    BatchUpdateNoticeStatusRequest& operator=(BatchUpdateNoticeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr
        && this->lang_ == nullptr && this->noticeBiz_ == nullptr && this->noticeStatus_ == nullptr && this->sourceIp_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline BatchUpdateNoticeStatusRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline BatchUpdateNoticeStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // noticeBiz Field Functions 
    bool hasNoticeBiz() const { return this->noticeBiz_ != nullptr;};
    void deleteNoticeBiz() { this->noticeBiz_ = nullptr;};
    inline string getNoticeBiz() const { DARABONBA_PTR_GET_DEFAULT(noticeBiz_, "") };
    inline BatchUpdateNoticeStatusRequest& setNoticeBiz(string noticeBiz) { DARABONBA_PTR_SET_VALUE(noticeBiz_, noticeBiz) };


    // noticeStatus Field Functions 
    bool hasNoticeStatus() const { return this->noticeStatus_ != nullptr;};
    void deleteNoticeStatus() { this->noticeStatus_ = nullptr;};
    inline string getNoticeStatus() const { DARABONBA_PTR_GET_DEFAULT(noticeStatus_, "") };
    inline BatchUpdateNoticeStatusRequest& setNoticeStatus(string noticeStatus) { DARABONBA_PTR_SET_VALUE(noticeStatus_, noticeStatus) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline BatchUpdateNoticeStatusRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The list of primary key identifiers to be synchronized to Certificate Management Service. Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> ids_ {};
    // The language type for the request and the received message. Valid values:
    // 
    // - **zh**: Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The business code of message notification. The value is fixed as ssl.
    shared_ptr<string> noticeBiz_ {};
    // Specifies whether to enable message notification.
    // \\--enable: enables message notification.
    // \\--disable: disables message notification.
    // 
    // This parameter is required.
    shared_ptr<string> noticeStatus_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

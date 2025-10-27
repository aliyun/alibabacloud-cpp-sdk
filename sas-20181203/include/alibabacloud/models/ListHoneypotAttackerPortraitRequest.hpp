// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERPORTRAITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERPORTRAITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotAttackerPortraitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAttackerPortraitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(StartTimeStamp, startTimeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAttackerPortraitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(StartTimeStamp, startTimeStamp_);
    };
    ListHoneypotAttackerPortraitRequest() = default ;
    ListHoneypotAttackerPortraitRequest(const ListHoneypotAttackerPortraitRequest &) = default ;
    ListHoneypotAttackerPortraitRequest(ListHoneypotAttackerPortraitRequest &&) = default ;
    ListHoneypotAttackerPortraitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAttackerPortraitRequest() = default ;
    ListHoneypotAttackerPortraitRequest& operator=(const ListHoneypotAttackerPortraitRequest &) = default ;
    ListHoneypotAttackerPortraitRequest& operator=(ListHoneypotAttackerPortraitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->endTimeStamp_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->srcIp_ == nullptr && return this->startTimeStamp_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListHoneypotAttackerPortraitRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTimeStamp Field Functions 
    bool hasEndTimeStamp() const { return this->endTimeStamp_ != nullptr;};
    void deleteEndTimeStamp() { this->endTimeStamp_ = nullptr;};
    inline int64_t endTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(endTimeStamp_, 0L) };
    inline ListHoneypotAttackerPortraitRequest& setEndTimeStamp(int64_t endTimeStamp) { DARABONBA_PTR_SET_VALUE(endTimeStamp_, endTimeStamp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListHoneypotAttackerPortraitRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHoneypotAttackerPortraitRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline ListHoneypotAttackerPortraitRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // startTimeStamp Field Functions 
    bool hasStartTimeStamp() const { return this->startTimeStamp_ != nullptr;};
    void deleteStartTimeStamp() { this->startTimeStamp_ = nullptr;};
    inline int64_t startTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(startTimeStamp_, 0L) };
    inline ListHoneypotAttackerPortraitRequest& setStartTimeStamp(int64_t startTimeStamp) { DARABONBA_PTR_SET_VALUE(startTimeStamp_, startTimeStamp) };


  protected:
    // The page number. Default value: **1**. Pages start from page 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> endTimeStamp_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The source IP address of the attack.
    std::shared_ptr<string> srcIp_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> startTimeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

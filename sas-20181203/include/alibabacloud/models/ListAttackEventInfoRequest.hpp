// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACKEVENTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACKEVENTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAttackEventInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttackEventInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackInstance, attackInstance_);
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttackEventInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackInstance, attackInstance_);
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListAttackEventInfoRequest() = default ;
    ListAttackEventInfoRequest(const ListAttackEventInfoRequest &) = default ;
    ListAttackEventInfoRequest(ListAttackEventInfoRequest &&) = default ;
    ListAttackEventInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttackEventInfoRequest() = default ;
    ListAttackEventInfoRequest& operator=(const ListAttackEventInfoRequest &) = default ;
    ListAttackEventInfoRequest& operator=(ListAttackEventInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackInstance_ == nullptr
        && this->attackType_ == nullptr && this->currentPage_ == nullptr && this->dstPort_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr
        && this->pageSize_ == nullptr && this->srcIp_ == nullptr && this->startTime_ == nullptr; };
    // attackInstance Field Functions 
    bool hasAttackInstance() const { return this->attackInstance_ != nullptr;};
    void deleteAttackInstance() { this->attackInstance_ = nullptr;};
    inline string getAttackInstance() const { DARABONBA_PTR_GET_DEFAULT(attackInstance_, "") };
    inline ListAttackEventInfoRequest& setAttackInstance(string attackInstance) { DARABONBA_PTR_SET_VALUE(attackInstance_, attackInstance) };


    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
    inline ListAttackEventInfoRequest& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAttackEventInfoRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline ListAttackEventInfoRequest& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAttackEventInfoRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAttackEventInfoRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAttackEventInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline ListAttackEventInfoRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAttackEventInfoRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The attacked asset. You can specify the instance name, public IP address, or private IP address.
    shared_ptr<string> attackInstance_ {};
    // The attack type. Valid values:
    // - 9: SQL Server brute-force attacks
    // - 5: SSH brute-force attacks
    // - 6: RDP brute-force attacks
    // - 101: Java Struts2 attack blocked
    // - 102: Redis attack blocked
    // - 103: China Chopper (AntSword) WebShell communication
    // - 104: China Chopper WebShell communication
    // - 133: XISE WebShell communication
    // - 161: WebShell upload
    // - 209: PHP WebShell upload
    // - 210: JSP WebShell upload
    // - 211: ASP WebShell upload
    // - 215: Special extension WebShell upload
    // - ai_webshell: WebShell upload intelligent defense
    // - java_common_rce: Java common remote code execution (RCE) vulnerability blocked
    // - alinet_webrce: Adaptive web attack defense
    shared_ptr<string> attackType_ {};
    // The number of the page to return in a paged query.
    shared_ptr<int32_t> currentPage_ {};
    // The Attack Target Ports of the Attack Target.
    shared_ptr<string> dstPort_ {};
    // The timestamp of the end time.
    shared_ptr<int64_t> endTime_ {};
    // The language type for the request and response messages. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return on each page in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The Attack Source IP Addresses.
    shared_ptr<string> srcIp_ {};
    // The timestamp of the start time.
    // 
    // This field is a UNIX timestamp. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

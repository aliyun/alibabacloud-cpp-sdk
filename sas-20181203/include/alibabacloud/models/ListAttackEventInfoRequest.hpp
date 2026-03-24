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
    // Attacked asset. You can fill in the machine instance name, public IP, or private IP.
    shared_ptr<string> attackInstance_ {};
    // Attack type. Values:
    // - 9: SQL Server brute force attack
    // - 5: SSH brute force attack
    // - 6: RDP brute force attack
    // - 101: Java Struts2 attack interception
    // - 102: Redis attack interception
    // - 103: Chinese AntSword WebShell communication
    // - 104: Chinese Chopper WebShell communication
    // - 133: XISE WebShell communication
    // - 161: WebShell upload
    // - 209: PHP WebShell upload
    // - 210: JSP WebShell upload
    // - 211: ASP WebShell upload
    // - 215: Special suffix WebShell upload
    // - ai_webshell: Intelligent defense for WebShell upload
    // - java_common_rce: Java common RCE vulnerability interception
    // - alinet_webrce: Adaptive web attack defense
    shared_ptr<string> attackType_ {};
    // Page number to display in a paginated query.
    shared_ptr<int32_t> currentPage_ {};
    // Target port of the attack.
    shared_ptr<string> dstPort_ {};
    // Timestamp of the end time.
    shared_ptr<int64_t> endTime_ {};
    // Set the language type for request and response messages. Default is **zh**. Values:
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Maximum number of records per page in a paginated query.
    shared_ptr<int32_t> pageSize_ {};
    // Source IP of the attack.
    shared_ptr<string> srcIp_ {};
    // Timestamp of the start time.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

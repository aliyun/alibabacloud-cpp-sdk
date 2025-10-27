// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKANALYSISDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKANALYSISDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAttackAnalysisDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackAnalysisDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Base64, base64_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackAnalysisDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Base64, base64_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAttackAnalysisDataRequest() = default ;
    DescribeAttackAnalysisDataRequest(const DescribeAttackAnalysisDataRequest &) = default ;
    DescribeAttackAnalysisDataRequest(DescribeAttackAnalysisDataRequest &&) = default ;
    DescribeAttackAnalysisDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackAnalysisDataRequest() = default ;
    DescribeAttackAnalysisDataRequest& operator=(const DescribeAttackAnalysisDataRequest &) = default ;
    DescribeAttackAnalysisDataRequest& operator=(DescribeAttackAnalysisDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->base64_ == nullptr
        && return this->currentPage_ == nullptr && return this->data_ == nullptr && return this->endTime_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr
        && return this->startTime_ == nullptr && return this->type_ == nullptr; };
    // base64 Field Functions 
    bool hasBase64() const { return this->base64_ != nullptr;};
    void deleteBase64() { this->base64_ = nullptr;};
    inline string base64() const { DARABONBA_PTR_GET_DEFAULT(base64_, "") };
    inline DescribeAttackAnalysisDataRequest& setBase64(string base64) { DARABONBA_PTR_SET_VALUE(base64_, base64) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeAttackAnalysisDataRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DescribeAttackAnalysisDataRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAttackAnalysisDataRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAttackAnalysisDataRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAttackAnalysisDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAttackAnalysisDataRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAttackAnalysisDataRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to encode the value of the **client_url** field in the query results by using the Base64 algorithm. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> base64_ = nullptr;
    // The number of the page to return. Pages start from page **1**.
    // 
    // >  If the Type parameter is set to **DETAILS**, you must specify the CurrentPage parameter.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The condition that is used to filter attack events.
    // 
    // >  The following list describes the valid values of crack_type:
    // 
    // *   3: brute-force attack on MySQL
    // 
    // *   4: FTP brute-force attack
    // 
    // *   5: SSH brute-force attack
    // 
    // *   6: RDP brute-force attack
    // 
    // *   9: brute-force attack on Microsoft SQL Server
    // 
    // *   101: intercepted attack on Java Struts 2
    // 
    // *   102: intercepted attack on Redis
    // 
    // *   103: communication with AntSword Webshell
    // 
    // *   104: communication with China Chopper Webshell
    // 
    // *   133: communication with XISE Webshell
    // 
    // *   sqli: SQL injection
    // 
    // *   codei: code execution
    // 
    // *   xss: cross-site scripting (XSS)
    // 
    // *   lfi: local file inclusion
    // 
    // *   rfi: remote file inclusion
    // 
    // *   webshell: trojan script
    // 
    // *   upload: vulnerability upload
    // 
    // *   path: directory traversal
    // 
    // *   bypass: unauthorized access
    // 
    // *   csrf: cross-site request forgery (CSRF)
    // 
    // *   crlf: carriage return line feed (CRLF)
    // 
    // *   other: others
    std::shared_ptr<string> data_ = nullptr;
    // The timestamp when the attack stops. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page.
    // 
    // >  If the Type parameter is set to **DETAILS**, you must specify the PageSize parameter.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The timestamp at which the attack starts. By default, the statistics of the previous seven days are queried. Unit: seconds.
    // 
    // >  The start time that you specify must be within the previous 40 days.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The details of attack analysis. Valid values:
    // 
    // *   **TOTAL**: number of attacks
    // *   **TREND**: attack trend
    // *   **PIE_CHART**: distribution of attacks by type
    // *   **SOURCE_TOP**: top 5 attack sources
    // *   **CLIENT_TOP**: top 5 attacked assets
    // *   **DETAILS**: attack details
    // 
    // >  If the Type parameter is set to **DETAILS**, you must specify the CurrentPage and PageSize parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

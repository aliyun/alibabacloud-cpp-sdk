// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKANALYSISDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKANALYSISDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAttackAnalysisDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackAnalysisDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackAnalysisDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeAttackAnalysisDataResponseBody() = default ;
    DescribeAttackAnalysisDataResponseBody(const DescribeAttackAnalysisDataResponseBody &) = default ;
    DescribeAttackAnalysisDataResponseBody(DescribeAttackAnalysisDataResponseBody &&) = default ;
    DescribeAttackAnalysisDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackAnalysisDataResponseBody() = default ;
    DescribeAttackAnalysisDataResponseBody& operator=(const DescribeAttackAnalysisDataResponseBody &) = default ;
    DescribeAttackAnalysisDataResponseBody& operator=(DescribeAttackAnalysisDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->page_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DescribeAttackAnalysisDataResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline DescribeAttackAnalysisDataResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAttackAnalysisDataResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttackAnalysisDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeAttackAnalysisDataResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The attack events. Valid values:
    // 
    // *   **client_url**: the URL of the attack request.
    // 
    // *   **internetIp**: the IP address of the asset.
    // 
    // *   **instanceName**: the name of the asset.
    // 
    // *   **table_src**: the data source.
    // 
    // *   **uuid**: the UUID of the asset.
    // 
    // *   **crack_method**: the method of the attack request.
    // 
    // *   **crack_hour**: the attack time.
    // 
    // *   **crack_src_ip**: the IP address from which the attack is launched.
    // 
    // *   **instanceId**: the ID of the asset.
    // 
    // *   **dst_port**: the attacked port.
    // 
    // *   **client_ip**: the attacked IP address.
    // 
    // *   **location**: the region from which the attack is launched.
    // 
    // *   **aliuid**: the ID of the Alibaba Cloud account.
    // 
    // *   **crack_cnt**: the number of times that the attack is launched.
    // 
    // *   **crack_type**: the type of the attack. Valid values:
    // 
    //     *   **113**: improper authorization.
    //     *   **112**: redirection attack.
    //     *   **upload**: vulnerability upload.
    //     *   **other**: others.
    //     *   **webshell**: trojan script.
    //     *   **201**: suspicious connection.
    //     *   **9**: brute-force attack on Microsoft SQL Server.
    //     *   **5**: SSH brute-force attack.
    //     *   **6**: RDP brute-force attack.
    //     *   **lfi**: local file inclusion.
    //     *   **7**: code execution.
    //     *   **sqli**: SQL injection.
    //     *   **209**: web attack.
    //     *   **31**: buffer overflow.
    //     *   **3**: brute-force attack on MySQL.
    //     *   **30**: clickjacking.
    //     *   **4**: FTP brute-force attack.
    //     *   **bypass**: unauthorized access.
    //     *   **33**: format string.
    //     *   **deeplearning**: others.
    //     *   **32**: integer overflow.
    //     *   **203**: brute-force attack.
    //     *   **34**: race condition.
    //     *   **rfi**: remote file inclusion.
    //     *   **0**: SQL injection attack.
    //     *   **212**: mining behavior.
    //     *   **213**: reverse shell.
    //     *   **211**: worm.
    //     *   **61**: session timeout.
    //     *   **20**: directory traversal.
    //     *   **xss**: XSS attack.
    //     *   **22**: unauthorized access.
    //     *   **21**: scan attack.
    //     *   **24**: file modification.
    //     *   **26**: file deletion.
    //     *   **25**: file reading.
    //     *   **28**: CRLF injection.
    //     *   **27**: logic error.
    //     *   **29**: template injection.
    //     *   **csrf**: CSRF.
    //     *   **path**: directory traversal.
    //     *   **crlf**: CRLF.
    //     *   **102**: CSRF.
    //     *   **103**: server-side request forgery (SSRF).
    //     *   **101**: XSS.
    //     *   **11**: file inclusion.
    //     *   **10**: file upload.
    //     *   **12**: vulnerability upload.
    //     *   **15**: unauthorized access.
    //     *   **14**: information leakage.
    //     *   **17**: XML entity injection.
    //     *   **16**: insecure configuration.
    //     *   **19**: Lightweight Directory Access Protocol (LDAP) injection.
    //     *   **18**: XPath injection.
    //     *   **codei**: code execution.
    //     *   **ai_webshell**: intelligent defense against webshell upload.
    //     *   **alinet_webrce**: adaptive web attack defense.
    //     *   **210**: JSP webshell upload.
    //     *   **161**: webshell upload.
    std::shared_ptr<string> data_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries returned per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of attack events returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

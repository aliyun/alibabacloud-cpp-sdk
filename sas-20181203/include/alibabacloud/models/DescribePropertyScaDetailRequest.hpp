// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCADETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYSCADETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyScaDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyScaDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProcessStartedEnd, processStartedEnd_);
      DARABONBA_PTR_TO_JSON(ProcessStartedStart, processStartedStart_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ScaName, scaName_);
      DARABONBA_PTR_TO_JSON(ScaNamePattern, scaNamePattern_);
      DARABONBA_PTR_TO_JSON(ScaVersion, scaVersion_);
      DARABONBA_PTR_TO_JSON(SearchInfo, searchInfo_);
      DARABONBA_PTR_TO_JSON(SearchInfoSub, searchInfoSub_);
      DARABONBA_PTR_TO_JSON(SearchItem, searchItem_);
      DARABONBA_PTR_TO_JSON(SearchItemSub, searchItemSub_);
      DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyScaDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProcessStartedEnd, processStartedEnd_);
      DARABONBA_PTR_FROM_JSON(ProcessStartedStart, processStartedStart_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ScaName, scaName_);
      DARABONBA_PTR_FROM_JSON(ScaNamePattern, scaNamePattern_);
      DARABONBA_PTR_FROM_JSON(ScaVersion, scaVersion_);
      DARABONBA_PTR_FROM_JSON(SearchInfo, searchInfo_);
      DARABONBA_PTR_FROM_JSON(SearchInfoSub, searchInfoSub_);
      DARABONBA_PTR_FROM_JSON(SearchItem, searchItem_);
      DARABONBA_PTR_FROM_JSON(SearchItemSub, searchItemSub_);
      DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribePropertyScaDetailRequest() = default ;
    DescribePropertyScaDetailRequest(const DescribePropertyScaDetailRequest &) = default ;
    DescribePropertyScaDetailRequest(DescribePropertyScaDetailRequest &&) = default ;
    DescribePropertyScaDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyScaDetailRequest() = default ;
    DescribePropertyScaDetailRequest& operator=(const DescribePropertyScaDetailRequest &) = default ;
    DescribePropertyScaDetailRequest& operator=(DescribePropertyScaDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->biz_ == nullptr
        && return this->bizType_ == nullptr && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->name_ == nullptr && return this->nextToken_ == nullptr
        && return this->pageSize_ == nullptr && return this->pid_ == nullptr && return this->port_ == nullptr && return this->processStartedEnd_ == nullptr && return this->processStartedStart_ == nullptr
        && return this->remark_ == nullptr && return this->scaName_ == nullptr && return this->scaNamePattern_ == nullptr && return this->scaVersion_ == nullptr && return this->searchInfo_ == nullptr
        && return this->searchInfoSub_ == nullptr && return this->searchItem_ == nullptr && return this->searchItemSub_ == nullptr && return this->useNextToken_ == nullptr && return this->user_ == nullptr
        && return this->uuid_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string biz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline DescribePropertyScaDetailRequest& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribePropertyScaDetailRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyScaDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePropertyScaDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline int64_t name() const { DARABONBA_PTR_GET_DEFAULT(name_, 0L) };
    inline DescribePropertyScaDetailRequest& setName(int64_t name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePropertyScaDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyScaDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DescribePropertyScaDetailRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribePropertyScaDetailRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // processStartedEnd Field Functions 
    bool hasProcessStartedEnd() const { return this->processStartedEnd_ != nullptr;};
    void deleteProcessStartedEnd() { this->processStartedEnd_ = nullptr;};
    inline int64_t processStartedEnd() const { DARABONBA_PTR_GET_DEFAULT(processStartedEnd_, 0L) };
    inline DescribePropertyScaDetailRequest& setProcessStartedEnd(int64_t processStartedEnd) { DARABONBA_PTR_SET_VALUE(processStartedEnd_, processStartedEnd) };


    // processStartedStart Field Functions 
    bool hasProcessStartedStart() const { return this->processStartedStart_ != nullptr;};
    void deleteProcessStartedStart() { this->processStartedStart_ = nullptr;};
    inline int64_t processStartedStart() const { DARABONBA_PTR_GET_DEFAULT(processStartedStart_, 0L) };
    inline DescribePropertyScaDetailRequest& setProcessStartedStart(int64_t processStartedStart) { DARABONBA_PTR_SET_VALUE(processStartedStart_, processStartedStart) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePropertyScaDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // scaName Field Functions 
    bool hasScaName() const { return this->scaName_ != nullptr;};
    void deleteScaName() { this->scaName_ = nullptr;};
    inline string scaName() const { DARABONBA_PTR_GET_DEFAULT(scaName_, "") };
    inline DescribePropertyScaDetailRequest& setScaName(string scaName) { DARABONBA_PTR_SET_VALUE(scaName_, scaName) };


    // scaNamePattern Field Functions 
    bool hasScaNamePattern() const { return this->scaNamePattern_ != nullptr;};
    void deleteScaNamePattern() { this->scaNamePattern_ = nullptr;};
    inline string scaNamePattern() const { DARABONBA_PTR_GET_DEFAULT(scaNamePattern_, "") };
    inline DescribePropertyScaDetailRequest& setScaNamePattern(string scaNamePattern) { DARABONBA_PTR_SET_VALUE(scaNamePattern_, scaNamePattern) };


    // scaVersion Field Functions 
    bool hasScaVersion() const { return this->scaVersion_ != nullptr;};
    void deleteScaVersion() { this->scaVersion_ = nullptr;};
    inline string scaVersion() const { DARABONBA_PTR_GET_DEFAULT(scaVersion_, "") };
    inline DescribePropertyScaDetailRequest& setScaVersion(string scaVersion) { DARABONBA_PTR_SET_VALUE(scaVersion_, scaVersion) };


    // searchInfo Field Functions 
    bool hasSearchInfo() const { return this->searchInfo_ != nullptr;};
    void deleteSearchInfo() { this->searchInfo_ = nullptr;};
    inline string searchInfo() const { DARABONBA_PTR_GET_DEFAULT(searchInfo_, "") };
    inline DescribePropertyScaDetailRequest& setSearchInfo(string searchInfo) { DARABONBA_PTR_SET_VALUE(searchInfo_, searchInfo) };


    // searchInfoSub Field Functions 
    bool hasSearchInfoSub() const { return this->searchInfoSub_ != nullptr;};
    void deleteSearchInfoSub() { this->searchInfoSub_ = nullptr;};
    inline string searchInfoSub() const { DARABONBA_PTR_GET_DEFAULT(searchInfoSub_, "") };
    inline DescribePropertyScaDetailRequest& setSearchInfoSub(string searchInfoSub) { DARABONBA_PTR_SET_VALUE(searchInfoSub_, searchInfoSub) };


    // searchItem Field Functions 
    bool hasSearchItem() const { return this->searchItem_ != nullptr;};
    void deleteSearchItem() { this->searchItem_ = nullptr;};
    inline string searchItem() const { DARABONBA_PTR_GET_DEFAULT(searchItem_, "") };
    inline DescribePropertyScaDetailRequest& setSearchItem(string searchItem) { DARABONBA_PTR_SET_VALUE(searchItem_, searchItem) };


    // searchItemSub Field Functions 
    bool hasSearchItemSub() const { return this->searchItemSub_ != nullptr;};
    void deleteSearchItemSub() { this->searchItemSub_ = nullptr;};
    inline string searchItemSub() const { DARABONBA_PTR_GET_DEFAULT(searchItemSub_, "") };
    inline DescribePropertyScaDetailRequest& setSearchItemSub(string searchItemSub) { DARABONBA_PTR_SET_VALUE(searchItemSub_, searchItemSub) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool useNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline DescribePropertyScaDetailRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyScaDetailRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyScaDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The type of the asset fingerprint that you want to query. Default value: **sca**. Valid values:
    // 
    // *   **sca**: middleware
    // *   **sca_database**: database
    // *   **sca_web**: web service
    // 
    // >  If you do not specify this parameter, the default value **sca** is used, which indicates that middleware fingerprints are queried.
    std::shared_ptr<string> biz_ = nullptr;
    // The type of the middleware, database, or web service that you want to query. Valid values:
    // 
    // *   **system_service**: system service
    // *   **software_library**: software library
    // *   **docker_component**: container component
    // *   **database**: database
    // *   **web_container**: web container
    // *   **jar**: JAR package
    // *   **web_framework**: web framework
    std::shared_ptr<string> bizType_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the middleware, database, or web service.
    // 
    // >  This parameter is deprecated. You can ignore it.
    std::shared_ptr<int64_t> name_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The PID.
    std::shared_ptr<string> pid_ = nullptr;
    // The port that the process monitors.
    std::shared_ptr<string> port_ = nullptr;
    // The timestamp when the process ends. Unit: milliseconds.
    std::shared_ptr<int64_t> processStartedEnd_ = nullptr;
    // The timestamp when the process starts. Unit: milliseconds.
    std::shared_ptr<int64_t> processStartedStart_ = nullptr;
    // The search condition, such as a server name or a server IP address.
    // 
    // >  Fuzzy match is supported.
    std::shared_ptr<string> remark_ = nullptr;
    // The name of the asset fingerprint that you want to query.
    std::shared_ptr<string> scaName_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> scaNamePattern_ = nullptr;
    // The version of the middleware, database, or web service.
    std::shared_ptr<string> scaVersion_ = nullptr;
    // The search keyword. You must specify this parameter based on the value of the **SearchItem** parameter.
    // 
    // *   If the **SearchItem** parameter is set to **name**, you must enter the name of an asset fingerprint.
    // 
    // *   If the **SearchItem** parameter is set to **type**, you must enter the type of an asset fingerprint. Valid values:
    // 
    //     *   **system_service**: system service
    //     *   **software_library**: software library
    //     *   **docker_component**: container component
    //     *   **database**: database
    //     *   **web_container**: web container
    //     *   **jar**: JAR package
    //     *   **web_framework**: web framework
    // 
    // >  You must specify both the **SearchItem** and **SearchInfo** parameters before you can query the asset fingerprints based on the specified name or type.
    std::shared_ptr<string> searchInfo_ = nullptr;
    // The keyword of the subquery. You must specify this parameter based on the value of the **SearchItemSub** parameter.
    // 
    // *   If the **SearchItemSub** parameter is set to **port**, you must enter a port number.
    // *   If the **SearchItemSub** parameter is set to **pid**, you must enter a process ID (PID).
    // *   If the **SearchItemSub** parameter is set to **version**, you must enter the version of a database, middleware, or web service.
    // *   If the **SearchItemSub** parameter is set to **user**, you must enter a username.
    // 
    // >  The subquery is used to search for data of a specified database, middleware, or web service.
    std::shared_ptr<string> searchInfoSub_ = nullptr;
    // The type of the search condition. Valid values:
    // 
    // *   **name**: the name of a database, middleware, or web service
    // *   **type**: the type of a database, middleware, or web service
    // 
    // >  You must specify both the **SearchItem** and **SearchInfo** parameters before you can query the asset fingerprints based on the specified name or type.
    std::shared_ptr<string> searchItem_ = nullptr;
    // The type of the subquery. Valid values:
    // 
    // *   **port**
    // *   **pid**
    // *   **version**
    // *   **user**
    std::shared_ptr<string> searchItemSub_ = nullptr;
    std::shared_ptr<bool> useNextToken_ = nullptr;
    // The user who runs the process.
    std::shared_ptr<string> user_ = nullptr;
    // The UUID of the server on which the middleware, database, or web service is run.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

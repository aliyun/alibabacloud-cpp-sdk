// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPROCDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyProcDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyProcDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProcTimeEnd, procTimeEnd_);
      DARABONBA_PTR_TO_JSON(ProcTimeStart, procTimeStart_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyProcDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProcTimeEnd, procTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ProcTimeStart, procTimeStart_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribePropertyProcDetailRequest() = default ;
    DescribePropertyProcDetailRequest(const DescribePropertyProcDetailRequest &) = default ;
    DescribePropertyProcDetailRequest(DescribePropertyProcDetailRequest &&) = default ;
    DescribePropertyProcDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyProcDetailRequest() = default ;
    DescribePropertyProcDetailRequest& operator=(const DescribePropertyProcDetailRequest &) = default ;
    DescribePropertyProcDetailRequest& operator=(DescribePropertyProcDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmdline_ == nullptr
        && return this->currentPage_ == nullptr && return this->extend_ == nullptr && return this->name_ == nullptr && return this->nextToken_ == nullptr && return this->pageSize_ == nullptr
        && return this->procTimeEnd_ == nullptr && return this->procTimeStart_ == nullptr && return this->remark_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr && return this->useNextToken_ == nullptr
        && return this->user_ == nullptr && return this->uuid_ == nullptr; };
    // cmdline Field Functions 
    bool hasCmdline() const { return this->cmdline_ != nullptr;};
    void deleteCmdline() { this->cmdline_ = nullptr;};
    inline string cmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
    inline DescribePropertyProcDetailRequest& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyProcDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribePropertyProcDetailRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribePropertyProcDetailRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePropertyProcDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyProcDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // procTimeEnd Field Functions 
    bool hasProcTimeEnd() const { return this->procTimeEnd_ != nullptr;};
    void deleteProcTimeEnd() { this->procTimeEnd_ = nullptr;};
    inline int64_t procTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(procTimeEnd_, 0L) };
    inline DescribePropertyProcDetailRequest& setProcTimeEnd(int64_t procTimeEnd) { DARABONBA_PTR_SET_VALUE(procTimeEnd_, procTimeEnd) };


    // procTimeStart Field Functions 
    bool hasProcTimeStart() const { return this->procTimeStart_ != nullptr;};
    void deleteProcTimeStart() { this->procTimeStart_ = nullptr;};
    inline int64_t procTimeStart() const { DARABONBA_PTR_GET_DEFAULT(procTimeStart_, 0L) };
    inline DescribePropertyProcDetailRequest& setProcTimeStart(int64_t procTimeStart) { DARABONBA_PTR_SET_VALUE(procTimeStart_, procTimeStart) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePropertyProcDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribePropertyProcDetailRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool useNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline DescribePropertyProcDetailRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyProcDetailRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyProcDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The startup parameter of the process.
    std::shared_ptr<string> cmdline_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether fuzzy search by process name is supported. If you want to use fuzzy search, set the parameter to 1. If you set the parameter to a different value or leave the parameter empty, fuzzy search is not supported.
    std::shared_ptr<string> extend_ = nullptr;
    // The name of the process.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The timestamp when the process ends. Unit: milliseconds.
    std::shared_ptr<int64_t> procTimeEnd_ = nullptr;
    // The timestamp when the process starts. Unit: milliseconds.
    std::shared_ptr<int64_t> procTimeStart_ = nullptr;
    // The name or IP address of the server.
    std::shared_ptr<string> remark_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the account ID.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    std::shared_ptr<bool> useNextToken_ = nullptr;
    // The user who runs the process.
    std::shared_ptr<string> user_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

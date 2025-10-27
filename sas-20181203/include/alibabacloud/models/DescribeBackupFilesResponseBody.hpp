// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupFilesResponseBodyBackupFiles.hpp>
#include <alibabacloud/models/DescribeBackupFilesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupFiles, backupFiles_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupFiles, backupFiles_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBackupFilesResponseBody() = default ;
    DescribeBackupFilesResponseBody(const DescribeBackupFilesResponseBody &) = default ;
    DescribeBackupFilesResponseBody(DescribeBackupFilesResponseBody &&) = default ;
    DescribeBackupFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupFilesResponseBody() = default ;
    DescribeBackupFilesResponseBody& operator=(const DescribeBackupFilesResponseBody &) = default ;
    DescribeBackupFilesResponseBody& operator=(DescribeBackupFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupFiles_ == nullptr
        && return this->pageInfo_ == nullptr && return this->requestId_ == nullptr; };
    // backupFiles Field Functions 
    bool hasBackupFiles() const { return this->backupFiles_ != nullptr;};
    void deleteBackupFiles() { this->backupFiles_ = nullptr;};
    inline const vector<DescribeBackupFilesResponseBodyBackupFiles> & backupFiles() const { DARABONBA_PTR_GET_CONST(backupFiles_, vector<DescribeBackupFilesResponseBodyBackupFiles>) };
    inline vector<DescribeBackupFilesResponseBodyBackupFiles> backupFiles() { DARABONBA_PTR_GET(backupFiles_, vector<DescribeBackupFilesResponseBodyBackupFiles>) };
    inline DescribeBackupFilesResponseBody& setBackupFiles(const vector<DescribeBackupFilesResponseBodyBackupFiles> & backupFiles) { DARABONBA_PTR_SET_VALUE(backupFiles_, backupFiles) };
    inline DescribeBackupFilesResponseBody& setBackupFiles(vector<DescribeBackupFilesResponseBodyBackupFiles> && backupFiles) { DARABONBA_PTR_SET_RVALUE(backupFiles_, backupFiles) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeBackupFilesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeBackupFilesResponseBodyPageInfo) };
    inline DescribeBackupFilesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeBackupFilesResponseBodyPageInfo) };
    inline DescribeBackupFilesResponseBody& setPageInfo(const DescribeBackupFilesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeBackupFilesResponseBody& setPageInfo(DescribeBackupFilesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the backup files returned.
    std::shared_ptr<vector<DescribeBackupFilesResponseBodyBackupFiles>> backupFiles_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeBackupFilesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

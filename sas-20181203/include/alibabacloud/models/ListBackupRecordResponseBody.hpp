// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBackupRecordResponseBodyBackupRecordList.hpp>
#include <alibabacloud/models/ListBackupRecordResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBackupRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupRecordList, backupRecordList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupRecordList, backupRecordList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBackupRecordResponseBody() = default ;
    ListBackupRecordResponseBody(const ListBackupRecordResponseBody &) = default ;
    ListBackupRecordResponseBody(ListBackupRecordResponseBody &&) = default ;
    ListBackupRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupRecordResponseBody() = default ;
    ListBackupRecordResponseBody& operator=(const ListBackupRecordResponseBody &) = default ;
    ListBackupRecordResponseBody& operator=(ListBackupRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupRecordList_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // backupRecordList Field Functions 
    bool hasBackupRecordList() const { return this->backupRecordList_ != nullptr;};
    void deleteBackupRecordList() { this->backupRecordList_ = nullptr;};
    inline const vector<ListBackupRecordResponseBodyBackupRecordList> & backupRecordList() const { DARABONBA_PTR_GET_CONST(backupRecordList_, vector<ListBackupRecordResponseBodyBackupRecordList>) };
    inline vector<ListBackupRecordResponseBodyBackupRecordList> backupRecordList() { DARABONBA_PTR_GET(backupRecordList_, vector<ListBackupRecordResponseBodyBackupRecordList>) };
    inline ListBackupRecordResponseBody& setBackupRecordList(const vector<ListBackupRecordResponseBodyBackupRecordList> & backupRecordList) { DARABONBA_PTR_SET_VALUE(backupRecordList_, backupRecordList) };
    inline ListBackupRecordResponseBody& setBackupRecordList(vector<ListBackupRecordResponseBodyBackupRecordList> && backupRecordList) { DARABONBA_PTR_SET_RVALUE(backupRecordList_, backupRecordList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListBackupRecordResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListBackupRecordResponseBodyPageInfo) };
    inline ListBackupRecordResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListBackupRecordResponseBodyPageInfo) };
    inline ListBackupRecordResponseBody& setPageInfo(const ListBackupRecordResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListBackupRecordResponseBody& setPageInfo(ListBackupRecordResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBackupRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the backup record.
    std::shared_ptr<vector<ListBackupRecordResponseBodyBackupRecordList>> backupRecordList_ = nullptr;
    // The pagination information.
    std::shared_ptr<ListBackupRecordResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBACKUPDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBACKUPDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBackupDataResponseBodyBackupDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListBackupDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBackupDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupDataList, backupDataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBackupDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupDataList, backupDataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBackupDataResponseBody() = default ;
    ListBackupDataResponseBody(const ListBackupDataResponseBody &) = default ;
    ListBackupDataResponseBody(ListBackupDataResponseBody &&) = default ;
    ListBackupDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBackupDataResponseBody() = default ;
    ListBackupDataResponseBody& operator=(const ListBackupDataResponseBody &) = default ;
    ListBackupDataResponseBody& operator=(ListBackupDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupDataList_ == nullptr
        && return this->requestId_ == nullptr; };
    // backupDataList Field Functions 
    bool hasBackupDataList() const { return this->backupDataList_ != nullptr;};
    void deleteBackupDataList() { this->backupDataList_ = nullptr;};
    inline const vector<ListBackupDataResponseBodyBackupDataList> & backupDataList() const { DARABONBA_PTR_GET_CONST(backupDataList_, vector<ListBackupDataResponseBodyBackupDataList>) };
    inline vector<ListBackupDataResponseBodyBackupDataList> backupDataList() { DARABONBA_PTR_GET(backupDataList_, vector<ListBackupDataResponseBodyBackupDataList>) };
    inline ListBackupDataResponseBody& setBackupDataList(const vector<ListBackupDataResponseBodyBackupDataList> & backupDataList) { DARABONBA_PTR_SET_VALUE(backupDataList_, backupDataList) };
    inline ListBackupDataResponseBody& setBackupDataList(vector<ListBackupDataResponseBodyBackupDataList> && backupDataList) { DARABONBA_PTR_SET_RVALUE(backupDataList_, backupDataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBackupDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The backups.
    std::shared_ptr<vector<ListBackupDataResponseBodyBackupDataList>> backupDataList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif

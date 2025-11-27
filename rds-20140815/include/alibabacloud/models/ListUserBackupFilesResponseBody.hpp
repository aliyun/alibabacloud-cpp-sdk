// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERBACKUPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserBackupFilesResponseBodyRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ListUserBackupFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserBackupFilesResponseBody() = default ;
    ListUserBackupFilesResponseBody(const ListUserBackupFilesResponseBody &) = default ;
    ListUserBackupFilesResponseBody(ListUserBackupFilesResponseBody &&) = default ;
    ListUserBackupFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserBackupFilesResponseBody() = default ;
    ListUserBackupFilesResponseBody& operator=(const ListUserBackupFilesResponseBody &) = default ;
    ListUserBackupFilesResponseBody& operator=(ListUserBackupFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->records_ == nullptr
        && return this->requestId_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ListUserBackupFilesResponseBodyRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<ListUserBackupFilesResponseBodyRecords>) };
    inline vector<ListUserBackupFilesResponseBodyRecords> records() { DARABONBA_PTR_GET(records_, vector<ListUserBackupFilesResponseBodyRecords>) };
    inline ListUserBackupFilesResponseBody& setRecords(const vector<ListUserBackupFilesResponseBodyRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListUserBackupFilesResponseBody& setRecords(vector<ListUserBackupFilesResponseBodyRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the full backup files.
    std::shared_ptr<vector<ListUserBackupFilesResponseBodyRecords>> records_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif

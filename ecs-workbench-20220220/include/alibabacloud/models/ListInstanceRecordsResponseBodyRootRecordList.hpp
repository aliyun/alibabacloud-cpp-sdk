// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERECORDSRESPONSEBODYROOTRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERECORDSRESPONSEBODYROOTRECORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class ListInstanceRecordsResponseBodyRootRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRecordsResponseBodyRootRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceRecordUrl, instanceRecordUrl_);
      DARABONBA_PTR_TO_JSON(RecordDurationMillis, recordDurationMillis_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TerminalSessionToken, terminalSessionToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRecordsResponseBodyRootRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceRecordUrl, instanceRecordUrl_);
      DARABONBA_PTR_FROM_JSON(RecordDurationMillis, recordDurationMillis_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TerminalSessionToken, terminalSessionToken_);
    };
    ListInstanceRecordsResponseBodyRootRecordList() = default ;
    ListInstanceRecordsResponseBodyRootRecordList(const ListInstanceRecordsResponseBodyRootRecordList &) = default ;
    ListInstanceRecordsResponseBodyRootRecordList(ListInstanceRecordsResponseBodyRootRecordList &&) = default ;
    ListInstanceRecordsResponseBodyRootRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRecordsResponseBodyRootRecordList() = default ;
    ListInstanceRecordsResponseBodyRootRecordList& operator=(const ListInstanceRecordsResponseBodyRootRecordList &) = default ;
    ListInstanceRecordsResponseBodyRootRecordList& operator=(ListInstanceRecordsResponseBodyRootRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->expireTime_ != nullptr && this->gmtCreate_ != nullptr && this->instanceId_ != nullptr && this->instanceRecordUrl_ != nullptr && this->recordDurationMillis_ != nullptr
        && this->status_ != nullptr && this->terminalSessionToken_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListInstanceRecordsResponseBodyRootRecordList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListInstanceRecordsResponseBodyRootRecordList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListInstanceRecordsResponseBodyRootRecordList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceRecordsResponseBodyRootRecordList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceRecordUrl Field Functions 
    bool hasInstanceRecordUrl() const { return this->instanceRecordUrl_ != nullptr;};
    void deleteInstanceRecordUrl() { this->instanceRecordUrl_ = nullptr;};
    inline string instanceRecordUrl() const { DARABONBA_PTR_GET_DEFAULT(instanceRecordUrl_, "") };
    inline ListInstanceRecordsResponseBodyRootRecordList& setInstanceRecordUrl(string instanceRecordUrl) { DARABONBA_PTR_SET_VALUE(instanceRecordUrl_, instanceRecordUrl) };


    // recordDurationMillis Field Functions 
    bool hasRecordDurationMillis() const { return this->recordDurationMillis_ != nullptr;};
    void deleteRecordDurationMillis() { this->recordDurationMillis_ = nullptr;};
    inline int64_t recordDurationMillis() const { DARABONBA_PTR_GET_DEFAULT(recordDurationMillis_, 0L) };
    inline ListInstanceRecordsResponseBodyRootRecordList& setRecordDurationMillis(int64_t recordDurationMillis) { DARABONBA_PTR_SET_VALUE(recordDurationMillis_, recordDurationMillis) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceRecordsResponseBodyRootRecordList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // terminalSessionToken Field Functions 
    bool hasTerminalSessionToken() const { return this->terminalSessionToken_ != nullptr;};
    void deleteTerminalSessionToken() { this->terminalSessionToken_ = nullptr;};
    inline string terminalSessionToken() const { DARABONBA_PTR_GET_DEFAULT(terminalSessionToken_, "") };
    inline ListInstanceRecordsResponseBodyRootRecordList& setTerminalSessionToken(string terminalSessionToken) { DARABONBA_PTR_SET_VALUE(terminalSessionToken_, terminalSessionToken) };


  protected:
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceRecordUrl_ = nullptr;
    std::shared_ptr<int64_t> recordDurationMillis_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> terminalSessionToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif

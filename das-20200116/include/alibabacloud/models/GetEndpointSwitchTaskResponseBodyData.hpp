// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENDPOINTSWITCHTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETENDPOINTSWITCHTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetEndpointSwitchTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEndpointSwitchTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DbLinkId, dbLinkId_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(OriUuid, oriUuid_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetEndpointSwitchTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DbLinkId, dbLinkId_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(OriUuid, oriUuid_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetEndpointSwitchTaskResponseBodyData() = default ;
    GetEndpointSwitchTaskResponseBodyData(const GetEndpointSwitchTaskResponseBodyData &) = default ;
    GetEndpointSwitchTaskResponseBodyData(GetEndpointSwitchTaskResponseBodyData &&) = default ;
    GetEndpointSwitchTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEndpointSwitchTaskResponseBodyData() = default ;
    GetEndpointSwitchTaskResponseBodyData& operator=(const GetEndpointSwitchTaskResponseBodyData &) = default ;
    GetEndpointSwitchTaskResponseBodyData& operator=(GetEndpointSwitchTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->dbLinkId_ != nullptr && this->errMsg_ != nullptr && this->oriUuid_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr
        && this->uuid_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetEndpointSwitchTaskResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // dbLinkId Field Functions 
    bool hasDbLinkId() const { return this->dbLinkId_ != nullptr;};
    void deleteDbLinkId() { this->dbLinkId_ = nullptr;};
    inline int64_t dbLinkId() const { DARABONBA_PTR_GET_DEFAULT(dbLinkId_, 0L) };
    inline GetEndpointSwitchTaskResponseBodyData& setDbLinkId(int64_t dbLinkId) { DARABONBA_PTR_SET_VALUE(dbLinkId_, dbLinkId) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline GetEndpointSwitchTaskResponseBodyData& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // oriUuid Field Functions 
    bool hasOriUuid() const { return this->oriUuid_ != nullptr;};
    void deleteOriUuid() { this->oriUuid_ = nullptr;};
    inline string oriUuid() const { DARABONBA_PTR_GET_DEFAULT(oriUuid_, "") };
    inline GetEndpointSwitchTaskResponseBodyData& setOriUuid(string oriUuid) { DARABONBA_PTR_SET_VALUE(oriUuid_, oriUuid) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEndpointSwitchTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetEndpointSwitchTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetEndpointSwitchTaskResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<int64_t> dbLinkId_ = nullptr;
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<string> oriUuid_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKINFOHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKINFOHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskInfoHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskInfoHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginCreateTime, beginCreateTime_);
      DARABONBA_PTR_TO_JSON(CreateTimeCursor, createTimeCursor_);
      DARABONBA_PTR_TO_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskNoCursor, taskNoCursor_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskInfoHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginCreateTime, beginCreateTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimeCursor, createTimeCursor_);
      DARABONBA_PTR_FROM_JSON(EndCreateTime, endCreateTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskNoCursor, taskNoCursor_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryTaskInfoHistoryRequest() = default ;
    QueryTaskInfoHistoryRequest(const QueryTaskInfoHistoryRequest &) = default ;
    QueryTaskInfoHistoryRequest(QueryTaskInfoHistoryRequest &&) = default ;
    QueryTaskInfoHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskInfoHistoryRequest() = default ;
    QueryTaskInfoHistoryRequest& operator=(const QueryTaskInfoHistoryRequest &) = default ;
    QueryTaskInfoHistoryRequest& operator=(QueryTaskInfoHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginCreateTime_ == nullptr
        && return this->createTimeCursor_ == nullptr && return this->endCreateTime_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->taskNoCursor_ == nullptr
        && return this->userClientIp_ == nullptr; };
    // beginCreateTime Field Functions 
    bool hasBeginCreateTime() const { return this->beginCreateTime_ != nullptr;};
    void deleteBeginCreateTime() { this->beginCreateTime_ = nullptr;};
    inline int64_t beginCreateTime() const { DARABONBA_PTR_GET_DEFAULT(beginCreateTime_, 0L) };
    inline QueryTaskInfoHistoryRequest& setBeginCreateTime(int64_t beginCreateTime) { DARABONBA_PTR_SET_VALUE(beginCreateTime_, beginCreateTime) };


    // createTimeCursor Field Functions 
    bool hasCreateTimeCursor() const { return this->createTimeCursor_ != nullptr;};
    void deleteCreateTimeCursor() { this->createTimeCursor_ = nullptr;};
    inline int64_t createTimeCursor() const { DARABONBA_PTR_GET_DEFAULT(createTimeCursor_, 0L) };
    inline QueryTaskInfoHistoryRequest& setCreateTimeCursor(int64_t createTimeCursor) { DARABONBA_PTR_SET_VALUE(createTimeCursor_, createTimeCursor) };


    // endCreateTime Field Functions 
    bool hasEndCreateTime() const { return this->endCreateTime_ != nullptr;};
    void deleteEndCreateTime() { this->endCreateTime_ = nullptr;};
    inline int64_t endCreateTime() const { DARABONBA_PTR_GET_DEFAULT(endCreateTime_, 0L) };
    inline QueryTaskInfoHistoryRequest& setEndCreateTime(int64_t endCreateTime) { DARABONBA_PTR_SET_VALUE(endCreateTime_, endCreateTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryTaskInfoHistoryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskInfoHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskNoCursor Field Functions 
    bool hasTaskNoCursor() const { return this->taskNoCursor_ != nullptr;};
    void deleteTaskNoCursor() { this->taskNoCursor_ = nullptr;};
    inline string taskNoCursor() const { DARABONBA_PTR_GET_DEFAULT(taskNoCursor_, "") };
    inline QueryTaskInfoHistoryRequest& setTaskNoCursor(string taskNoCursor) { DARABONBA_PTR_SET_VALUE(taskNoCursor_, taskNoCursor) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryTaskInfoHistoryRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<int64_t> beginCreateTime_ = nullptr;
    std::shared_ptr<int64_t> createTimeCursor_ = nullptr;
    std::shared_ptr<int64_t> endCreateTime_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> taskNoCursor_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif

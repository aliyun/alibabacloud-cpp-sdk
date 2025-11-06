// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTASKDETAILHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTASKDETAILHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTaskDetailHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTaskDetailHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainNameCursor, domainNameCursor_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskDetailNoCursor, taskDetailNoCursor_);
      DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTaskDetailHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainNameCursor, domainNameCursor_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskDetailNoCursor, taskDetailNoCursor_);
      DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryTaskDetailHistoryRequest() = default ;
    QueryTaskDetailHistoryRequest(const QueryTaskDetailHistoryRequest &) = default ;
    QueryTaskDetailHistoryRequest(QueryTaskDetailHistoryRequest &&) = default ;
    QueryTaskDetailHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTaskDetailHistoryRequest() = default ;
    QueryTaskDetailHistoryRequest& operator=(const QueryTaskDetailHistoryRequest &) = default ;
    QueryTaskDetailHistoryRequest& operator=(QueryTaskDetailHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->domainNameCursor_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->taskDetailNoCursor_ == nullptr && return this->taskNo_ == nullptr
        && return this->taskStatus_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryTaskDetailHistoryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainNameCursor Field Functions 
    bool hasDomainNameCursor() const { return this->domainNameCursor_ != nullptr;};
    void deleteDomainNameCursor() { this->domainNameCursor_ = nullptr;};
    inline string domainNameCursor() const { DARABONBA_PTR_GET_DEFAULT(domainNameCursor_, "") };
    inline QueryTaskDetailHistoryRequest& setDomainNameCursor(string domainNameCursor) { DARABONBA_PTR_SET_VALUE(domainNameCursor_, domainNameCursor) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryTaskDetailHistoryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryTaskDetailHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskDetailNoCursor Field Functions 
    bool hasTaskDetailNoCursor() const { return this->taskDetailNoCursor_ != nullptr;};
    void deleteTaskDetailNoCursor() { this->taskDetailNoCursor_ = nullptr;};
    inline string taskDetailNoCursor() const { DARABONBA_PTR_GET_DEFAULT(taskDetailNoCursor_, "") };
    inline QueryTaskDetailHistoryRequest& setTaskDetailNoCursor(string taskDetailNoCursor) { DARABONBA_PTR_SET_VALUE(taskDetailNoCursor_, taskDetailNoCursor) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string taskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline QueryTaskDetailHistoryRequest& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline QueryTaskDetailHistoryRequest& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryTaskDetailHistoryRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainNameCursor_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> taskDetailNoCursor_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskNo_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif

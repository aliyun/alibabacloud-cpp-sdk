// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POLLTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_POLLTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class PollTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PollTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskNo, taskNo_);
      DARABONBA_PTR_TO_JSON(TaskResultStatus, taskResultStatus_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, PollTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskNo, taskNo_);
      DARABONBA_PTR_FROM_JSON(TaskResultStatus, taskResultStatus_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    PollTaskResultRequest() = default ;
    PollTaskResultRequest(const PollTaskResultRequest &) = default ;
    PollTaskResultRequest(PollTaskResultRequest &&) = default ;
    PollTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PollTaskResultRequest() = default ;
    PollTaskResultRequest& operator=(const PollTaskResultRequest &) = default ;
    PollTaskResultRequest& operator=(PollTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->taskNo_ == nullptr
        && this->taskResultStatus_ == nullptr && this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline PollTaskResultRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline PollTaskResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline PollTaskResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline PollTaskResultRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PollTaskResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskNo Field Functions 
    bool hasTaskNo() const { return this->taskNo_ != nullptr;};
    void deleteTaskNo() { this->taskNo_ = nullptr;};
    inline string getTaskNo() const { DARABONBA_PTR_GET_DEFAULT(taskNo_, "") };
    inline PollTaskResultRequest& setTaskNo(string taskNo) { DARABONBA_PTR_SET_VALUE(taskNo_, taskNo) };


    // taskResultStatus Field Functions 
    bool hasTaskResultStatus() const { return this->taskResultStatus_ != nullptr;};
    void deleteTaskResultStatus() { this->taskResultStatus_ = nullptr;};
    inline int32_t getTaskResultStatus() const { DARABONBA_PTR_GET_DEFAULT(taskResultStatus_, 0) };
    inline PollTaskResultRequest& setTaskResultStatus(int32_t taskResultStatus) { DARABONBA_PTR_SET_VALUE(taskResultStatus_, taskResultStatus) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline PollTaskResultRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> domainName_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNum_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> taskNo_ {};
    shared_ptr<int32_t> taskResultStatus_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEBATCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ExecuteBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(OutResult, outResult_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(TaskInformationList, taskInformationList_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(OutResult, outResult_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(TaskInformationList, taskInformationList_);
    };
    ExecuteBatchTaskRequest() = default ;
    ExecuteBatchTaskRequest(const ExecuteBatchTaskRequest &) = default ;
    ExecuteBatchTaskRequest(ExecuteBatchTaskRequest &&) = default ;
    ExecuteBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteBatchTaskRequest() = default ;
    ExecuteBatchTaskRequest& operator=(const ExecuteBatchTaskRequest &) = default ;
    ExecuteBatchTaskRequest& operator=(ExecuteBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->outResult_ != nullptr && this->remark_ != nullptr && this->systemToken_ != nullptr && this->taskInformationList_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ExecuteBatchTaskRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // outResult Field Functions 
    bool hasOutResult() const { return this->outResult_ != nullptr;};
    void deleteOutResult() { this->outResult_ = nullptr;};
    inline string outResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
    inline ExecuteBatchTaskRequest& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ExecuteBatchTaskRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline ExecuteBatchTaskRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // taskInformationList Field Functions 
    bool hasTaskInformationList() const { return this->taskInformationList_ != nullptr;};
    void deleteTaskInformationList() { this->taskInformationList_ = nullptr;};
    inline string taskInformationList() const { DARABONBA_PTR_GET_DEFAULT(taskInformationList_, "") };
    inline ExecuteBatchTaskRequest& setTaskInformationList(string taskInformationList) { DARABONBA_PTR_SET_VALUE(taskInformationList_, taskInformationList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outResult_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskInformationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

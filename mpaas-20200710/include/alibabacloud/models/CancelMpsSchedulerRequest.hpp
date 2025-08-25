// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELMPSSCHEDULERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELMPSSCHEDULERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class CancelMpsSchedulerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelMpsSchedulerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UniqueIds, uniqueIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelMpsSchedulerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UniqueIds, uniqueIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CancelMpsSchedulerRequest() = default ;
    CancelMpsSchedulerRequest(const CancelMpsSchedulerRequest &) = default ;
    CancelMpsSchedulerRequest(CancelMpsSchedulerRequest &&) = default ;
    CancelMpsSchedulerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelMpsSchedulerRequest() = default ;
    CancelMpsSchedulerRequest& operator=(const CancelMpsSchedulerRequest &) = default ;
    CancelMpsSchedulerRequest& operator=(CancelMpsSchedulerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->type_ != nullptr && this->uniqueIds_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CancelMpsSchedulerRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CancelMpsSchedulerRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uniqueIds Field Functions 
    bool hasUniqueIds() const { return this->uniqueIds_ != nullptr;};
    void deleteUniqueIds() { this->uniqueIds_ = nullptr;};
    inline string uniqueIds() const { DARABONBA_PTR_GET_DEFAULT(uniqueIds_, "") };
    inline CancelMpsSchedulerRequest& setUniqueIds(string uniqueIds) { DARABONBA_PTR_SET_VALUE(uniqueIds_, uniqueIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CancelMpsSchedulerRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uniqueIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGEREXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGEREXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class TriggerExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    TriggerExecutionRequest() = default ;
    TriggerExecutionRequest(const TriggerExecutionRequest &) = default ;
    TriggerExecutionRequest(TriggerExecutionRequest &&) = default ;
    TriggerExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerExecutionRequest() = default ;
    TriggerExecutionRequest& operator=(const TriggerExecutionRequest &) = default ;
    TriggerExecutionRequest& operator=(TriggerExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->content_ == nullptr && this->executionId_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline TriggerExecutionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline TriggerExecutionRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline TriggerExecutionRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline TriggerExecutionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TriggerExecutionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The message body to be sent to the trigger task.
    shared_ptr<string> content_ {};
    // The ID of the event-, alert-, or timer-triggered execution.
    // 
    // This parameter is required.
    shared_ptr<string> executionId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The type of the trigger. Valid values:
    // 
    // *   Event
    // *   Alarm
    // *   Timer
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif

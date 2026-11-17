// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKSIGNTASKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKSIGNTASKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class GetWatermarkSignTaskResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarkSignTaskResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarkSignTaskResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetWatermarkSignTaskResultRequest() = default ;
    GetWatermarkSignTaskResultRequest(const GetWatermarkSignTaskResultRequest &) = default ;
    GetWatermarkSignTaskResultRequest(GetWatermarkSignTaskResultRequest &&) = default ;
    GetWatermarkSignTaskResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarkSignTaskResultRequest() = default ;
    GetWatermarkSignTaskResultRequest& operator=(const GetWatermarkSignTaskResultRequest &) = default ;
    GetWatermarkSignTaskResultRequest& operator=(GetWatermarkSignTaskResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->taskId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GetWatermarkSignTaskResultRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetWatermarkSignTaskResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The client token.
    shared_ptr<string> clientToken_ {};
    // The ID of the combined task returned by the CreateWatermarkSignTask operation.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif

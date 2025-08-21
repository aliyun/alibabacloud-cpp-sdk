// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOAD_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUESTPAYLOAD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateScheduleTaskRequestPayloadActionDTOs.hpp>
#include <alibabacloud/models/CreateScheduleTaskRequestPayloadScheduleDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateScheduleTaskRequestPayload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleTaskRequestPayload& obj) { 
      DARABONBA_PTR_TO_JSON(ActionDTOs, actionDTOs_);
      DARABONBA_PTR_TO_JSON(IdempotentId, idempotentId_);
      DARABONBA_PTR_TO_JSON(ScheduleDTO, scheduleDTO_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleTaskRequestPayload& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionDTOs, actionDTOs_);
      DARABONBA_PTR_FROM_JSON(IdempotentId, idempotentId_);
      DARABONBA_PTR_FROM_JSON(ScheduleDTO, scheduleDTO_);
    };
    CreateScheduleTaskRequestPayload() = default ;
    CreateScheduleTaskRequestPayload(const CreateScheduleTaskRequestPayload &) = default ;
    CreateScheduleTaskRequestPayload(CreateScheduleTaskRequestPayload &&) = default ;
    CreateScheduleTaskRequestPayload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleTaskRequestPayload() = default ;
    CreateScheduleTaskRequestPayload& operator=(const CreateScheduleTaskRequestPayload &) = default ;
    CreateScheduleTaskRequestPayload& operator=(CreateScheduleTaskRequestPayload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionDTOs_ != nullptr
        && this->idempotentId_ != nullptr && this->scheduleDTO_ != nullptr; };
    // actionDTOs Field Functions 
    bool hasActionDTOs() const { return this->actionDTOs_ != nullptr;};
    void deleteActionDTOs() { this->actionDTOs_ = nullptr;};
    inline const vector<Models::CreateScheduleTaskRequestPayloadActionDTOs> & actionDTOs() const { DARABONBA_PTR_GET_CONST(actionDTOs_, vector<Models::CreateScheduleTaskRequestPayloadActionDTOs>) };
    inline vector<Models::CreateScheduleTaskRequestPayloadActionDTOs> actionDTOs() { DARABONBA_PTR_GET(actionDTOs_, vector<Models::CreateScheduleTaskRequestPayloadActionDTOs>) };
    inline CreateScheduleTaskRequestPayload& setActionDTOs(const vector<Models::CreateScheduleTaskRequestPayloadActionDTOs> & actionDTOs) { DARABONBA_PTR_SET_VALUE(actionDTOs_, actionDTOs) };
    inline CreateScheduleTaskRequestPayload& setActionDTOs(vector<Models::CreateScheduleTaskRequestPayloadActionDTOs> && actionDTOs) { DARABONBA_PTR_SET_RVALUE(actionDTOs_, actionDTOs) };


    // idempotentId Field Functions 
    bool hasIdempotentId() const { return this->idempotentId_ != nullptr;};
    void deleteIdempotentId() { this->idempotentId_ = nullptr;};
    inline string idempotentId() const { DARABONBA_PTR_GET_DEFAULT(idempotentId_, "") };
    inline CreateScheduleTaskRequestPayload& setIdempotentId(string idempotentId) { DARABONBA_PTR_SET_VALUE(idempotentId_, idempotentId) };


    // scheduleDTO Field Functions 
    bool hasScheduleDTO() const { return this->scheduleDTO_ != nullptr;};
    void deleteScheduleDTO() { this->scheduleDTO_ = nullptr;};
    inline const Models::CreateScheduleTaskRequestPayloadScheduleDTO & scheduleDTO() const { DARABONBA_PTR_GET_CONST(scheduleDTO_, Models::CreateScheduleTaskRequestPayloadScheduleDTO) };
    inline Models::CreateScheduleTaskRequestPayloadScheduleDTO scheduleDTO() { DARABONBA_PTR_GET(scheduleDTO_, Models::CreateScheduleTaskRequestPayloadScheduleDTO) };
    inline CreateScheduleTaskRequestPayload& setScheduleDTO(const Models::CreateScheduleTaskRequestPayloadScheduleDTO & scheduleDTO) { DARABONBA_PTR_SET_VALUE(scheduleDTO_, scheduleDTO) };
    inline CreateScheduleTaskRequestPayload& setScheduleDTO(Models::CreateScheduleTaskRequestPayloadScheduleDTO && scheduleDTO) { DARABONBA_PTR_SET_RVALUE(scheduleDTO_, scheduleDTO) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateScheduleTaskRequestPayloadActionDTOs>> actionDTOs_ = nullptr;
    std::shared_ptr<string> idempotentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::CreateScheduleTaskRequestPayloadScheduleDTO> scheduleDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOORDINATIONTICKETRESPONSEBODYCOORDINATETICKETMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETCOORDINATIONTICKETRESPONSEBODYCOORDINATETICKETMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Metaspace20221014
{
namespace Models
{
  class GetCoordinationTicketResponseBodyCoordinateTicketModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCoordinationTicketResponseBodyCoordinateTicketModel& obj) { 
      DARABONBA_PTR_TO_JSON(CoId, coId_);
      DARABONBA_PTR_TO_JSON(CoordinateTicket, coordinateTicket_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetCoordinationTicketResponseBodyCoordinateTicketModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CoId, coId_);
      DARABONBA_PTR_FROM_JSON(CoordinateTicket, coordinateTicket_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    GetCoordinationTicketResponseBodyCoordinateTicketModel() = default ;
    GetCoordinationTicketResponseBodyCoordinateTicketModel(const GetCoordinationTicketResponseBodyCoordinateTicketModel &) = default ;
    GetCoordinationTicketResponseBodyCoordinateTicketModel(GetCoordinationTicketResponseBodyCoordinateTicketModel &&) = default ;
    GetCoordinationTicketResponseBodyCoordinateTicketModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCoordinationTicketResponseBodyCoordinateTicketModel() = default ;
    GetCoordinationTicketResponseBodyCoordinateTicketModel& operator=(const GetCoordinationTicketResponseBodyCoordinateTicketModel &) = default ;
    GetCoordinationTicketResponseBodyCoordinateTicketModel& operator=(GetCoordinationTicketResponseBodyCoordinateTicketModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coId_ != nullptr
        && this->coordinateTicket_ != nullptr && this->taskId_ != nullptr && this->taskStatus_ != nullptr; };
    // coId Field Functions 
    bool hasCoId() const { return this->coId_ != nullptr;};
    void deleteCoId() { this->coId_ = nullptr;};
    inline string coId() const { DARABONBA_PTR_GET_DEFAULT(coId_, "") };
    inline GetCoordinationTicketResponseBodyCoordinateTicketModel& setCoId(string coId) { DARABONBA_PTR_SET_VALUE(coId_, coId) };


    // coordinateTicket Field Functions 
    bool hasCoordinateTicket() const { return this->coordinateTicket_ != nullptr;};
    void deleteCoordinateTicket() { this->coordinateTicket_ = nullptr;};
    inline string coordinateTicket() const { DARABONBA_PTR_GET_DEFAULT(coordinateTicket_, "") };
    inline GetCoordinationTicketResponseBodyCoordinateTicketModel& setCoordinateTicket(string coordinateTicket) { DARABONBA_PTR_SET_VALUE(coordinateTicket_, coordinateTicket) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCoordinationTicketResponseBodyCoordinateTicketModel& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetCoordinationTicketResponseBodyCoordinateTicketModel& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    std::shared_ptr<string> coId_ = nullptr;
    std::shared_ptr<string> coordinateTicket_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Metaspace20221014
#endif

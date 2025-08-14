// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUPLEXDECISIONREQUESTDIALOGCONTEXTHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_DUPLEXDECISIONREQUESTDIALOGCONTEXTHISTORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class DuplexDecisionRequestDialogContextHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DuplexDecisionRequestDialogContextHistories& obj) { 
      DARABONBA_PTR_TO_JSON(Robot, robot_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DuplexDecisionRequestDialogContextHistories& obj) { 
      DARABONBA_PTR_FROM_JSON(Robot, robot_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DuplexDecisionRequestDialogContextHistories() = default ;
    DuplexDecisionRequestDialogContextHistories(const DuplexDecisionRequestDialogContextHistories &) = default ;
    DuplexDecisionRequestDialogContextHistories(DuplexDecisionRequestDialogContextHistories &&) = default ;
    DuplexDecisionRequestDialogContextHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DuplexDecisionRequestDialogContextHistories() = default ;
    DuplexDecisionRequestDialogContextHistories& operator=(const DuplexDecisionRequestDialogContextHistories &) = default ;
    DuplexDecisionRequestDialogContextHistories& operator=(DuplexDecisionRequestDialogContextHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->robot_ != nullptr
        && this->user_ != nullptr; };
    // robot Field Functions 
    bool hasRobot() const { return this->robot_ != nullptr;};
    void deleteRobot() { this->robot_ = nullptr;};
    inline string robot() const { DARABONBA_PTR_GET_DEFAULT(robot_, "") };
    inline DuplexDecisionRequestDialogContextHistories& setRobot(string robot) { DARABONBA_PTR_SET_VALUE(robot_, robot) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DuplexDecisionRequestDialogContextHistories& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    std::shared_ptr<string> robot_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif

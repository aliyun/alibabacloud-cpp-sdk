// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEPERSONALNUMBERSFROMUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEPERSONALNUMBERSFROMUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RemovePersonalNumbersFromUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemovePersonalNumbersFromUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RemovePersonalNumbersFromUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RemovePersonalNumbersFromUserRequest() = default ;
    RemovePersonalNumbersFromUserRequest(const RemovePersonalNumbersFromUserRequest &) = default ;
    RemovePersonalNumbersFromUserRequest(RemovePersonalNumbersFromUserRequest &&) = default ;
    RemovePersonalNumbersFromUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemovePersonalNumbersFromUserRequest() = default ;
    RemovePersonalNumbersFromUserRequest& operator=(const RemovePersonalNumbersFromUserRequest &) = default ;
    RemovePersonalNumbersFromUserRequest& operator=(RemovePersonalNumbersFromUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->numberList_ != nullptr && this->userId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemovePersonalNumbersFromUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline string numberList() const { DARABONBA_PTR_GET_DEFAULT(numberList_, "") };
    inline RemovePersonalNumbersFromUserRequest& setNumberList(string numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RemovePersonalNumbersFromUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> numberList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

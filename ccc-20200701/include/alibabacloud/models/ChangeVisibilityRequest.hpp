// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEVISIBILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEVISIBILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ChangeVisibilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeVisibilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Invisible, invisible_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeVisibilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Invisible, invisible_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ChangeVisibilityRequest() = default ;
    ChangeVisibilityRequest(const ChangeVisibilityRequest &) = default ;
    ChangeVisibilityRequest(ChangeVisibilityRequest &&) = default ;
    ChangeVisibilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeVisibilityRequest() = default ;
    ChangeVisibilityRequest& operator=(const ChangeVisibilityRequest &) = default ;
    ChangeVisibilityRequest& operator=(ChangeVisibilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->invisible_ != nullptr && this->userId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ChangeVisibilityRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invisible Field Functions 
    bool hasInvisible() const { return this->invisible_ != nullptr;};
    void deleteInvisible() { this->invisible_ = nullptr;};
    inline bool invisible() const { DARABONBA_PTR_GET_DEFAULT(invisible_, false) };
    inline ChangeVisibilityRequest& setInvisible(bool invisible) { DARABONBA_PTR_SET_VALUE(invisible_, invisible) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ChangeVisibilityRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> invisible_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCENEGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCENEGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteScenegroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScenegroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScenegroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    DeleteScenegroupMemberRequest() = default ;
    DeleteScenegroupMemberRequest(const DeleteScenegroupMemberRequest &) = default ;
    DeleteScenegroupMemberRequest(DeleteScenegroupMemberRequest &&) = default ;
    DeleteScenegroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScenegroupMemberRequest() = default ;
    DeleteScenegroupMemberRequest& operator=(const DeleteScenegroupMemberRequest &) = default ;
    DeleteScenegroupMemberRequest& operator=(DeleteScenegroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openConversationId_ == nullptr
        && this->userIds_ == nullptr; };
    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string getOpenConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline DeleteScenegroupMemberRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string getUserIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline DeleteScenegroupMemberRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


  protected:
    // This parameter is required.
    shared_ptr<string> openConversationId_ {};
    // This parameter is required.
    shared_ptr<string> userIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSERISGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSERISGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CheckUserIsGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUserIsGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUserIsGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
    };
    CheckUserIsGroupMemberRequest() = default ;
    CheckUserIsGroupMemberRequest(const CheckUserIsGroupMemberRequest &) = default ;
    CheckUserIsGroupMemberRequest(CheckUserIsGroupMemberRequest &&) = default ;
    CheckUserIsGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUserIsGroupMemberRequest() = default ;
    CheckUserIsGroupMemberRequest& operator=(const CheckUserIsGroupMemberRequest &) = default ;
    CheckUserIsGroupMemberRequest& operator=(CheckUserIsGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openConversationId_ == nullptr; };
    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string openConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline CheckUserIsGroupMemberRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


  protected:
    std::shared_ptr<string> openConversationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

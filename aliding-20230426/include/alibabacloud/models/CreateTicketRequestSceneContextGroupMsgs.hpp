// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETICKETREQUESTSCENECONTEXTGROUPMSGS_HPP_
#define ALIBABACLOUD_MODELS_CREATETICKETREQUESTSCENECONTEXTGROUPMSGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTicketRequestSceneContextGroupMsgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTicketRequestSceneContextGroupMsgs& obj) { 
      DARABONBA_PTR_TO_JSON(Anchor, anchor_);
      DARABONBA_PTR_TO_JSON(OpenMsgId, openMsgId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTicketRequestSceneContextGroupMsgs& obj) { 
      DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
      DARABONBA_PTR_FROM_JSON(OpenMsgId, openMsgId_);
    };
    CreateTicketRequestSceneContextGroupMsgs() = default ;
    CreateTicketRequestSceneContextGroupMsgs(const CreateTicketRequestSceneContextGroupMsgs &) = default ;
    CreateTicketRequestSceneContextGroupMsgs(CreateTicketRequestSceneContextGroupMsgs &&) = default ;
    CreateTicketRequestSceneContextGroupMsgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTicketRequestSceneContextGroupMsgs() = default ;
    CreateTicketRequestSceneContextGroupMsgs& operator=(const CreateTicketRequestSceneContextGroupMsgs &) = default ;
    CreateTicketRequestSceneContextGroupMsgs& operator=(CreateTicketRequestSceneContextGroupMsgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchor_ == nullptr
        && return this->openMsgId_ == nullptr; };
    // anchor Field Functions 
    bool hasAnchor() const { return this->anchor_ != nullptr;};
    void deleteAnchor() { this->anchor_ = nullptr;};
    inline bool anchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, false) };
    inline CreateTicketRequestSceneContextGroupMsgs& setAnchor(bool anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


    // openMsgId Field Functions 
    bool hasOpenMsgId() const { return this->openMsgId_ != nullptr;};
    void deleteOpenMsgId() { this->openMsgId_ = nullptr;};
    inline string openMsgId() const { DARABONBA_PTR_GET_DEFAULT(openMsgId_, "") };
    inline CreateTicketRequestSceneContextGroupMsgs& setOpenMsgId(string openMsgId) { DARABONBA_PTR_SET_VALUE(openMsgId_, openMsgId) };


  protected:
    std::shared_ptr<bool> anchor_ = nullptr;
    std::shared_ptr<string> openMsgId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

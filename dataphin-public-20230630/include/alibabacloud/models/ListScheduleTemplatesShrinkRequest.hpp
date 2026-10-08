// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULETEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULETEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListScheduleTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduleTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListScheduleTemplatesCommand, listScheduleTemplatesCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduleTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListScheduleTemplatesCommand, listScheduleTemplatesCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListScheduleTemplatesShrinkRequest() = default ;
    ListScheduleTemplatesShrinkRequest(const ListScheduleTemplatesShrinkRequest &) = default ;
    ListScheduleTemplatesShrinkRequest(ListScheduleTemplatesShrinkRequest &&) = default ;
    ListScheduleTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduleTemplatesShrinkRequest() = default ;
    ListScheduleTemplatesShrinkRequest& operator=(const ListScheduleTemplatesShrinkRequest &) = default ;
    ListScheduleTemplatesShrinkRequest& operator=(ListScheduleTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listScheduleTemplatesCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listScheduleTemplatesCommandShrink Field Functions 
    bool hasListScheduleTemplatesCommandShrink() const { return this->listScheduleTemplatesCommandShrink_ != nullptr;};
    void deleteListScheduleTemplatesCommandShrink() { this->listScheduleTemplatesCommandShrink_ = nullptr;};
    inline string getListScheduleTemplatesCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(listScheduleTemplatesCommandShrink_, "") };
    inline ListScheduleTemplatesShrinkRequest& setListScheduleTemplatesCommandShrink(string listScheduleTemplatesCommandShrink) { DARABONBA_PTR_SET_VALUE(listScheduleTemplatesCommandShrink_, listScheduleTemplatesCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListScheduleTemplatesShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListScheduleTemplatesShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // This parameter is required.
    shared_ptr<string> listScheduleTemplatesCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

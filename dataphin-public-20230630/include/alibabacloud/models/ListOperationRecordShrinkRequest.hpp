// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONRECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONRECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListOperationRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListCommand, listCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListCommand, listCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListOperationRecordShrinkRequest() = default ;
    ListOperationRecordShrinkRequest(const ListOperationRecordShrinkRequest &) = default ;
    ListOperationRecordShrinkRequest(ListOperationRecordShrinkRequest &&) = default ;
    ListOperationRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationRecordShrinkRequest() = default ;
    ListOperationRecordShrinkRequest& operator=(const ListOperationRecordShrinkRequest &) = default ;
    ListOperationRecordShrinkRequest& operator=(ListOperationRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listCommandShrink Field Functions 
    bool hasListCommandShrink() const { return this->listCommandShrink_ != nullptr;};
    void deleteListCommandShrink() { this->listCommandShrink_ = nullptr;};
    inline string getListCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(listCommandShrink_, "") };
    inline ListOperationRecordShrinkRequest& setListCommandShrink(string listCommandShrink) { DARABONBA_PTR_SET_VALUE(listCommandShrink_, listCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListOperationRecordShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The query command.
    // 
    // This parameter is required.
    shared_ptr<string> listCommandShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

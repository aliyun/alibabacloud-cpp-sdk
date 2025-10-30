// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETENANTMEMBERREQUESTREMOVECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_REMOVETENANTMEMBERREQUESTREMOVECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RemoveTenantMemberRequestRemoveCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTenantMemberRequestRemoveCommand& obj) { 
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTenantMemberRequestRemoveCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
    };
    RemoveTenantMemberRequestRemoveCommand() = default ;
    RemoveTenantMemberRequestRemoveCommand(const RemoveTenantMemberRequestRemoveCommand &) = default ;
    RemoveTenantMemberRequestRemoveCommand(RemoveTenantMemberRequestRemoveCommand &&) = default ;
    RemoveTenantMemberRequestRemoveCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTenantMemberRequestRemoveCommand() = default ;
    RemoveTenantMemberRequestRemoveCommand& operator=(const RemoveTenantMemberRequestRemoveCommand &) = default ;
    RemoveTenantMemberRequestRemoveCommand& operator=(RemoveTenantMemberRequestRemoveCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceId_ == nullptr; };
    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline RemoveTenantMemberRequestRemoveCommand& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

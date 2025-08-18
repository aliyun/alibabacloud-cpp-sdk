// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROWPERMISSIONREQUESTDELETEROWPERMISSIONCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_DELETEROWPERMISSIONREQUESTDELETEROWPERMISSIONCOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteRowPermissionRequestDeleteRowPermissionCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRowPermissionRequestDeleteRowPermissionCommand& obj) { 
      DARABONBA_PTR_TO_JSON(RowPermissionId, rowPermissionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRowPermissionRequestDeleteRowPermissionCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(RowPermissionId, rowPermissionId_);
    };
    DeleteRowPermissionRequestDeleteRowPermissionCommand() = default ;
    DeleteRowPermissionRequestDeleteRowPermissionCommand(const DeleteRowPermissionRequestDeleteRowPermissionCommand &) = default ;
    DeleteRowPermissionRequestDeleteRowPermissionCommand(DeleteRowPermissionRequestDeleteRowPermissionCommand &&) = default ;
    DeleteRowPermissionRequestDeleteRowPermissionCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRowPermissionRequestDeleteRowPermissionCommand() = default ;
    DeleteRowPermissionRequestDeleteRowPermissionCommand& operator=(const DeleteRowPermissionRequestDeleteRowPermissionCommand &) = default ;
    DeleteRowPermissionRequestDeleteRowPermissionCommand& operator=(DeleteRowPermissionRequestDeleteRowPermissionCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rowPermissionId_ != nullptr; };
    // rowPermissionId Field Functions 
    bool hasRowPermissionId() const { return this->rowPermissionId_ != nullptr;};
    void deleteRowPermissionId() { this->rowPermissionId_ = nullptr;};
    inline int64_t rowPermissionId() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionId_, 0L) };
    inline DeleteRowPermissionRequestDeleteRowPermissionCommand& setRowPermissionId(int64_t rowPermissionId) { DARABONBA_PTR_SET_VALUE(rowPermissionId_, rowPermissionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> rowPermissionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMEHOLOWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENAMEHOLOWAREHOUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class RenameHoloWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenameHoloWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(newWarehouseName, newWarehouseName_);
    };
    friend void from_json(const Darabonba::Json& j, RenameHoloWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(newWarehouseName, newWarehouseName_);
    };
    RenameHoloWarehouseRequest() = default ;
    RenameHoloWarehouseRequest(const RenameHoloWarehouseRequest &) = default ;
    RenameHoloWarehouseRequest(RenameHoloWarehouseRequest &&) = default ;
    RenameHoloWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenameHoloWarehouseRequest() = default ;
    RenameHoloWarehouseRequest& operator=(const RenameHoloWarehouseRequest &) = default ;
    RenameHoloWarehouseRequest& operator=(RenameHoloWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->newWarehouseName_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RenameHoloWarehouseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newWarehouseName Field Functions 
    bool hasNewWarehouseName() const { return this->newWarehouseName_ != nullptr;};
    void deleteNewWarehouseName() { this->newWarehouseName_ = nullptr;};
    inline string newWarehouseName() const { DARABONBA_PTR_GET_DEFAULT(newWarehouseName_, "") };
    inline RenameHoloWarehouseRequest& setNewWarehouseName(string newWarehouseName) { DARABONBA_PTR_SET_VALUE(newWarehouseName_, newWarehouseName) };


  protected:
    // The original name of the virtual warehouse.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The new name of the virtual warehouse.
    // 
    // This parameter is required.
    std::shared_ptr<string> newWarehouseName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif

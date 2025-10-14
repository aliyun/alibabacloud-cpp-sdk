// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBALANCEHOLOWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBALANCEHOLOWAREHOUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class RebalanceHoloWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebalanceHoloWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, RebalanceHoloWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    RebalanceHoloWarehouseRequest() = default ;
    RebalanceHoloWarehouseRequest(const RebalanceHoloWarehouseRequest &) = default ;
    RebalanceHoloWarehouseRequest(RebalanceHoloWarehouseRequest &&) = default ;
    RebalanceHoloWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebalanceHoloWarehouseRequest() = default ;
    RebalanceHoloWarehouseRequest& operator=(const RebalanceHoloWarehouseRequest &) = default ;
    RebalanceHoloWarehouseRequest& operator=(RebalanceHoloWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RebalanceHoloWarehouseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the virtual warehouse.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif

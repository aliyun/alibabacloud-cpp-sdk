// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEHOLOWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEHOLOWAREHOUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ScaleHoloWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleHoloWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleHoloWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ScaleHoloWarehouseRequest() = default ;
    ScaleHoloWarehouseRequest(const ScaleHoloWarehouseRequest &) = default ;
    ScaleHoloWarehouseRequest(ScaleHoloWarehouseRequest &&) = default ;
    ScaleHoloWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleHoloWarehouseRequest() = default ;
    ScaleHoloWarehouseRequest& operator=(const ScaleHoloWarehouseRequest &) = default ;
    ScaleHoloWarehouseRequest& operator=(ScaleHoloWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->name_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline ScaleHoloWarehouseRequest& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ScaleHoloWarehouseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The specifications of the virtual warehouse. The number of vCPUs must be an integer multiple of 16.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    // The name of the virtual warehouse.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif

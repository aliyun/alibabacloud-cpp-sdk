// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOLOWAREHOUSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOLOWAREHOUSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class CreateHoloWarehouseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoloWarehouseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoloWarehouseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateHoloWarehouseRequest() = default ;
    CreateHoloWarehouseRequest(const CreateHoloWarehouseRequest &) = default ;
    CreateHoloWarehouseRequest(CreateHoloWarehouseRequest &&) = default ;
    CreateHoloWarehouseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoloWarehouseRequest() = default ;
    CreateHoloWarehouseRequest& operator=(const CreateHoloWarehouseRequest &) = default ;
    CreateHoloWarehouseRequest& operator=(CreateHoloWarehouseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterCount_ == nullptr
        && return this->cpu_ == nullptr && return this->name_ == nullptr; };
    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline int64_t clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0L) };
    inline CreateHoloWarehouseRequest& setClusterCount(int64_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline CreateHoloWarehouseRequest& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHoloWarehouseRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int64_t> clusterCount_ = nullptr;
    // The specifications of the virtual warehouse. The number of vCPUs must be an integer multiple of 16 CPUs. Minimum value: 16.
    // 
    // This parameter is required.
    std::shared_ptr<string> cpu_ = nullptr;
    // The name of the virtual warehouse.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVEREQUESTRESERVESET_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEDGECONTAINERAPPRESOURCERESERVEREQUESTRESERVESET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateEdgeContainerAppResourceReserveRequestReserveSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEdgeContainerAppResourceReserveRequestReserveSet& obj) { 
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEdgeContainerAppResourceReserveRequestReserveSet& obj) { 
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
    };
    UpdateEdgeContainerAppResourceReserveRequestReserveSet() = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet(const UpdateEdgeContainerAppResourceReserveRequestReserveSet &) = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet(UpdateEdgeContainerAppResourceReserveRequestReserveSet &&) = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEdgeContainerAppResourceReserveRequestReserveSet() = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet& operator=(const UpdateEdgeContainerAppResourceReserveRequestReserveSet &) = default ;
    UpdateEdgeContainerAppResourceReserveRequestReserveSet& operator=(UpdateEdgeContainerAppResourceReserveRequestReserveSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isp_ != nullptr
        && this->region_ != nullptr && this->replicas_ != nullptr; };
    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline UpdateEdgeContainerAppResourceReserveRequestReserveSet& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateEdgeContainerAppResourceReserveRequestReserveSet& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline UpdateEdgeContainerAppResourceReserveRequestReserveSet& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


  protected:
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int32_t> replicas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICELISTRESPONSEBODYDATADEVICELISTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICELISTRESPONSEBODYDATADEVICELISTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDeviceListResponseBodyDataDeviceListInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceListResponseBodyDataDeviceListInfo& obj) { 
      DARABONBA_PTR_TO_JSON(constKva, constKva_);
      DARABONBA_PTR_TO_JSON(ct, ct_);
      DARABONBA_PTR_TO_JSON(magnification, magnification_);
      DARABONBA_PTR_TO_JSON(pressure, pressure_);
      DARABONBA_PTR_TO_JSON(pt, pt_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceListResponseBodyDataDeviceListInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(constKva, constKva_);
      DARABONBA_PTR_FROM_JSON(ct, ct_);
      DARABONBA_PTR_FROM_JSON(magnification, magnification_);
      DARABONBA_PTR_FROM_JSON(pressure, pressure_);
      DARABONBA_PTR_FROM_JSON(pt, pt_);
    };
    GetDeviceListResponseBodyDataDeviceListInfo() = default ;
    GetDeviceListResponseBodyDataDeviceListInfo(const GetDeviceListResponseBodyDataDeviceListInfo &) = default ;
    GetDeviceListResponseBodyDataDeviceListInfo(GetDeviceListResponseBodyDataDeviceListInfo &&) = default ;
    GetDeviceListResponseBodyDataDeviceListInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceListResponseBodyDataDeviceListInfo() = default ;
    GetDeviceListResponseBodyDataDeviceListInfo& operator=(const GetDeviceListResponseBodyDataDeviceListInfo &) = default ;
    GetDeviceListResponseBodyDataDeviceListInfo& operator=(GetDeviceListResponseBodyDataDeviceListInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->constKva_ != nullptr
        && this->ct_ != nullptr && this->magnification_ != nullptr && this->pressure_ != nullptr && this->pt_ != nullptr; };
    // constKva Field Functions 
    bool hasConstKva() const { return this->constKva_ != nullptr;};
    void deleteConstKva() { this->constKva_ = nullptr;};
    inline int32_t constKva() const { DARABONBA_PTR_GET_DEFAULT(constKva_, 0) };
    inline GetDeviceListResponseBodyDataDeviceListInfo& setConstKva(int32_t constKva) { DARABONBA_PTR_SET_VALUE(constKva_, constKva) };


    // ct Field Functions 
    bool hasCt() const { return this->ct_ != nullptr;};
    void deleteCt() { this->ct_ = nullptr;};
    inline int32_t ct() const { DARABONBA_PTR_GET_DEFAULT(ct_, 0) };
    inline GetDeviceListResponseBodyDataDeviceListInfo& setCt(int32_t ct) { DARABONBA_PTR_SET_VALUE(ct_, ct) };


    // magnification Field Functions 
    bool hasMagnification() const { return this->magnification_ != nullptr;};
    void deleteMagnification() { this->magnification_ = nullptr;};
    inline int32_t magnification() const { DARABONBA_PTR_GET_DEFAULT(magnification_, 0) };
    inline GetDeviceListResponseBodyDataDeviceListInfo& setMagnification(int32_t magnification) { DARABONBA_PTR_SET_VALUE(magnification_, magnification) };


    // pressure Field Functions 
    bool hasPressure() const { return this->pressure_ != nullptr;};
    void deletePressure() { this->pressure_ = nullptr;};
    inline int32_t pressure() const { DARABONBA_PTR_GET_DEFAULT(pressure_, 0) };
    inline GetDeviceListResponseBodyDataDeviceListInfo& setPressure(int32_t pressure) { DARABONBA_PTR_SET_VALUE(pressure_, pressure) };


    // pt Field Functions 
    bool hasPt() const { return this->pt_ != nullptr;};
    void deletePt() { this->pt_ = nullptr;};
    inline int32_t pt() const { DARABONBA_PTR_GET_DEFAULT(pt_, 0) };
    inline GetDeviceListResponseBodyDataDeviceListInfo& setPt(int32_t pt) { DARABONBA_PTR_SET_VALUE(pt_, pt) };


  protected:
    // The rated capacity.
    // Unit is kVA.
    std::shared_ptr<int32_t> constKva_ = nullptr;
    // The transformation ratio of current.
    std::shared_ptr<int32_t> ct_ = nullptr;
    // The magnification ratio.
    std::shared_ptr<int32_t> magnification_ = nullptr;
    // The high and low voltage.
    std::shared_ptr<int32_t> pressure_ = nullptr;
    // The transformation ratio of voltage.
    std::shared_ptr<int32_t> pt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif

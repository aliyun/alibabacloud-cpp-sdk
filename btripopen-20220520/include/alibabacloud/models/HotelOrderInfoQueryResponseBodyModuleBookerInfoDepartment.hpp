// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEBOOKERINFODEPARTMENT_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEBOOKERINFODEPARTMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& obj) { 
      DARABONBA_PTR_TO_JSON(cascade_dept_mask, cascadeDeptMask_);
      DARABONBA_PTR_TO_JSON(cascade_dept_name, cascadeDeptName_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(out_depart_id, outDepartId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& obj) { 
      DARABONBA_PTR_FROM_JSON(cascade_dept_mask, cascadeDeptMask_);
      DARABONBA_PTR_FROM_JSON(cascade_dept_name, cascadeDeptName_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(out_depart_id, outDepartId_);
    };
    HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment() = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment(const HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment &) = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment(HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment() = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& operator=(const HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment &) = default ;
    HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& operator=(HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cascadeDeptMask_ != nullptr
        && this->cascadeDeptName_ != nullptr && this->departId_ != nullptr && this->departName_ != nullptr && this->outDepartId_ != nullptr; };
    // cascadeDeptMask Field Functions 
    bool hasCascadeDeptMask() const { return this->cascadeDeptMask_ != nullptr;};
    void deleteCascadeDeptMask() { this->cascadeDeptMask_ = nullptr;};
    inline string cascadeDeptMask() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptMask_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& setCascadeDeptMask(string cascadeDeptMask) { DARABONBA_PTR_SET_VALUE(cascadeDeptMask_, cascadeDeptMask) };


    // cascadeDeptName Field Functions 
    bool hasCascadeDeptName() const { return this->cascadeDeptName_ != nullptr;};
    void deleteCascadeDeptName() { this->cascadeDeptName_ = nullptr;};
    inline string cascadeDeptName() const { DARABONBA_PTR_GET_DEFAULT(cascadeDeptName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& setCascadeDeptName(string cascadeDeptName) { DARABONBA_PTR_SET_VALUE(cascadeDeptName_, cascadeDeptName) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string departName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // outDepartId Field Functions 
    bool hasOutDepartId() const { return this->outDepartId_ != nullptr;};
    void deleteOutDepartId() { this->outDepartId_ = nullptr;};
    inline string outDepartId() const { DARABONBA_PTR_GET_DEFAULT(outDepartId_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleBookerInfoDepartment& setOutDepartId(string outDepartId) { DARABONBA_PTR_SET_VALUE(outDepartId_, outDepartId) };


  protected:
    std::shared_ptr<string> cascadeDeptMask_ = nullptr;
    std::shared_ptr<string> cascadeDeptName_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> departName_ = nullptr;
    std::shared_ptr<string> outDepartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

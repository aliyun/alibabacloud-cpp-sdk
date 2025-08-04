// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVERYONESELLSFORMLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVERYONESELLSFORMLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CioMarketPop20250709
{
namespace Models
{
  class GetEveryOneSellsFormListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEveryOneSellsFormListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(VirtualMainDepartment, virtualMainDepartment_);
      DARABONBA_PTR_TO_JSON(VirtualDepartmentName, virtualDepartmentName_);
      DARABONBA_PTR_TO_JSON(VirtualDepartmentCode, virtualDepartmentCode_);
      DARABONBA_PTR_TO_JSON(VirtualParentDepartment, virtualParentDepartment_);
      DARABONBA_PTR_TO_JSON(VirtualDepartmentStatus, virtualDepartmentStatus_);
      DARABONBA_PTR_TO_JSON(DingId, dingId_);
      DARABONBA_PTR_TO_JSON(EmpStatus, empStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetEveryOneSellsFormListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(VirtualMainDepartment, virtualMainDepartment_);
      DARABONBA_PTR_FROM_JSON(VirtualDepartmentName, virtualDepartmentName_);
      DARABONBA_PTR_FROM_JSON(VirtualDepartmentCode, virtualDepartmentCode_);
      DARABONBA_PTR_FROM_JSON(VirtualParentDepartment, virtualParentDepartment_);
      DARABONBA_PTR_FROM_JSON(VirtualDepartmentStatus, virtualDepartmentStatus_);
      DARABONBA_PTR_FROM_JSON(DingId, dingId_);
      DARABONBA_PTR_FROM_JSON(EmpStatus, empStatus_);
    };
    GetEveryOneSellsFormListResponseBody() = default ;
    GetEveryOneSellsFormListResponseBody(const GetEveryOneSellsFormListResponseBody &) = default ;
    GetEveryOneSellsFormListResponseBody(GetEveryOneSellsFormListResponseBody &&) = default ;
    GetEveryOneSellsFormListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEveryOneSellsFormListResponseBody() = default ;
    GetEveryOneSellsFormListResponseBody& operator=(const GetEveryOneSellsFormListResponseBody &) = default ;
    GetEveryOneSellsFormListResponseBody& operator=(GetEveryOneSellsFormListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->virtualMainDepartment_ != nullptr && this->virtualDepartmentName_ != nullptr && this->virtualDepartmentCode_ != nullptr && this->virtualParentDepartment_ != nullptr && this->virtualDepartmentStatus_ != nullptr
        && this->dingId_ != nullptr && this->empStatus_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetEveryOneSellsFormListResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // virtualMainDepartment Field Functions 
    bool hasVirtualMainDepartment() const { return this->virtualMainDepartment_ != nullptr;};
    void deleteVirtualMainDepartment() { this->virtualMainDepartment_ = nullptr;};
    inline string virtualMainDepartment() const { DARABONBA_PTR_GET_DEFAULT(virtualMainDepartment_, "") };
    inline GetEveryOneSellsFormListResponseBody& setVirtualMainDepartment(string virtualMainDepartment) { DARABONBA_PTR_SET_VALUE(virtualMainDepartment_, virtualMainDepartment) };


    // virtualDepartmentName Field Functions 
    bool hasVirtualDepartmentName() const { return this->virtualDepartmentName_ != nullptr;};
    void deleteVirtualDepartmentName() { this->virtualDepartmentName_ = nullptr;};
    inline string virtualDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(virtualDepartmentName_, "") };
    inline GetEveryOneSellsFormListResponseBody& setVirtualDepartmentName(string virtualDepartmentName) { DARABONBA_PTR_SET_VALUE(virtualDepartmentName_, virtualDepartmentName) };


    // virtualDepartmentCode Field Functions 
    bool hasVirtualDepartmentCode() const { return this->virtualDepartmentCode_ != nullptr;};
    void deleteVirtualDepartmentCode() { this->virtualDepartmentCode_ = nullptr;};
    inline string virtualDepartmentCode() const { DARABONBA_PTR_GET_DEFAULT(virtualDepartmentCode_, "") };
    inline GetEveryOneSellsFormListResponseBody& setVirtualDepartmentCode(string virtualDepartmentCode) { DARABONBA_PTR_SET_VALUE(virtualDepartmentCode_, virtualDepartmentCode) };


    // virtualParentDepartment Field Functions 
    bool hasVirtualParentDepartment() const { return this->virtualParentDepartment_ != nullptr;};
    void deleteVirtualParentDepartment() { this->virtualParentDepartment_ = nullptr;};
    inline string virtualParentDepartment() const { DARABONBA_PTR_GET_DEFAULT(virtualParentDepartment_, "") };
    inline GetEveryOneSellsFormListResponseBody& setVirtualParentDepartment(string virtualParentDepartment) { DARABONBA_PTR_SET_VALUE(virtualParentDepartment_, virtualParentDepartment) };


    // virtualDepartmentStatus Field Functions 
    bool hasVirtualDepartmentStatus() const { return this->virtualDepartmentStatus_ != nullptr;};
    void deleteVirtualDepartmentStatus() { this->virtualDepartmentStatus_ = nullptr;};
    inline string virtualDepartmentStatus() const { DARABONBA_PTR_GET_DEFAULT(virtualDepartmentStatus_, "") };
    inline GetEveryOneSellsFormListResponseBody& setVirtualDepartmentStatus(string virtualDepartmentStatus) { DARABONBA_PTR_SET_VALUE(virtualDepartmentStatus_, virtualDepartmentStatus) };


    // dingId Field Functions 
    bool hasDingId() const { return this->dingId_ != nullptr;};
    void deleteDingId() { this->dingId_ = nullptr;};
    inline string dingId() const { DARABONBA_PTR_GET_DEFAULT(dingId_, "") };
    inline GetEveryOneSellsFormListResponseBody& setDingId(string dingId) { DARABONBA_PTR_SET_VALUE(dingId_, dingId) };


    // empStatus Field Functions 
    bool hasEmpStatus() const { return this->empStatus_ != nullptr;};
    void deleteEmpStatus() { this->empStatus_ = nullptr;};
    inline string empStatus() const { DARABONBA_PTR_GET_DEFAULT(empStatus_, "") };
    inline GetEveryOneSellsFormListResponseBody& setEmpStatus(string empStatus) { DARABONBA_PTR_SET_VALUE(empStatus_, empStatus) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> virtualMainDepartment_ = nullptr;
    std::shared_ptr<string> virtualDepartmentName_ = nullptr;
    std::shared_ptr<string> virtualDepartmentCode_ = nullptr;
    std::shared_ptr<string> virtualParentDepartment_ = nullptr;
    std::shared_ptr<string> virtualDepartmentStatus_ = nullptr;
    std::shared_ptr<string> dingId_ = nullptr;
    std::shared_ptr<string> empStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CioMarketPop20250709
#endif

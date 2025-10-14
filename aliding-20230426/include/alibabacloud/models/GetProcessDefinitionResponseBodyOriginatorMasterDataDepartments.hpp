// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODYORIGINATORMASTERDATADEPARTMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODYORIGINATORMASTERDATADEPARTMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& obj) { 
      DARABONBA_PTR_TO_JSON(DeptName, deptName_);
      DARABONBA_PTR_TO_JSON(DeptNameInEnglish, deptNameInEnglish_);
      DARABONBA_PTR_TO_JSON(DeptNo, deptNo_);
      DARABONBA_PTR_TO_JSON(DeptPath, deptPath_);
      DARABONBA_PTR_TO_JSON(HumanSourceGroupOrderNumber, humanSourceGroupOrderNumber_);
      DARABONBA_PTR_TO_JSON(HumanSourceGroupWorkNo, humanSourceGroupWorkNo_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MasterWorkNo, masterWorkNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& obj) { 
      DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
      DARABONBA_PTR_FROM_JSON(DeptNameInEnglish, deptNameInEnglish_);
      DARABONBA_PTR_FROM_JSON(DeptNo, deptNo_);
      DARABONBA_PTR_FROM_JSON(DeptPath, deptPath_);
      DARABONBA_PTR_FROM_JSON(HumanSourceGroupOrderNumber, humanSourceGroupOrderNumber_);
      DARABONBA_PTR_FROM_JSON(HumanSourceGroupWorkNo, humanSourceGroupWorkNo_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MasterWorkNo, masterWorkNo_);
    };
    GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments() = default ;
    GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments(const GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments &) = default ;
    GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments(GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments &&) = default ;
    GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments() = default ;
    GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& operator=(const GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments &) = default ;
    GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& operator=(GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deptName_ == nullptr
        && return this->deptNameInEnglish_ == nullptr && return this->deptNo_ == nullptr && return this->deptPath_ == nullptr && return this->humanSourceGroupOrderNumber_ == nullptr && return this->humanSourceGroupWorkNo_ == nullptr
        && return this->id_ == nullptr && return this->masterWorkNo_ == nullptr; };
    // deptName Field Functions 
    bool hasDeptName() const { return this->deptName_ != nullptr;};
    void deleteDeptName() { this->deptName_ = nullptr;};
    inline string deptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
    inline GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


    // deptNameInEnglish Field Functions 
    bool hasDeptNameInEnglish() const { return this->deptNameInEnglish_ != nullptr;};
    void deleteDeptNameInEnglish() { this->deptNameInEnglish_ = nullptr;};
    inline string deptNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(deptNameInEnglish_, "") };
    inline GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& setDeptNameInEnglish(string deptNameInEnglish) { DARABONBA_PTR_SET_VALUE(deptNameInEnglish_, deptNameInEnglish) };


    // deptNo Field Functions 
    bool hasDeptNo() const { return this->deptNo_ != nullptr;};
    void deleteDeptNo() { this->deptNo_ = nullptr;};
    inline string deptNo() const { DARABONBA_PTR_GET_DEFAULT(deptNo_, "") };
    inline GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& setDeptNo(string deptNo) { DARABONBA_PTR_SET_VALUE(deptNo_, deptNo) };


    // deptPath Field Functions 
    bool hasDeptPath() const { return this->deptPath_ != nullptr;};
    void deleteDeptPath() { this->deptPath_ = nullptr;};
    inline string deptPath() const { DARABONBA_PTR_GET_DEFAULT(deptPath_, "") };
    inline GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& setDeptPath(string deptPath) { DARABONBA_PTR_SET_VALUE(deptPath_, deptPath) };


    // humanSourceGroupOrderNumber Field Functions 
    bool hasHumanSourceGroupOrderNumber() const { return this->humanSourceGroupOrderNumber_ != nullptr;};
    void deleteHumanSourceGroupOrderNumber() { this->humanSourceGroupOrderNumber_ = nullptr;};
    inline string humanSourceGroupOrderNumber() const { DARABONBA_PTR_GET_DEFAULT(humanSourceGroupOrderNumber_, "") };
    inline GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& setHumanSourceGroupOrderNumber(string humanSourceGroupOrderNumber) { DARABONBA_PTR_SET_VALUE(humanSourceGroupOrderNumber_, humanSourceGroupOrderNumber) };


    // humanSourceGroupWorkNo Field Functions 
    bool hasHumanSourceGroupWorkNo() const { return this->humanSourceGroupWorkNo_ != nullptr;};
    void deleteHumanSourceGroupWorkNo() { this->humanSourceGroupWorkNo_ = nullptr;};
    inline string humanSourceGroupWorkNo() const { DARABONBA_PTR_GET_DEFAULT(humanSourceGroupWorkNo_, "") };
    inline GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& setHumanSourceGroupWorkNo(string humanSourceGroupWorkNo) { DARABONBA_PTR_SET_VALUE(humanSourceGroupWorkNo_, humanSourceGroupWorkNo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // masterWorkNo Field Functions 
    bool hasMasterWorkNo() const { return this->masterWorkNo_ != nullptr;};
    void deleteMasterWorkNo() { this->masterWorkNo_ = nullptr;};
    inline string masterWorkNo() const { DARABONBA_PTR_GET_DEFAULT(masterWorkNo_, "") };
    inline GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments& setMasterWorkNo(string masterWorkNo) { DARABONBA_PTR_SET_VALUE(masterWorkNo_, masterWorkNo) };


  protected:
    std::shared_ptr<string> deptName_ = nullptr;
    std::shared_ptr<string> deptNameInEnglish_ = nullptr;
    std::shared_ptr<string> deptNo_ = nullptr;
    std::shared_ptr<string> deptPath_ = nullptr;
    std::shared_ptr<string> humanSourceGroupOrderNumber_ = nullptr;
    std::shared_ptr<string> humanSourceGroupWorkNo_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> masterWorkNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODYORIGINATOR_HPP_
#define ALIBABACLOUD_MODELS_GETPROCESSDEFINITIONRESPONSEBODYORIGINATOR_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetProcessDefinitionResponseBodyOriginator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProcessDefinitionResponseBodyOriginator& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentDescription, departmentDescription_);
      DARABONBA_PTR_TO_JSON(DisplayEnName, displayEnName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(MasterDataDepartments, masterDataDepartments_);
      DARABONBA_PTR_TO_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_TO_JSON(PersonalPhoto, personalPhoto_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TbWang, tbWang_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetProcessDefinitionResponseBodyOriginator& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentDescription, departmentDescription_);
      DARABONBA_PTR_FROM_JSON(DisplayEnName, displayEnName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(MasterDataDepartments, masterDataDepartments_);
      DARABONBA_PTR_FROM_JSON(OrderNumber, orderNumber_);
      DARABONBA_PTR_FROM_JSON(PersonalPhoto, personalPhoto_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TbWang, tbWang_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetProcessDefinitionResponseBodyOriginator() = default ;
    GetProcessDefinitionResponseBodyOriginator(const GetProcessDefinitionResponseBodyOriginator &) = default ;
    GetProcessDefinitionResponseBodyOriginator(GetProcessDefinitionResponseBodyOriginator &&) = default ;
    GetProcessDefinitionResponseBodyOriginator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProcessDefinitionResponseBodyOriginator() = default ;
    GetProcessDefinitionResponseBodyOriginator& operator=(const GetProcessDefinitionResponseBodyOriginator &) = default ;
    GetProcessDefinitionResponseBodyOriginator& operator=(GetProcessDefinitionResponseBodyOriginator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentDescription_ == nullptr
        && return this->displayEnName_ == nullptr && return this->displayName_ == nullptr && return this->masterDataDepartments_ == nullptr && return this->orderNumber_ == nullptr && return this->personalPhoto_ == nullptr
        && return this->status_ == nullptr && return this->tbWang_ == nullptr && return this->userId_ == nullptr && return this->userInfo_ == nullptr; };
    // departmentDescription Field Functions 
    bool hasDepartmentDescription() const { return this->departmentDescription_ != nullptr;};
    void deleteDepartmentDescription() { this->departmentDescription_ = nullptr;};
    inline string departmentDescription() const { DARABONBA_PTR_GET_DEFAULT(departmentDescription_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setDepartmentDescription(string departmentDescription) { DARABONBA_PTR_SET_VALUE(departmentDescription_, departmentDescription) };


    // displayEnName Field Functions 
    bool hasDisplayEnName() const { return this->displayEnName_ != nullptr;};
    void deleteDisplayEnName() { this->displayEnName_ = nullptr;};
    inline string displayEnName() const { DARABONBA_PTR_GET_DEFAULT(displayEnName_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setDisplayEnName(string displayEnName) { DARABONBA_PTR_SET_VALUE(displayEnName_, displayEnName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // masterDataDepartments Field Functions 
    bool hasMasterDataDepartments() const { return this->masterDataDepartments_ != nullptr;};
    void deleteMasterDataDepartments() { this->masterDataDepartments_ = nullptr;};
    inline const vector<Models::GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments> & masterDataDepartments() const { DARABONBA_PTR_GET_CONST(masterDataDepartments_, vector<Models::GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments>) };
    inline vector<Models::GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments> masterDataDepartments() { DARABONBA_PTR_GET(masterDataDepartments_, vector<Models::GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments>) };
    inline GetProcessDefinitionResponseBodyOriginator& setMasterDataDepartments(const vector<Models::GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments> & masterDataDepartments) { DARABONBA_PTR_SET_VALUE(masterDataDepartments_, masterDataDepartments) };
    inline GetProcessDefinitionResponseBodyOriginator& setMasterDataDepartments(vector<Models::GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments> && masterDataDepartments) { DARABONBA_PTR_SET_RVALUE(masterDataDepartments_, masterDataDepartments) };


    // orderNumber Field Functions 
    bool hasOrderNumber() const { return this->orderNumber_ != nullptr;};
    void deleteOrderNumber() { this->orderNumber_ = nullptr;};
    inline string orderNumber() const { DARABONBA_PTR_GET_DEFAULT(orderNumber_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setOrderNumber(string orderNumber) { DARABONBA_PTR_SET_VALUE(orderNumber_, orderNumber) };


    // personalPhoto Field Functions 
    bool hasPersonalPhoto() const { return this->personalPhoto_ != nullptr;};
    void deletePersonalPhoto() { this->personalPhoto_ = nullptr;};
    inline string personalPhoto() const { DARABONBA_PTR_GET_DEFAULT(personalPhoto_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setPersonalPhoto(string personalPhoto) { DARABONBA_PTR_SET_VALUE(personalPhoto_, personalPhoto) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tbWang Field Functions 
    bool hasTbWang() const { return this->tbWang_ != nullptr;};
    void deleteTbWang() { this->tbWang_ = nullptr;};
    inline string tbWang() const { DARABONBA_PTR_GET_DEFAULT(tbWang_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setTbWang(string tbWang) { DARABONBA_PTR_SET_VALUE(tbWang_, tbWang) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline string userInfo() const { DARABONBA_PTR_GET_DEFAULT(userInfo_, "") };
    inline GetProcessDefinitionResponseBodyOriginator& setUserInfo(string userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<string> departmentDescription_ = nullptr;
    std::shared_ptr<string> displayEnName_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<vector<Models::GetProcessDefinitionResponseBodyOriginatorMasterDataDepartments>> masterDataDepartments_ = nullptr;
    std::shared_ptr<string> orderNumber_ = nullptr;
    std::shared_ptr<string> personalPhoto_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> tbWang_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

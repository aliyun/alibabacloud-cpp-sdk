// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODYSERVICEINSTANCESGRANTEDPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODYSERVICEINSTANCESGRANTEDPERMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstancesResponseBodyServiceInstancesGrantedPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstancesResponseBodyServiceInstancesGrantedPermission& obj) { 
      DARABONBA_PTR_TO_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_TO_JSON(PolicyNames, policyNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstancesResponseBodyServiceInstancesGrantedPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationEndTime, operationEndTime_);
      DARABONBA_PTR_FROM_JSON(PolicyNames, policyNames_);
    };
    ListServiceInstancesResponseBodyServiceInstancesGrantedPermission() = default ;
    ListServiceInstancesResponseBodyServiceInstancesGrantedPermission(const ListServiceInstancesResponseBodyServiceInstancesGrantedPermission &) = default ;
    ListServiceInstancesResponseBodyServiceInstancesGrantedPermission(ListServiceInstancesResponseBodyServiceInstancesGrantedPermission &&) = default ;
    ListServiceInstancesResponseBodyServiceInstancesGrantedPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstancesResponseBodyServiceInstancesGrantedPermission() = default ;
    ListServiceInstancesResponseBodyServiceInstancesGrantedPermission& operator=(const ListServiceInstancesResponseBodyServiceInstancesGrantedPermission &) = default ;
    ListServiceInstancesResponseBodyServiceInstancesGrantedPermission& operator=(ListServiceInstancesResponseBodyServiceInstancesGrantedPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationEndTime_ == nullptr
        && return this->policyNames_ == nullptr; };
    // operationEndTime Field Functions 
    bool hasOperationEndTime() const { return this->operationEndTime_ != nullptr;};
    void deleteOperationEndTime() { this->operationEndTime_ = nullptr;};
    inline string operationEndTime() const { DARABONBA_PTR_GET_DEFAULT(operationEndTime_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesGrantedPermission& setOperationEndTime(string operationEndTime) { DARABONBA_PTR_SET_VALUE(operationEndTime_, operationEndTime) };


    // policyNames Field Functions 
    bool hasPolicyNames() const { return this->policyNames_ != nullptr;};
    void deletePolicyNames() { this->policyNames_ = nullptr;};
    inline string policyNames() const { DARABONBA_PTR_GET_DEFAULT(policyNames_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesGrantedPermission& setPolicyNames(string policyNames) { DARABONBA_PTR_SET_VALUE(policyNames_, policyNames) };


  protected:
    std::shared_ptr<string> operationEndTime_ = nullptr;
    std::shared_ptr<string> policyNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

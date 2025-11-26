// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLTENANTBINDNUMBERBINDINGRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLTENANTBINDNUMBERBINDINGRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAllTenantBindNumberBindingResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllTenantBindNumberBindingResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BillingType, billingType_);
      DARABONBA_PTR_TO_JSON(BindingId, bindingId_);
      DARABONBA_PTR_TO_JSON(InstanceNameList, instanceNameList_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(SerializedParams, serializedParams_);
      DARABONBA_PTR_TO_JSON(TrunkName, trunkName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllTenantBindNumberBindingResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
      DARABONBA_PTR_FROM_JSON(BindingId, bindingId_);
      DARABONBA_PTR_FROM_JSON(InstanceNameList, instanceNameList_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(SerializedParams, serializedParams_);
      DARABONBA_PTR_FROM_JSON(TrunkName, trunkName_);
    };
    ListAllTenantBindNumberBindingResponseBodyDataList() = default ;
    ListAllTenantBindNumberBindingResponseBodyDataList(const ListAllTenantBindNumberBindingResponseBodyDataList &) = default ;
    ListAllTenantBindNumberBindingResponseBodyDataList(ListAllTenantBindNumberBindingResponseBodyDataList &&) = default ;
    ListAllTenantBindNumberBindingResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllTenantBindNumberBindingResponseBodyDataList() = default ;
    ListAllTenantBindNumberBindingResponseBodyDataList& operator=(const ListAllTenantBindNumberBindingResponseBodyDataList &) = default ;
    ListAllTenantBindNumberBindingResponseBodyDataList& operator=(ListAllTenantBindNumberBindingResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingType_ == nullptr
        && return this->bindingId_ == nullptr && return this->instanceNameList_ == nullptr && return this->number_ == nullptr && return this->serializedParams_ == nullptr && return this->trunkName_ == nullptr; };
    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string billingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline ListAllTenantBindNumberBindingResponseBodyDataList& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // bindingId Field Functions 
    bool hasBindingId() const { return this->bindingId_ != nullptr;};
    void deleteBindingId() { this->bindingId_ = nullptr;};
    inline string bindingId() const { DARABONBA_PTR_GET_DEFAULT(bindingId_, "") };
    inline ListAllTenantBindNumberBindingResponseBodyDataList& setBindingId(string bindingId) { DARABONBA_PTR_SET_VALUE(bindingId_, bindingId) };


    // instanceNameList Field Functions 
    bool hasInstanceNameList() const { return this->instanceNameList_ != nullptr;};
    void deleteInstanceNameList() { this->instanceNameList_ = nullptr;};
    inline const vector<string> & instanceNameList() const { DARABONBA_PTR_GET_CONST(instanceNameList_, vector<string>) };
    inline vector<string> instanceNameList() { DARABONBA_PTR_GET(instanceNameList_, vector<string>) };
    inline ListAllTenantBindNumberBindingResponseBodyDataList& setInstanceNameList(const vector<string> & instanceNameList) { DARABONBA_PTR_SET_VALUE(instanceNameList_, instanceNameList) };
    inline ListAllTenantBindNumberBindingResponseBodyDataList& setInstanceNameList(vector<string> && instanceNameList) { DARABONBA_PTR_SET_RVALUE(instanceNameList_, instanceNameList) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListAllTenantBindNumberBindingResponseBodyDataList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // serializedParams Field Functions 
    bool hasSerializedParams() const { return this->serializedParams_ != nullptr;};
    void deleteSerializedParams() { this->serializedParams_ = nullptr;};
    inline string serializedParams() const { DARABONBA_PTR_GET_DEFAULT(serializedParams_, "") };
    inline ListAllTenantBindNumberBindingResponseBodyDataList& setSerializedParams(string serializedParams) { DARABONBA_PTR_SET_VALUE(serializedParams_, serializedParams) };


    // trunkName Field Functions 
    bool hasTrunkName() const { return this->trunkName_ != nullptr;};
    void deleteTrunkName() { this->trunkName_ = nullptr;};
    inline string trunkName() const { DARABONBA_PTR_GET_DEFAULT(trunkName_, "") };
    inline ListAllTenantBindNumberBindingResponseBodyDataList& setTrunkName(string trunkName) { DARABONBA_PTR_SET_VALUE(trunkName_, trunkName) };


  protected:
    std::shared_ptr<string> billingType_ = nullptr;
    std::shared_ptr<string> bindingId_ = nullptr;
    std::shared_ptr<vector<string>> instanceNameList_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> serializedParams_ = nullptr;
    std::shared_ptr<string> trunkName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

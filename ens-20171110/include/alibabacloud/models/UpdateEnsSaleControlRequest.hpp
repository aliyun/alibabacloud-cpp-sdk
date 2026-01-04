// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENSSALECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENSSALECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UpdateEnsSaleControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnsSaleControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_TO_JSON(SaleControls, saleControls_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnsSaleControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUidAccount, aliUidAccount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CustomAccount, customAccount_);
      DARABONBA_PTR_FROM_JSON(SaleControls, saleControls_);
    };
    UpdateEnsSaleControlRequest() = default ;
    UpdateEnsSaleControlRequest(const UpdateEnsSaleControlRequest &) = default ;
    UpdateEnsSaleControlRequest(UpdateEnsSaleControlRequest &&) = default ;
    UpdateEnsSaleControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnsSaleControlRequest() = default ;
    UpdateEnsSaleControlRequest& operator=(const UpdateEnsSaleControlRequest &) = default ;
    UpdateEnsSaleControlRequest& operator=(UpdateEnsSaleControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SaleControls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SaleControls& obj) { 
        DARABONBA_PTR_TO_JSON(ConditionControls, conditionControls_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      };
      friend void from_json(const Darabonba::Json& j, SaleControls& obj) { 
        DARABONBA_PTR_FROM_JSON(ConditionControls, conditionControls_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      };
      SaleControls() = default ;
      SaleControls(const SaleControls &) = default ;
      SaleControls(SaleControls &&) = default ;
      SaleControls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SaleControls() = default ;
      SaleControls& operator=(const SaleControls &) = default ;
      SaleControls& operator=(SaleControls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ModuleValue : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleValue& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleMaxValue, moduleMaxValue_);
          DARABONBA_PTR_TO_JSON(ModuleMinValue, moduleMinValue_);
          DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleValue& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleMaxValue, moduleMaxValue_);
          DARABONBA_PTR_FROM_JSON(ModuleMinValue, moduleMinValue_);
          DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
        };
        ModuleValue() = default ;
        ModuleValue(const ModuleValue &) = default ;
        ModuleValue(ModuleValue &&) = default ;
        ModuleValue(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModuleValue() = default ;
        ModuleValue& operator=(const ModuleValue &) = default ;
        ModuleValue& operator=(ModuleValue &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->moduleMaxValue_ == nullptr
        && this->moduleMinValue_ == nullptr && this->moduleValue_ == nullptr; };
        // moduleMaxValue Field Functions 
        bool hasModuleMaxValue() const { return this->moduleMaxValue_ != nullptr;};
        void deleteModuleMaxValue() { this->moduleMaxValue_ = nullptr;};
        inline string getModuleMaxValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMaxValue_, "") };
        inline ModuleValue& setModuleMaxValue(string moduleMaxValue) { DARABONBA_PTR_SET_VALUE(moduleMaxValue_, moduleMaxValue) };


        // moduleMinValue Field Functions 
        bool hasModuleMinValue() const { return this->moduleMinValue_ != nullptr;};
        void deleteModuleMinValue() { this->moduleMinValue_ = nullptr;};
        inline string getModuleMinValue() const { DARABONBA_PTR_GET_DEFAULT(moduleMinValue_, "") };
        inline ModuleValue& setModuleMinValue(string moduleMinValue) { DARABONBA_PTR_SET_VALUE(moduleMinValue_, moduleMinValue) };


        // moduleValue Field Functions 
        bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
        void deleteModuleValue() { this->moduleValue_ = nullptr;};
        inline const vector<string> & getModuleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, vector<string>) };
        inline vector<string> getModuleValue() { DARABONBA_PTR_GET(moduleValue_, vector<string>) };
        inline ModuleValue& setModuleValue(const vector<string> & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
        inline ModuleValue& setModuleValue(vector<string> && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


      protected:
        shared_ptr<string> moduleMaxValue_ {};
        shared_ptr<string> moduleMinValue_ {};
        shared_ptr<vector<string>> moduleValue_ {};
      };

      class ConditionControls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConditionControls& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionControlModuleCode, conditionControlModuleCode_);
          DARABONBA_PTR_TO_JSON(ConditionControlModuleValue, conditionControlModuleValue_);
        };
        friend void from_json(const Darabonba::Json& j, ConditionControls& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionControlModuleCode, conditionControlModuleCode_);
          DARABONBA_PTR_FROM_JSON(ConditionControlModuleValue, conditionControlModuleValue_);
        };
        ConditionControls() = default ;
        ConditionControls(const ConditionControls &) = default ;
        ConditionControls(ConditionControls &&) = default ;
        ConditionControls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConditionControls() = default ;
        ConditionControls& operator=(const ConditionControls &) = default ;
        ConditionControls& operator=(ConditionControls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->conditionControlModuleCode_ == nullptr
        && this->conditionControlModuleValue_ == nullptr; };
        // conditionControlModuleCode Field Functions 
        bool hasConditionControlModuleCode() const { return this->conditionControlModuleCode_ != nullptr;};
        void deleteConditionControlModuleCode() { this->conditionControlModuleCode_ = nullptr;};
        inline string getConditionControlModuleCode() const { DARABONBA_PTR_GET_DEFAULT(conditionControlModuleCode_, "") };
        inline ConditionControls& setConditionControlModuleCode(string conditionControlModuleCode) { DARABONBA_PTR_SET_VALUE(conditionControlModuleCode_, conditionControlModuleCode) };


        // conditionControlModuleValue Field Functions 
        bool hasConditionControlModuleValue() const { return this->conditionControlModuleValue_ != nullptr;};
        void deleteConditionControlModuleValue() { this->conditionControlModuleValue_ = nullptr;};
        inline string getConditionControlModuleValue() const { DARABONBA_PTR_GET_DEFAULT(conditionControlModuleValue_, "") };
        inline ConditionControls& setConditionControlModuleValue(string conditionControlModuleValue) { DARABONBA_PTR_SET_VALUE(conditionControlModuleValue_, conditionControlModuleValue) };


      protected:
        shared_ptr<string> conditionControlModuleCode_ {};
        shared_ptr<string> conditionControlModuleValue_ {};
      };

      virtual bool empty() const override { return this->conditionControls_ == nullptr
        && this->description_ == nullptr && this->moduleCode_ == nullptr && this->moduleValue_ == nullptr && this->operator_ == nullptr && this->orderType_ == nullptr; };
      // conditionControls Field Functions 
      bool hasConditionControls() const { return this->conditionControls_ != nullptr;};
      void deleteConditionControls() { this->conditionControls_ = nullptr;};
      inline const vector<SaleControls::ConditionControls> & getConditionControls() const { DARABONBA_PTR_GET_CONST(conditionControls_, vector<SaleControls::ConditionControls>) };
      inline vector<SaleControls::ConditionControls> getConditionControls() { DARABONBA_PTR_GET(conditionControls_, vector<SaleControls::ConditionControls>) };
      inline SaleControls& setConditionControls(const vector<SaleControls::ConditionControls> & conditionControls) { DARABONBA_PTR_SET_VALUE(conditionControls_, conditionControls) };
      inline SaleControls& setConditionControls(vector<SaleControls::ConditionControls> && conditionControls) { DARABONBA_PTR_SET_RVALUE(conditionControls_, conditionControls) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SaleControls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline SaleControls& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // moduleValue Field Functions 
      bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
      void deleteModuleValue() { this->moduleValue_ = nullptr;};
      inline const SaleControls::ModuleValue & getModuleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, SaleControls::ModuleValue) };
      inline SaleControls::ModuleValue getModuleValue() { DARABONBA_PTR_GET(moduleValue_, SaleControls::ModuleValue) };
      inline SaleControls& setModuleValue(const SaleControls::ModuleValue & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
      inline SaleControls& setModuleValue(SaleControls::ModuleValue && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline SaleControls& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline SaleControls& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    protected:
      shared_ptr<vector<SaleControls::ConditionControls>> conditionControls_ {};
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> moduleCode_ {};
      // This parameter is required.
      shared_ptr<SaleControls::ModuleValue> moduleValue_ {};
      // This parameter is required.
      shared_ptr<string> operator_ {};
      // This parameter is required.
      shared_ptr<string> orderType_ {};
    };

    virtual bool empty() const override { return this->aliUidAccount_ == nullptr
        && this->commodityCode_ == nullptr && this->customAccount_ == nullptr && this->saleControls_ == nullptr; };
    // aliUidAccount Field Functions 
    bool hasAliUidAccount() const { return this->aliUidAccount_ != nullptr;};
    void deleteAliUidAccount() { this->aliUidAccount_ = nullptr;};
    inline string getAliUidAccount() const { DARABONBA_PTR_GET_DEFAULT(aliUidAccount_, "") };
    inline UpdateEnsSaleControlRequest& setAliUidAccount(string aliUidAccount) { DARABONBA_PTR_SET_VALUE(aliUidAccount_, aliUidAccount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline UpdateEnsSaleControlRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // customAccount Field Functions 
    bool hasCustomAccount() const { return this->customAccount_ != nullptr;};
    void deleteCustomAccount() { this->customAccount_ = nullptr;};
    inline string getCustomAccount() const { DARABONBA_PTR_GET_DEFAULT(customAccount_, "") };
    inline UpdateEnsSaleControlRequest& setCustomAccount(string customAccount) { DARABONBA_PTR_SET_VALUE(customAccount_, customAccount) };


    // saleControls Field Functions 
    bool hasSaleControls() const { return this->saleControls_ != nullptr;};
    void deleteSaleControls() { this->saleControls_ = nullptr;};
    inline const vector<UpdateEnsSaleControlRequest::SaleControls> & getSaleControls() const { DARABONBA_PTR_GET_CONST(saleControls_, vector<UpdateEnsSaleControlRequest::SaleControls>) };
    inline vector<UpdateEnsSaleControlRequest::SaleControls> getSaleControls() { DARABONBA_PTR_GET(saleControls_, vector<UpdateEnsSaleControlRequest::SaleControls>) };
    inline UpdateEnsSaleControlRequest& setSaleControls(const vector<UpdateEnsSaleControlRequest::SaleControls> & saleControls) { DARABONBA_PTR_SET_VALUE(saleControls_, saleControls) };
    inline UpdateEnsSaleControlRequest& setSaleControls(vector<UpdateEnsSaleControlRequest::SaleControls> && saleControls) { DARABONBA_PTR_SET_RVALUE(saleControls_, saleControls) };


  protected:
    shared_ptr<string> aliUidAccount_ {};
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    shared_ptr<string> customAccount_ {};
    // This parameter is required.
    shared_ptr<vector<UpdateEnsSaleControlRequest::SaleControls>> saleControls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DataModuleMapListSpnTypeMapListValue.hpp>
#include <alibabacloud/models/DataStepPriceMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanDeductableCommodityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanDeductableCommodityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanDeductableCommodityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSavingPlanDeductableCommodityResponseBody() = default ;
    GetSavingPlanDeductableCommodityResponseBody(const GetSavingPlanDeductableCommodityResponseBody &) = default ;
    GetSavingPlanDeductableCommodityResponseBody(GetSavingPlanDeductableCommodityResponseBody &&) = default ;
    GetSavingPlanDeductableCommodityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanDeductableCommodityResponseBody() = default ;
    GetSavingPlanDeductableCommodityResponseBody& operator=(const GetSavingPlanDeductableCommodityResponseBody &) = default ;
    GetSavingPlanDeductableCommodityResponseBody& operator=(GetSavingPlanDeductableCommodityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityId, commodityId_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(CycleList, cycleList_);
        DARABONBA_PTR_TO_JSON(FilterModules, filterModules_);
        DARABONBA_PTR_TO_JSON(ItemCode, itemCode_);
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(ItemName, itemName_);
        DARABONBA_PTR_TO_JSON(ModuleMapList, moduleMapList_);
        DARABONBA_PTR_TO_JSON(PayModeList, payModeList_);
        DARABONBA_PTR_TO_JSON(PricingModules, pricingModules_);
        DARABONBA_PTR_TO_JSON(SpnCommodityCode, spnCommodityCode_);
        DARABONBA_PTR_TO_JSON(SpnCommodityName, spnCommodityName_);
        DARABONBA_PTR_TO_JSON(SpnDiscountConfigType, spnDiscountConfigType_);
        DARABONBA_PTR_TO_JSON(StepPriceMap, stepPriceMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityId, commodityId_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(CycleList, cycleList_);
        DARABONBA_PTR_FROM_JSON(FilterModules, filterModules_);
        DARABONBA_PTR_FROM_JSON(ItemCode, itemCode_);
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
        DARABONBA_PTR_FROM_JSON(ModuleMapList, moduleMapList_);
        DARABONBA_PTR_FROM_JSON(PayModeList, payModeList_);
        DARABONBA_PTR_FROM_JSON(PricingModules, pricingModules_);
        DARABONBA_PTR_FROM_JSON(SpnCommodityCode, spnCommodityCode_);
        DARABONBA_PTR_FROM_JSON(SpnCommodityName, spnCommodityName_);
        DARABONBA_PTR_FROM_JSON(SpnDiscountConfigType, spnDiscountConfigType_);
        DARABONBA_PTR_FROM_JSON(StepPriceMap, stepPriceMap_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PricingModules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PricingModules& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        };
        friend void from_json(const Darabonba::Json& j, PricingModules& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        };
        PricingModules() = default ;
        PricingModules(const PricingModules &) = default ;
        PricingModules(PricingModules &&) = default ;
        PricingModules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PricingModules() = default ;
        PricingModules& operator=(const PricingModules &) = default ;
        PricingModules& operator=(PricingModules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->moduleId_ == nullptr && this->moduleName_ == nullptr; };
        // moduleCode Field Functions 
        bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
        void deleteModuleCode() { this->moduleCode_ = nullptr;};
        inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
        inline PricingModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


        // moduleId Field Functions 
        bool hasModuleId() const { return this->moduleId_ != nullptr;};
        void deleteModuleId() { this->moduleId_ = nullptr;};
        inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
        inline PricingModules& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline PricingModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      protected:
        shared_ptr<string> moduleCode_ {};
        shared_ptr<int64_t> moduleId_ {};
        shared_ptr<string> moduleName_ {};
      };

      class PayModeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PayModeList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, PayModeList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        PayModeList() = default ;
        PayModeList(const PayModeList &) = default ;
        PayModeList(PayModeList &&) = default ;
        PayModeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PayModeList() = default ;
        PayModeList& operator=(const PayModeList &) = default ;
        PayModeList& operator=(PayModeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline PayModeList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PayModeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> name_ {};
      };

      class ModuleMapList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleMapList& obj) { 
          DARABONBA_PTR_TO_JSON(FilterModules, filterModules_);
          DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_TO_JSON(ShowModules, showModules_);
          DARABONBA_PTR_TO_JSON(SpnTypeList, spnTypeList_);
          DARABONBA_PTR_TO_JSON(SpnTypeMapList, spnTypeMapList_);
          DARABONBA_PTR_TO_JSON(SpnTypeNameList, spnTypeNameList_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleMapList& obj) { 
          DARABONBA_PTR_FROM_JSON(FilterModules, filterModules_);
          DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
          DARABONBA_PTR_FROM_JSON(ShowModules, showModules_);
          DARABONBA_PTR_FROM_JSON(SpnTypeList, spnTypeList_);
          DARABONBA_PTR_FROM_JSON(SpnTypeMapList, spnTypeMapList_);
          DARABONBA_PTR_FROM_JSON(SpnTypeNameList, spnTypeNameList_);
        };
        ModuleMapList() = default ;
        ModuleMapList(const ModuleMapList &) = default ;
        ModuleMapList(ModuleMapList &&) = default ;
        ModuleMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModuleMapList() = default ;
        ModuleMapList& operator=(const ModuleMapList &) = default ;
        ModuleMapList& operator=(ModuleMapList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SpnTypeNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SpnTypeNameList& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, SpnTypeNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          SpnTypeNameList() = default ;
          SpnTypeNameList(const SpnTypeNameList &) = default ;
          SpnTypeNameList(SpnTypeNameList &&) = default ;
          SpnTypeNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SpnTypeNameList() = default ;
          SpnTypeNameList& operator=(const SpnTypeNameList &) = default ;
          SpnTypeNameList& operator=(SpnTypeNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline SpnTypeNameList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline SpnTypeNameList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> name_ {};
        };

        class ShowModules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ShowModules& obj) { 
            DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
            DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
            DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
          };
          friend void from_json(const Darabonba::Json& j, ShowModules& obj) { 
            DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
            DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
            DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
          };
          ShowModules() = default ;
          ShowModules(const ShowModules &) = default ;
          ShowModules(ShowModules &&) = default ;
          ShowModules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ShowModules() = default ;
          ShowModules& operator=(const ShowModules &) = default ;
          ShowModules& operator=(ShowModules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->moduleId_ == nullptr && this->moduleName_ == nullptr; };
          // moduleCode Field Functions 
          bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
          void deleteModuleCode() { this->moduleCode_ = nullptr;};
          inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
          inline ShowModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


          // moduleId Field Functions 
          bool hasModuleId() const { return this->moduleId_ != nullptr;};
          void deleteModuleId() { this->moduleId_ = nullptr;};
          inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
          inline ShowModules& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


          // moduleName Field Functions 
          bool hasModuleName() const { return this->moduleName_ != nullptr;};
          void deleteModuleName() { this->moduleName_ = nullptr;};
          inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
          inline ShowModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


        protected:
          shared_ptr<string> moduleCode_ {};
          shared_ptr<int64_t> moduleId_ {};
          shared_ptr<string> moduleName_ {};
        };

        class FilterModules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FilterModules& obj) { 
            DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
            DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
            DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
          };
          friend void from_json(const Darabonba::Json& j, FilterModules& obj) { 
            DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
            DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
            DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
          };
          FilterModules() = default ;
          FilterModules(const FilterModules &) = default ;
          FilterModules(FilterModules &&) = default ;
          FilterModules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FilterModules() = default ;
          FilterModules& operator=(const FilterModules &) = default ;
          FilterModules& operator=(FilterModules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->moduleId_ == nullptr && this->moduleName_ == nullptr; };
          // moduleCode Field Functions 
          bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
          void deleteModuleCode() { this->moduleCode_ = nullptr;};
          inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
          inline FilterModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


          // moduleId Field Functions 
          bool hasModuleId() const { return this->moduleId_ != nullptr;};
          void deleteModuleId() { this->moduleId_ = nullptr;};
          inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
          inline FilterModules& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


          // moduleName Field Functions 
          bool hasModuleName() const { return this->moduleName_ != nullptr;};
          void deleteModuleName() { this->moduleName_ = nullptr;};
          inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
          inline FilterModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


        protected:
          shared_ptr<string> moduleCode_ {};
          shared_ptr<int64_t> moduleId_ {};
          shared_ptr<string> moduleName_ {};
        };

        virtual bool empty() const override { return this->filterModules_ == nullptr
        && this->moduleCode_ == nullptr && this->moduleId_ == nullptr && this->moduleName_ == nullptr && this->showModules_ == nullptr && this->spnTypeList_ == nullptr
        && this->spnTypeMapList_ == nullptr && this->spnTypeNameList_ == nullptr; };
        // filterModules Field Functions 
        bool hasFilterModules() const { return this->filterModules_ != nullptr;};
        void deleteFilterModules() { this->filterModules_ = nullptr;};
        inline const vector<ModuleMapList::FilterModules> & getFilterModules() const { DARABONBA_PTR_GET_CONST(filterModules_, vector<ModuleMapList::FilterModules>) };
        inline vector<ModuleMapList::FilterModules> getFilterModules() { DARABONBA_PTR_GET(filterModules_, vector<ModuleMapList::FilterModules>) };
        inline ModuleMapList& setFilterModules(const vector<ModuleMapList::FilterModules> & filterModules) { DARABONBA_PTR_SET_VALUE(filterModules_, filterModules) };
        inline ModuleMapList& setFilterModules(vector<ModuleMapList::FilterModules> && filterModules) { DARABONBA_PTR_SET_RVALUE(filterModules_, filterModules) };


        // moduleCode Field Functions 
        bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
        void deleteModuleCode() { this->moduleCode_ = nullptr;};
        inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
        inline ModuleMapList& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


        // moduleId Field Functions 
        bool hasModuleId() const { return this->moduleId_ != nullptr;};
        void deleteModuleId() { this->moduleId_ = nullptr;};
        inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
        inline ModuleMapList& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline ModuleMapList& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


        // showModules Field Functions 
        bool hasShowModules() const { return this->showModules_ != nullptr;};
        void deleteShowModules() { this->showModules_ = nullptr;};
        inline const vector<ModuleMapList::ShowModules> & getShowModules() const { DARABONBA_PTR_GET_CONST(showModules_, vector<ModuleMapList::ShowModules>) };
        inline vector<ModuleMapList::ShowModules> getShowModules() { DARABONBA_PTR_GET(showModules_, vector<ModuleMapList::ShowModules>) };
        inline ModuleMapList& setShowModules(const vector<ModuleMapList::ShowModules> & showModules) { DARABONBA_PTR_SET_VALUE(showModules_, showModules) };
        inline ModuleMapList& setShowModules(vector<ModuleMapList::ShowModules> && showModules) { DARABONBA_PTR_SET_RVALUE(showModules_, showModules) };


        // spnTypeList Field Functions 
        bool hasSpnTypeList() const { return this->spnTypeList_ != nullptr;};
        void deleteSpnTypeList() { this->spnTypeList_ = nullptr;};
        inline const vector<string> & getSpnTypeList() const { DARABONBA_PTR_GET_CONST(spnTypeList_, vector<string>) };
        inline vector<string> getSpnTypeList() { DARABONBA_PTR_GET(spnTypeList_, vector<string>) };
        inline ModuleMapList& setSpnTypeList(const vector<string> & spnTypeList) { DARABONBA_PTR_SET_VALUE(spnTypeList_, spnTypeList) };
        inline ModuleMapList& setSpnTypeList(vector<string> && spnTypeList) { DARABONBA_PTR_SET_RVALUE(spnTypeList_, spnTypeList) };


        // spnTypeMapList Field Functions 
        bool hasSpnTypeMapList() const { return this->spnTypeMapList_ != nullptr;};
        void deleteSpnTypeMapList() { this->spnTypeMapList_ = nullptr;};
        inline const vector<map<string, DataModuleMapListSpnTypeMapListValue>> & getSpnTypeMapList() const { DARABONBA_PTR_GET_CONST(spnTypeMapList_, vector<map<string, DataModuleMapListSpnTypeMapListValue>>) };
        inline vector<map<string, DataModuleMapListSpnTypeMapListValue>> getSpnTypeMapList() { DARABONBA_PTR_GET(spnTypeMapList_, vector<map<string, DataModuleMapListSpnTypeMapListValue>>) };
        inline ModuleMapList& setSpnTypeMapList(const vector<map<string, DataModuleMapListSpnTypeMapListValue>> & spnTypeMapList) { DARABONBA_PTR_SET_VALUE(spnTypeMapList_, spnTypeMapList) };
        inline ModuleMapList& setSpnTypeMapList(vector<map<string, DataModuleMapListSpnTypeMapListValue>> && spnTypeMapList) { DARABONBA_PTR_SET_RVALUE(spnTypeMapList_, spnTypeMapList) };


        // spnTypeNameList Field Functions 
        bool hasSpnTypeNameList() const { return this->spnTypeNameList_ != nullptr;};
        void deleteSpnTypeNameList() { this->spnTypeNameList_ = nullptr;};
        inline const vector<ModuleMapList::SpnTypeNameList> & getSpnTypeNameList() const { DARABONBA_PTR_GET_CONST(spnTypeNameList_, vector<ModuleMapList::SpnTypeNameList>) };
        inline vector<ModuleMapList::SpnTypeNameList> getSpnTypeNameList() { DARABONBA_PTR_GET(spnTypeNameList_, vector<ModuleMapList::SpnTypeNameList>) };
        inline ModuleMapList& setSpnTypeNameList(const vector<ModuleMapList::SpnTypeNameList> & spnTypeNameList) { DARABONBA_PTR_SET_VALUE(spnTypeNameList_, spnTypeNameList) };
        inline ModuleMapList& setSpnTypeNameList(vector<ModuleMapList::SpnTypeNameList> && spnTypeNameList) { DARABONBA_PTR_SET_RVALUE(spnTypeNameList_, spnTypeNameList) };


      protected:
        shared_ptr<vector<ModuleMapList::FilterModules>> filterModules_ {};
        shared_ptr<string> moduleCode_ {};
        shared_ptr<int64_t> moduleId_ {};
        shared_ptr<string> moduleName_ {};
        shared_ptr<vector<ModuleMapList::ShowModules>> showModules_ {};
        shared_ptr<vector<string>> spnTypeList_ {};
        shared_ptr<vector<map<string, DataModuleMapListSpnTypeMapListValue>>> spnTypeMapList_ {};
        shared_ptr<vector<ModuleMapList::SpnTypeNameList>> spnTypeNameList_ {};
      };

      class FilterModules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FilterModules& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_TO_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        };
        friend void from_json(const Darabonba::Json& j, FilterModules& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_FROM_JSON(ModuleId, moduleId_);
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        };
        FilterModules() = default ;
        FilterModules(const FilterModules &) = default ;
        FilterModules(FilterModules &&) = default ;
        FilterModules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FilterModules() = default ;
        FilterModules& operator=(const FilterModules &) = default ;
        FilterModules& operator=(FilterModules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->moduleId_ == nullptr && this->moduleName_ == nullptr; };
        // moduleCode Field Functions 
        bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
        void deleteModuleCode() { this->moduleCode_ = nullptr;};
        inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
        inline FilterModules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


        // moduleId Field Functions 
        bool hasModuleId() const { return this->moduleId_ != nullptr;};
        void deleteModuleId() { this->moduleId_ = nullptr;};
        inline int64_t getModuleId() const { DARABONBA_PTR_GET_DEFAULT(moduleId_, 0L) };
        inline FilterModules& setModuleId(int64_t moduleId) { DARABONBA_PTR_SET_VALUE(moduleId_, moduleId) };


        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline FilterModules& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      protected:
        shared_ptr<string> moduleCode_ {};
        shared_ptr<int64_t> moduleId_ {};
        shared_ptr<string> moduleName_ {};
      };

      class CycleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CycleList& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, CycleList& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        CycleList() = default ;
        CycleList(const CycleList &) = default ;
        CycleList(CycleList &&) = default ;
        CycleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CycleList() = default ;
        CycleList& operator=(const CycleList &) = default ;
        CycleList& operator=(CycleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->name_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline CycleList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CycleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->activityId_ == nullptr
        && this->commodityCode_ == nullptr && this->commodityId_ == nullptr && this->commodityName_ == nullptr && this->cycleList_ == nullptr && this->filterModules_ == nullptr
        && this->itemCode_ == nullptr && this->itemId_ == nullptr && this->itemName_ == nullptr && this->moduleMapList_ == nullptr && this->payModeList_ == nullptr
        && this->pricingModules_ == nullptr && this->spnCommodityCode_ == nullptr && this->spnCommodityName_ == nullptr && this->spnDiscountConfigType_ == nullptr && this->stepPriceMap_ == nullptr; };
      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline int64_t getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
      inline Data& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityId Field Functions 
      bool hasCommodityId() const { return this->commodityId_ != nullptr;};
      void deleteCommodityId() { this->commodityId_ = nullptr;};
      inline int64_t getCommodityId() const { DARABONBA_PTR_GET_DEFAULT(commodityId_, 0L) };
      inline Data& setCommodityId(int64_t commodityId) { DARABONBA_PTR_SET_VALUE(commodityId_, commodityId) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline Data& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // cycleList Field Functions 
      bool hasCycleList() const { return this->cycleList_ != nullptr;};
      void deleteCycleList() { this->cycleList_ = nullptr;};
      inline const vector<Data::CycleList> & getCycleList() const { DARABONBA_PTR_GET_CONST(cycleList_, vector<Data::CycleList>) };
      inline vector<Data::CycleList> getCycleList() { DARABONBA_PTR_GET(cycleList_, vector<Data::CycleList>) };
      inline Data& setCycleList(const vector<Data::CycleList> & cycleList) { DARABONBA_PTR_SET_VALUE(cycleList_, cycleList) };
      inline Data& setCycleList(vector<Data::CycleList> && cycleList) { DARABONBA_PTR_SET_RVALUE(cycleList_, cycleList) };


      // filterModules Field Functions 
      bool hasFilterModules() const { return this->filterModules_ != nullptr;};
      void deleteFilterModules() { this->filterModules_ = nullptr;};
      inline const vector<Data::FilterModules> & getFilterModules() const { DARABONBA_PTR_GET_CONST(filterModules_, vector<Data::FilterModules>) };
      inline vector<Data::FilterModules> getFilterModules() { DARABONBA_PTR_GET(filterModules_, vector<Data::FilterModules>) };
      inline Data& setFilterModules(const vector<Data::FilterModules> & filterModules) { DARABONBA_PTR_SET_VALUE(filterModules_, filterModules) };
      inline Data& setFilterModules(vector<Data::FilterModules> && filterModules) { DARABONBA_PTR_SET_RVALUE(filterModules_, filterModules) };


      // itemCode Field Functions 
      bool hasItemCode() const { return this->itemCode_ != nullptr;};
      void deleteItemCode() { this->itemCode_ = nullptr;};
      inline string getItemCode() const { DARABONBA_PTR_GET_DEFAULT(itemCode_, "") };
      inline Data& setItemCode(string itemCode) { DARABONBA_PTR_SET_VALUE(itemCode_, itemCode) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
      inline Data& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // itemName Field Functions 
      bool hasItemName() const { return this->itemName_ != nullptr;};
      void deleteItemName() { this->itemName_ = nullptr;};
      inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
      inline Data& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


      // moduleMapList Field Functions 
      bool hasModuleMapList() const { return this->moduleMapList_ != nullptr;};
      void deleteModuleMapList() { this->moduleMapList_ = nullptr;};
      inline const vector<Data::ModuleMapList> & getModuleMapList() const { DARABONBA_PTR_GET_CONST(moduleMapList_, vector<Data::ModuleMapList>) };
      inline vector<Data::ModuleMapList> getModuleMapList() { DARABONBA_PTR_GET(moduleMapList_, vector<Data::ModuleMapList>) };
      inline Data& setModuleMapList(const vector<Data::ModuleMapList> & moduleMapList) { DARABONBA_PTR_SET_VALUE(moduleMapList_, moduleMapList) };
      inline Data& setModuleMapList(vector<Data::ModuleMapList> && moduleMapList) { DARABONBA_PTR_SET_RVALUE(moduleMapList_, moduleMapList) };


      // payModeList Field Functions 
      bool hasPayModeList() const { return this->payModeList_ != nullptr;};
      void deletePayModeList() { this->payModeList_ = nullptr;};
      inline const vector<Data::PayModeList> & getPayModeList() const { DARABONBA_PTR_GET_CONST(payModeList_, vector<Data::PayModeList>) };
      inline vector<Data::PayModeList> getPayModeList() { DARABONBA_PTR_GET(payModeList_, vector<Data::PayModeList>) };
      inline Data& setPayModeList(const vector<Data::PayModeList> & payModeList) { DARABONBA_PTR_SET_VALUE(payModeList_, payModeList) };
      inline Data& setPayModeList(vector<Data::PayModeList> && payModeList) { DARABONBA_PTR_SET_RVALUE(payModeList_, payModeList) };


      // pricingModules Field Functions 
      bool hasPricingModules() const { return this->pricingModules_ != nullptr;};
      void deletePricingModules() { this->pricingModules_ = nullptr;};
      inline const vector<Data::PricingModules> & getPricingModules() const { DARABONBA_PTR_GET_CONST(pricingModules_, vector<Data::PricingModules>) };
      inline vector<Data::PricingModules> getPricingModules() { DARABONBA_PTR_GET(pricingModules_, vector<Data::PricingModules>) };
      inline Data& setPricingModules(const vector<Data::PricingModules> & pricingModules) { DARABONBA_PTR_SET_VALUE(pricingModules_, pricingModules) };
      inline Data& setPricingModules(vector<Data::PricingModules> && pricingModules) { DARABONBA_PTR_SET_RVALUE(pricingModules_, pricingModules) };


      // spnCommodityCode Field Functions 
      bool hasSpnCommodityCode() const { return this->spnCommodityCode_ != nullptr;};
      void deleteSpnCommodityCode() { this->spnCommodityCode_ = nullptr;};
      inline string getSpnCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(spnCommodityCode_, "") };
      inline Data& setSpnCommodityCode(string spnCommodityCode) { DARABONBA_PTR_SET_VALUE(spnCommodityCode_, spnCommodityCode) };


      // spnCommodityName Field Functions 
      bool hasSpnCommodityName() const { return this->spnCommodityName_ != nullptr;};
      void deleteSpnCommodityName() { this->spnCommodityName_ = nullptr;};
      inline string getSpnCommodityName() const { DARABONBA_PTR_GET_DEFAULT(spnCommodityName_, "") };
      inline Data& setSpnCommodityName(string spnCommodityName) { DARABONBA_PTR_SET_VALUE(spnCommodityName_, spnCommodityName) };


      // spnDiscountConfigType Field Functions 
      bool hasSpnDiscountConfigType() const { return this->spnDiscountConfigType_ != nullptr;};
      void deleteSpnDiscountConfigType() { this->spnDiscountConfigType_ = nullptr;};
      inline string getSpnDiscountConfigType() const { DARABONBA_PTR_GET_DEFAULT(spnDiscountConfigType_, "") };
      inline Data& setSpnDiscountConfigType(string spnDiscountConfigType) { DARABONBA_PTR_SET_VALUE(spnDiscountConfigType_, spnDiscountConfigType) };


      // stepPriceMap Field Functions 
      bool hasStepPriceMap() const { return this->stepPriceMap_ != nullptr;};
      void deleteStepPriceMap() { this->stepPriceMap_ = nullptr;};
      inline const map<string, vector<DataStepPriceMapValue>> & getStepPriceMap() const { DARABONBA_PTR_GET_CONST(stepPriceMap_, map<string, vector<DataStepPriceMapValue>>) };
      inline map<string, vector<DataStepPriceMapValue>> getStepPriceMap() { DARABONBA_PTR_GET(stepPriceMap_, map<string, vector<DataStepPriceMapValue>>) };
      inline Data& setStepPriceMap(const map<string, vector<DataStepPriceMapValue>> & stepPriceMap) { DARABONBA_PTR_SET_VALUE(stepPriceMap_, stepPriceMap) };
      inline Data& setStepPriceMap(map<string, vector<DataStepPriceMapValue>> && stepPriceMap) { DARABONBA_PTR_SET_RVALUE(stepPriceMap_, stepPriceMap) };


    protected:
      shared_ptr<int64_t> activityId_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<int64_t> commodityId_ {};
      shared_ptr<string> commodityName_ {};
      shared_ptr<vector<Data::CycleList>> cycleList_ {};
      shared_ptr<vector<Data::FilterModules>> filterModules_ {};
      shared_ptr<string> itemCode_ {};
      shared_ptr<int64_t> itemId_ {};
      shared_ptr<string> itemName_ {};
      shared_ptr<vector<Data::ModuleMapList>> moduleMapList_ {};
      shared_ptr<vector<Data::PayModeList>> payModeList_ {};
      shared_ptr<vector<Data::PricingModules>> pricingModules_ {};
      shared_ptr<string> spnCommodityCode_ {};
      shared_ptr<string> spnCommodityName_ {};
      shared_ptr<string> spnDiscountConfigType_ {};
      shared_ptr<map<string, vector<DataStepPriceMapValue>>> stepPriceMap_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSavingPlanDeductableCommodityResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSavingPlanDeductableCommodityResponseBody::Data>) };
    inline vector<GetSavingPlanDeductableCommodityResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSavingPlanDeductableCommodityResponseBody::Data>) };
    inline GetSavingPlanDeductableCommodityResponseBody& setData(const vector<GetSavingPlanDeductableCommodityResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSavingPlanDeductableCommodityResponseBody& setData(vector<GetSavingPlanDeductableCommodityResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSavingPlanDeductableCommodityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetSavingPlanDeductableCommodityResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

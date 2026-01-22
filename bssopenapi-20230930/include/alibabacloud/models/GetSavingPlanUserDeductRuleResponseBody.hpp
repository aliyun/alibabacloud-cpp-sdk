// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANUSERDEDUCTRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANUSERDEDUCTRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanUserDeductRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanUserDeductRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanUserDeductRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSavingPlanUserDeductRuleResponseBody() = default ;
    GetSavingPlanUserDeductRuleResponseBody(const GetSavingPlanUserDeductRuleResponseBody &) = default ;
    GetSavingPlanUserDeductRuleResponseBody(GetSavingPlanUserDeductRuleResponseBody &&) = default ;
    GetSavingPlanUserDeductRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanUserDeductRuleResponseBody() = default ;
    GetSavingPlanUserDeductRuleResponseBody& operator=(const GetSavingPlanUserDeductRuleResponseBody &) = default ;
    GetSavingPlanUserDeductRuleResponseBody& operator=(GetSavingPlanUserDeductRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_TO_JSON(SkipDeduct, skipDeduct_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        DARABONBA_PTR_FROM_JSON(SkipDeduct, skipDeduct_);
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
      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->commodityName_ == nullptr && this->moduleCode_ == nullptr && this->moduleName_ == nullptr && this->skipDeduct_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline Data& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline Data& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // moduleName Field Functions 
      bool hasModuleName() const { return this->moduleName_ != nullptr;};
      void deleteModuleName() { this->moduleName_ = nullptr;};
      inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
      inline Data& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      // skipDeduct Field Functions 
      bool hasSkipDeduct() const { return this->skipDeduct_ != nullptr;};
      void deleteSkipDeduct() { this->skipDeduct_ = nullptr;};
      inline bool getSkipDeduct() const { DARABONBA_PTR_GET_DEFAULT(skipDeduct_, false) };
      inline Data& setSkipDeduct(bool skipDeduct) { DARABONBA_PTR_SET_VALUE(skipDeduct_, skipDeduct) };


    protected:
      shared_ptr<string> commodityCode_ {};
      shared_ptr<string> commodityName_ {};
      shared_ptr<string> moduleCode_ {};
      shared_ptr<string> moduleName_ {};
      shared_ptr<bool> skipDeduct_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSavingPlanUserDeductRuleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSavingPlanUserDeductRuleResponseBody::Data>) };
    inline vector<GetSavingPlanUserDeductRuleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSavingPlanUserDeductRuleResponseBody::Data>) };
    inline GetSavingPlanUserDeductRuleResponseBody& setData(const vector<GetSavingPlanUserDeductRuleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSavingPlanUserDeductRuleResponseBody& setData(vector<GetSavingPlanUserDeductRuleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSavingPlanUserDeductRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetSavingPlanUserDeductRuleResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

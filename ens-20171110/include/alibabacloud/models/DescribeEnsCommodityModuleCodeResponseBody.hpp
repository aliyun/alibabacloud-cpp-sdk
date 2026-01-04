// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSCOMMODITYMODULECODERESPONSEBODY_HPP_
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
  class DescribeEnsCommodityModuleCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsCommodityModuleCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCodesInfo, commodityCodesInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsCommodityModuleCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCodesInfo, commodityCodesInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEnsCommodityModuleCodeResponseBody() = default ;
    DescribeEnsCommodityModuleCodeResponseBody(const DescribeEnsCommodityModuleCodeResponseBody &) = default ;
    DescribeEnsCommodityModuleCodeResponseBody(DescribeEnsCommodityModuleCodeResponseBody &&) = default ;
    DescribeEnsCommodityModuleCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsCommodityModuleCodeResponseBody() = default ;
    DescribeEnsCommodityModuleCodeResponseBody& operator=(const DescribeEnsCommodityModuleCodeResponseBody &) = default ;
    DescribeEnsCommodityModuleCodeResponseBody& operator=(DescribeEnsCommodityModuleCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommodityCodesInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommodityCodesInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ModuleCodesInfo, moduleCodesInfo_);
      };
      friend void from_json(const Darabonba::Json& j, CommodityCodesInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ModuleCodesInfo, moduleCodesInfo_);
      };
      CommodityCodesInfo() = default ;
      CommodityCodesInfo(const CommodityCodesInfo &) = default ;
      CommodityCodesInfo(CommodityCodesInfo &&) = default ;
      CommodityCodesInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommodityCodesInfo() = default ;
      CommodityCodesInfo& operator=(const CommodityCodesInfo &) = default ;
      CommodityCodesInfo& operator=(CommodityCodesInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ModuleCodesInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModuleCodesInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        };
        friend void from_json(const Darabonba::Json& j, ModuleCodesInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        };
        ModuleCodesInfo() = default ;
        ModuleCodesInfo(const ModuleCodesInfo &) = default ;
        ModuleCodesInfo(ModuleCodesInfo &&) = default ;
        ModuleCodesInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModuleCodesInfo() = default ;
        ModuleCodesInfo& operator=(const ModuleCodesInfo &) = default ;
        ModuleCodesInfo& operator=(ModuleCodesInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->moduleName_ == nullptr; };
        // moduleCode Field Functions 
        bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
        void deleteModuleCode() { this->moduleCode_ = nullptr;};
        inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
        inline ModuleCodesInfo& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline ModuleCodesInfo& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      protected:
        shared_ptr<string> moduleCode_ {};
        shared_ptr<string> moduleName_ {};
      };

      virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->moduleCodesInfo_ == nullptr; };
      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline CommodityCodesInfo& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // moduleCodesInfo Field Functions 
      bool hasModuleCodesInfo() const { return this->moduleCodesInfo_ != nullptr;};
      void deleteModuleCodesInfo() { this->moduleCodesInfo_ = nullptr;};
      inline const vector<CommodityCodesInfo::ModuleCodesInfo> & getModuleCodesInfo() const { DARABONBA_PTR_GET_CONST(moduleCodesInfo_, vector<CommodityCodesInfo::ModuleCodesInfo>) };
      inline vector<CommodityCodesInfo::ModuleCodesInfo> getModuleCodesInfo() { DARABONBA_PTR_GET(moduleCodesInfo_, vector<CommodityCodesInfo::ModuleCodesInfo>) };
      inline CommodityCodesInfo& setModuleCodesInfo(const vector<CommodityCodesInfo::ModuleCodesInfo> & moduleCodesInfo) { DARABONBA_PTR_SET_VALUE(moduleCodesInfo_, moduleCodesInfo) };
      inline CommodityCodesInfo& setModuleCodesInfo(vector<CommodityCodesInfo::ModuleCodesInfo> && moduleCodesInfo) { DARABONBA_PTR_SET_RVALUE(moduleCodesInfo_, moduleCodesInfo) };


    protected:
      shared_ptr<string> commodityCode_ {};
      shared_ptr<vector<CommodityCodesInfo::ModuleCodesInfo>> moduleCodesInfo_ {};
    };

    virtual bool empty() const override { return this->commodityCodesInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // commodityCodesInfo Field Functions 
    bool hasCommodityCodesInfo() const { return this->commodityCodesInfo_ != nullptr;};
    void deleteCommodityCodesInfo() { this->commodityCodesInfo_ = nullptr;};
    inline const vector<DescribeEnsCommodityModuleCodeResponseBody::CommodityCodesInfo> & getCommodityCodesInfo() const { DARABONBA_PTR_GET_CONST(commodityCodesInfo_, vector<DescribeEnsCommodityModuleCodeResponseBody::CommodityCodesInfo>) };
    inline vector<DescribeEnsCommodityModuleCodeResponseBody::CommodityCodesInfo> getCommodityCodesInfo() { DARABONBA_PTR_GET(commodityCodesInfo_, vector<DescribeEnsCommodityModuleCodeResponseBody::CommodityCodesInfo>) };
    inline DescribeEnsCommodityModuleCodeResponseBody& setCommodityCodesInfo(const vector<DescribeEnsCommodityModuleCodeResponseBody::CommodityCodesInfo> & commodityCodesInfo) { DARABONBA_PTR_SET_VALUE(commodityCodesInfo_, commodityCodesInfo) };
    inline DescribeEnsCommodityModuleCodeResponseBody& setCommodityCodesInfo(vector<DescribeEnsCommodityModuleCodeResponseBody::CommodityCodesInfo> && commodityCodesInfo) { DARABONBA_PTR_SET_RVALUE(commodityCodesInfo_, commodityCodesInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsCommodityModuleCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeEnsCommodityModuleCodeResponseBody::CommodityCodesInfo>> commodityCodesInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

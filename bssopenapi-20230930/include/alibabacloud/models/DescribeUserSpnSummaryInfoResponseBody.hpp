// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSPNSUMMARYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSPNSUMMARYINFORESPONSEBODY_HPP_
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
  class DescribeUserSpnSummaryInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserSpnSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceFamilyList, instanceFamilyList_);
      DARABONBA_PTR_TO_JSON(RegionList, regionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpnCodeAndTypeList, spnCodeAndTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserSpnSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceFamilyList, instanceFamilyList_);
      DARABONBA_PTR_FROM_JSON(RegionList, regionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpnCodeAndTypeList, spnCodeAndTypeList_);
    };
    DescribeUserSpnSummaryInfoResponseBody() = default ;
    DescribeUserSpnSummaryInfoResponseBody(const DescribeUserSpnSummaryInfoResponseBody &) = default ;
    DescribeUserSpnSummaryInfoResponseBody(DescribeUserSpnSummaryInfoResponseBody &&) = default ;
    DescribeUserSpnSummaryInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserSpnSummaryInfoResponseBody() = default ;
    DescribeUserSpnSummaryInfoResponseBody& operator=(const DescribeUserSpnSummaryInfoResponseBody &) = default ;
    DescribeUserSpnSummaryInfoResponseBody& operator=(DescribeUserSpnSummaryInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpnCodeAndTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpnCodeAndTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(SpnCommodityCode, spnCommodityCode_);
        DARABONBA_PTR_TO_JSON(SpnType, spnType_);
        DARABONBA_PTR_TO_JSON(SpnTypeName, spnTypeName_);
      };
      friend void from_json(const Darabonba::Json& j, SpnCodeAndTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(SpnCommodityCode, spnCommodityCode_);
        DARABONBA_PTR_FROM_JSON(SpnType, spnType_);
        DARABONBA_PTR_FROM_JSON(SpnTypeName, spnTypeName_);
      };
      SpnCodeAndTypeList() = default ;
      SpnCodeAndTypeList(const SpnCodeAndTypeList &) = default ;
      SpnCodeAndTypeList(SpnCodeAndTypeList &&) = default ;
      SpnCodeAndTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpnCodeAndTypeList() = default ;
      SpnCodeAndTypeList& operator=(const SpnCodeAndTypeList &) = default ;
      SpnCodeAndTypeList& operator=(SpnCodeAndTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->productCode_ == nullptr
        && this->spnCommodityCode_ == nullptr && this->spnType_ == nullptr && this->spnTypeName_ == nullptr; };
      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline SpnCodeAndTypeList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // spnCommodityCode Field Functions 
      bool hasSpnCommodityCode() const { return this->spnCommodityCode_ != nullptr;};
      void deleteSpnCommodityCode() { this->spnCommodityCode_ = nullptr;};
      inline string getSpnCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(spnCommodityCode_, "") };
      inline SpnCodeAndTypeList& setSpnCommodityCode(string spnCommodityCode) { DARABONBA_PTR_SET_VALUE(spnCommodityCode_, spnCommodityCode) };


      // spnType Field Functions 
      bool hasSpnType() const { return this->spnType_ != nullptr;};
      void deleteSpnType() { this->spnType_ = nullptr;};
      inline string getSpnType() const { DARABONBA_PTR_GET_DEFAULT(spnType_, "") };
      inline SpnCodeAndTypeList& setSpnType(string spnType) { DARABONBA_PTR_SET_VALUE(spnType_, spnType) };


      // spnTypeName Field Functions 
      bool hasSpnTypeName() const { return this->spnTypeName_ != nullptr;};
      void deleteSpnTypeName() { this->spnTypeName_ = nullptr;};
      inline string getSpnTypeName() const { DARABONBA_PTR_GET_DEFAULT(spnTypeName_, "") };
      inline SpnCodeAndTypeList& setSpnTypeName(string spnTypeName) { DARABONBA_PTR_SET_VALUE(spnTypeName_, spnTypeName) };


    protected:
      shared_ptr<string> productCode_ {};
      shared_ptr<string> spnCommodityCode_ {};
      shared_ptr<string> spnType_ {};
      shared_ptr<string> spnTypeName_ {};
    };

    class RegionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionList& obj) { 
        DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
      };
      friend void from_json(const Darabonba::Json& j, RegionList& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
      };
      RegionList() = default ;
      RegionList(const RegionList &) = default ;
      RegionList(RegionList &&) = default ;
      RegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionList() = default ;
      RegionList& operator=(const RegionList &) = default ;
      RegionList& operator=(RegionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->regionCode_ == nullptr
        && this->regionName_ == nullptr; };
      // regionCode Field Functions 
      bool hasRegionCode() const { return this->regionCode_ != nullptr;};
      void deleteRegionCode() { this->regionCode_ = nullptr;};
      inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
      inline RegionList& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline RegionList& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


    protected:
      shared_ptr<string> regionCode_ {};
      shared_ptr<string> regionName_ {};
    };

    virtual bool empty() const override { return this->instanceFamilyList_ == nullptr
        && this->regionList_ == nullptr && this->requestId_ == nullptr && this->spnCodeAndTypeList_ == nullptr; };
    // instanceFamilyList Field Functions 
    bool hasInstanceFamilyList() const { return this->instanceFamilyList_ != nullptr;};
    void deleteInstanceFamilyList() { this->instanceFamilyList_ = nullptr;};
    inline const vector<string> & getInstanceFamilyList() const { DARABONBA_PTR_GET_CONST(instanceFamilyList_, vector<string>) };
    inline vector<string> getInstanceFamilyList() { DARABONBA_PTR_GET(instanceFamilyList_, vector<string>) };
    inline DescribeUserSpnSummaryInfoResponseBody& setInstanceFamilyList(const vector<string> & instanceFamilyList) { DARABONBA_PTR_SET_VALUE(instanceFamilyList_, instanceFamilyList) };
    inline DescribeUserSpnSummaryInfoResponseBody& setInstanceFamilyList(vector<string> && instanceFamilyList) { DARABONBA_PTR_SET_RVALUE(instanceFamilyList_, instanceFamilyList) };


    // regionList Field Functions 
    bool hasRegionList() const { return this->regionList_ != nullptr;};
    void deleteRegionList() { this->regionList_ = nullptr;};
    inline const vector<DescribeUserSpnSummaryInfoResponseBody::RegionList> & getRegionList() const { DARABONBA_PTR_GET_CONST(regionList_, vector<DescribeUserSpnSummaryInfoResponseBody::RegionList>) };
    inline vector<DescribeUserSpnSummaryInfoResponseBody::RegionList> getRegionList() { DARABONBA_PTR_GET(regionList_, vector<DescribeUserSpnSummaryInfoResponseBody::RegionList>) };
    inline DescribeUserSpnSummaryInfoResponseBody& setRegionList(const vector<DescribeUserSpnSummaryInfoResponseBody::RegionList> & regionList) { DARABONBA_PTR_SET_VALUE(regionList_, regionList) };
    inline DescribeUserSpnSummaryInfoResponseBody& setRegionList(vector<DescribeUserSpnSummaryInfoResponseBody::RegionList> && regionList) { DARABONBA_PTR_SET_RVALUE(regionList_, regionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserSpnSummaryInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spnCodeAndTypeList Field Functions 
    bool hasSpnCodeAndTypeList() const { return this->spnCodeAndTypeList_ != nullptr;};
    void deleteSpnCodeAndTypeList() { this->spnCodeAndTypeList_ = nullptr;};
    inline const vector<DescribeUserSpnSummaryInfoResponseBody::SpnCodeAndTypeList> & getSpnCodeAndTypeList() const { DARABONBA_PTR_GET_CONST(spnCodeAndTypeList_, vector<DescribeUserSpnSummaryInfoResponseBody::SpnCodeAndTypeList>) };
    inline vector<DescribeUserSpnSummaryInfoResponseBody::SpnCodeAndTypeList> getSpnCodeAndTypeList() { DARABONBA_PTR_GET(spnCodeAndTypeList_, vector<DescribeUserSpnSummaryInfoResponseBody::SpnCodeAndTypeList>) };
    inline DescribeUserSpnSummaryInfoResponseBody& setSpnCodeAndTypeList(const vector<DescribeUserSpnSummaryInfoResponseBody::SpnCodeAndTypeList> & spnCodeAndTypeList) { DARABONBA_PTR_SET_VALUE(spnCodeAndTypeList_, spnCodeAndTypeList) };
    inline DescribeUserSpnSummaryInfoResponseBody& setSpnCodeAndTypeList(vector<DescribeUserSpnSummaryInfoResponseBody::SpnCodeAndTypeList> && spnCodeAndTypeList) { DARABONBA_PTR_SET_RVALUE(spnCodeAndTypeList_, spnCodeAndTypeList) };


  protected:
    shared_ptr<vector<string>> instanceFamilyList_ {};
    shared_ptr<vector<DescribeUserSpnSummaryInfoResponseBody::RegionList>> regionList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeUserSpnSummaryInfoResponseBody::SpnCodeAndTypeList>> spnCodeAndTypeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

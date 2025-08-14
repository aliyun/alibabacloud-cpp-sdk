// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSPNSUMMARYINFORESPONSEBODYSPNCODEANDTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSPNSUMMARYINFORESPONSEBODYSPNCODEANDTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SpnCommodityCode, spnCommodityCode_);
      DARABONBA_PTR_TO_JSON(SpnType, spnType_);
      DARABONBA_PTR_TO_JSON(SpnTypeName, spnTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SpnCommodityCode, spnCommodityCode_);
      DARABONBA_PTR_FROM_JSON(SpnType, spnType_);
      DARABONBA_PTR_FROM_JSON(SpnTypeName, spnTypeName_);
    };
    DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList() = default ;
    DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList(const DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList &) = default ;
    DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList(DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList &&) = default ;
    DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList() = default ;
    DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList& operator=(const DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList &) = default ;
    DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList& operator=(DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productCode_ != nullptr
        && this->spnCommodityCode_ != nullptr && this->spnType_ != nullptr && this->spnTypeName_ != nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // spnCommodityCode Field Functions 
    bool hasSpnCommodityCode() const { return this->spnCommodityCode_ != nullptr;};
    void deleteSpnCommodityCode() { this->spnCommodityCode_ = nullptr;};
    inline string spnCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(spnCommodityCode_, "") };
    inline DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList& setSpnCommodityCode(string spnCommodityCode) { DARABONBA_PTR_SET_VALUE(spnCommodityCode_, spnCommodityCode) };


    // spnType Field Functions 
    bool hasSpnType() const { return this->spnType_ != nullptr;};
    void deleteSpnType() { this->spnType_ = nullptr;};
    inline string spnType() const { DARABONBA_PTR_GET_DEFAULT(spnType_, "") };
    inline DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList& setSpnType(string spnType) { DARABONBA_PTR_SET_VALUE(spnType_, spnType) };


    // spnTypeName Field Functions 
    bool hasSpnTypeName() const { return this->spnTypeName_ != nullptr;};
    void deleteSpnTypeName() { this->spnTypeName_ = nullptr;};
    inline string spnTypeName() const { DARABONBA_PTR_GET_DEFAULT(spnTypeName_, "") };
    inline DescribeUserSpnSummaryInfoResponseBodySpnCodeAndTypeList& setSpnTypeName(string spnTypeName) { DARABONBA_PTR_SET_VALUE(spnTypeName_, spnTypeName) };


  protected:
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> spnCommodityCode_ = nullptr;
    std::shared_ptr<string> spnType_ = nullptr;
    std::shared_ptr<string> spnTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif

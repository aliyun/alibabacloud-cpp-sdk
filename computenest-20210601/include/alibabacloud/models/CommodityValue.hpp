// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMODITYVALUE_HPP_
#define ALIBABACLOUD_MODELS_COMMODITYVALUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CommodityValueResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CommodityValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommodityValue& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CommodityValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CommodityValue() = default ;
    CommodityValue(const CommodityValue &) = default ;
    CommodityValue(CommodityValue &&) = default ;
    CommodityValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommodityValue() = default ;
    CommodityValue& operator=(const CommodityValue &) = default ;
    CommodityValue& operator=(CommodityValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CommodityValueResult & result() const { DARABONBA_PTR_GET_CONST(result_, CommodityValueResult) };
    inline CommodityValueResult result() { DARABONBA_PTR_GET(result_, CommodityValueResult) };
    inline CommodityValue& setResult(const CommodityValueResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CommodityValue& setResult(CommodityValueResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The result model.
    std::shared_ptr<CommodityValueResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

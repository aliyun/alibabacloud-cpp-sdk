// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEINFOPRICEMODULES_HPP_
#define ALIBABACLOUD_MODELS_PRICEINFOPRICEMODULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class PriceInfoPriceModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceInfoPriceModules& obj) { 
      DARABONBA_PTR_TO_JSON(originalAmount, originalAmount_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PriceInfoPriceModules& obj) { 
      DARABONBA_PTR_FROM_JSON(originalAmount, originalAmount_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PriceInfoPriceModules() = default ;
    PriceInfoPriceModules(const PriceInfoPriceModules &) = default ;
    PriceInfoPriceModules(PriceInfoPriceModules &&) = default ;
    PriceInfoPriceModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceInfoPriceModules() = default ;
    PriceInfoPriceModules& operator=(const PriceInfoPriceModules &) = default ;
    PriceInfoPriceModules& operator=(PriceInfoPriceModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originalAmount_ == nullptr
        && return this->type_ == nullptr; };
    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline string originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
    inline PriceInfoPriceModules& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PriceInfoPriceModules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> originalAmount_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif

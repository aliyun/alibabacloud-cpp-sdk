// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLISTSOLUTIONATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichResponseBodyDataSolutionListSolutionAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBodyDataSolutionListSolutionAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(supply_source_type, supplySourceType_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBodyDataSolutionListSolutionAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(supply_source_type, supplySourceType_);
    };
    EnrichResponseBodyDataSolutionListSolutionAttribute() = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute(const EnrichResponseBodyDataSolutionListSolutionAttribute &) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute(EnrichResponseBodyDataSolutionListSolutionAttribute &&) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBodyDataSolutionListSolutionAttribute() = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute& operator=(const EnrichResponseBodyDataSolutionListSolutionAttribute &) = default ;
    EnrichResponseBodyDataSolutionListSolutionAttribute& operator=(EnrichResponseBodyDataSolutionListSolutionAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->supplySourceType_ == nullptr; };
    // supplySourceType Field Functions 
    bool hasSupplySourceType() const { return this->supplySourceType_ != nullptr;};
    void deleteSupplySourceType() { this->supplySourceType_ = nullptr;};
    inline string supplySourceType() const { DARABONBA_PTR_GET_DEFAULT(supplySourceType_, "") };
    inline EnrichResponseBodyDataSolutionListSolutionAttribute& setSupplySourceType(string supplySourceType) { DARABONBA_PTR_SET_VALUE(supplySourceType_, supplySourceType) };


  protected:
    std::shared_ptr<string> supplySourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

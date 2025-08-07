// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODYSERVICESCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODYSERVICESCOMMODITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServicesResponseBodyServicesCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesResponseBodyServicesCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DeployPage, deployPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesResponseBodyServicesCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DeployPage, deployPage_);
    };
    ListServicesResponseBodyServicesCommodity() = default ;
    ListServicesResponseBodyServicesCommodity(const ListServicesResponseBodyServicesCommodity &) = default ;
    ListServicesResponseBodyServicesCommodity(ListServicesResponseBodyServicesCommodity &&) = default ;
    ListServicesResponseBodyServicesCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesResponseBodyServicesCommodity() = default ;
    ListServicesResponseBodyServicesCommodity& operator=(const ListServicesResponseBodyServicesCommodity &) = default ;
    ListServicesResponseBodyServicesCommodity& operator=(ListServicesResponseBodyServicesCommodity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->deployPage_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListServicesResponseBodyServicesCommodity& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // deployPage Field Functions 
    bool hasDeployPage() const { return this->deployPage_ != nullptr;};
    void deleteDeployPage() { this->deployPage_ = nullptr;};
    inline string deployPage() const { DARABONBA_PTR_GET_DEFAULT(deployPage_, "") };
    inline ListServicesResponseBodyServicesCommodity& setDeployPage(string deployPage) { DARABONBA_PTR_SET_VALUE(deployPage_, deployPage) };


  protected:
    // The commodity code.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // Deploy Page.
    std::shared_ptr<string> deployPage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

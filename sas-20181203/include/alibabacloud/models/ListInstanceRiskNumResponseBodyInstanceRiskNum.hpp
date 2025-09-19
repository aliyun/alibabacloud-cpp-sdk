// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMRESPONSEBODYINSTANCERISKNUM_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERISKNUMRESPONSEBODYINSTANCERISKNUM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceRiskNumResponseBodyInstanceRiskNumInstanceItem.hpp>
#include <alibabacloud/models/ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListInstanceRiskNumResponseBodyInstanceRiskNum : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRiskNumResponseBodyInstanceRiskNum& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceItem, instanceItem_);
      DARABONBA_PTR_TO_JSON(RiskNumEntity, riskNumEntity_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRiskNumResponseBodyInstanceRiskNum& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceItem, instanceItem_);
      DARABONBA_PTR_FROM_JSON(RiskNumEntity, riskNumEntity_);
    };
    ListInstanceRiskNumResponseBodyInstanceRiskNum() = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNum(const ListInstanceRiskNumResponseBodyInstanceRiskNum &) = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNum(ListInstanceRiskNumResponseBodyInstanceRiskNum &&) = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNum(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRiskNumResponseBodyInstanceRiskNum() = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNum& operator=(const ListInstanceRiskNumResponseBodyInstanceRiskNum &) = default ;
    ListInstanceRiskNumResponseBodyInstanceRiskNum& operator=(ListInstanceRiskNumResponseBodyInstanceRiskNum &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceItem_ != nullptr
        && this->riskNumEntity_ != nullptr; };
    // instanceItem Field Functions 
    bool hasInstanceItem() const { return this->instanceItem_ != nullptr;};
    void deleteInstanceItem() { this->instanceItem_ = nullptr;};
    inline const Models::ListInstanceRiskNumResponseBodyInstanceRiskNumInstanceItem & instanceItem() const { DARABONBA_PTR_GET_CONST(instanceItem_, Models::ListInstanceRiskNumResponseBodyInstanceRiskNumInstanceItem) };
    inline Models::ListInstanceRiskNumResponseBodyInstanceRiskNumInstanceItem instanceItem() { DARABONBA_PTR_GET(instanceItem_, Models::ListInstanceRiskNumResponseBodyInstanceRiskNumInstanceItem) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNum& setInstanceItem(const Models::ListInstanceRiskNumResponseBodyInstanceRiskNumInstanceItem & instanceItem) { DARABONBA_PTR_SET_VALUE(instanceItem_, instanceItem) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNum& setInstanceItem(Models::ListInstanceRiskNumResponseBodyInstanceRiskNumInstanceItem && instanceItem) { DARABONBA_PTR_SET_RVALUE(instanceItem_, instanceItem) };


    // riskNumEntity Field Functions 
    bool hasRiskNumEntity() const { return this->riskNumEntity_ != nullptr;};
    void deleteRiskNumEntity() { this->riskNumEntity_ = nullptr;};
    inline const Models::ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity & riskNumEntity() const { DARABONBA_PTR_GET_CONST(riskNumEntity_, Models::ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity) };
    inline Models::ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity riskNumEntity() { DARABONBA_PTR_GET(riskNumEntity_, Models::ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNum& setRiskNumEntity(const Models::ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity & riskNumEntity) { DARABONBA_PTR_SET_VALUE(riskNumEntity_, riskNumEntity) };
    inline ListInstanceRiskNumResponseBodyInstanceRiskNum& setRiskNumEntity(Models::ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity && riskNumEntity) { DARABONBA_PTR_SET_RVALUE(riskNumEntity_, riskNumEntity) };


  protected:
    // The information about the instance.
    std::shared_ptr<Models::ListInstanceRiskNumResponseBodyInstanceRiskNumInstanceItem> instanceItem_ = nullptr;
    // The statistics about the risks.
    std::shared_ptr<Models::ListInstanceRiskNumResponseBodyInstanceRiskNumRiskNumEntity> riskNumEntity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

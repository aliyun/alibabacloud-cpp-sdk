// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYPLANSRESPONSEBODYDATALISTINSTANCESMESSAGEPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYPLANSRESPONSEBODYDATALISTINSTANCESMESSAGEPROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty& obj) { 
      DARABONBA_PTR_TO_JSON(propertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(propertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(propertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(propertyValue, propertyValue_);
    };
    ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty() = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty(const ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty &) = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty(ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty &&) = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty() = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty& operator=(const ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty &) = default ;
    ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty& operator=(ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->propertyKey_ == nullptr
        && return this->propertyValue_ == nullptr; };
    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline ListDisasterRecoveryPlansResponseBodyDataListInstancesMessageProperty& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


  protected:
    // The attribute key.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // The attribute value.
    std::shared_ptr<string> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif

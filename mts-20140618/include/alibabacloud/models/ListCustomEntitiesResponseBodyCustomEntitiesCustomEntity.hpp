// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMENTITIESRESPONSEBODYCUSTOMENTITIESCUSTOMENTITY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMENTITIESRESPONSEBODYCUSTOMENTITIESCUSTOMENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEntityId, customEntityId_);
      DARABONBA_PTR_TO_JSON(CustomEntityInfo, customEntityInfo_);
      DARABONBA_PTR_TO_JSON(CustomEntityName, customEntityName_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEntityId, customEntityId_);
      DARABONBA_PTR_FROM_JSON(CustomEntityInfo, customEntityInfo_);
      DARABONBA_PTR_FROM_JSON(CustomEntityName, customEntityName_);
    };
    ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity() = default ;
    ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity(const ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity &) = default ;
    ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity(ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity &&) = default ;
    ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity() = default ;
    ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity& operator=(const ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity &) = default ;
    ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity& operator=(ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customEntityId_ == nullptr
        && return this->customEntityInfo_ == nullptr && return this->customEntityName_ == nullptr; };
    // customEntityId Field Functions 
    bool hasCustomEntityId() const { return this->customEntityId_ != nullptr;};
    void deleteCustomEntityId() { this->customEntityId_ = nullptr;};
    inline string customEntityId() const { DARABONBA_PTR_GET_DEFAULT(customEntityId_, "") };
    inline ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity& setCustomEntityId(string customEntityId) { DARABONBA_PTR_SET_VALUE(customEntityId_, customEntityId) };


    // customEntityInfo Field Functions 
    bool hasCustomEntityInfo() const { return this->customEntityInfo_ != nullptr;};
    void deleteCustomEntityInfo() { this->customEntityInfo_ = nullptr;};
    inline string customEntityInfo() const { DARABONBA_PTR_GET_DEFAULT(customEntityInfo_, "") };
    inline ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity& setCustomEntityInfo(string customEntityInfo) { DARABONBA_PTR_SET_VALUE(customEntityInfo_, customEntityInfo) };


    // customEntityName Field Functions 
    bool hasCustomEntityName() const { return this->customEntityName_ != nullptr;};
    void deleteCustomEntityName() { this->customEntityName_ = nullptr;};
    inline string customEntityName() const { DARABONBA_PTR_GET_DEFAULT(customEntityName_, "") };
    inline ListCustomEntitiesResponseBodyCustomEntitiesCustomEntity& setCustomEntityName(string customEntityName) { DARABONBA_PTR_SET_VALUE(customEntityName_, customEntityName) };


  protected:
    std::shared_ptr<string> customEntityId_ = nullptr;
    std::shared_ptr<string> customEntityInfo_ = nullptr;
    std::shared_ptr<string> customEntityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

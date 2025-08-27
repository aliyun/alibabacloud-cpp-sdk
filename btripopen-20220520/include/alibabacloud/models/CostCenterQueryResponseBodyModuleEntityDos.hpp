// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTCENTERQUERYRESPONSEBODYMODULEENTITYDOS_HPP_
#define ALIBABACLOUD_MODELS_COSTCENTERQUERYRESPONSEBODYMODULEENTITYDOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CostCenterQueryResponseBodyModuleEntityDOS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostCenterQueryResponseBodyModuleEntityDOS& obj) { 
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(entity_id, entityId_);
      DARABONBA_PTR_TO_JSON(entity_type, entityType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(user_num, userNum_);
    };
    friend void from_json(const Darabonba::Json& j, CostCenterQueryResponseBodyModuleEntityDOS& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
      DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(user_num, userNum_);
    };
    CostCenterQueryResponseBodyModuleEntityDOS() = default ;
    CostCenterQueryResponseBodyModuleEntityDOS(const CostCenterQueryResponseBodyModuleEntityDOS &) = default ;
    CostCenterQueryResponseBodyModuleEntityDOS(CostCenterQueryResponseBodyModuleEntityDOS &&) = default ;
    CostCenterQueryResponseBodyModuleEntityDOS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostCenterQueryResponseBodyModuleEntityDOS() = default ;
    CostCenterQueryResponseBodyModuleEntityDOS& operator=(const CostCenterQueryResponseBodyModuleEntityDOS &) = default ;
    CostCenterQueryResponseBodyModuleEntityDOS& operator=(CostCenterQueryResponseBodyModuleEntityDOS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->entityId_ != nullptr && this->entityType_ != nullptr && this->name_ != nullptr && this->userNum_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CostCenterQueryResponseBodyModuleEntityDOS& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline CostCenterQueryResponseBodyModuleEntityDOS& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline CostCenterQueryResponseBodyModuleEntityDOS& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CostCenterQueryResponseBodyModuleEntityDOS& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // userNum Field Functions 
    bool hasUserNum() const { return this->userNum_ != nullptr;};
    void deleteUserNum() { this->userNum_ = nullptr;};
    inline int32_t userNum() const { DARABONBA_PTR_GET_DEFAULT(userNum_, 0) };
    inline CostCenterQueryResponseBodyModuleEntityDOS& setUserNum(int32_t userNum) { DARABONBA_PTR_SET_VALUE(userNum_, userNum) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> entityId_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> userNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

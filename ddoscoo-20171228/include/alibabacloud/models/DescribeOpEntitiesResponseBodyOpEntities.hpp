// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODYOPENTITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENTITIESRESPONSEBODYOPENTITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeOpEntitiesResponseBodyOpEntities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpEntitiesResponseBodyOpEntities& obj) { 
      DARABONBA_PTR_TO_JSON(EntityObject, entityObject_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(OpAccount, opAccount_);
      DARABONBA_PTR_TO_JSON(OpAction, opAction_);
      DARABONBA_PTR_TO_JSON(OpDesc, opDesc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpEntitiesResponseBodyOpEntities& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityObject, entityObject_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(OpAccount, opAccount_);
      DARABONBA_PTR_FROM_JSON(OpAction, opAction_);
      DARABONBA_PTR_FROM_JSON(OpDesc, opDesc_);
    };
    DescribeOpEntitiesResponseBodyOpEntities() = default ;
    DescribeOpEntitiesResponseBodyOpEntities(const DescribeOpEntitiesResponseBodyOpEntities &) = default ;
    DescribeOpEntitiesResponseBodyOpEntities(DescribeOpEntitiesResponseBodyOpEntities &&) = default ;
    DescribeOpEntitiesResponseBodyOpEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpEntitiesResponseBodyOpEntities() = default ;
    DescribeOpEntitiesResponseBodyOpEntities& operator=(const DescribeOpEntitiesResponseBodyOpEntities &) = default ;
    DescribeOpEntitiesResponseBodyOpEntities& operator=(DescribeOpEntitiesResponseBodyOpEntities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityObject_ != nullptr
        && this->entityType_ != nullptr && this->gmtCreate_ != nullptr && this->opAccount_ != nullptr && this->opAction_ != nullptr && this->opDesc_ != nullptr; };
    // entityObject Field Functions 
    bool hasEntityObject() const { return this->entityObject_ != nullptr;};
    void deleteEntityObject() { this->entityObject_ = nullptr;};
    inline string entityObject() const { DARABONBA_PTR_GET_DEFAULT(entityObject_, "") };
    inline DescribeOpEntitiesResponseBodyOpEntities& setEntityObject(string entityObject) { DARABONBA_PTR_SET_VALUE(entityObject_, entityObject) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline int32_t entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, 0) };
    inline DescribeOpEntitiesResponseBodyOpEntities& setEntityType(int32_t entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeOpEntitiesResponseBodyOpEntities& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // opAccount Field Functions 
    bool hasOpAccount() const { return this->opAccount_ != nullptr;};
    void deleteOpAccount() { this->opAccount_ = nullptr;};
    inline string opAccount() const { DARABONBA_PTR_GET_DEFAULT(opAccount_, "") };
    inline DescribeOpEntitiesResponseBodyOpEntities& setOpAccount(string opAccount) { DARABONBA_PTR_SET_VALUE(opAccount_, opAccount) };


    // opAction Field Functions 
    bool hasOpAction() const { return this->opAction_ != nullptr;};
    void deleteOpAction() { this->opAction_ = nullptr;};
    inline int32_t opAction() const { DARABONBA_PTR_GET_DEFAULT(opAction_, 0) };
    inline DescribeOpEntitiesResponseBodyOpEntities& setOpAction(int32_t opAction) { DARABONBA_PTR_SET_VALUE(opAction_, opAction) };


    // opDesc Field Functions 
    bool hasOpDesc() const { return this->opDesc_ != nullptr;};
    void deleteOpDesc() { this->opDesc_ = nullptr;};
    inline string opDesc() const { DARABONBA_PTR_GET_DEFAULT(opDesc_, "") };
    inline DescribeOpEntitiesResponseBodyOpEntities& setOpDesc(string opDesc) { DARABONBA_PTR_SET_VALUE(opDesc_, opDesc) };


  protected:
    std::shared_ptr<string> entityObject_ = nullptr;
    std::shared_ptr<int32_t> entityType_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> opAccount_ = nullptr;
    std::shared_ptr<int32_t> opAction_ = nullptr;
    std::shared_ptr<string> opDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif

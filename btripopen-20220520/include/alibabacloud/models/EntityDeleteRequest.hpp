// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTITYDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EntityDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(del_all, delAll_);
      DARABONBA_PTR_TO_JSON(entity_d_o_list, entityDOList_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
    };
    friend void from_json(const Darabonba::Json& j, EntityDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(del_all, delAll_);
      DARABONBA_PTR_FROM_JSON(entity_d_o_list, entityDOList_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
    };
    EntityDeleteRequest() = default ;
    EntityDeleteRequest(const EntityDeleteRequest &) = default ;
    EntityDeleteRequest(EntityDeleteRequest &&) = default ;
    EntityDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityDeleteRequest() = default ;
    EntityDeleteRequest& operator=(const EntityDeleteRequest &) = default ;
    EntityDeleteRequest& operator=(EntityDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EntityDOList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EntityDOList& obj) { 
        DARABONBA_PTR_TO_JSON(entity_id, entityId_);
        DARABONBA_PTR_TO_JSON(entity_type, entityType_);
      };
      friend void from_json(const Darabonba::Json& j, EntityDOList& obj) { 
        DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
        DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
      };
      EntityDOList() = default ;
      EntityDOList(const EntityDOList &) = default ;
      EntityDOList(EntityDOList &&) = default ;
      EntityDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EntityDOList() = default ;
      EntityDOList& operator=(const EntityDOList &) = default ;
      EntityDOList& operator=(EntityDOList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr; };
      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline EntityDOList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline EntityDOList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    protected:
      // This parameter is required.
      shared_ptr<string> entityId_ {};
      // This parameter is required.
      shared_ptr<string> entityType_ {};
    };

    virtual bool empty() const override { return this->delAll_ == nullptr
        && this->entityDOList_ == nullptr && this->thirdpartId_ == nullptr; };
    // delAll Field Functions 
    bool hasDelAll() const { return this->delAll_ != nullptr;};
    void deleteDelAll() { this->delAll_ = nullptr;};
    inline bool getDelAll() const { DARABONBA_PTR_GET_DEFAULT(delAll_, false) };
    inline EntityDeleteRequest& setDelAll(bool delAll) { DARABONBA_PTR_SET_VALUE(delAll_, delAll) };


    // entityDOList Field Functions 
    bool hasEntityDOList() const { return this->entityDOList_ != nullptr;};
    void deleteEntityDOList() { this->entityDOList_ = nullptr;};
    inline const vector<EntityDeleteRequest::EntityDOList> & getEntityDOList() const { DARABONBA_PTR_GET_CONST(entityDOList_, vector<EntityDeleteRequest::EntityDOList>) };
    inline vector<EntityDeleteRequest::EntityDOList> getEntityDOList() { DARABONBA_PTR_GET(entityDOList_, vector<EntityDeleteRequest::EntityDOList>) };
    inline EntityDeleteRequest& setEntityDOList(const vector<EntityDeleteRequest::EntityDOList> & entityDOList) { DARABONBA_PTR_SET_VALUE(entityDOList_, entityDOList) };
    inline EntityDeleteRequest& setEntityDOList(vector<EntityDeleteRequest::EntityDOList> && entityDOList) { DARABONBA_PTR_SET_RVALUE(entityDOList_, entityDOList) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string getThirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline EntityDeleteRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


  protected:
    // This parameter is required.
    shared_ptr<bool> delAll_ {};
    shared_ptr<vector<EntityDeleteRequest::EntityDOList>> entityDOList_ {};
    // This parameter is required.
    shared_ptr<string> thirdpartId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

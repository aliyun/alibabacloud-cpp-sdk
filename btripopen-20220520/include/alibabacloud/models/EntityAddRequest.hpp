// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTITYADDREQUEST_HPP_
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
  class EntityAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entity_d_o_list, entityDOList_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
    };
    friend void from_json(const Darabonba::Json& j, EntityAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entity_d_o_list, entityDOList_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
    };
    EntityAddRequest() = default ;
    EntityAddRequest(const EntityAddRequest &) = default ;
    EntityAddRequest(EntityAddRequest &&) = default ;
    EntityAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityAddRequest() = default ;
    EntityAddRequest& operator=(const EntityAddRequest &) = default ;
    EntityAddRequest& operator=(EntityAddRequest &&) = default ;
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
      shared_ptr<string> entityId_ {};
      shared_ptr<string> entityType_ {};
    };

    virtual bool empty() const override { return this->entityDOList_ == nullptr
        && this->thirdpartId_ == nullptr; };
    // entityDOList Field Functions 
    bool hasEntityDOList() const { return this->entityDOList_ != nullptr;};
    void deleteEntityDOList() { this->entityDOList_ = nullptr;};
    inline const vector<EntityAddRequest::EntityDOList> & getEntityDOList() const { DARABONBA_PTR_GET_CONST(entityDOList_, vector<EntityAddRequest::EntityDOList>) };
    inline vector<EntityAddRequest::EntityDOList> getEntityDOList() { DARABONBA_PTR_GET(entityDOList_, vector<EntityAddRequest::EntityDOList>) };
    inline EntityAddRequest& setEntityDOList(const vector<EntityAddRequest::EntityDOList> & entityDOList) { DARABONBA_PTR_SET_VALUE(entityDOList_, entityDOList) };
    inline EntityAddRequest& setEntityDOList(vector<EntityAddRequest::EntityDOList> && entityDOList) { DARABONBA_PTR_SET_RVALUE(entityDOList_, entityDOList) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string getThirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline EntityAddRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


  protected:
    shared_ptr<vector<EntityAddRequest::EntityDOList>> entityDOList_ {};
    // This parameter is required.
    shared_ptr<string> thirdpartId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

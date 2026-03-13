// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINVOICEENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINVOICEENTITYREQUEST_HPP_
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
  class DeleteInvoiceEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInvoiceEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(del_all, delAll_);
      DARABONBA_PTR_TO_JSON(entities, entities_);
      DARABONBA_PTR_TO_JSON(third_part_id, thirdPartId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInvoiceEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(del_all, delAll_);
      DARABONBA_PTR_FROM_JSON(entities, entities_);
      DARABONBA_PTR_FROM_JSON(third_part_id, thirdPartId_);
    };
    DeleteInvoiceEntityRequest() = default ;
    DeleteInvoiceEntityRequest(const DeleteInvoiceEntityRequest &) = default ;
    DeleteInvoiceEntityRequest(DeleteInvoiceEntityRequest &&) = default ;
    DeleteInvoiceEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInvoiceEntityRequest() = default ;
    DeleteInvoiceEntityRequest& operator=(const DeleteInvoiceEntityRequest &) = default ;
    DeleteInvoiceEntityRequest& operator=(DeleteInvoiceEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entities& obj) { 
        DARABONBA_PTR_TO_JSON(entity_id, entityId_);
        DARABONBA_PTR_TO_JSON(entity_type, entityType_);
      };
      friend void from_json(const Darabonba::Json& j, Entities& obj) { 
        DARABONBA_PTR_FROM_JSON(entity_id, entityId_);
        DARABONBA_PTR_FROM_JSON(entity_type, entityType_);
      };
      Entities() = default ;
      Entities(const Entities &) = default ;
      Entities(Entities &&) = default ;
      Entities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entities() = default ;
      Entities& operator=(const Entities &) = default ;
      Entities& operator=(Entities &&) = default ;
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
      inline Entities& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline Entities& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    protected:
      shared_ptr<string> entityId_ {};
      shared_ptr<string> entityType_ {};
    };

    virtual bool empty() const override { return this->delAll_ == nullptr
        && this->entities_ == nullptr && this->thirdPartId_ == nullptr; };
    // delAll Field Functions 
    bool hasDelAll() const { return this->delAll_ != nullptr;};
    void deleteDelAll() { this->delAll_ = nullptr;};
    inline bool getDelAll() const { DARABONBA_PTR_GET_DEFAULT(delAll_, false) };
    inline DeleteInvoiceEntityRequest& setDelAll(bool delAll) { DARABONBA_PTR_SET_VALUE(delAll_, delAll) };


    // entities Field Functions 
    bool hasEntities() const { return this->entities_ != nullptr;};
    void deleteEntities() { this->entities_ = nullptr;};
    inline const vector<DeleteInvoiceEntityRequest::Entities> & getEntities() const { DARABONBA_PTR_GET_CONST(entities_, vector<DeleteInvoiceEntityRequest::Entities>) };
    inline vector<DeleteInvoiceEntityRequest::Entities> getEntities() { DARABONBA_PTR_GET(entities_, vector<DeleteInvoiceEntityRequest::Entities>) };
    inline DeleteInvoiceEntityRequest& setEntities(const vector<DeleteInvoiceEntityRequest::Entities> & entities) { DARABONBA_PTR_SET_VALUE(entities_, entities) };
    inline DeleteInvoiceEntityRequest& setEntities(vector<DeleteInvoiceEntityRequest::Entities> && entities) { DARABONBA_PTR_SET_RVALUE(entities_, entities) };


    // thirdPartId Field Functions 
    bool hasThirdPartId() const { return this->thirdPartId_ != nullptr;};
    void deleteThirdPartId() { this->thirdPartId_ = nullptr;};
    inline string getThirdPartId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartId_, "") };
    inline DeleteInvoiceEntityRequest& setThirdPartId(string thirdPartId) { DARABONBA_PTR_SET_VALUE(thirdPartId_, thirdPartId) };


  protected:
    shared_ptr<bool> delAll_ {};
    shared_ptr<vector<DeleteInvoiceEntityRequest::Entities>> entities_ {};
    // This parameter is required.
    shared_ptr<string> thirdPartId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

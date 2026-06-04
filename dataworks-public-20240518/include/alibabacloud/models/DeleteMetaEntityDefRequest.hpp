// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETAENTITYDEFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETAENTITYDEFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteMetaEntityDefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetaEntityDefRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetaEntityDefRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    DeleteMetaEntityDefRequest() = default ;
    DeleteMetaEntityDefRequest(const DeleteMetaEntityDefRequest &) = default ;
    DeleteMetaEntityDefRequest(DeleteMetaEntityDefRequest &&) = default ;
    DeleteMetaEntityDefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetaEntityDefRequest() = default ;
    DeleteMetaEntityDefRequest& operator=(const DeleteMetaEntityDefRequest &) = default ;
    DeleteMetaEntityDefRequest& operator=(DeleteMetaEntityDefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityType_ == nullptr
        && this->force_ == nullptr; };
    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DeleteMetaEntityDefRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteMetaEntityDefRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // This parameter is required.
    shared_ptr<string> entityType_ {};
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

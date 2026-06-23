// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETAENTITYDEFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETAENTITYDEFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetMetaEntityDefRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaEntityDefRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaEntityDefRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
    };
    GetMetaEntityDefRequest() = default ;
    GetMetaEntityDefRequest(const GetMetaEntityDefRequest &) = default ;
    GetMetaEntityDefRequest(GetMetaEntityDefRequest &&) = default ;
    GetMetaEntityDefRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaEntityDefRequest() = default ;
    GetMetaEntityDefRequest& operator=(const GetMetaEntityDefRequest &) = default ;
    GetMetaEntityDefRequest& operator=(GetMetaEntityDefRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityType_ == nullptr; };
    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline GetMetaEntityDefRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


  protected:
    // The entity type. The value must match the regular expression `^custom_(?:entity-[A-Za-z0-9_]+|[A-Za-z0-9_]+-(?:database|table|column))$`.
    // 
    // This parameter is required.
    shared_ptr<string> entityType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEMETAENTITIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEMETAENTITIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchCreateMetaEntitiesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateMetaEntitiesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Entities, entitiesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateMetaEntitiesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Entities, entitiesShrink_);
    };
    BatchCreateMetaEntitiesShrinkRequest() = default ;
    BatchCreateMetaEntitiesShrinkRequest(const BatchCreateMetaEntitiesShrinkRequest &) = default ;
    BatchCreateMetaEntitiesShrinkRequest(BatchCreateMetaEntitiesShrinkRequest &&) = default ;
    BatchCreateMetaEntitiesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateMetaEntitiesShrinkRequest() = default ;
    BatchCreateMetaEntitiesShrinkRequest& operator=(const BatchCreateMetaEntitiesShrinkRequest &) = default ;
    BatchCreateMetaEntitiesShrinkRequest& operator=(BatchCreateMetaEntitiesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entitiesShrink_ == nullptr; };
    // entitiesShrink Field Functions 
    bool hasEntitiesShrink() const { return this->entitiesShrink_ != nullptr;};
    void deleteEntitiesShrink() { this->entitiesShrink_ = nullptr;};
    inline string getEntitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(entitiesShrink_, "") };
    inline BatchCreateMetaEntitiesShrinkRequest& setEntitiesShrink(string entitiesShrink) { DARABONBA_PTR_SET_VALUE(entitiesShrink_, entitiesShrink) };


  protected:
    // An entity list. You can create up to five entities in a batch. All entities in the batch must have the same `EntityType`.
    // 
    // This parameter is required.
    shared_ptr<string> entitiesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

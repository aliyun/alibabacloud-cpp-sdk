// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEMETAENTITIESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEMETAENTITIESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchDeleteMetaEntitiesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteMetaEntitiesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteMetaEntitiesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
    };
    BatchDeleteMetaEntitiesShrinkRequest() = default ;
    BatchDeleteMetaEntitiesShrinkRequest(const BatchDeleteMetaEntitiesShrinkRequest &) = default ;
    BatchDeleteMetaEntitiesShrinkRequest(BatchDeleteMetaEntitiesShrinkRequest &&) = default ;
    BatchDeleteMetaEntitiesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteMetaEntitiesShrinkRequest() = default ;
    BatchDeleteMetaEntitiesShrinkRequest& operator=(const BatchDeleteMetaEntitiesShrinkRequest &) = default ;
    BatchDeleteMetaEntitiesShrinkRequest& operator=(BatchDeleteMetaEntitiesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idsShrink_ == nullptr; };
    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string getIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline BatchDeleteMetaEntitiesShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


  protected:
    // An array of IDs for the meta entities to delete. You can specify up to 10 IDs in a single request. All entities in the batch must have the same EntityType.
    // 
    // This parameter is required.
    shared_ptr<string> idsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

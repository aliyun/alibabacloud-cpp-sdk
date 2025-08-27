// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYADDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTITYADDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EntityAddShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityAddShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entity_d_o_list, entityDOListShrink_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
    };
    friend void from_json(const Darabonba::Json& j, EntityAddShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entity_d_o_list, entityDOListShrink_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
    };
    EntityAddShrinkRequest() = default ;
    EntityAddShrinkRequest(const EntityAddShrinkRequest &) = default ;
    EntityAddShrinkRequest(EntityAddShrinkRequest &&) = default ;
    EntityAddShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityAddShrinkRequest() = default ;
    EntityAddShrinkRequest& operator=(const EntityAddShrinkRequest &) = default ;
    EntityAddShrinkRequest& operator=(EntityAddShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityDOListShrink_ != nullptr
        && this->thirdpartId_ != nullptr; };
    // entityDOListShrink Field Functions 
    bool hasEntityDOListShrink() const { return this->entityDOListShrink_ != nullptr;};
    void deleteEntityDOListShrink() { this->entityDOListShrink_ = nullptr;};
    inline string entityDOListShrink() const { DARABONBA_PTR_GET_DEFAULT(entityDOListShrink_, "") };
    inline EntityAddShrinkRequest& setEntityDOListShrink(string entityDOListShrink) { DARABONBA_PTR_SET_VALUE(entityDOListShrink_, entityDOListShrink) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline EntityAddShrinkRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


  protected:
    std::shared_ptr<string> entityDOListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdpartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

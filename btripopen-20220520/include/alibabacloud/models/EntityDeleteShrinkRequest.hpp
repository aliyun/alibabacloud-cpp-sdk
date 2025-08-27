// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYDELETESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTITYDELETESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EntityDeleteShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntityDeleteShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(del_all, delAll_);
      DARABONBA_PTR_TO_JSON(entity_d_o_list, entityDOListShrink_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
    };
    friend void from_json(const Darabonba::Json& j, EntityDeleteShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(del_all, delAll_);
      DARABONBA_PTR_FROM_JSON(entity_d_o_list, entityDOListShrink_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
    };
    EntityDeleteShrinkRequest() = default ;
    EntityDeleteShrinkRequest(const EntityDeleteShrinkRequest &) = default ;
    EntityDeleteShrinkRequest(EntityDeleteShrinkRequest &&) = default ;
    EntityDeleteShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntityDeleteShrinkRequest() = default ;
    EntityDeleteShrinkRequest& operator=(const EntityDeleteShrinkRequest &) = default ;
    EntityDeleteShrinkRequest& operator=(EntityDeleteShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->delAll_ != nullptr
        && this->entityDOListShrink_ != nullptr && this->thirdpartId_ != nullptr; };
    // delAll Field Functions 
    bool hasDelAll() const { return this->delAll_ != nullptr;};
    void deleteDelAll() { this->delAll_ = nullptr;};
    inline bool delAll() const { DARABONBA_PTR_GET_DEFAULT(delAll_, false) };
    inline EntityDeleteShrinkRequest& setDelAll(bool delAll) { DARABONBA_PTR_SET_VALUE(delAll_, delAll) };


    // entityDOListShrink Field Functions 
    bool hasEntityDOListShrink() const { return this->entityDOListShrink_ != nullptr;};
    void deleteEntityDOListShrink() { this->entityDOListShrink_ = nullptr;};
    inline string entityDOListShrink() const { DARABONBA_PTR_GET_DEFAULT(entityDOListShrink_, "") };
    inline EntityDeleteShrinkRequest& setEntityDOListShrink(string entityDOListShrink) { DARABONBA_PTR_SET_VALUE(entityDOListShrink_, entityDOListShrink) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline EntityDeleteShrinkRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> delAll_ = nullptr;
    std::shared_ptr<string> entityDOListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdpartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

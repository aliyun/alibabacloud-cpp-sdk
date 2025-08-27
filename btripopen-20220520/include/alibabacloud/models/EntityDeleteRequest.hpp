// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTITYDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EntityDeleteRequestEntityDOList.hpp>
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
    virtual bool empty() const override { this->delAll_ != nullptr
        && this->entityDOList_ != nullptr && this->thirdpartId_ != nullptr; };
    // delAll Field Functions 
    bool hasDelAll() const { return this->delAll_ != nullptr;};
    void deleteDelAll() { this->delAll_ = nullptr;};
    inline bool delAll() const { DARABONBA_PTR_GET_DEFAULT(delAll_, false) };
    inline EntityDeleteRequest& setDelAll(bool delAll) { DARABONBA_PTR_SET_VALUE(delAll_, delAll) };


    // entityDOList Field Functions 
    bool hasEntityDOList() const { return this->entityDOList_ != nullptr;};
    void deleteEntityDOList() { this->entityDOList_ = nullptr;};
    inline const vector<EntityDeleteRequestEntityDOList> & entityDOList() const { DARABONBA_PTR_GET_CONST(entityDOList_, vector<EntityDeleteRequestEntityDOList>) };
    inline vector<EntityDeleteRequestEntityDOList> entityDOList() { DARABONBA_PTR_GET(entityDOList_, vector<EntityDeleteRequestEntityDOList>) };
    inline EntityDeleteRequest& setEntityDOList(const vector<EntityDeleteRequestEntityDOList> & entityDOList) { DARABONBA_PTR_SET_VALUE(entityDOList_, entityDOList) };
    inline EntityDeleteRequest& setEntityDOList(vector<EntityDeleteRequestEntityDOList> && entityDOList) { DARABONBA_PTR_SET_RVALUE(entityDOList_, entityDOList) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline EntityDeleteRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> delAll_ = nullptr;
    std::shared_ptr<vector<EntityDeleteRequestEntityDOList>> entityDOList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdpartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

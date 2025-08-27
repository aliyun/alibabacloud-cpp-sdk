// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTITYSETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EntitySetRequestEntityDOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class EntitySetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntitySetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(entity_d_o_list, entityDOList_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
    };
    friend void from_json(const Darabonba::Json& j, EntitySetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(entity_d_o_list, entityDOList_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
    };
    EntitySetRequest() = default ;
    EntitySetRequest(const EntitySetRequest &) = default ;
    EntitySetRequest(EntitySetRequest &&) = default ;
    EntitySetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntitySetRequest() = default ;
    EntitySetRequest& operator=(const EntitySetRequest &) = default ;
    EntitySetRequest& operator=(EntitySetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityDOList_ != nullptr
        && this->thirdpartId_ != nullptr; };
    // entityDOList Field Functions 
    bool hasEntityDOList() const { return this->entityDOList_ != nullptr;};
    void deleteEntityDOList() { this->entityDOList_ = nullptr;};
    inline const vector<EntitySetRequestEntityDOList> & entityDOList() const { DARABONBA_PTR_GET_CONST(entityDOList_, vector<EntitySetRequestEntityDOList>) };
    inline vector<EntitySetRequestEntityDOList> entityDOList() { DARABONBA_PTR_GET(entityDOList_, vector<EntitySetRequestEntityDOList>) };
    inline EntitySetRequest& setEntityDOList(const vector<EntitySetRequestEntityDOList> & entityDOList) { DARABONBA_PTR_SET_VALUE(entityDOList_, entityDOList) };
    inline EntitySetRequest& setEntityDOList(vector<EntitySetRequestEntityDOList> && entityDOList) { DARABONBA_PTR_SET_RVALUE(entityDOList_, entityDOList) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline EntitySetRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


  protected:
    std::shared_ptr<vector<EntitySetRequestEntityDOList>> entityDOList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdpartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

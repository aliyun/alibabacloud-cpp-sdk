// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTITYADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTITYADDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EntityAddRequestEntityDOList.hpp>
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
    virtual bool empty() const override { this->entityDOList_ != nullptr
        && this->thirdpartId_ != nullptr; };
    // entityDOList Field Functions 
    bool hasEntityDOList() const { return this->entityDOList_ != nullptr;};
    void deleteEntityDOList() { this->entityDOList_ = nullptr;};
    inline const vector<EntityAddRequestEntityDOList> & entityDOList() const { DARABONBA_PTR_GET_CONST(entityDOList_, vector<EntityAddRequestEntityDOList>) };
    inline vector<EntityAddRequestEntityDOList> entityDOList() { DARABONBA_PTR_GET(entityDOList_, vector<EntityAddRequestEntityDOList>) };
    inline EntityAddRequest& setEntityDOList(const vector<EntityAddRequestEntityDOList> & entityDOList) { DARABONBA_PTR_SET_VALUE(entityDOList_, entityDOList) };
    inline EntityAddRequest& setEntityDOList(vector<EntityAddRequestEntityDOList> && entityDOList) { DARABONBA_PTR_SET_RVALUE(entityDOList_, entityDOList) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline EntityAddRequest& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


  protected:
    std::shared_ptr<vector<EntityAddRequestEntityDOList>> entityDOList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> thirdpartId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

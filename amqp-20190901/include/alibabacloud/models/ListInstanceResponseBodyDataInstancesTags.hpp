// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYDATAINSTANCESTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYDATAINSTANCESTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceResponseBodyDataInstancesTagsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListInstanceResponseBodyDataInstancesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBodyDataInstancesTags& obj) { 
      DARABONBA_PTR_TO_JSON(tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBodyDataInstancesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(tags, tags_);
    };
    ListInstanceResponseBodyDataInstancesTags() = default ;
    ListInstanceResponseBodyDataInstancesTags(const ListInstanceResponseBodyDataInstancesTags &) = default ;
    ListInstanceResponseBodyDataInstancesTags(ListInstanceResponseBodyDataInstancesTags &&) = default ;
    ListInstanceResponseBodyDataInstancesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBodyDataInstancesTags() = default ;
    ListInstanceResponseBodyDataInstancesTags& operator=(const ListInstanceResponseBodyDataInstancesTags &) = default ;
    ListInstanceResponseBodyDataInstancesTags& operator=(ListInstanceResponseBodyDataInstancesTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tags_ == nullptr; };
    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListInstanceResponseBodyDataInstancesTagsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListInstanceResponseBodyDataInstancesTagsTags>) };
    inline vector<Models::ListInstanceResponseBodyDataInstancesTagsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListInstanceResponseBodyDataInstancesTagsTags>) };
    inline ListInstanceResponseBodyDataInstancesTags& setTags(const vector<Models::ListInstanceResponseBodyDataInstancesTagsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstanceResponseBodyDataInstancesTags& setTags(vector<Models::ListInstanceResponseBodyDataInstancesTagsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceResponseBodyDataInstancesTagsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif

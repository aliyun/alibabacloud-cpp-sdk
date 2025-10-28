// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYGROUPRESPONSEBODYDEPLOYGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYGROUPRESPONSEBODYDEPLOYGROUPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDeployGroupResponseBodyDeployGroupListDeployGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListDeployGroupResponseBodyDeployGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeployGroupResponseBodyDeployGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(DeployGroup, deployGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeployGroupResponseBodyDeployGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployGroup, deployGroup_);
    };
    ListDeployGroupResponseBodyDeployGroupList() = default ;
    ListDeployGroupResponseBodyDeployGroupList(const ListDeployGroupResponseBodyDeployGroupList &) = default ;
    ListDeployGroupResponseBodyDeployGroupList(ListDeployGroupResponseBodyDeployGroupList &&) = default ;
    ListDeployGroupResponseBodyDeployGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeployGroupResponseBodyDeployGroupList() = default ;
    ListDeployGroupResponseBodyDeployGroupList& operator=(const ListDeployGroupResponseBodyDeployGroupList &) = default ;
    ListDeployGroupResponseBodyDeployGroupList& operator=(ListDeployGroupResponseBodyDeployGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployGroup_ == nullptr; };
    // deployGroup Field Functions 
    bool hasDeployGroup() const { return this->deployGroup_ != nullptr;};
    void deleteDeployGroup() { this->deployGroup_ = nullptr;};
    inline const vector<Models::ListDeployGroupResponseBodyDeployGroupListDeployGroup> & deployGroup() const { DARABONBA_PTR_GET_CONST(deployGroup_, vector<Models::ListDeployGroupResponseBodyDeployGroupListDeployGroup>) };
    inline vector<Models::ListDeployGroupResponseBodyDeployGroupListDeployGroup> deployGroup() { DARABONBA_PTR_GET(deployGroup_, vector<Models::ListDeployGroupResponseBodyDeployGroupListDeployGroup>) };
    inline ListDeployGroupResponseBodyDeployGroupList& setDeployGroup(const vector<Models::ListDeployGroupResponseBodyDeployGroupListDeployGroup> & deployGroup) { DARABONBA_PTR_SET_VALUE(deployGroup_, deployGroup) };
    inline ListDeployGroupResponseBodyDeployGroupList& setDeployGroup(vector<Models::ListDeployGroupResponseBodyDeployGroupListDeployGroup> && deployGroup) { DARABONBA_PTR_SET_RVALUE(deployGroup_, deployGroup) };


  protected:
    std::shared_ptr<vector<Models::ListDeployGroupResponseBodyDeployGroupListDeployGroup>> deployGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

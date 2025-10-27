// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELINDORMV2INSTANCEREQUESTENGINELIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELINDORMV2INSTANCEREQUESTENGINELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLindormV2InstanceRequestEngineListNodeGroupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class UpdateLindormV2InstanceRequestEngineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLindormV2InstanceRequestEngineList& obj) { 
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(NodeGroupList, nodeGroupList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLindormV2InstanceRequestEngineList& obj) { 
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(NodeGroupList, nodeGroupList_);
    };
    UpdateLindormV2InstanceRequestEngineList() = default ;
    UpdateLindormV2InstanceRequestEngineList(const UpdateLindormV2InstanceRequestEngineList &) = default ;
    UpdateLindormV2InstanceRequestEngineList(UpdateLindormV2InstanceRequestEngineList &&) = default ;
    UpdateLindormV2InstanceRequestEngineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLindormV2InstanceRequestEngineList() = default ;
    UpdateLindormV2InstanceRequestEngineList& operator=(const UpdateLindormV2InstanceRequestEngineList &) = default ;
    UpdateLindormV2InstanceRequestEngineList& operator=(UpdateLindormV2InstanceRequestEngineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engineType_ == nullptr
        && return this->nodeGroupList_ == nullptr; };
    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline UpdateLindormV2InstanceRequestEngineList& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // nodeGroupList Field Functions 
    bool hasNodeGroupList() const { return this->nodeGroupList_ != nullptr;};
    void deleteNodeGroupList() { this->nodeGroupList_ = nullptr;};
    inline const vector<Models::UpdateLindormV2InstanceRequestEngineListNodeGroupList> & nodeGroupList() const { DARABONBA_PTR_GET_CONST(nodeGroupList_, vector<Models::UpdateLindormV2InstanceRequestEngineListNodeGroupList>) };
    inline vector<Models::UpdateLindormV2InstanceRequestEngineListNodeGroupList> nodeGroupList() { DARABONBA_PTR_GET(nodeGroupList_, vector<Models::UpdateLindormV2InstanceRequestEngineListNodeGroupList>) };
    inline UpdateLindormV2InstanceRequestEngineList& setNodeGroupList(const vector<Models::UpdateLindormV2InstanceRequestEngineListNodeGroupList> & nodeGroupList) { DARABONBA_PTR_SET_VALUE(nodeGroupList_, nodeGroupList) };
    inline UpdateLindormV2InstanceRequestEngineList& setNodeGroupList(vector<Models::UpdateLindormV2InstanceRequestEngineListNodeGroupList> && nodeGroupList) { DARABONBA_PTR_SET_RVALUE(nodeGroupList_, nodeGroupList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> engineType_ = nullptr;
    std::shared_ptr<vector<Models::UpdateLindormV2InstanceRequestEngineListNodeGroupList>> nodeGroupList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif

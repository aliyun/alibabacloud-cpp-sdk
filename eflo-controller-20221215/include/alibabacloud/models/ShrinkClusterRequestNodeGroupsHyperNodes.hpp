// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUESTNODEGROUPSHYPERNODES_HPP_
#define ALIBABACLOUD_MODELS_SHRINKCLUSTERREQUESTNODEGROUPSHYPERNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ShrinkClusterRequestNodeGroupsHyperNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShrinkClusterRequestNodeGroupsHyperNodes& obj) { 
      DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ShrinkClusterRequestNodeGroupsHyperNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
    };
    ShrinkClusterRequestNodeGroupsHyperNodes() = default ;
    ShrinkClusterRequestNodeGroupsHyperNodes(const ShrinkClusterRequestNodeGroupsHyperNodes &) = default ;
    ShrinkClusterRequestNodeGroupsHyperNodes(ShrinkClusterRequestNodeGroupsHyperNodes &&) = default ;
    ShrinkClusterRequestNodeGroupsHyperNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShrinkClusterRequestNodeGroupsHyperNodes() = default ;
    ShrinkClusterRequestNodeGroupsHyperNodes& operator=(const ShrinkClusterRequestNodeGroupsHyperNodes &) = default ;
    ShrinkClusterRequestNodeGroupsHyperNodes& operator=(ShrinkClusterRequestNodeGroupsHyperNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hyperNodeId_ == nullptr; };
    // hyperNodeId Field Functions 
    bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
    void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
    inline string hyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
    inline ShrinkClusterRequestNodeGroupsHyperNodes& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


  protected:
    std::shared_ptr<string> hyperNodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif

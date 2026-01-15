// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATESTRATEGYSPEC_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATESTRATEGYSPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NodeSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class AllocateStrategySpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateStrategySpec& obj) { 
      DARABONBA_PTR_TO_JSON(NodeSpecs, nodeSpecs_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateStrategySpec& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeSpecs, nodeSpecs_);
    };
    AllocateStrategySpec() = default ;
    AllocateStrategySpec(const AllocateStrategySpec &) = default ;
    AllocateStrategySpec(AllocateStrategySpec &&) = default ;
    AllocateStrategySpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateStrategySpec() = default ;
    AllocateStrategySpec& operator=(const AllocateStrategySpec &) = default ;
    AllocateStrategySpec& operator=(AllocateStrategySpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeSpecs_ == nullptr; };
    // nodeSpecs Field Functions 
    bool hasNodeSpecs() const { return this->nodeSpecs_ != nullptr;};
    void deleteNodeSpecs() { this->nodeSpecs_ = nullptr;};
    inline const vector<NodeSpec> & getNodeSpecs() const { DARABONBA_PTR_GET_CONST(nodeSpecs_, vector<NodeSpec>) };
    inline vector<NodeSpec> getNodeSpecs() { DARABONBA_PTR_GET(nodeSpecs_, vector<NodeSpec>) };
    inline AllocateStrategySpec& setNodeSpecs(const vector<NodeSpec> & nodeSpecs) { DARABONBA_PTR_SET_VALUE(nodeSpecs_, nodeSpecs) };
    inline AllocateStrategySpec& setNodeSpecs(vector<NodeSpec> && nodeSpecs) { DARABONBA_PTR_SET_RVALUE(nodeSpecs_, nodeSpecs) };


  protected:
    shared_ptr<vector<NodeSpec>> nodeSpecs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

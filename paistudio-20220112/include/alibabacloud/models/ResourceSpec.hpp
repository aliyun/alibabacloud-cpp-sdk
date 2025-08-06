// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCESPEC_HPP_
#define ALIBABACLOUD_MODELS_RESOURCESPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/PaiStudio20220112.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResourceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(NodeSpecs, nodeSpecs_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeSpecs, nodeSpecs_);
    };
    ResourceSpec() = default ;
    ResourceSpec(const ResourceSpec &) = default ;
    ResourceSpec(ResourceSpec &&) = default ;
    ResourceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceSpec() = default ;
    ResourceSpec& operator=(const ResourceSpec &) = default ;
    ResourceSpec& operator=(ResourceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeSpecs_ != nullptr; };
    // nodeSpecs Field Functions 
    bool hasNodeSpecs() const { return this->nodeSpecs_ != nullptr;};
    void deleteNodeSpecs() { this->nodeSpecs_ = nullptr;};
    inline const vector<NodeSpec> & nodeSpecs() const { DARABONBA_PTR_GET_CONST(nodeSpecs_, vector<NodeSpec>) };
    inline vector<NodeSpec> nodeSpecs() { DARABONBA_PTR_GET(nodeSpecs_, vector<NodeSpec>) };
    inline ResourceSpec& setNodeSpecs(const vector<NodeSpec> & nodeSpecs) { DARABONBA_PTR_SET_VALUE(nodeSpecs_, nodeSpecs) };
    inline ResourceSpec& setNodeSpecs(vector<NodeSpec> && nodeSpecs) { DARABONBA_PTR_SET_RVALUE(nodeSpecs_, nodeSpecs) };


  protected:
    std::shared_ptr<vector<NodeSpec>> nodeSpecs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif

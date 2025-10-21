// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCE_HPP_
#define ALIBABACLOUD_MODELS_RESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Resource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Resource& obj) { 
      DARABONBA_PTR_TO_JSON(elasticResource, elasticResource_);
      DARABONBA_PTR_TO_JSON(fixedResource, fixedResource_);
    };
    friend void from_json(const Darabonba::Json& j, Resource& obj) { 
      DARABONBA_PTR_FROM_JSON(elasticResource, elasticResource_);
      DARABONBA_PTR_FROM_JSON(fixedResource, fixedResource_);
    };
    Resource() = default ;
    Resource(const Resource &) = default ;
    Resource(Resource &&) = default ;
    Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Resource() = default ;
    Resource& operator=(const Resource &) = default ;
    Resource& operator=(Resource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticResource_ == nullptr
        && return this->fixedResource_ == nullptr; };
    // elasticResource Field Functions 
    bool hasElasticResource() const { return this->elasticResource_ != nullptr;};
    void deleteElasticResource() { this->elasticResource_ = nullptr;};
    inline const ResourceSpec & elasticResource() const { DARABONBA_PTR_GET_CONST(elasticResource_, ResourceSpec) };
    inline ResourceSpec elasticResource() { DARABONBA_PTR_GET(elasticResource_, ResourceSpec) };
    inline Resource& setElasticResource(const ResourceSpec & elasticResource) { DARABONBA_PTR_SET_VALUE(elasticResource_, elasticResource) };
    inline Resource& setElasticResource(ResourceSpec && elasticResource) { DARABONBA_PTR_SET_RVALUE(elasticResource_, elasticResource) };


    // fixedResource Field Functions 
    bool hasFixedResource() const { return this->fixedResource_ != nullptr;};
    void deleteFixedResource() { this->fixedResource_ = nullptr;};
    inline const ResourceSpec & fixedResource() const { DARABONBA_PTR_GET_CONST(fixedResource_, ResourceSpec) };
    inline ResourceSpec fixedResource() { DARABONBA_PTR_GET(fixedResource_, ResourceSpec) };
    inline Resource& setFixedResource(const ResourceSpec & fixedResource) { DARABONBA_PTR_SET_VALUE(fixedResource_, fixedResource) };
    inline Resource& setFixedResource(ResourceSpec && fixedResource) { DARABONBA_PTR_SET_RVALUE(fixedResource_, fixedResource) };


  protected:
    std::shared_ptr<ResourceSpec> elasticResource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ResourceSpec> fixedResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif

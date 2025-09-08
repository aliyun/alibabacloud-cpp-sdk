// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUILDPIPELINEIMAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_BUILDPIPELINEIMAGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BuildPipelineImageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BuildPipelineImageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Repository, repository_);
    };
    friend void from_json(const Darabonba::Json& j, BuildPipelineImageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Repository, repository_);
    };
    BuildPipelineImageConfig() = default ;
    BuildPipelineImageConfig(const BuildPipelineImageConfig &) = default ;
    BuildPipelineImageConfig(BuildPipelineImageConfig &&) = default ;
    BuildPipelineImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BuildPipelineImageConfig() = default ;
    BuildPipelineImageConfig& operator=(const BuildPipelineImageConfig &) = default ;
    BuildPipelineImageConfig& operator=(BuildPipelineImageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->namespace_ != nullptr && this->repository_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline BuildPipelineImageConfig& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BuildPipelineImageConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // repository Field Functions 
    bool hasRepository() const { return this->repository_ != nullptr;};
    void deleteRepository() { this->repository_ = nullptr;};
    inline string repository() const { DARABONBA_PTR_GET_DEFAULT(repository_, "") };
    inline BuildPipelineImageConfig& setRepository(string repository) { DARABONBA_PTR_SET_VALUE(repository_, repository) };


  protected:
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> repository_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif

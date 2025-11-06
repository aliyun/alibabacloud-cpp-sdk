// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESENTINELBLOCKFALLBACKDEFINITIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESENTINELBLOCKFALLBACKDEFINITIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateSentinelBlockFallbackDefinitionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSentinelBlockFallbackDefinitionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(FallbackBehavior, fallbackBehavior_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ResourceClassification, resourceClassification_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSentinelBlockFallbackDefinitionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(FallbackBehavior, fallbackBehavior_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ResourceClassification, resourceClassification_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateSentinelBlockFallbackDefinitionResponseBodyData() = default ;
    CreateSentinelBlockFallbackDefinitionResponseBodyData(const CreateSentinelBlockFallbackDefinitionResponseBodyData &) = default ;
    CreateSentinelBlockFallbackDefinitionResponseBodyData(CreateSentinelBlockFallbackDefinitionResponseBodyData &&) = default ;
    CreateSentinelBlockFallbackDefinitionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSentinelBlockFallbackDefinitionResponseBodyData() = default ;
    CreateSentinelBlockFallbackDefinitionResponseBodyData& operator=(const CreateSentinelBlockFallbackDefinitionResponseBodyData &) = default ;
    CreateSentinelBlockFallbackDefinitionResponseBodyData& operator=(CreateSentinelBlockFallbackDefinitionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->fallbackBehavior_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->resourceClassification_ == nullptr
        && return this->userId_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateSentinelBlockFallbackDefinitionResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // fallbackBehavior Field Functions 
    bool hasFallbackBehavior() const { return this->fallbackBehavior_ != nullptr;};
    void deleteFallbackBehavior() { this->fallbackBehavior_ = nullptr;};
    inline string fallbackBehavior() const { DARABONBA_PTR_GET_DEFAULT(fallbackBehavior_, "") };
    inline CreateSentinelBlockFallbackDefinitionResponseBodyData& setFallbackBehavior(string fallbackBehavior) { DARABONBA_PTR_SET_VALUE(fallbackBehavior_, fallbackBehavior) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateSentinelBlockFallbackDefinitionResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSentinelBlockFallbackDefinitionResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateSentinelBlockFallbackDefinitionResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceClassification Field Functions 
    bool hasResourceClassification() const { return this->resourceClassification_ != nullptr;};
    void deleteResourceClassification() { this->resourceClassification_ = nullptr;};
    inline int32_t resourceClassification() const { DARABONBA_PTR_GET_DEFAULT(resourceClassification_, 0) };
    inline CreateSentinelBlockFallbackDefinitionResponseBodyData& setResourceClassification(int32_t resourceClassification) { DARABONBA_PTR_SET_VALUE(resourceClassification_, resourceClassification) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateSentinelBlockFallbackDefinitionResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> fallbackBehavior_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<int32_t> resourceClassification_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENTINELBLOCKFALLBACKDEFINITIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSENTINELBLOCKFALLBACKDEFINITIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListSentinelBlockFallbackDefinitionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSentinelBlockFallbackDefinitionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_ANY_TO_JSON(FallbackBehavior, fallbackBehavior_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ResourceClassification, resourceClassification_);
      DARABONBA_ANY_TO_JSON(TargetMap, targetMap_);
    };
    friend void from_json(const Darabonba::Json& j, ListSentinelBlockFallbackDefinitionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_ANY_FROM_JSON(FallbackBehavior, fallbackBehavior_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ResourceClassification, resourceClassification_);
      DARABONBA_ANY_FROM_JSON(TargetMap, targetMap_);
    };
    ListSentinelBlockFallbackDefinitionsResponseBodyData() = default ;
    ListSentinelBlockFallbackDefinitionsResponseBodyData(const ListSentinelBlockFallbackDefinitionsResponseBodyData &) = default ;
    ListSentinelBlockFallbackDefinitionsResponseBodyData(ListSentinelBlockFallbackDefinitionsResponseBodyData &&) = default ;
    ListSentinelBlockFallbackDefinitionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSentinelBlockFallbackDefinitionsResponseBodyData() = default ;
    ListSentinelBlockFallbackDefinitionsResponseBodyData& operator=(const ListSentinelBlockFallbackDefinitionsResponseBodyData &) = default ;
    ListSentinelBlockFallbackDefinitionsResponseBodyData& operator=(ListSentinelBlockFallbackDefinitionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->fallbackBehavior_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->resourceClassification_ != nullptr
        && this->targetMap_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // fallbackBehavior Field Functions 
    bool hasFallbackBehavior() const { return this->fallbackBehavior_ != nullptr;};
    void deleteFallbackBehavior() { this->fallbackBehavior_ = nullptr;};
    inline     const Darabonba::Json & fallbackBehavior() const { DARABONBA_GET(fallbackBehavior_) };
    Darabonba::Json & fallbackBehavior() { DARABONBA_GET(fallbackBehavior_) };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setFallbackBehavior(const Darabonba::Json & fallbackBehavior) { DARABONBA_SET_VALUE(fallbackBehavior_, fallbackBehavior) };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setFallbackBehavior(Darabonba::Json & fallbackBehavior) { DARABONBA_SET_RVALUE(fallbackBehavior_, fallbackBehavior) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceClassification Field Functions 
    bool hasResourceClassification() const { return this->resourceClassification_ != nullptr;};
    void deleteResourceClassification() { this->resourceClassification_ = nullptr;};
    inline string resourceClassification() const { DARABONBA_PTR_GET_DEFAULT(resourceClassification_, "") };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setResourceClassification(string resourceClassification) { DARABONBA_PTR_SET_VALUE(resourceClassification_, resourceClassification) };


    // targetMap Field Functions 
    bool hasTargetMap() const { return this->targetMap_ != nullptr;};
    void deleteTargetMap() { this->targetMap_ = nullptr;};
    inline     const Darabonba::Json & targetMap() const { DARABONBA_GET(targetMap_) };
    Darabonba::Json & targetMap() { DARABONBA_GET(targetMap_) };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setTargetMap(const Darabonba::Json & targetMap) { DARABONBA_SET_VALUE(targetMap_, targetMap) };
    inline ListSentinelBlockFallbackDefinitionsResponseBodyData& setTargetMap(Darabonba::Json & targetMap) { DARABONBA_SET_RVALUE(targetMap_, targetMap) };


  protected:
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // Behavior  detail.
    Darabonba::Json fallbackBehavior_ = nullptr;
    // Behavior Id
    std::shared_ptr<string> id_ = nullptr;
    // The name of the behavior.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the Microservices namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // Behavior classification.
    std::shared_ptr<string> resourceClassification_ = nullptr;
    // Resource information bound to the behavior.
    Darabonba::Json targetMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTECOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTECOMPONENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ExecuteComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentActionName, componentActionName_);
      DARABONBA_PTR_TO_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_TO_JSON(ComponentInput, componentInput_);
      DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PlayBookNodeName, playBookNodeName_);
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentActionName, componentActionName_);
      DARABONBA_PTR_FROM_JSON(ComponentAssetUuid, componentAssetUuid_);
      DARABONBA_PTR_FROM_JSON(ComponentInput, componentInput_);
      DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PlayBookNodeName, playBookNodeName_);
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    ExecuteComponentRequest() = default ;
    ExecuteComponentRequest(const ExecuteComponentRequest &) = default ;
    ExecuteComponentRequest(ExecuteComponentRequest &&) = default ;
    ExecuteComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteComponentRequest() = default ;
    ExecuteComponentRequest& operator=(const ExecuteComponentRequest &) = default ;
    ExecuteComponentRequest& operator=(ExecuteComponentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentActionName_ == nullptr
        && this->componentAssetUuid_ == nullptr && this->componentInput_ == nullptr && this->componentName_ == nullptr && this->lang_ == nullptr && this->playBookNodeName_ == nullptr
        && this->playbookUuid_ == nullptr; };
    // componentActionName Field Functions 
    bool hasComponentActionName() const { return this->componentActionName_ != nullptr;};
    void deleteComponentActionName() { this->componentActionName_ = nullptr;};
    inline string getComponentActionName() const { DARABONBA_PTR_GET_DEFAULT(componentActionName_, "") };
    inline ExecuteComponentRequest& setComponentActionName(string componentActionName) { DARABONBA_PTR_SET_VALUE(componentActionName_, componentActionName) };


    // componentAssetUuid Field Functions 
    bool hasComponentAssetUuid() const { return this->componentAssetUuid_ != nullptr;};
    void deleteComponentAssetUuid() { this->componentAssetUuid_ = nullptr;};
    inline string getComponentAssetUuid() const { DARABONBA_PTR_GET_DEFAULT(componentAssetUuid_, "") };
    inline ExecuteComponentRequest& setComponentAssetUuid(string componentAssetUuid) { DARABONBA_PTR_SET_VALUE(componentAssetUuid_, componentAssetUuid) };


    // componentInput Field Functions 
    bool hasComponentInput() const { return this->componentInput_ != nullptr;};
    void deleteComponentInput() { this->componentInput_ = nullptr;};
    inline string getComponentInput() const { DARABONBA_PTR_GET_DEFAULT(componentInput_, "") };
    inline ExecuteComponentRequest& setComponentInput(string componentInput) { DARABONBA_PTR_SET_VALUE(componentInput_, componentInput) };


    // componentName Field Functions 
    bool hasComponentName() const { return this->componentName_ != nullptr;};
    void deleteComponentName() { this->componentName_ = nullptr;};
    inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
    inline ExecuteComponentRequest& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExecuteComponentRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // playBookNodeName Field Functions 
    bool hasPlayBookNodeName() const { return this->playBookNodeName_ != nullptr;};
    void deletePlayBookNodeName() { this->playBookNodeName_ = nullptr;};
    inline string getPlayBookNodeName() const { DARABONBA_PTR_GET_DEFAULT(playBookNodeName_, "") };
    inline ExecuteComponentRequest& setPlayBookNodeName(string playBookNodeName) { DARABONBA_PTR_SET_VALUE(playBookNodeName_, playBookNodeName) };


    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline ExecuteComponentRequest& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    shared_ptr<string> componentActionName_ {};
    shared_ptr<string> componentAssetUuid_ {};
    shared_ptr<string> componentInput_ {};
    shared_ptr<string> componentName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> playBookNodeName_ {};
    shared_ptr<string> playbookUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCOUNTFACTORYBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCOUNTFACTORYBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class CreateAccountFactoryBaselineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccountFactoryBaselineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccountFactoryBaselineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateAccountFactoryBaselineRequest() = default ;
    CreateAccountFactoryBaselineRequest(const CreateAccountFactoryBaselineRequest &) = default ;
    CreateAccountFactoryBaselineRequest(CreateAccountFactoryBaselineRequest &&) = default ;
    CreateAccountFactoryBaselineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccountFactoryBaselineRequest() = default ;
    CreateAccountFactoryBaselineRequest& operator=(const CreateAccountFactoryBaselineRequest &) = default ;
    CreateAccountFactoryBaselineRequest& operator=(CreateAccountFactoryBaselineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BaselineItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineItems& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, BaselineItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      BaselineItems() = default ;
      BaselineItems(const BaselineItems &) = default ;
      BaselineItems(BaselineItems &&) = default ;
      BaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineItems() = default ;
      BaselineItems& operator=(const BaselineItems &) = default ;
      BaselineItems& operator=(BaselineItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline BaselineItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline BaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The configurations of the baseline item. The value of this parameter is a JSON string.
      shared_ptr<string> config_ {};
      // The name of the baseline item.
      shared_ptr<string> name_ {};
      // The version of the baseline item.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->baselineItems_ == nullptr
        && this->baselineName_ == nullptr && this->description_ == nullptr && this->regionId_ == nullptr; };
    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<CreateAccountFactoryBaselineRequest::BaselineItems> & getBaselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<CreateAccountFactoryBaselineRequest::BaselineItems>) };
    inline vector<CreateAccountFactoryBaselineRequest::BaselineItems> getBaselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<CreateAccountFactoryBaselineRequest::BaselineItems>) };
    inline CreateAccountFactoryBaselineRequest& setBaselineItems(const vector<CreateAccountFactoryBaselineRequest::BaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline CreateAccountFactoryBaselineRequest& setBaselineItems(vector<CreateAccountFactoryBaselineRequest::BaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline CreateAccountFactoryBaselineRequest& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAccountFactoryBaselineRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAccountFactoryBaselineRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // An array that contains the baseline items.
    // 
    // You can call the [ListAccountFactoryBaselineItems](~~ListAccountFactoryBaselineItems~~) operation to query a list of baseline items supported by the account factory in Cloud Governance Center.
    shared_ptr<vector<CreateAccountFactoryBaselineRequest::BaselineItems>> baselineItems_ {};
    // The name of the baseline.
    shared_ptr<string> baselineName_ {};
    // The description of the baseline.
    shared_ptr<string> description_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEINSPECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEINSPECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CreateInstanceInspectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceInspectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceInspectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    CreateInstanceInspectionRequest() = default ;
    CreateInstanceInspectionRequest(const CreateInstanceInspectionRequest &) = default ;
    CreateInstanceInspectionRequest(CreateInstanceInspectionRequest &&) = default ;
    CreateInstanceInspectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceInspectionRequest() = default ;
    CreateInstanceInspectionRequest& operator=(const CreateInstanceInspectionRequest &) = default ;
    CreateInstanceInspectionRequest& operator=(CreateInstanceInspectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr
        && this->items_ == nullptr && this->region_ == nullptr && this->source_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline CreateInstanceInspectionRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<string> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
    inline vector<string> getItems() { DARABONBA_PTR_GET(items_, vector<string>) };
    inline CreateInstanceInspectionRequest& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CreateInstanceInspectionRequest& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateInstanceInspectionRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateInstanceInspectionRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    shared_ptr<string> instance_ {};
    shared_ptr<vector<string>> items_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif

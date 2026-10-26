// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCEINSPECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCEINSPECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class RunInstanceInspectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstanceInspectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(itemOverrides, itemOverrides_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstanceInspectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(itemOverrides, itemOverrides_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    RunInstanceInspectionRequest() = default ;
    RunInstanceInspectionRequest(const RunInstanceInspectionRequest &) = default ;
    RunInstanceInspectionRequest(RunInstanceInspectionRequest &&) = default ;
    RunInstanceInspectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstanceInspectionRequest() = default ;
    RunInstanceInspectionRequest& operator=(const RunInstanceInspectionRequest &) = default ;
    RunInstanceInspectionRequest& operator=(RunInstanceInspectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ItemOverrides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ItemOverrides& obj) { 
        DARABONBA_ANY_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(templateCode, templateCode_);
      };
      friend void from_json(const Darabonba::Json& j, ItemOverrides& obj) { 
        DARABONBA_ANY_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(templateCode, templateCode_);
      };
      ItemOverrides() = default ;
      ItemOverrides(const ItemOverrides &) = default ;
      ItemOverrides(ItemOverrides &&) = default ;
      ItemOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ItemOverrides() = default ;
      ItemOverrides& operator=(const ItemOverrides &) = default ;
      ItemOverrides& operator=(ItemOverrides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameters_ == nullptr
        && this->templateCode_ == nullptr; };
      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline       const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
      Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
      inline ItemOverrides& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
      inline ItemOverrides& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline ItemOverrides& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    protected:
      // This parameter is required.
      Darabonba::Json parameters_ {};
      // This parameter is required.
      shared_ptr<string> templateCode_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->itemOverrides_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunInstanceInspectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // itemOverrides Field Functions 
    bool hasItemOverrides() const { return this->itemOverrides_ != nullptr;};
    void deleteItemOverrides() { this->itemOverrides_ = nullptr;};
    inline const vector<RunInstanceInspectionRequest::ItemOverrides> & getItemOverrides() const { DARABONBA_PTR_GET_CONST(itemOverrides_, vector<RunInstanceInspectionRequest::ItemOverrides>) };
    inline vector<RunInstanceInspectionRequest::ItemOverrides> getItemOverrides() { DARABONBA_PTR_GET(itemOverrides_, vector<RunInstanceInspectionRequest::ItemOverrides>) };
    inline RunInstanceInspectionRequest& setItemOverrides(const vector<RunInstanceInspectionRequest::ItemOverrides> & itemOverrides) { DARABONBA_PTR_SET_VALUE(itemOverrides_, itemOverrides) };
    inline RunInstanceInspectionRequest& setItemOverrides(vector<RunInstanceInspectionRequest::ItemOverrides> && itemOverrides) { DARABONBA_PTR_SET_RVALUE(itemOverrides_, itemOverrides) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunInstanceInspectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<RunInstanceInspectionRequest::ItemOverrides>> itemOverrides_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif

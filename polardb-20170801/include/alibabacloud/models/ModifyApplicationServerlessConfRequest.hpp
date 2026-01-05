// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSERVERLESSCONFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSERVERLESSCONFREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyApplicationServerlessConfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationServerlessConfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ServerlessConfList, serverlessConfList_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationServerlessConfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfList, serverlessConfList_);
    };
    ModifyApplicationServerlessConfRequest() = default ;
    ModifyApplicationServerlessConfRequest(const ModifyApplicationServerlessConfRequest &) = default ;
    ModifyApplicationServerlessConfRequest(ModifyApplicationServerlessConfRequest &&) = default ;
    ModifyApplicationServerlessConfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationServerlessConfRequest() = default ;
    ModifyApplicationServerlessConfRequest& operator=(const ModifyApplicationServerlessConfRequest &) = default ;
    ModifyApplicationServerlessConfRequest& operator=(ModifyApplicationServerlessConfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServerlessConfList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServerlessConfList& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
        DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      };
      friend void from_json(const Darabonba::Json& j, ServerlessConfList& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
        DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
        DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      };
      ServerlessConfList() = default ;
      ServerlessConfList(const ServerlessConfList &) = default ;
      ServerlessConfList(ServerlessConfList &&) = default ;
      ServerlessConfList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServerlessConfList() = default ;
      ServerlessConfList& operator=(const ServerlessConfList &) = default ;
      ServerlessConfList& operator=(ServerlessConfList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->componentType_ == nullptr
        && this->scaleMax_ == nullptr && this->scaleMin_ == nullptr; };
      // componentType Field Functions 
      bool hasComponentType() const { return this->componentType_ != nullptr;};
      void deleteComponentType() { this->componentType_ = nullptr;};
      inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
      inline ServerlessConfList& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


      // scaleMax Field Functions 
      bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
      void deleteScaleMax() { this->scaleMax_ = nullptr;};
      inline string getScaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, "") };
      inline ServerlessConfList& setScaleMax(string scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


      // scaleMin Field Functions 
      bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
      void deleteScaleMin() { this->scaleMin_ = nullptr;};
      inline string getScaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, "") };
      inline ServerlessConfList& setScaleMin(string scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    protected:
      shared_ptr<string> componentType_ {};
      shared_ptr<string> scaleMax_ {};
      shared_ptr<string> scaleMin_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->serverlessConfList_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ModifyApplicationServerlessConfRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // serverlessConfList Field Functions 
    bool hasServerlessConfList() const { return this->serverlessConfList_ != nullptr;};
    void deleteServerlessConfList() { this->serverlessConfList_ = nullptr;};
    inline const vector<ModifyApplicationServerlessConfRequest::ServerlessConfList> & getServerlessConfList() const { DARABONBA_PTR_GET_CONST(serverlessConfList_, vector<ModifyApplicationServerlessConfRequest::ServerlessConfList>) };
    inline vector<ModifyApplicationServerlessConfRequest::ServerlessConfList> getServerlessConfList() { DARABONBA_PTR_GET(serverlessConfList_, vector<ModifyApplicationServerlessConfRequest::ServerlessConfList>) };
    inline ModifyApplicationServerlessConfRequest& setServerlessConfList(const vector<ModifyApplicationServerlessConfRequest::ServerlessConfList> & serverlessConfList) { DARABONBA_PTR_SET_VALUE(serverlessConfList_, serverlessConfList) };
    inline ModifyApplicationServerlessConfRequest& setServerlessConfList(vector<ModifyApplicationServerlessConfRequest::ServerlessConfList> && serverlessConfList) { DARABONBA_PTR_SET_RVALUE(serverlessConfList_, serverlessConfList) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<vector<ModifyApplicationServerlessConfRequest::ServerlessConfList>> serverlessConfList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPAGENTMODELSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPAGENTMODELSETTINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourceGroupAgentModelSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupAgentModelSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupAgentModelSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetResourceGroupAgentModelSettingsResponseBody() = default ;
    GetResourceGroupAgentModelSettingsResponseBody(const GetResourceGroupAgentModelSettingsResponseBody &) = default ;
    GetResourceGroupAgentModelSettingsResponseBody(GetResourceGroupAgentModelSettingsResponseBody &&) = default ;
    GetResourceGroupAgentModelSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupAgentModelSettingsResponseBody() = default ;
    GetResourceGroupAgentModelSettingsResponseBody& operator=(const GetResourceGroupAgentModelSettingsResponseBody &) = default ;
    GetResourceGroupAgentModelSettingsResponseBody& operator=(GetResourceGroupAgentModelSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
        DARABONBA_PTR_TO_JSON(ModelTemplateName, modelTemplateName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
        DARABONBA_PTR_FROM_JSON(ModelTemplateName, modelTemplateName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelTemplateId_ == nullptr
        && this->modelTemplateName_ == nullptr && this->resourceGroupId_ == nullptr; };
      // modelTemplateId Field Functions 
      bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
      void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
      inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
      inline Data& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


      // modelTemplateName Field Functions 
      bool hasModelTemplateName() const { return this->modelTemplateName_ != nullptr;};
      void deleteModelTemplateName() { this->modelTemplateName_ = nullptr;};
      inline string getModelTemplateName() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateName_, "") };
      inline Data& setModelTemplateName(string modelTemplateName) { DARABONBA_PTR_SET_VALUE(modelTemplateName_, modelTemplateName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    protected:
      // The model group ID.
      shared_ptr<string> modelTemplateId_ {};
      // The model group name.
      shared_ptr<string> modelTemplateName_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetResourceGroupAgentModelSettingsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetResourceGroupAgentModelSettingsResponseBody::Data>) };
    inline vector<GetResourceGroupAgentModelSettingsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetResourceGroupAgentModelSettingsResponseBody::Data>) };
    inline GetResourceGroupAgentModelSettingsResponseBody& setData(const vector<GetResourceGroupAgentModelSettingsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResourceGroupAgentModelSettingsResponseBody& setData(vector<GetResourceGroupAgentModelSettingsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceGroupAgentModelSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetResourceGroupAgentModelSettingsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of model settings for resource groups. One record is returned for each resource group ID specified in the request. If a resource group is not associated with a model group under the specified agent platform and provider, ModelTemplateId and ModelTemplateName are empty.
    shared_ptr<vector<GetResourceGroupAgentModelSettingsResponseBody::Data>> data_ {};
    // The request ID, which uniquely identifies the request.
    shared_ptr<string> requestId_ {};
    // The total count.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif

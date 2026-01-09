// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SaveCrowdDatasetAndBindingDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCrowdDatasetAndBindingDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCrowdDatasetAndBindingDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SaveCrowdDatasetAndBindingDatasetRequest() = default ;
    SaveCrowdDatasetAndBindingDatasetRequest(const SaveCrowdDatasetAndBindingDatasetRequest &) = default ;
    SaveCrowdDatasetAndBindingDatasetRequest(SaveCrowdDatasetAndBindingDatasetRequest &&) = default ;
    SaveCrowdDatasetAndBindingDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCrowdDatasetAndBindingDatasetRequest() = default ;
    SaveCrowdDatasetAndBindingDatasetRequest& operator=(const SaveCrowdDatasetAndBindingDatasetRequest &) = default ;
    SaveCrowdDatasetAndBindingDatasetRequest& operator=(SaveCrowdDatasetAndBindingDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(appId, appId_);
        DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(appId, appId_);
        DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->datasetIds_ == nullptr && this->description_ == nullptr && this->name_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Body& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // datasetIds Field Functions 
      bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
      void deleteDatasetIds() { this->datasetIds_ = nullptr;};
      inline const vector<string> & getDatasetIds() const { DARABONBA_PTR_GET_CONST(datasetIds_, vector<string>) };
      inline vector<string> getDatasetIds() { DARABONBA_PTR_GET(datasetIds_, vector<string>) };
      inline Body& setDatasetIds(const vector<string> & datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };
      inline Body& setDatasetIds(vector<string> && datasetIds) { DARABONBA_PTR_SET_RVALUE(datasetIds_, datasetIds) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Body& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Body& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter is required.
      shared_ptr<string> appId_ {};
      // This parameter is required.
      shared_ptr<vector<string>> datasetIds_ {};
      shared_ptr<string> description_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SaveCrowdDatasetAndBindingDatasetRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SaveCrowdDatasetAndBindingDatasetRequest::Body) };
    inline SaveCrowdDatasetAndBindingDatasetRequest::Body getBody() { DARABONBA_PTR_GET(body_, SaveCrowdDatasetAndBindingDatasetRequest::Body) };
    inline SaveCrowdDatasetAndBindingDatasetRequest& setBody(const SaveCrowdDatasetAndBindingDatasetRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SaveCrowdDatasetAndBindingDatasetRequest& setBody(SaveCrowdDatasetAndBindingDatasetRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<SaveCrowdDatasetAndBindingDatasetRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif

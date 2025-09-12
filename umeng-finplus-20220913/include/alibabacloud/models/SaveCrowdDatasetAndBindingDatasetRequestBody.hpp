// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETREQUESTBODY_HPP_
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
  class SaveCrowdDatasetAndBindingDatasetRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCrowdDatasetAndBindingDatasetRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCrowdDatasetAndBindingDatasetRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    SaveCrowdDatasetAndBindingDatasetRequestBody() = default ;
    SaveCrowdDatasetAndBindingDatasetRequestBody(const SaveCrowdDatasetAndBindingDatasetRequestBody &) = default ;
    SaveCrowdDatasetAndBindingDatasetRequestBody(SaveCrowdDatasetAndBindingDatasetRequestBody &&) = default ;
    SaveCrowdDatasetAndBindingDatasetRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCrowdDatasetAndBindingDatasetRequestBody() = default ;
    SaveCrowdDatasetAndBindingDatasetRequestBody& operator=(const SaveCrowdDatasetAndBindingDatasetRequestBody &) = default ;
    SaveCrowdDatasetAndBindingDatasetRequestBody& operator=(SaveCrowdDatasetAndBindingDatasetRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->datasetIds_ != nullptr && this->description_ != nullptr && this->name_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SaveCrowdDatasetAndBindingDatasetRequestBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline const vector<string> & datasetIds() const { DARABONBA_PTR_GET_CONST(datasetIds_, vector<string>) };
    inline vector<string> datasetIds() { DARABONBA_PTR_GET(datasetIds_, vector<string>) };
    inline SaveCrowdDatasetAndBindingDatasetRequestBody& setDatasetIds(const vector<string> & datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };
    inline SaveCrowdDatasetAndBindingDatasetRequestBody& setDatasetIds(vector<string> && datasetIds) { DARABONBA_PTR_SET_RVALUE(datasetIds_, datasetIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SaveCrowdDatasetAndBindingDatasetRequestBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SaveCrowdDatasetAndBindingDatasetRequestBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> datasetIds_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif

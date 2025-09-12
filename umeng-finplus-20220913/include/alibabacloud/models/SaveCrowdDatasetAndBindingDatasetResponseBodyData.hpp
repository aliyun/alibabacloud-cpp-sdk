// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SAVECROWDDATASETANDBINDINGDATASETRESPONSEBODYDATA_HPP_
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
  class SaveCrowdDatasetAndBindingDatasetResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCrowdDatasetAndBindingDatasetResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(crowdDatasetId, crowdDatasetId_);
      DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(uploadStatus, uploadStatus_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCrowdDatasetAndBindingDatasetResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(crowdDatasetId, crowdDatasetId_);
      DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(uploadStatus, uploadStatus_);
    };
    SaveCrowdDatasetAndBindingDatasetResponseBodyData() = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBodyData(const SaveCrowdDatasetAndBindingDatasetResponseBodyData &) = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBodyData(SaveCrowdDatasetAndBindingDatasetResponseBodyData &&) = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCrowdDatasetAndBindingDatasetResponseBodyData() = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBodyData& operator=(const SaveCrowdDatasetAndBindingDatasetResponseBodyData &) = default ;
    SaveCrowdDatasetAndBindingDatasetResponseBodyData& operator=(SaveCrowdDatasetAndBindingDatasetResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->crowdDatasetId_ != nullptr && this->datasetIds_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->uploadStatus_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SaveCrowdDatasetAndBindingDatasetResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // crowdDatasetId Field Functions 
    bool hasCrowdDatasetId() const { return this->crowdDatasetId_ != nullptr;};
    void deleteCrowdDatasetId() { this->crowdDatasetId_ = nullptr;};
    inline string crowdDatasetId() const { DARABONBA_PTR_GET_DEFAULT(crowdDatasetId_, "") };
    inline SaveCrowdDatasetAndBindingDatasetResponseBodyData& setCrowdDatasetId(string crowdDatasetId) { DARABONBA_PTR_SET_VALUE(crowdDatasetId_, crowdDatasetId) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline const vector<string> & datasetIds() const { DARABONBA_PTR_GET_CONST(datasetIds_, vector<string>) };
    inline vector<string> datasetIds() { DARABONBA_PTR_GET(datasetIds_, vector<string>) };
    inline SaveCrowdDatasetAndBindingDatasetResponseBodyData& setDatasetIds(const vector<string> & datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };
    inline SaveCrowdDatasetAndBindingDatasetResponseBodyData& setDatasetIds(vector<string> && datasetIds) { DARABONBA_PTR_SET_RVALUE(datasetIds_, datasetIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SaveCrowdDatasetAndBindingDatasetResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SaveCrowdDatasetAndBindingDatasetResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uploadStatus Field Functions 
    bool hasUploadStatus() const { return this->uploadStatus_ != nullptr;};
    void deleteUploadStatus() { this->uploadStatus_ = nullptr;};
    inline string uploadStatus() const { DARABONBA_PTR_GET_DEFAULT(uploadStatus_, "") };
    inline SaveCrowdDatasetAndBindingDatasetResponseBodyData& setUploadStatus(string uploadStatus) { DARABONBA_PTR_SET_VALUE(uploadStatus_, uploadStatus) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> crowdDatasetId_ = nullptr;
    std::shared_ptr<vector<string>> datasetIds_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> uploadStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif

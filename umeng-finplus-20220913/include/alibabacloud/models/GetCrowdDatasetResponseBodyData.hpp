// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCROWDDATASETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCROWDDATASETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetCrowdDatasetResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrowdDatasetResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(crowdDatasetId, crowdDatasetId_);
      DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(uploadStatus, uploadStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrowdDatasetResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(crowdDatasetId, crowdDatasetId_);
      DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(uploadStatus, uploadStatus_);
    };
    GetCrowdDatasetResponseBodyData() = default ;
    GetCrowdDatasetResponseBodyData(const GetCrowdDatasetResponseBodyData &) = default ;
    GetCrowdDatasetResponseBodyData(GetCrowdDatasetResponseBodyData &&) = default ;
    GetCrowdDatasetResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrowdDatasetResponseBodyData() = default ;
    GetCrowdDatasetResponseBodyData& operator=(const GetCrowdDatasetResponseBodyData &) = default ;
    GetCrowdDatasetResponseBodyData& operator=(GetCrowdDatasetResponseBodyData &&) = default ;
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
    inline GetCrowdDatasetResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // crowdDatasetId Field Functions 
    bool hasCrowdDatasetId() const { return this->crowdDatasetId_ != nullptr;};
    void deleteCrowdDatasetId() { this->crowdDatasetId_ = nullptr;};
    inline string crowdDatasetId() const { DARABONBA_PTR_GET_DEFAULT(crowdDatasetId_, "") };
    inline GetCrowdDatasetResponseBodyData& setCrowdDatasetId(string crowdDatasetId) { DARABONBA_PTR_SET_VALUE(crowdDatasetId_, crowdDatasetId) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline string datasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
    inline GetCrowdDatasetResponseBodyData& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetCrowdDatasetResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCrowdDatasetResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uploadStatus Field Functions 
    bool hasUploadStatus() const { return this->uploadStatus_ != nullptr;};
    void deleteUploadStatus() { this->uploadStatus_ = nullptr;};
    inline string uploadStatus() const { DARABONBA_PTR_GET_DEFAULT(uploadStatus_, "") };
    inline GetCrowdDatasetResponseBodyData& setUploadStatus(string uploadStatus) { DARABONBA_PTR_SET_VALUE(uploadStatus_, uploadStatus) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> crowdDatasetId_ = nullptr;
    std::shared_ptr<string> datasetIds_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> uploadStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif

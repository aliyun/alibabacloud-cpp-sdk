// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADRECOMMENDATIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADRECOMMENDATIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UploadRecommendationDataRequestContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UploadRecommendationDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadRecommendationDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
    };
    friend void from_json(const Darabonba::Json& j, UploadRecommendationDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
    };
    UploadRecommendationDataRequest() = default ;
    UploadRecommendationDataRequest(const UploadRecommendationDataRequest &) = default ;
    UploadRecommendationDataRequest(UploadRecommendationDataRequest &&) = default ;
    UploadRecommendationDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadRecommendationDataRequest() = default ;
    UploadRecommendationDataRequest& operator=(const UploadRecommendationDataRequest &) = default ;
    UploadRecommendationDataRequest& operator=(UploadRecommendationDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->content_ != nullptr && this->dataType_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UploadRecommendationDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<UploadRecommendationDataRequestContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<UploadRecommendationDataRequestContent>) };
    inline vector<UploadRecommendationDataRequestContent> content() { DARABONBA_PTR_GET(content_, vector<UploadRecommendationDataRequestContent>) };
    inline UploadRecommendationDataRequest& setContent(const vector<UploadRecommendationDataRequestContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline UploadRecommendationDataRequest& setContent(vector<UploadRecommendationDataRequestContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline UploadRecommendationDataRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<UploadRecommendationDataRequestContent>> content_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif

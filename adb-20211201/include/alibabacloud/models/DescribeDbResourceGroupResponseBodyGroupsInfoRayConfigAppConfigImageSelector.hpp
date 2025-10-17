// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFORAYCONFIGAPPCONFIGIMAGESELECTOR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBRESOURCEGROUPRESPONSEBODYGROUPSINFORAYCONFIGAPPCONFIGIMAGESELECTOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_TO_JSON(LlmModel, llmModel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_FROM_JSON(LlmModel, llmModel_);
    };
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector(const DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector(DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector &&) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector() = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector& operator=(const DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector &) = default ;
    DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector& operator=(DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr
        && return this->inferenceEngine_ == nullptr && return this->llmModel_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // inferenceEngine Field Functions 
    bool hasInferenceEngine() const { return this->inferenceEngine_ != nullptr;};
    void deleteInferenceEngine() { this->inferenceEngine_ = nullptr;};
    inline string inferenceEngine() const { DARABONBA_PTR_GET_DEFAULT(inferenceEngine_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector& setInferenceEngine(string inferenceEngine) { DARABONBA_PTR_SET_VALUE(inferenceEngine_, inferenceEngine) };


    // llmModel Field Functions 
    bool hasLlmModel() const { return this->llmModel_ != nullptr;};
    void deleteLlmModel() { this->llmModel_ = nullptr;};
    inline string llmModel() const { DARABONBA_PTR_GET_DEFAULT(llmModel_, "") };
    inline DescribeDBResourceGroupResponseBodyGroupsInfoRayConfigAppConfigImageSelector& setLlmModel(string llmModel) { DARABONBA_PTR_SET_VALUE(llmModel_, llmModel) };


  protected:
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<string> inferenceEngine_ = nullptr;
    std::shared_ptr<string> llmModel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif

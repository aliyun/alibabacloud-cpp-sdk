// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMARTSTATISTICSPAGELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMARTSTATISTICSPAGELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeSmartStatisticsPageListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmartStatisticsPageListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(PassRate, passRate_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmartStatisticsPageListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(PassRate, passRate_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSmartStatisticsPageListResponseBodyItems() = default ;
    DescribeSmartStatisticsPageListResponseBodyItems(const DescribeSmartStatisticsPageListResponseBodyItems &) = default ;
    DescribeSmartStatisticsPageListResponseBodyItems(DescribeSmartStatisticsPageListResponseBodyItems &&) = default ;
    DescribeSmartStatisticsPageListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmartStatisticsPageListResponseBodyItems() = default ;
    DescribeSmartStatisticsPageListResponseBodyItems& operator=(const DescribeSmartStatisticsPageListResponseBodyItems &) = default ;
    DescribeSmartStatisticsPageListResponseBodyItems& operator=(DescribeSmartStatisticsPageListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && return this->passRate_ == nullptr && return this->productCode_ == nullptr && return this->sceneId_ == nullptr && return this->sceneName_ == nullptr && return this->successCount_ == nullptr
        && return this->totalCount_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline DescribeSmartStatisticsPageListResponseBodyItems& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // passRate Field Functions 
    bool hasPassRate() const { return this->passRate_ != nullptr;};
    void deletePassRate() { this->passRate_ = nullptr;};
    inline string passRate() const { DARABONBA_PTR_GET_DEFAULT(passRate_, "") };
    inline DescribeSmartStatisticsPageListResponseBodyItems& setPassRate(string passRate) { DARABONBA_PTR_SET_VALUE(passRate_, passRate) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeSmartStatisticsPageListResponseBodyItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeSmartStatisticsPageListResponseBodyItems& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DescribeSmartStatisticsPageListResponseBodyItems& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeSmartStatisticsPageListResponseBodyItems& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSmartStatisticsPageListResponseBodyItems& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Date. Format: <i>month/day</i>
    std::shared_ptr<string> date_ = nullptr;
    // Pass rate.
    std::shared_ptr<string> passRate_ = nullptr;
    // Product solution Code, please refer to the Enhanced Real Person Help Documentation.
    std::shared_ptr<string> productCode_ = nullptr;
    // Scene ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    // Scene name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // Number of successful calls.
    std::shared_ptr<int32_t> successCount_ = nullptr;
    // Total count.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

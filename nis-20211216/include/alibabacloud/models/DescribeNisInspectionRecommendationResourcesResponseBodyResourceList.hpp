// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONRECOMMENDATIONRESOURCESRESPONSEBODYRESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONRECOMMENDATIONRESOURCESRESPONSEBODYRESOURCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionRecommendationResourcesResponseBodyResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionRecommendationResourcesResponseBodyResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisData, analysisData_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionRecommendationResourcesResponseBodyResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisData, analysisData_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
    };
    DescribeNisInspectionRecommendationResourcesResponseBodyResourceList() = default ;
    DescribeNisInspectionRecommendationResourcesResponseBodyResourceList(const DescribeNisInspectionRecommendationResourcesResponseBodyResourceList &) = default ;
    DescribeNisInspectionRecommendationResourcesResponseBodyResourceList(DescribeNisInspectionRecommendationResourcesResponseBodyResourceList &&) = default ;
    DescribeNisInspectionRecommendationResourcesResponseBodyResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionRecommendationResourcesResponseBodyResourceList() = default ;
    DescribeNisInspectionRecommendationResourcesResponseBodyResourceList& operator=(const DescribeNisInspectionRecommendationResourcesResponseBodyResourceList &) = default ;
    DescribeNisInspectionRecommendationResourcesResponseBodyResourceList& operator=(DescribeNisInspectionRecommendationResourcesResponseBodyResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisData_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr; };
    // analysisData Field Functions 
    bool hasAnalysisData() const { return this->analysisData_ != nullptr;};
    void deleteAnalysisData() { this->analysisData_ = nullptr;};
    inline string analysisData() const { DARABONBA_PTR_GET_DEFAULT(analysisData_, "") };
    inline DescribeNisInspectionRecommendationResourcesResponseBodyResourceList& setAnalysisData(string analysisData) { DARABONBA_PTR_SET_VALUE(analysisData_, analysisData) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeNisInspectionRecommendationResourcesResponseBodyResourceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeNisInspectionRecommendationResourcesResponseBodyResourceList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


  protected:
    std::shared_ptr<string> analysisData_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif

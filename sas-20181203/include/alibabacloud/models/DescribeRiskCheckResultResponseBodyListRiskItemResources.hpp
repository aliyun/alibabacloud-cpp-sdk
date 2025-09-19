// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTRESPONSEBODYLISTRISKITEMRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKRESULTRESPONSEBODYLISTRISKITEMRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckResultResponseBodyListRiskItemResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckResultResponseBodyListRiskItemResources& obj) { 
      DARABONBA_ANY_TO_JSON(ContentResource, contentResource_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckResultResponseBodyListRiskItemResources& obj) { 
      DARABONBA_ANY_FROM_JSON(ContentResource, contentResource_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
    };
    DescribeRiskCheckResultResponseBodyListRiskItemResources() = default ;
    DescribeRiskCheckResultResponseBodyListRiskItemResources(const DescribeRiskCheckResultResponseBodyListRiskItemResources &) = default ;
    DescribeRiskCheckResultResponseBodyListRiskItemResources(DescribeRiskCheckResultResponseBodyListRiskItemResources &&) = default ;
    DescribeRiskCheckResultResponseBodyListRiskItemResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckResultResponseBodyListRiskItemResources() = default ;
    DescribeRiskCheckResultResponseBodyListRiskItemResources& operator=(const DescribeRiskCheckResultResponseBodyListRiskItemResources &) = default ;
    DescribeRiskCheckResultResponseBodyListRiskItemResources& operator=(DescribeRiskCheckResultResponseBodyListRiskItemResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentResource_ != nullptr
        && this->resourceName_ != nullptr; };
    // contentResource Field Functions 
    bool hasContentResource() const { return this->contentResource_ != nullptr;};
    void deleteContentResource() { this->contentResource_ = nullptr;};
    inline     const Darabonba::Json & contentResource() const { DARABONBA_GET(contentResource_) };
    Darabonba::Json & contentResource() { DARABONBA_GET(contentResource_) };
    inline DescribeRiskCheckResultResponseBodyListRiskItemResources& setContentResource(const Darabonba::Json & contentResource) { DARABONBA_SET_VALUE(contentResource_, contentResource) };
    inline DescribeRiskCheckResultResponseBodyListRiskItemResources& setContentResource(Darabonba::Json & contentResource) { DARABONBA_SET_RVALUE(contentResource_, contentResource) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeRiskCheckResultResponseBodyListRiskItemResources& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


  protected:
    // The details about the check results.
    Darabonba::Json contentResource_ = nullptr;
    // The title in the details. Valid values:
    // 
    // *   **bestPractice**: description
    // *   **influence**: risk
    // *   **suggestion**: solution
    // *   **helpResource**: reference
    std::shared_ptr<string> resourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

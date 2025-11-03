// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSTRANSFORMS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSTREAMINGSRESPONSEBODYDATAEVENTSTREAMINGSTRANSFORMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BaiLianAgentTransformParameters.hpp>
#include <alibabacloud/models/DashScopeTransformParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListEventStreamingsResponseBodyDataEventStreamingsTransforms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventStreamingsResponseBodyDataEventStreamingsTransforms& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(BaiLianAgentTransformParameters, baiLianAgentTransformParameters_);
      DARABONBA_PTR_TO_JSON(DashScopeTransformParameters, dashScopeTransformParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventStreamingsResponseBodyDataEventStreamingsTransforms& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(BaiLianAgentTransformParameters, baiLianAgentTransformParameters_);
      DARABONBA_PTR_FROM_JSON(DashScopeTransformParameters, dashScopeTransformParameters_);
    };
    ListEventStreamingsResponseBodyDataEventStreamingsTransforms() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsTransforms(const ListEventStreamingsResponseBodyDataEventStreamingsTransforms &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsTransforms(ListEventStreamingsResponseBodyDataEventStreamingsTransforms &&) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsTransforms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventStreamingsResponseBodyDataEventStreamingsTransforms() = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsTransforms& operator=(const ListEventStreamingsResponseBodyDataEventStreamingsTransforms &) = default ;
    ListEventStreamingsResponseBodyDataEventStreamingsTransforms& operator=(ListEventStreamingsResponseBodyDataEventStreamingsTransforms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->baiLianAgentTransformParameters_ == nullptr && return this->dashScopeTransformParameters_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ListEventStreamingsResponseBodyDataEventStreamingsTransforms& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // baiLianAgentTransformParameters Field Functions 
    bool hasBaiLianAgentTransformParameters() const { return this->baiLianAgentTransformParameters_ != nullptr;};
    void deleteBaiLianAgentTransformParameters() { this->baiLianAgentTransformParameters_ = nullptr;};
    inline const Models::BaiLianAgentTransformParameters & baiLianAgentTransformParameters() const { DARABONBA_PTR_GET_CONST(baiLianAgentTransformParameters_, Models::BaiLianAgentTransformParameters) };
    inline Models::BaiLianAgentTransformParameters baiLianAgentTransformParameters() { DARABONBA_PTR_GET(baiLianAgentTransformParameters_, Models::BaiLianAgentTransformParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsTransforms& setBaiLianAgentTransformParameters(const Models::BaiLianAgentTransformParameters & baiLianAgentTransformParameters) { DARABONBA_PTR_SET_VALUE(baiLianAgentTransformParameters_, baiLianAgentTransformParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsTransforms& setBaiLianAgentTransformParameters(Models::BaiLianAgentTransformParameters && baiLianAgentTransformParameters) { DARABONBA_PTR_SET_RVALUE(baiLianAgentTransformParameters_, baiLianAgentTransformParameters) };


    // dashScopeTransformParameters Field Functions 
    bool hasDashScopeTransformParameters() const { return this->dashScopeTransformParameters_ != nullptr;};
    void deleteDashScopeTransformParameters() { this->dashScopeTransformParameters_ = nullptr;};
    inline const Models::DashScopeTransformParameters & dashScopeTransformParameters() const { DARABONBA_PTR_GET_CONST(dashScopeTransformParameters_, Models::DashScopeTransformParameters) };
    inline Models::DashScopeTransformParameters dashScopeTransformParameters() { DARABONBA_PTR_GET(dashScopeTransformParameters_, Models::DashScopeTransformParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsTransforms& setDashScopeTransformParameters(const Models::DashScopeTransformParameters & dashScopeTransformParameters) { DARABONBA_PTR_SET_VALUE(dashScopeTransformParameters_, dashScopeTransformParameters) };
    inline ListEventStreamingsResponseBodyDataEventStreamingsTransforms& setDashScopeTransformParameters(Models::DashScopeTransformParameters && dashScopeTransformParameters) { DARABONBA_PTR_SET_RVALUE(dashScopeTransformParameters_, dashScopeTransformParameters) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the cloud service, such as the ARN of a Function Compute function.
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<Models::BaiLianAgentTransformParameters> baiLianAgentTransformParameters_ = nullptr;
    std::shared_ptr<Models::DashScopeTransformParameters> dashScopeTransformParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif

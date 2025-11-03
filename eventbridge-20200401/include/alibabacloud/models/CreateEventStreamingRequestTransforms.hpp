// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTTRANSFORMS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTTRANSFORMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BaiLianAgentTransformParameters.hpp>
#include <alibabacloud/models/DashScopeTransformParameters.hpp>
#include <alibabacloud/models/EmbeddingTransformParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestTransforms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestTransforms& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(BaiLianAgentTransformParameters, baiLianAgentTransformParameters_);
      DARABONBA_PTR_TO_JSON(DashScopeTransformParameters, dashScopeTransformParameters_);
      DARABONBA_PTR_TO_JSON(EmbeddingTransformParameters, embeddingTransformParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestTransforms& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(BaiLianAgentTransformParameters, baiLianAgentTransformParameters_);
      DARABONBA_PTR_FROM_JSON(DashScopeTransformParameters, dashScopeTransformParameters_);
      DARABONBA_PTR_FROM_JSON(EmbeddingTransformParameters, embeddingTransformParameters_);
    };
    CreateEventStreamingRequestTransforms() = default ;
    CreateEventStreamingRequestTransforms(const CreateEventStreamingRequestTransforms &) = default ;
    CreateEventStreamingRequestTransforms(CreateEventStreamingRequestTransforms &&) = default ;
    CreateEventStreamingRequestTransforms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestTransforms() = default ;
    CreateEventStreamingRequestTransforms& operator=(const CreateEventStreamingRequestTransforms &) = default ;
    CreateEventStreamingRequestTransforms& operator=(CreateEventStreamingRequestTransforms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->baiLianAgentTransformParameters_ == nullptr && return this->dashScopeTransformParameters_ == nullptr && return this->embeddingTransformParameters_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreateEventStreamingRequestTransforms& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // baiLianAgentTransformParameters Field Functions 
    bool hasBaiLianAgentTransformParameters() const { return this->baiLianAgentTransformParameters_ != nullptr;};
    void deleteBaiLianAgentTransformParameters() { this->baiLianAgentTransformParameters_ = nullptr;};
    inline const Models::BaiLianAgentTransformParameters & baiLianAgentTransformParameters() const { DARABONBA_PTR_GET_CONST(baiLianAgentTransformParameters_, Models::BaiLianAgentTransformParameters) };
    inline Models::BaiLianAgentTransformParameters baiLianAgentTransformParameters() { DARABONBA_PTR_GET(baiLianAgentTransformParameters_, Models::BaiLianAgentTransformParameters) };
    inline CreateEventStreamingRequestTransforms& setBaiLianAgentTransformParameters(const Models::BaiLianAgentTransformParameters & baiLianAgentTransformParameters) { DARABONBA_PTR_SET_VALUE(baiLianAgentTransformParameters_, baiLianAgentTransformParameters) };
    inline CreateEventStreamingRequestTransforms& setBaiLianAgentTransformParameters(Models::BaiLianAgentTransformParameters && baiLianAgentTransformParameters) { DARABONBA_PTR_SET_RVALUE(baiLianAgentTransformParameters_, baiLianAgentTransformParameters) };


    // dashScopeTransformParameters Field Functions 
    bool hasDashScopeTransformParameters() const { return this->dashScopeTransformParameters_ != nullptr;};
    void deleteDashScopeTransformParameters() { this->dashScopeTransformParameters_ = nullptr;};
    inline const Models::DashScopeTransformParameters & dashScopeTransformParameters() const { DARABONBA_PTR_GET_CONST(dashScopeTransformParameters_, Models::DashScopeTransformParameters) };
    inline Models::DashScopeTransformParameters dashScopeTransformParameters() { DARABONBA_PTR_GET(dashScopeTransformParameters_, Models::DashScopeTransformParameters) };
    inline CreateEventStreamingRequestTransforms& setDashScopeTransformParameters(const Models::DashScopeTransformParameters & dashScopeTransformParameters) { DARABONBA_PTR_SET_VALUE(dashScopeTransformParameters_, dashScopeTransformParameters) };
    inline CreateEventStreamingRequestTransforms& setDashScopeTransformParameters(Models::DashScopeTransformParameters && dashScopeTransformParameters) { DARABONBA_PTR_SET_RVALUE(dashScopeTransformParameters_, dashScopeTransformParameters) };


    // embeddingTransformParameters Field Functions 
    bool hasEmbeddingTransformParameters() const { return this->embeddingTransformParameters_ != nullptr;};
    void deleteEmbeddingTransformParameters() { this->embeddingTransformParameters_ = nullptr;};
    inline const Models::EmbeddingTransformParameters & embeddingTransformParameters() const { DARABONBA_PTR_GET_CONST(embeddingTransformParameters_, Models::EmbeddingTransformParameters) };
    inline Models::EmbeddingTransformParameters embeddingTransformParameters() { DARABONBA_PTR_GET(embeddingTransformParameters_, Models::EmbeddingTransformParameters) };
    inline CreateEventStreamingRequestTransforms& setEmbeddingTransformParameters(const Models::EmbeddingTransformParameters & embeddingTransformParameters) { DARABONBA_PTR_SET_VALUE(embeddingTransformParameters_, embeddingTransformParameters) };
    inline CreateEventStreamingRequestTransforms& setEmbeddingTransformParameters(Models::EmbeddingTransformParameters && embeddingTransformParameters) { DARABONBA_PTR_SET_RVALUE(embeddingTransformParameters_, embeddingTransformParameters) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<Models::BaiLianAgentTransformParameters> baiLianAgentTransformParameters_ = nullptr;
    std::shared_ptr<Models::DashScopeTransformParameters> dashScopeTransformParameters_ = nullptr;
    std::shared_ptr<Models::EmbeddingTransformParameters> embeddingTransformParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEEMASARTIFACTURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEEMASARTIFACTURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineEmasArtifactUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineEmasArtifactUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(serviceConnectionId, serviceConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineEmasArtifactUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceConnectionId, serviceConnectionId_);
    };
    GetPipelineEmasArtifactUrlRequest() = default ;
    GetPipelineEmasArtifactUrlRequest(const GetPipelineEmasArtifactUrlRequest &) = default ;
    GetPipelineEmasArtifactUrlRequest(GetPipelineEmasArtifactUrlRequest &&) = default ;
    GetPipelineEmasArtifactUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineEmasArtifactUrlRequest() = default ;
    GetPipelineEmasArtifactUrlRequest& operator=(const GetPipelineEmasArtifactUrlRequest &) = default ;
    GetPipelineEmasArtifactUrlRequest& operator=(GetPipelineEmasArtifactUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceConnectionId_ == nullptr; };
    // serviceConnectionId Field Functions 
    bool hasServiceConnectionId() const { return this->serviceConnectionId_ != nullptr;};
    void deleteServiceConnectionId() { this->serviceConnectionId_ = nullptr;};
    inline int64_t serviceConnectionId() const { DARABONBA_PTR_GET_DEFAULT(serviceConnectionId_, 0L) };
    inline GetPipelineEmasArtifactUrlRequest& setServiceConnectionId(int64_t serviceConnectionId) { DARABONBA_PTR_SET_VALUE(serviceConnectionId_, serviceConnectionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> serviceConnectionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

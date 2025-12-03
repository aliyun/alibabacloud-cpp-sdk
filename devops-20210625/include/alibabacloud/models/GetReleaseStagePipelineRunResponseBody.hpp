// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRELEASESTAGEPIPELINERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetReleaseStagePipelineRunResponseBodyPipelineRun.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetReleaseStagePipelineRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReleaseStagePipelineRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(pipelineRun, pipelineRun_);
    };
    friend void from_json(const Darabonba::Json& j, GetReleaseStagePipelineRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(pipelineRun, pipelineRun_);
    };
    GetReleaseStagePipelineRunResponseBody() = default ;
    GetReleaseStagePipelineRunResponseBody(const GetReleaseStagePipelineRunResponseBody &) = default ;
    GetReleaseStagePipelineRunResponseBody(GetReleaseStagePipelineRunResponseBody &&) = default ;
    GetReleaseStagePipelineRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReleaseStagePipelineRunResponseBody() = default ;
    GetReleaseStagePipelineRunResponseBody& operator=(const GetReleaseStagePipelineRunResponseBody &) = default ;
    GetReleaseStagePipelineRunResponseBody& operator=(GetReleaseStagePipelineRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineRun_ == nullptr; };
    // pipelineRun Field Functions 
    bool hasPipelineRun() const { return this->pipelineRun_ != nullptr;};
    void deletePipelineRun() { this->pipelineRun_ = nullptr;};
    inline const GetReleaseStagePipelineRunResponseBodyPipelineRun & pipelineRun() const { DARABONBA_PTR_GET_CONST(pipelineRun_, GetReleaseStagePipelineRunResponseBodyPipelineRun) };
    inline GetReleaseStagePipelineRunResponseBodyPipelineRun pipelineRun() { DARABONBA_PTR_GET(pipelineRun_, GetReleaseStagePipelineRunResponseBodyPipelineRun) };
    inline GetReleaseStagePipelineRunResponseBody& setPipelineRun(const GetReleaseStagePipelineRunResponseBodyPipelineRun & pipelineRun) { DARABONBA_PTR_SET_VALUE(pipelineRun_, pipelineRun) };
    inline GetReleaseStagePipelineRunResponseBody& setPipelineRun(GetReleaseStagePipelineRunResponseBodyPipelineRun && pipelineRun) { DARABONBA_PTR_SET_RVALUE(pipelineRun_, pipelineRun) };


  protected:
    std::shared_ptr<GetReleaseStagePipelineRunResponseBodyPipelineRun> pipelineRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

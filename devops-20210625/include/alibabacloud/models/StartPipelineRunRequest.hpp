// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPIPELINERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPIPELINERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class StartPipelineRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPipelineRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(params, params_);
    };
    friend void from_json(const Darabonba::Json& j, StartPipelineRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(params, params_);
    };
    StartPipelineRunRequest() = default ;
    StartPipelineRunRequest(const StartPipelineRunRequest &) = default ;
    StartPipelineRunRequest(StartPipelineRunRequest &&) = default ;
    StartPipelineRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPipelineRunRequest() = default ;
    StartPipelineRunRequest& operator=(const StartPipelineRunRequest &) = default ;
    StartPipelineRunRequest& operator=(StartPipelineRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->params_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline StartPipelineRunRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


  protected:
    std::shared_ptr<string> params_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif

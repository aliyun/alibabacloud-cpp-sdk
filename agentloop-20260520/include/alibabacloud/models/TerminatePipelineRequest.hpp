// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMINATEPIPELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TERMINATEPIPELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class TerminatePipelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TerminatePipelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, TerminatePipelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    TerminatePipelineRequest() = default ;
    TerminatePipelineRequest(const TerminatePipelineRequest &) = default ;
    TerminatePipelineRequest(TerminatePipelineRequest &&) = default ;
    TerminatePipelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TerminatePipelineRequest() = default ;
    TerminatePipelineRequest& operator=(const TerminatePipelineRequest &) = default ;
    TerminatePipelineRequest& operator=(TerminatePipelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reason_ == nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline TerminatePipelineRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif

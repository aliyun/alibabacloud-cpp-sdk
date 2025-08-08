// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTPIPELINESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTPIPELINESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class PutPipelineStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutPipelineStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, PutPipelineStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    PutPipelineStatusRequest() = default ;
    PutPipelineStatusRequest(const PutPipelineStatusRequest &) = default ;
    PutPipelineStatusRequest(PutPipelineStatusRequest &&) = default ;
    PutPipelineStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutPipelineStatusRequest() = default ;
    PutPipelineStatusRequest& operator=(const PutPipelineStatusRequest &) = default ;
    PutPipelineStatusRequest& operator=(PutPipelineStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->force_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Pipeline & body() const { DARABONBA_PTR_GET_CONST(body_, Pipeline) };
    inline Pipeline body() { DARABONBA_PTR_GET(body_, Pipeline) };
    inline PutPipelineStatusRequest& setBody(const Pipeline & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PutPipelineStatusRequest& setBody(Pipeline && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline PutPipelineStatusRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    std::shared_ptr<Pipeline> body_ = nullptr;
    std::shared_ptr<bool> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif

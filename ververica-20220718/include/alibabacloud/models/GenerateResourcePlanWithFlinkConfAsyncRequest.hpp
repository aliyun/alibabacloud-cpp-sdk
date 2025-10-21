// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATERESOURCEPLANWITHFLINKCONFASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATERESOURCEPLANWITHFLINKCONFASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GenerateResourcePlanWithFlinkConfAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateResourcePlanWithFlinkConfAsyncRequest& obj) { 
      DARABONBA_ANY_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateResourcePlanWithFlinkConfAsyncRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(body, body_);
    };
    GenerateResourcePlanWithFlinkConfAsyncRequest() = default ;
    GenerateResourcePlanWithFlinkConfAsyncRequest(const GenerateResourcePlanWithFlinkConfAsyncRequest &) = default ;
    GenerateResourcePlanWithFlinkConfAsyncRequest(GenerateResourcePlanWithFlinkConfAsyncRequest &&) = default ;
    GenerateResourcePlanWithFlinkConfAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateResourcePlanWithFlinkConfAsyncRequest() = default ;
    GenerateResourcePlanWithFlinkConfAsyncRequest& operator=(const GenerateResourcePlanWithFlinkConfAsyncRequest &) = default ;
    GenerateResourcePlanWithFlinkConfAsyncRequest& operator=(GenerateResourcePlanWithFlinkConfAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline     const Darabonba::Json & body() const { DARABONBA_GET(body_) };
    Darabonba::Json & body() { DARABONBA_GET(body_) };
    inline GenerateResourcePlanWithFlinkConfAsyncRequest& setBody(const Darabonba::Json & body) { DARABONBA_SET_VALUE(body_, body) };
    inline GenerateResourcePlanWithFlinkConfAsyncRequest& setBody(Darabonba::Json & body) { DARABONBA_SET_RVALUE(body_, body) };


  protected:
    // The Flink configuration that is used to generate a resource plan.
    Darabonba::Json body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif

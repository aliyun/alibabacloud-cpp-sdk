// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROBEMCPORIGINSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROBEMCPORIGINSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ProbeMcpOriginShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProbeMcpOriginShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ProbeMcpOriginShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    ProbeMcpOriginShrinkRequest() = default ;
    ProbeMcpOriginShrinkRequest(const ProbeMcpOriginShrinkRequest &) = default ;
    ProbeMcpOriginShrinkRequest(ProbeMcpOriginShrinkRequest &&) = default ;
    ProbeMcpOriginShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProbeMcpOriginShrinkRequest() = default ;
    ProbeMcpOriginShrinkRequest& operator=(const ProbeMcpOriginShrinkRequest &) = default ;
    ProbeMcpOriginShrinkRequest& operator=(ProbeMcpOriginShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline ProbeMcpOriginShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    // The scope of the origin server configuration must not exceed that of the creation interface. The control fields for this validation only restrict the validation scope and do not extend the origin server access configuration.
    // 
    // This parameter is required.
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

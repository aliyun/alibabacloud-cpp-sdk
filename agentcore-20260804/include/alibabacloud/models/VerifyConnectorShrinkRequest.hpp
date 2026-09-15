// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCONNECTORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCONNECTORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class VerifyConnectorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyConnectorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyConnectorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    VerifyConnectorShrinkRequest() = default ;
    VerifyConnectorShrinkRequest(const VerifyConnectorShrinkRequest &) = default ;
    VerifyConnectorShrinkRequest(VerifyConnectorShrinkRequest &&) = default ;
    VerifyConnectorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyConnectorShrinkRequest() = default ;
    VerifyConnectorShrinkRequest& operator=(const VerifyConnectorShrinkRequest &) = default ;
    VerifyConnectorShrinkRequest& operator=(VerifyConnectorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline VerifyConnectorShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    // The validation request body.
    // 
    // This parameter is required.
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

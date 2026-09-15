// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECONNECTORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECONNECTORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class EnableConnectorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableConnectorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, EnableConnectorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    EnableConnectorShrinkRequest() = default ;
    EnableConnectorShrinkRequest(const EnableConnectorShrinkRequest &) = default ;
    EnableConnectorShrinkRequest(EnableConnectorShrinkRequest &&) = default ;
    EnableConnectorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableConnectorShrinkRequest() = default ;
    EnableConnectorShrinkRequest& operator=(const EnableConnectorShrinkRequest &) = default ;
    EnableConnectorShrinkRequest& operator=(EnableConnectorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline EnableConnectorShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    // The enable request body.
    // 
    // This parameter is required.
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

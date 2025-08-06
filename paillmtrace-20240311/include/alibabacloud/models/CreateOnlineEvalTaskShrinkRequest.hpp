// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEONLINEEVALTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEONLINEEVALTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class CreateOnlineEvalTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOnlineEvalTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOnlineEvalTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    CreateOnlineEvalTaskShrinkRequest() = default ;
    CreateOnlineEvalTaskShrinkRequest(const CreateOnlineEvalTaskShrinkRequest &) = default ;
    CreateOnlineEvalTaskShrinkRequest(CreateOnlineEvalTaskShrinkRequest &&) = default ;
    CreateOnlineEvalTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOnlineEvalTaskShrinkRequest() = default ;
    CreateOnlineEvalTaskShrinkRequest& operator=(const CreateOnlineEvalTaskShrinkRequest &) = default ;
    CreateOnlineEvalTaskShrinkRequest& operator=(CreateOnlineEvalTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodyShrink_ != nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string bodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline CreateOnlineEvalTaskShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    // The request data.
    std::shared_ptr<string> bodyShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif

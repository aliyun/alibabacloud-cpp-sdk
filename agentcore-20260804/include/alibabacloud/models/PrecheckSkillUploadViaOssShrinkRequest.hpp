// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKSKILLUPLOADVIAOSSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKSKILLUPLOADVIAOSSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class PrecheckSkillUploadViaOssShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckSkillUploadViaOssShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckSkillUploadViaOssShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
    };
    PrecheckSkillUploadViaOssShrinkRequest() = default ;
    PrecheckSkillUploadViaOssShrinkRequest(const PrecheckSkillUploadViaOssShrinkRequest &) = default ;
    PrecheckSkillUploadViaOssShrinkRequest(PrecheckSkillUploadViaOssShrinkRequest &&) = default ;
    PrecheckSkillUploadViaOssShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckSkillUploadViaOssShrinkRequest() = default ;
    PrecheckSkillUploadViaOssShrinkRequest& operator=(const PrecheckSkillUploadViaOssShrinkRequest &) = default ;
    PrecheckSkillUploadViaOssShrinkRequest& operator=(PrecheckSkillUploadViaOssShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline PrecheckSkillUploadViaOssShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


  protected:
    // The request body.
    shared_ptr<string> bodyShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif

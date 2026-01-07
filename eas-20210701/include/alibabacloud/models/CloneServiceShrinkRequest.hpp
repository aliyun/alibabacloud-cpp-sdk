// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONESERVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONESERVICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CloneServiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneServiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CloneServiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labelsShrink_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CloneServiceShrinkRequest() = default ;
    CloneServiceShrinkRequest(const CloneServiceShrinkRequest &) = default ;
    CloneServiceShrinkRequest(CloneServiceShrinkRequest &&) = default ;
    CloneServiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneServiceShrinkRequest() = default ;
    CloneServiceShrinkRequest& operator=(const CloneServiceShrinkRequest &) = default ;
    CloneServiceShrinkRequest& operator=(CloneServiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelsShrink_ == nullptr
        && this->body_ == nullptr; };
    // labelsShrink Field Functions 
    bool hasLabelsShrink() const { return this->labelsShrink_ != nullptr;};
    void deleteLabelsShrink() { this->labelsShrink_ = nullptr;};
    inline string getLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(labelsShrink_, "") };
    inline CloneServiceShrinkRequest& setLabelsShrink(string labelsShrink) { DARABONBA_PTR_SET_VALUE(labelsShrink_, labelsShrink) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CloneServiceShrinkRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The label of the service to be cloned.
    shared_ptr<string> labelsShrink_ {};
    // The request body. For more information, see [CreateService](https://help.aliyun.com/document_detail/412086.html).
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateNamespaceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    CreateNamespaceShrinkRequest() = default ;
    CreateNamespaceShrinkRequest(const CreateNamespaceShrinkRequest &) = default ;
    CreateNamespaceShrinkRequest(CreateNamespaceShrinkRequest &&) = default ;
    CreateNamespaceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNamespaceShrinkRequest() = default ;
    CreateNamespaceShrinkRequest& operator=(const CreateNamespaceShrinkRequest &) = default ;
    CreateNamespaceShrinkRequest& operator=(CreateNamespaceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->describe_ == nullptr && return this->name_ == nullptr && return this->tagShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateNamespaceShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline CreateNamespaceShrinkRequest& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateNamespaceShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateNamespaceShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> describe_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> tagShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif

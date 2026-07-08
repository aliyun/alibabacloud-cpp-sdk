// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPTEMPLATELIKEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPTEMPLATELIKEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class OperateAppTemplateLikeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAppTemplateLikeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Liked, liked_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAppTemplateLikeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Liked, liked_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    OperateAppTemplateLikeRequest() = default ;
    OperateAppTemplateLikeRequest(const OperateAppTemplateLikeRequest &) = default ;
    OperateAppTemplateLikeRequest(OperateAppTemplateLikeRequest &&) = default ;
    OperateAppTemplateLikeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAppTemplateLikeRequest() = default ;
    OperateAppTemplateLikeRequest& operator=(const OperateAppTemplateLikeRequest &) = default ;
    OperateAppTemplateLikeRequest& operator=(OperateAppTemplateLikeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liked_ == nullptr
        && this->templateId_ == nullptr; };
    // liked Field Functions 
    bool hasLiked() const { return this->liked_ != nullptr;};
    void deleteLiked() { this->liked_ = nullptr;};
    inline bool getLiked() const { DARABONBA_PTR_GET_DEFAULT(liked_, false) };
    inline OperateAppTemplateLikeRequest& setLiked(bool liked) { DARABONBA_PTR_SET_VALUE(liked_, liked) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline OperateAppTemplateLikeRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Specifies whether the template is favorited.
    shared_ptr<bool> liked_ {};
    // The template ID.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif

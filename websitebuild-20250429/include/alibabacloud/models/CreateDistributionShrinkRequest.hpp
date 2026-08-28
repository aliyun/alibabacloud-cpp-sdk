// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISTRIBUTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISTRIBUTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateDistributionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDistributionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArticleId, articleId_);
      DARABONBA_PTR_TO_JSON(Channels, channelsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDistributionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArticleId, articleId_);
      DARABONBA_PTR_FROM_JSON(Channels, channelsShrink_);
    };
    CreateDistributionShrinkRequest() = default ;
    CreateDistributionShrinkRequest(const CreateDistributionShrinkRequest &) = default ;
    CreateDistributionShrinkRequest(CreateDistributionShrinkRequest &&) = default ;
    CreateDistributionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDistributionShrinkRequest() = default ;
    CreateDistributionShrinkRequest& operator=(const CreateDistributionShrinkRequest &) = default ;
    CreateDistributionShrinkRequest& operator=(CreateDistributionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articleId_ == nullptr
        && this->channelsShrink_ == nullptr; };
    // articleId Field Functions 
    bool hasArticleId() const { return this->articleId_ != nullptr;};
    void deleteArticleId() { this->articleId_ = nullptr;};
    inline string getArticleId() const { DARABONBA_PTR_GET_DEFAULT(articleId_, "") };
    inline CreateDistributionShrinkRequest& setArticleId(string articleId) { DARABONBA_PTR_SET_VALUE(articleId_, articleId) };


    // channelsShrink Field Functions 
    bool hasChannelsShrink() const { return this->channelsShrink_ != nullptr;};
    void deleteChannelsShrink() { this->channelsShrink_ = nullptr;};
    inline string getChannelsShrink() const { DARABONBA_PTR_GET_DEFAULT(channelsShrink_, "") };
    inline CreateDistributionShrinkRequest& setChannelsShrink(string channelsShrink) { DARABONBA_PTR_SET_VALUE(channelsShrink_, channelsShrink) };


  protected:
    // The article ID.
    // 
    // This parameter is required.
    shared_ptr<string> articleId_ {};
    // The list of selected channels.
    // 
    // This parameter is required.
    shared_ptr<string> channelsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif

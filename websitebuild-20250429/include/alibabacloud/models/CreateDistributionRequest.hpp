// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISTRIBUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISTRIBUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateDistributionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDistributionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArticleId, articleId_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDistributionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArticleId, articleId_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
    };
    CreateDistributionRequest() = default ;
    CreateDistributionRequest(const CreateDistributionRequest &) = default ;
    CreateDistributionRequest(CreateDistributionRequest &&) = default ;
    CreateDistributionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDistributionRequest() = default ;
    CreateDistributionRequest& operator=(const CreateDistributionRequest &) = default ;
    CreateDistributionRequest& operator=(CreateDistributionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articleId_ == nullptr
        && this->channels_ == nullptr; };
    // articleId Field Functions 
    bool hasArticleId() const { return this->articleId_ != nullptr;};
    void deleteArticleId() { this->articleId_ = nullptr;};
    inline string getArticleId() const { DARABONBA_PTR_GET_DEFAULT(articleId_, "") };
    inline CreateDistributionRequest& setArticleId(string articleId) { DARABONBA_PTR_SET_VALUE(articleId_, articleId) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<string> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
    inline vector<string> getChannels() { DARABONBA_PTR_GET(channels_, vector<string>) };
    inline CreateDistributionRequest& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline CreateDistributionRequest& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


  protected:
    // The article ID.
    // 
    // This parameter is required.
    shared_ptr<string> articleId_ {};
    // The list of selected channels.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> channels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif

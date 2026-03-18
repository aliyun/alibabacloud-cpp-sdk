// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTARTICLEDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTARTICLEDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ListTextbookAssistantArticleDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantArticleDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(articleIdList, articleIdList_);
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantArticleDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(articleIdList, articleIdList_);
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
    };
    ListTextbookAssistantArticleDetailsRequest() = default ;
    ListTextbookAssistantArticleDetailsRequest(const ListTextbookAssistantArticleDetailsRequest &) = default ;
    ListTextbookAssistantArticleDetailsRequest(ListTextbookAssistantArticleDetailsRequest &&) = default ;
    ListTextbookAssistantArticleDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantArticleDetailsRequest() = default ;
    ListTextbookAssistantArticleDetailsRequest& operator=(const ListTextbookAssistantArticleDetailsRequest &) = default ;
    ListTextbookAssistantArticleDetailsRequest& operator=(ListTextbookAssistantArticleDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articleIdList_ == nullptr
        && this->authToken_ == nullptr; };
    // articleIdList Field Functions 
    bool hasArticleIdList() const { return this->articleIdList_ != nullptr;};
    void deleteArticleIdList() { this->articleIdList_ = nullptr;};
    inline const vector<string> & getArticleIdList() const { DARABONBA_PTR_GET_CONST(articleIdList_, vector<string>) };
    inline vector<string> getArticleIdList() { DARABONBA_PTR_GET(articleIdList_, vector<string>) };
    inline ListTextbookAssistantArticleDetailsRequest& setArticleIdList(const vector<string> & articleIdList) { DARABONBA_PTR_SET_VALUE(articleIdList_, articleIdList) };
    inline ListTextbookAssistantArticleDetailsRequest& setArticleIdList(vector<string> && articleIdList) { DARABONBA_PTR_SET_RVALUE(articleIdList_, articleIdList) };


    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ListTextbookAssistantArticleDetailsRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


  protected:
    shared_ptr<vector<string>> articleIdList_ {};
    // This parameter is required.
    shared_ptr<string> authToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTARTICLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTARTICLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ListTextbookAssistantArticlesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantArticlesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantArticlesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
    };
    ListTextbookAssistantArticlesRequest() = default ;
    ListTextbookAssistantArticlesRequest(const ListTextbookAssistantArticlesRequest &) = default ;
    ListTextbookAssistantArticlesRequest(ListTextbookAssistantArticlesRequest &&) = default ;
    ListTextbookAssistantArticlesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantArticlesRequest() = default ;
    ListTextbookAssistantArticlesRequest& operator=(const ListTextbookAssistantArticlesRequest &) = default ;
    ListTextbookAssistantArticlesRequest& operator=(ListTextbookAssistantArticlesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authToken_ == nullptr
        && this->directoryId_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ListTextbookAssistantArticlesRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListTextbookAssistantArticlesRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


  protected:
    // This parameter is required.
    shared_ptr<string> authToken_ {};
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif

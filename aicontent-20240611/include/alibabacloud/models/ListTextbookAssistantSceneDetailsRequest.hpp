// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTSCENEDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTSCENEDETAILSREQUEST_HPP_
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
  class ListTextbookAssistantSceneDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantSceneDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(sceneIdList, sceneIdList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantSceneDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(sceneIdList, sceneIdList_);
    };
    ListTextbookAssistantSceneDetailsRequest() = default ;
    ListTextbookAssistantSceneDetailsRequest(const ListTextbookAssistantSceneDetailsRequest &) = default ;
    ListTextbookAssistantSceneDetailsRequest(ListTextbookAssistantSceneDetailsRequest &&) = default ;
    ListTextbookAssistantSceneDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantSceneDetailsRequest() = default ;
    ListTextbookAssistantSceneDetailsRequest& operator=(const ListTextbookAssistantSceneDetailsRequest &) = default ;
    ListTextbookAssistantSceneDetailsRequest& operator=(ListTextbookAssistantSceneDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authToken_ == nullptr
        && this->sceneIdList_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ListTextbookAssistantSceneDetailsRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // sceneIdList Field Functions 
    bool hasSceneIdList() const { return this->sceneIdList_ != nullptr;};
    void deleteSceneIdList() { this->sceneIdList_ = nullptr;};
    inline const vector<string> & getSceneIdList() const { DARABONBA_PTR_GET_CONST(sceneIdList_, vector<string>) };
    inline vector<string> getSceneIdList() { DARABONBA_PTR_GET(sceneIdList_, vector<string>) };
    inline ListTextbookAssistantSceneDetailsRequest& setSceneIdList(const vector<string> & sceneIdList) { DARABONBA_PTR_SET_VALUE(sceneIdList_, sceneIdList) };
    inline ListTextbookAssistantSceneDetailsRequest& setSceneIdList(vector<string> && sceneIdList) { DARABONBA_PTR_SET_RVALUE(sceneIdList_, sceneIdList) };


  protected:
    shared_ptr<string> authToken_ {};
    shared_ptr<vector<string>> sceneIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif

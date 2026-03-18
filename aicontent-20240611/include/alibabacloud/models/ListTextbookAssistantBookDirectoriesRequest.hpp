// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTBOOKDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTBOOKDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ListTextbookAssistantBookDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantBookDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(bookId, bookId_);
      DARABONBA_PTR_TO_JSON(scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantBookDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(bookId, bookId_);
      DARABONBA_PTR_FROM_JSON(scenario, scenario_);
    };
    ListTextbookAssistantBookDirectoriesRequest() = default ;
    ListTextbookAssistantBookDirectoriesRequest(const ListTextbookAssistantBookDirectoriesRequest &) = default ;
    ListTextbookAssistantBookDirectoriesRequest(ListTextbookAssistantBookDirectoriesRequest &&) = default ;
    ListTextbookAssistantBookDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantBookDirectoriesRequest() = default ;
    ListTextbookAssistantBookDirectoriesRequest& operator=(const ListTextbookAssistantBookDirectoriesRequest &) = default ;
    ListTextbookAssistantBookDirectoriesRequest& operator=(ListTextbookAssistantBookDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authToken_ == nullptr
        && this->bookId_ == nullptr && this->scenario_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ListTextbookAssistantBookDirectoriesRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // bookId Field Functions 
    bool hasBookId() const { return this->bookId_ != nullptr;};
    void deleteBookId() { this->bookId_ = nullptr;};
    inline string getBookId() const { DARABONBA_PTR_GET_DEFAULT(bookId_, "") };
    inline ListTextbookAssistantBookDirectoriesRequest& setBookId(string bookId) { DARABONBA_PTR_SET_VALUE(bookId_, bookId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline ListTextbookAssistantBookDirectoriesRequest& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    // This parameter is required.
    shared_ptr<string> authToken_ {};
    // This parameter is required.
    shared_ptr<string> bookId_ {};
    // This parameter is required.
    shared_ptr<string> scenario_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif

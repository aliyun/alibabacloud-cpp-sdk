// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTBOOKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTEXTBOOKASSISTANTBOOKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ListTextbookAssistantBooksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTextbookAssistantBooksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authToken, authToken_);
      DARABONBA_PTR_TO_JSON(bookId, bookId_);
      DARABONBA_PTR_TO_JSON(grade, grade_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, ListTextbookAssistantBooksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authToken, authToken_);
      DARABONBA_PTR_FROM_JSON(bookId, bookId_);
      DARABONBA_PTR_FROM_JSON(grade, grade_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(volume, volume_);
    };
    ListTextbookAssistantBooksRequest() = default ;
    ListTextbookAssistantBooksRequest(const ListTextbookAssistantBooksRequest &) = default ;
    ListTextbookAssistantBooksRequest(ListTextbookAssistantBooksRequest &&) = default ;
    ListTextbookAssistantBooksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTextbookAssistantBooksRequest() = default ;
    ListTextbookAssistantBooksRequest& operator=(const ListTextbookAssistantBooksRequest &) = default ;
    ListTextbookAssistantBooksRequest& operator=(ListTextbookAssistantBooksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authToken_ == nullptr
        && this->bookId_ == nullptr && this->grade_ == nullptr && this->maxResults_ == nullptr && this->page_ == nullptr && this->version_ == nullptr
        && this->volume_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline ListTextbookAssistantBooksRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // bookId Field Functions 
    bool hasBookId() const { return this->bookId_ != nullptr;};
    void deleteBookId() { this->bookId_ = nullptr;};
    inline string getBookId() const { DARABONBA_PTR_GET_DEFAULT(bookId_, "") };
    inline ListTextbookAssistantBooksRequest& setBookId(string bookId) { DARABONBA_PTR_SET_VALUE(bookId_, bookId) };


    // grade Field Functions 
    bool hasGrade() const { return this->grade_ != nullptr;};
    void deleteGrade() { this->grade_ = nullptr;};
    inline string getGrade() const { DARABONBA_PTR_GET_DEFAULT(grade_, "") };
    inline ListTextbookAssistantBooksRequest& setGrade(string grade) { DARABONBA_PTR_SET_VALUE(grade_, grade) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListTextbookAssistantBooksRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline ListTextbookAssistantBooksRequest& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListTextbookAssistantBooksRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline string getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
    inline ListTextbookAssistantBooksRequest& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // This parameter is required.
    shared_ptr<string> authToken_ {};
    shared_ptr<string> bookId_ {};
    shared_ptr<string> grade_ {};
    shared_ptr<string> maxResults_ {};
    shared_ptr<string> page_ {};
    shared_ptr<string> version_ {};
    shared_ptr<string> volume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif

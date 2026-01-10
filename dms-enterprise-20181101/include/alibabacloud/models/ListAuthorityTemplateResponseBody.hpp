// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORITYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORITYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorityTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorityTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityTemplateViewList, authorityTemplateViewList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorityTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityTemplateViewList, authorityTemplateViewList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorityTemplateResponseBody() = default ;
    ListAuthorityTemplateResponseBody(const ListAuthorityTemplateResponseBody &) = default ;
    ListAuthorityTemplateResponseBody(ListAuthorityTemplateResponseBody &&) = default ;
    ListAuthorityTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorityTemplateResponseBody() = default ;
    ListAuthorityTemplateResponseBody& operator=(const ListAuthorityTemplateResponseBody &) = default ;
    ListAuthorityTemplateResponseBody& operator=(ListAuthorityTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorityTemplateViewList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorityTemplateViewList& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorityTemplateView, authorityTemplateView_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorityTemplateViewList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorityTemplateView, authorityTemplateView_);
      };
      AuthorityTemplateViewList() = default ;
      AuthorityTemplateViewList(const AuthorityTemplateViewList &) = default ;
      AuthorityTemplateViewList(AuthorityTemplateViewList &&) = default ;
      AuthorityTemplateViewList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorityTemplateViewList() = default ;
      AuthorityTemplateViewList& operator=(const AuthorityTemplateViewList &) = default ;
      AuthorityTemplateViewList& operator=(AuthorityTemplateViewList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthorityTemplateView : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthorityTemplateView& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, AuthorityTemplateView& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        };
        AuthorityTemplateView() = default ;
        AuthorityTemplateView(const AuthorityTemplateView &) = default ;
        AuthorityTemplateView(AuthorityTemplateView &&) = default ;
        AuthorityTemplateView(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthorityTemplateView() = default ;
        AuthorityTemplateView& operator=(const AuthorityTemplateView &) = default ;
        AuthorityTemplateView& operator=(AuthorityTemplateView &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creatorId_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->templateId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AuthorityTemplateView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline int64_t getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
        inline AuthorityTemplateView& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AuthorityTemplateView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AuthorityTemplateView& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline AuthorityTemplateView& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      protected:
        // The time when the permission template was created. The time is in the yyyy-MM-DD HH:mm:ss format.
        shared_ptr<string> createTime_ {};
        // The ID of the user who created the permission template.
        shared_ptr<int64_t> creatorId_ {};
        // The description of the permission template.
        shared_ptr<string> description_ {};
        // The name of the permission template.
        shared_ptr<string> name_ {};
        // The ID of the permission template.
        shared_ptr<int64_t> templateId_ {};
      };

      virtual bool empty() const override { return this->authorityTemplateView_ == nullptr; };
      // authorityTemplateView Field Functions 
      bool hasAuthorityTemplateView() const { return this->authorityTemplateView_ != nullptr;};
      void deleteAuthorityTemplateView() { this->authorityTemplateView_ = nullptr;};
      inline const vector<AuthorityTemplateViewList::AuthorityTemplateView> & getAuthorityTemplateView() const { DARABONBA_PTR_GET_CONST(authorityTemplateView_, vector<AuthorityTemplateViewList::AuthorityTemplateView>) };
      inline vector<AuthorityTemplateViewList::AuthorityTemplateView> getAuthorityTemplateView() { DARABONBA_PTR_GET(authorityTemplateView_, vector<AuthorityTemplateViewList::AuthorityTemplateView>) };
      inline AuthorityTemplateViewList& setAuthorityTemplateView(const vector<AuthorityTemplateViewList::AuthorityTemplateView> & authorityTemplateView) { DARABONBA_PTR_SET_VALUE(authorityTemplateView_, authorityTemplateView) };
      inline AuthorityTemplateViewList& setAuthorityTemplateView(vector<AuthorityTemplateViewList::AuthorityTemplateView> && authorityTemplateView) { DARABONBA_PTR_SET_RVALUE(authorityTemplateView_, authorityTemplateView) };


    protected:
      shared_ptr<vector<AuthorityTemplateViewList::AuthorityTemplateView>> authorityTemplateView_ {};
    };

    virtual bool empty() const override { return this->authorityTemplateViewList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tid_ == nullptr
        && this->totalCount_ == nullptr; };
    // authorityTemplateViewList Field Functions 
    bool hasAuthorityTemplateViewList() const { return this->authorityTemplateViewList_ != nullptr;};
    void deleteAuthorityTemplateViewList() { this->authorityTemplateViewList_ = nullptr;};
    inline const ListAuthorityTemplateResponseBody::AuthorityTemplateViewList & getAuthorityTemplateViewList() const { DARABONBA_PTR_GET_CONST(authorityTemplateViewList_, ListAuthorityTemplateResponseBody::AuthorityTemplateViewList) };
    inline ListAuthorityTemplateResponseBody::AuthorityTemplateViewList getAuthorityTemplateViewList() { DARABONBA_PTR_GET(authorityTemplateViewList_, ListAuthorityTemplateResponseBody::AuthorityTemplateViewList) };
    inline ListAuthorityTemplateResponseBody& setAuthorityTemplateViewList(const ListAuthorityTemplateResponseBody::AuthorityTemplateViewList & authorityTemplateViewList) { DARABONBA_PTR_SET_VALUE(authorityTemplateViewList_, authorityTemplateViewList) };
    inline ListAuthorityTemplateResponseBody& setAuthorityTemplateViewList(ListAuthorityTemplateResponseBody::AuthorityTemplateViewList && authorityTemplateViewList) { DARABONBA_PTR_SET_RVALUE(authorityTemplateViewList_, authorityTemplateViewList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAuthorityTemplateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListAuthorityTemplateResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorityTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAuthorityTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListAuthorityTemplateResponseBody& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAuthorityTemplateResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The permission templates.
    shared_ptr<ListAuthorityTemplateResponseBody::AuthorityTemplateViewList> authorityTemplateViewList_ {};
    // The error code that is returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the request ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The ID of the tenant.
    shared_ptr<int64_t> tid_ {};
    // The total number of permission templates.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

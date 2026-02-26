// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVEDQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSAVEDQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetSavedQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavedQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SavedQuery, savedQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavedQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SavedQuery, savedQuery_);
    };
    GetSavedQueryResponseBody() = default ;
    GetSavedQueryResponseBody(const GetSavedQueryResponseBody &) = default ;
    GetSavedQueryResponseBody(GetSavedQueryResponseBody &&) = default ;
    GetSavedQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavedQueryResponseBody() = default ;
    GetSavedQueryResponseBody& operator=(const GetSavedQueryResponseBody &) = default ;
    GetSavedQueryResponseBody& operator=(GetSavedQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SavedQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SavedQuery& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(QueryId, queryId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, SavedQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      SavedQuery() = default ;
      SavedQuery(const SavedQuery &) = default ;
      SavedQuery(SavedQuery &&) = default ;
      SavedQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SavedQuery() = default ;
      SavedQuery& operator=(const SavedQuery &) = default ;
      SavedQuery& operator=(SavedQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->expression_ == nullptr && this->name_ == nullptr && this->queryId_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SavedQuery& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SavedQuery& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline SavedQuery& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SavedQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // queryId Field Functions 
      bool hasQueryId() const { return this->queryId_ != nullptr;};
      void deleteQueryId() { this->queryId_ = nullptr;};
      inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
      inline SavedQuery& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SavedQuery& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the template was created. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the template.
      shared_ptr<string> description_ {};
      // The expression of the template.
      shared_ptr<string> expression_ {};
      // The name of the template.
      shared_ptr<string> name_ {};
      // The ID of the template.
      shared_ptr<string> queryId_ {};
      // The time when the template was last updated. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->savedQuery_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSavedQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // savedQuery Field Functions 
    bool hasSavedQuery() const { return this->savedQuery_ != nullptr;};
    void deleteSavedQuery() { this->savedQuery_ = nullptr;};
    inline const GetSavedQueryResponseBody::SavedQuery & getSavedQuery() const { DARABONBA_PTR_GET_CONST(savedQuery_, GetSavedQueryResponseBody::SavedQuery) };
    inline GetSavedQueryResponseBody::SavedQuery getSavedQuery() { DARABONBA_PTR_GET(savedQuery_, GetSavedQueryResponseBody::SavedQuery) };
    inline GetSavedQueryResponseBody& setSavedQuery(const GetSavedQueryResponseBody::SavedQuery & savedQuery) { DARABONBA_PTR_SET_VALUE(savedQuery_, savedQuery) };
    inline GetSavedQueryResponseBody& setSavedQuery(GetSavedQueryResponseBody::SavedQuery && savedQuery) { DARABONBA_PTR_SET_RVALUE(savedQuery_, savedQuery) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the template.
    shared_ptr<GetSavedQueryResponseBody::SavedQuery> savedQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif

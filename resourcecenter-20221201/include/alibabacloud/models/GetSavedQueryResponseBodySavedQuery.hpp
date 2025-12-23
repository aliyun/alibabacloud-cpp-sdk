// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVEDQUERYRESPONSEBODYSAVEDQUERY_HPP_
#define ALIBABACLOUD_MODELS_GETSAVEDQUERYRESPONSEBODYSAVEDQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetSavedQueryResponseBodySavedQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavedQueryResponseBodySavedQuery& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavedQueryResponseBodySavedQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetSavedQueryResponseBodySavedQuery() = default ;
    GetSavedQueryResponseBodySavedQuery(const GetSavedQueryResponseBodySavedQuery &) = default ;
    GetSavedQueryResponseBodySavedQuery(GetSavedQueryResponseBodySavedQuery &&) = default ;
    GetSavedQueryResponseBodySavedQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavedQueryResponseBodySavedQuery() = default ;
    GetSavedQueryResponseBodySavedQuery& operator=(const GetSavedQueryResponseBodySavedQuery &) = default ;
    GetSavedQueryResponseBodySavedQuery& operator=(GetSavedQueryResponseBodySavedQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->expression_ == nullptr && return this->name_ == nullptr && return this->queryId_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSavedQueryResponseBodySavedQuery& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSavedQueryResponseBodySavedQuery& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline GetSavedQueryResponseBodySavedQuery& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSavedQueryResponseBodySavedQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline GetSavedQueryResponseBodySavedQuery& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetSavedQueryResponseBodySavedQuery& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the template was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The query statement in the template.
    std::shared_ptr<string> expression_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The template ID.
    std::shared_ptr<string> queryId_ = nullptr;
    // The time when the template was updated. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif

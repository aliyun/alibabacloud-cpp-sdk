// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXAMPLEQUERYRESPONSEBODYEXAMPLEQUERY_HPP_
#define ALIBABACLOUD_MODELS_GETEXAMPLEQUERYRESPONSEBODYEXAMPLEQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetExampleQueryResponseBodyExampleQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExampleQueryResponseBodyExampleQuery& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExampleQueryResponseBodyExampleQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
    };
    GetExampleQueryResponseBodyExampleQuery() = default ;
    GetExampleQueryResponseBodyExampleQuery(const GetExampleQueryResponseBodyExampleQuery &) = default ;
    GetExampleQueryResponseBodyExampleQuery(GetExampleQueryResponseBodyExampleQuery &&) = default ;
    GetExampleQueryResponseBodyExampleQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExampleQueryResponseBodyExampleQuery() = default ;
    GetExampleQueryResponseBodyExampleQuery& operator=(const GetExampleQueryResponseBodyExampleQuery &) = default ;
    GetExampleQueryResponseBodyExampleQuery& operator=(GetExampleQueryResponseBodyExampleQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->expression_ == nullptr && return this->name_ == nullptr && return this->queryId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetExampleQueryResponseBodyExampleQuery& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline GetExampleQueryResponseBodyExampleQuery& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetExampleQueryResponseBodyExampleQuery& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline GetExampleQueryResponseBodyExampleQuery& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


  protected:
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The query statement in the template.
    std::shared_ptr<string> expression_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> queryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif

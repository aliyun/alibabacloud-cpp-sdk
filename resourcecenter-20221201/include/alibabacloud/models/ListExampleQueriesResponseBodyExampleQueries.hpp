// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXAMPLEQUERIESRESPONSEBODYEXAMPLEQUERIES_HPP_
#define ALIBABACLOUD_MODELS_LISTEXAMPLEQUERIESRESPONSEBODYEXAMPLEQUERIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListExampleQueriesResponseBodyExampleQueries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExampleQueriesResponseBodyExampleQueries& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExampleQueriesResponseBodyExampleQueries& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
    };
    ListExampleQueriesResponseBodyExampleQueries() = default ;
    ListExampleQueriesResponseBodyExampleQueries(const ListExampleQueriesResponseBodyExampleQueries &) = default ;
    ListExampleQueriesResponseBodyExampleQueries(ListExampleQueriesResponseBodyExampleQueries &&) = default ;
    ListExampleQueriesResponseBodyExampleQueries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExampleQueriesResponseBodyExampleQueries() = default ;
    ListExampleQueriesResponseBodyExampleQueries& operator=(const ListExampleQueriesResponseBodyExampleQueries &) = default ;
    ListExampleQueriesResponseBodyExampleQueries& operator=(ListExampleQueriesResponseBodyExampleQueries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->queryId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListExampleQueriesResponseBodyExampleQueries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListExampleQueriesResponseBodyExampleQueries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline ListExampleQueriesResponseBodyExampleQueries& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


  protected:
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> queryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif

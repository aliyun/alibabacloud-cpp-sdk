// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAVEDQUERIESRESPONSEBODYSAVEDQUERIES_HPP_
#define ALIBABACLOUD_MODELS_LISTSAVEDQUERIESRESPONSEBODYSAVEDQUERIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListSavedQueriesResponseBodySavedQueries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSavedQueriesResponseBodySavedQueries& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListSavedQueriesResponseBodySavedQueries& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListSavedQueriesResponseBodySavedQueries() = default ;
    ListSavedQueriesResponseBodySavedQueries(const ListSavedQueriesResponseBodySavedQueries &) = default ;
    ListSavedQueriesResponseBodySavedQueries(ListSavedQueriesResponseBodySavedQueries &&) = default ;
    ListSavedQueriesResponseBodySavedQueries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSavedQueriesResponseBodySavedQueries() = default ;
    ListSavedQueriesResponseBodySavedQueries& operator=(const ListSavedQueriesResponseBodySavedQueries &) = default ;
    ListSavedQueriesResponseBodySavedQueries& operator=(ListSavedQueriesResponseBodySavedQueries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->queryId_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSavedQueriesResponseBodySavedQueries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSavedQueriesResponseBodySavedQueries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSavedQueriesResponseBodySavedQueries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline ListSavedQueriesResponseBodySavedQueries& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListSavedQueriesResponseBodySavedQueries& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the template was created. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The template name.
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

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTABLEKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTABLEKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchTableKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTableKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTableKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    SearchTableKnowledgeRequest() = default ;
    SearchTableKnowledgeRequest(const SearchTableKnowledgeRequest &) = default ;
    SearchTableKnowledgeRequest(SearchTableKnowledgeRequest &&) = default ;
    SearchTableKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTableKnowledgeRequest() = default ;
    SearchTableKnowledgeRequest& operator=(const SearchTableKnowledgeRequest &) = default ;
    SearchTableKnowledgeRequest& operator=(SearchTableKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && this->model_ == nullptr && this->query_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline SearchTableKnowledgeRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline SearchTableKnowledgeRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchTableKnowledgeRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbId_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif

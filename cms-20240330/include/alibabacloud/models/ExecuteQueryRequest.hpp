// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ExecuteQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ExecuteQueryRequest() = default ;
    ExecuteQueryRequest(const ExecuteQueryRequest &) = default ;
    ExecuteQueryRequest(ExecuteQueryRequest &&) = default ;
    ExecuteQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteQueryRequest() = default ;
    ExecuteQueryRequest& operator=(const ExecuteQueryRequest &) = default ;
    ExecuteQueryRequest& operator=(ExecuteQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->query_ == nullptr
        && this->type_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ExecuteQueryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExecuteQueryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> query_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif

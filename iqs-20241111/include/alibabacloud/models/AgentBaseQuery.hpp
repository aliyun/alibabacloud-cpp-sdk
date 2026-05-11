// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTBASEQUERY_HPP_
#define ALIBABACLOUD_MODELS_AGENTBASEQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class AgentBaseQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentBaseQuery& obj) { 
      DARABONBA_PTR_TO_JSON(query, query_);
    };
    friend void from_json(const Darabonba::Json& j, AgentBaseQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(query, query_);
    };
    AgentBaseQuery() = default ;
    AgentBaseQuery(const AgentBaseQuery &) = default ;
    AgentBaseQuery(AgentBaseQuery &&) = default ;
    AgentBaseQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentBaseQuery() = default ;
    AgentBaseQuery& operator=(const AgentBaseQuery &) = default ;
    AgentBaseQuery& operator=(AgentBaseQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->query_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline AgentBaseQuery& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif

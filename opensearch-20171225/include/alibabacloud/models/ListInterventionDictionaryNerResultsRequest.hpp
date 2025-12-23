// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYNERRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTERVENTIONDICTIONARYNERRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListInterventionDictionaryNerResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInterventionDictionaryNerResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ListInterventionDictionaryNerResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(query, query_);
    };
    ListInterventionDictionaryNerResultsRequest() = default ;
    ListInterventionDictionaryNerResultsRequest(const ListInterventionDictionaryNerResultsRequest &) = default ;
    ListInterventionDictionaryNerResultsRequest(ListInterventionDictionaryNerResultsRequest &&) = default ;
    ListInterventionDictionaryNerResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInterventionDictionaryNerResultsRequest() = default ;
    ListInterventionDictionaryNerResultsRequest& operator=(const ListInterventionDictionaryNerResultsRequest &) = default ;
    ListInterventionDictionaryNerResultsRequest& operator=(ListInterventionDictionaryNerResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->query_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListInterventionDictionaryNerResultsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // Query keywords.
    // 
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif

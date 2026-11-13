// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RetrieveKnowledgePointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveKnowledgePointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FocusObjects, focusObjects_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseIds, knowledgeBaseIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveKnowledgePointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FocusObjects, focusObjects_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseIds, knowledgeBaseIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    RetrieveKnowledgePointsRequest() = default ;
    RetrieveKnowledgePointsRequest(const RetrieveKnowledgePointsRequest &) = default ;
    RetrieveKnowledgePointsRequest(RetrieveKnowledgePointsRequest &&) = default ;
    RetrieveKnowledgePointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveKnowledgePointsRequest() = default ;
    RetrieveKnowledgePointsRequest& operator=(const RetrieveKnowledgePointsRequest &) = default ;
    RetrieveKnowledgePointsRequest& operator=(RetrieveKnowledgePointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FocusObjects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FocusObjects& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, FocusObjects& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      FocusObjects() = default ;
      FocusObjects(const FocusObjects &) = default ;
      FocusObjects(FocusObjects &&) = default ;
      FocusObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FocusObjects() = default ;
      FocusObjects& operator=(const FocusObjects &) = default ;
      FocusObjects& operator=(FocusObjects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->knowledgeBaseId_ == nullptr && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline FocusObjects& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline FocusObjects& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline FocusObjects& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The location ID of the knowledge point. Copy this value exactly as it appears in the search results and use it together with the corresponding KnowledgeBaseId and Type. Do not parse or convert this value.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The ID of the knowledge base to which the knowledge point belongs. This parameter is used together with Type and Id to locate the knowledge point.
      // 
      // This parameter is required.
      shared_ptr<string> knowledgeBaseId_ {};
      // The read category of the knowledge point. Use GRAPH for the current focus objects and graph nodes.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->focusObjects_ == nullptr
        && this->knowledgeBaseIds_ == nullptr && this->maxResults_ == nullptr && this->query_ == nullptr; };
    // focusObjects Field Functions 
    bool hasFocusObjects() const { return this->focusObjects_ != nullptr;};
    void deleteFocusObjects() { this->focusObjects_ = nullptr;};
    inline const vector<RetrieveKnowledgePointsRequest::FocusObjects> & getFocusObjects() const { DARABONBA_PTR_GET_CONST(focusObjects_, vector<RetrieveKnowledgePointsRequest::FocusObjects>) };
    inline vector<RetrieveKnowledgePointsRequest::FocusObjects> getFocusObjects() { DARABONBA_PTR_GET(focusObjects_, vector<RetrieveKnowledgePointsRequest::FocusObjects>) };
    inline RetrieveKnowledgePointsRequest& setFocusObjects(const vector<RetrieveKnowledgePointsRequest::FocusObjects> & focusObjects) { DARABONBA_PTR_SET_VALUE(focusObjects_, focusObjects) };
    inline RetrieveKnowledgePointsRequest& setFocusObjects(vector<RetrieveKnowledgePointsRequest::FocusObjects> && focusObjects) { DARABONBA_PTR_SET_RVALUE(focusObjects_, focusObjects) };


    // knowledgeBaseIds Field Functions 
    bool hasKnowledgeBaseIds() const { return this->knowledgeBaseIds_ != nullptr;};
    void deleteKnowledgeBaseIds() { this->knowledgeBaseIds_ = nullptr;};
    inline const vector<string> & getKnowledgeBaseIds() const { DARABONBA_PTR_GET_CONST(knowledgeBaseIds_, vector<string>) };
    inline vector<string> getKnowledgeBaseIds() { DARABONBA_PTR_GET(knowledgeBaseIds_, vector<string>) };
    inline RetrieveKnowledgePointsRequest& setKnowledgeBaseIds(const vector<string> & knowledgeBaseIds) { DARABONBA_PTR_SET_VALUE(knowledgeBaseIds_, knowledgeBaseIds) };
    inline RetrieveKnowledgePointsRequest& setKnowledgeBaseIds(vector<string> && knowledgeBaseIds) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseIds_, knowledgeBaseIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline RetrieveKnowledgePointsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RetrieveKnowledgePointsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The graph objects to focus the search on. You can specify up to 2 unique objects. The objects must be within the current authorized search scope and do not expand permissions.
    shared_ptr<vector<RetrieveKnowledgePointsRequest::FocusObjects>> focusObjects_ {};
    // A list of 1 to 50 unique knowledge base IDs that restricts the search. If you omit this parameter, the operation discovers knowledge bases within the caller’s authorized scope. If you provide IDs, the operation checks access to each knowledge base and the entire request fails if the caller lacks access to any of them.
    shared_ptr<vector<string>> knowledgeBaseIds_ {};
    // The maximum number of hits across all knowledge bases. Default value: 10. Valid values: 1 to 50. This parameter does not specify the quota for each knowledge base or the page size.
    shared_ptr<int32_t> maxResults_ {};
    // The natural language question. The length cannot exceed 256 Unicode code points after leading and trailing whitespaces are removed.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

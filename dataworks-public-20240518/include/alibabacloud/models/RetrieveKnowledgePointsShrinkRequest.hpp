// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEPOINTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEPOINTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class RetrieveKnowledgePointsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveKnowledgePointsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FocusObjects, focusObjectsShrink_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseIds, knowledgeBaseIdsShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveKnowledgePointsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FocusObjects, focusObjectsShrink_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseIds, knowledgeBaseIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    RetrieveKnowledgePointsShrinkRequest() = default ;
    RetrieveKnowledgePointsShrinkRequest(const RetrieveKnowledgePointsShrinkRequest &) = default ;
    RetrieveKnowledgePointsShrinkRequest(RetrieveKnowledgePointsShrinkRequest &&) = default ;
    RetrieveKnowledgePointsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveKnowledgePointsShrinkRequest() = default ;
    RetrieveKnowledgePointsShrinkRequest& operator=(const RetrieveKnowledgePointsShrinkRequest &) = default ;
    RetrieveKnowledgePointsShrinkRequest& operator=(RetrieveKnowledgePointsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->focusObjectsShrink_ == nullptr
        && this->knowledgeBaseIdsShrink_ == nullptr && this->maxResults_ == nullptr && this->query_ == nullptr; };
    // focusObjectsShrink Field Functions 
    bool hasFocusObjectsShrink() const { return this->focusObjectsShrink_ != nullptr;};
    void deleteFocusObjectsShrink() { this->focusObjectsShrink_ = nullptr;};
    inline string getFocusObjectsShrink() const { DARABONBA_PTR_GET_DEFAULT(focusObjectsShrink_, "") };
    inline RetrieveKnowledgePointsShrinkRequest& setFocusObjectsShrink(string focusObjectsShrink) { DARABONBA_PTR_SET_VALUE(focusObjectsShrink_, focusObjectsShrink) };


    // knowledgeBaseIdsShrink Field Functions 
    bool hasKnowledgeBaseIdsShrink() const { return this->knowledgeBaseIdsShrink_ != nullptr;};
    void deleteKnowledgeBaseIdsShrink() { this->knowledgeBaseIdsShrink_ = nullptr;};
    inline string getKnowledgeBaseIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseIdsShrink_, "") };
    inline RetrieveKnowledgePointsShrinkRequest& setKnowledgeBaseIdsShrink(string knowledgeBaseIdsShrink) { DARABONBA_PTR_SET_VALUE(knowledgeBaseIdsShrink_, knowledgeBaseIdsShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline RetrieveKnowledgePointsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RetrieveKnowledgePointsShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The graph objects to focus the search on. You can specify up to 2 unique objects. The objects must be within the current authorized search scope and do not expand permissions.
    shared_ptr<string> focusObjectsShrink_ {};
    // A list of 1 to 50 unique knowledge base IDs that restricts the search. If you omit this parameter, the operation discovers knowledge bases within the caller’s authorized scope. If you provide IDs, the operation checks access to each knowledge base and the entire request fails if the caller lacks access to any of them.
    shared_ptr<string> knowledgeBaseIdsShrink_ {};
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

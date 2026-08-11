// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLABELCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYLABELCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class QueryLabelConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLabelConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ContentModeration, contentModeration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLabelConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentModeration, contentModeration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryLabelConfigResponseBody() = default ;
    QueryLabelConfigResponseBody(const QueryLabelConfigResponseBody &) = default ;
    QueryLabelConfigResponseBody(QueryLabelConfigResponseBody &&) = default ;
    QueryLabelConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLabelConfigResponseBody() = default ;
    QueryLabelConfigResponseBody& operator=(const QueryLabelConfigResponseBody &) = default ;
    QueryLabelConfigResponseBody& operator=(QueryLabelConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentModeration_ == nullptr
        && this->requestId_ == nullptr; };
    // contentModeration Field Functions 
    bool hasContentModeration() const { return this->contentModeration_ != nullptr;};
    void deleteContentModeration() { this->contentModeration_ = nullptr;};
    inline const vector<Darabonba::Json> & getContentModeration() const { DARABONBA_PTR_GET_CONST(contentModeration_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getContentModeration() { DARABONBA_PTR_GET(contentModeration_, vector<Darabonba::Json>) };
    inline QueryLabelConfigResponseBody& setContentModeration(const vector<Darabonba::Json> & contentModeration) { DARABONBA_PTR_SET_VALUE(contentModeration_, contentModeration) };
    inline QueryLabelConfigResponseBody& setContentModeration(vector<Darabonba::Json> && contentModeration) { DARABONBA_PTR_SET_RVALUE(contentModeration_, contentModeration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryLabelConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content moderation configuration.
    shared_ptr<vector<Darabonba::Json>> contentModeration_ {};
    // The ID assigned by the backend to uniquely identify a request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif

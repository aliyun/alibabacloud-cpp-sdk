// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTagsResponseBodyTagInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagInfos, tagInfos_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagInfos, tagInfos_);
    };
    QueryTagsResponseBody() = default ;
    QueryTagsResponseBody(const QueryTagsResponseBody &) = default ;
    QueryTagsResponseBody(QueryTagsResponseBody &&) = default ;
    QueryTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTagsResponseBody() = default ;
    QueryTagsResponseBody& operator=(const QueryTagsResponseBody &) = default ;
    QueryTagsResponseBody& operator=(QueryTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->tagInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagInfos Field Functions 
    bool hasTagInfos() const { return this->tagInfos_ != nullptr;};
    void deleteTagInfos() { this->tagInfos_ = nullptr;};
    inline const QueryTagsResponseBodyTagInfos & tagInfos() const { DARABONBA_PTR_GET_CONST(tagInfos_, QueryTagsResponseBodyTagInfos) };
    inline QueryTagsResponseBodyTagInfos tagInfos() { DARABONBA_PTR_GET(tagInfos_, QueryTagsResponseBodyTagInfos) };
    inline QueryTagsResponseBody& setTagInfos(const QueryTagsResponseBodyTagInfos & tagInfos) { DARABONBA_PTR_SET_VALUE(tagInfos_, tagInfos) };
    inline QueryTagsResponseBody& setTagInfos(QueryTagsResponseBodyTagInfos && tagInfos) { DARABONBA_PTR_SET_RVALUE(tagInfos_, tagInfos) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<QueryTagsResponseBodyTagInfos> tagInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif

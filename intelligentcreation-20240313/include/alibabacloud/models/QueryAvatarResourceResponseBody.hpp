// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAvatarResourceResponseBodyQueryResourceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryAvatarResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(queryResourceInfoList, queryResourceInfoList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(queryResourceInfoList, queryResourceInfoList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryAvatarResourceResponseBody() = default ;
    QueryAvatarResourceResponseBody(const QueryAvatarResourceResponseBody &) = default ;
    QueryAvatarResourceResponseBody(QueryAvatarResourceResponseBody &&) = default ;
    QueryAvatarResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarResourceResponseBody() = default ;
    QueryAvatarResourceResponseBody& operator=(const QueryAvatarResourceResponseBody &) = default ;
    QueryAvatarResourceResponseBody& operator=(QueryAvatarResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->queryResourceInfoList_ == nullptr
        && return this->requestId_ == nullptr; };
    // queryResourceInfoList Field Functions 
    bool hasQueryResourceInfoList() const { return this->queryResourceInfoList_ != nullptr;};
    void deleteQueryResourceInfoList() { this->queryResourceInfoList_ = nullptr;};
    inline const vector<QueryAvatarResourceResponseBodyQueryResourceInfoList> & queryResourceInfoList() const { DARABONBA_PTR_GET_CONST(queryResourceInfoList_, vector<QueryAvatarResourceResponseBodyQueryResourceInfoList>) };
    inline vector<QueryAvatarResourceResponseBodyQueryResourceInfoList> queryResourceInfoList() { DARABONBA_PTR_GET(queryResourceInfoList_, vector<QueryAvatarResourceResponseBodyQueryResourceInfoList>) };
    inline QueryAvatarResourceResponseBody& setQueryResourceInfoList(const vector<QueryAvatarResourceResponseBodyQueryResourceInfoList> & queryResourceInfoList) { DARABONBA_PTR_SET_VALUE(queryResourceInfoList_, queryResourceInfoList) };
    inline QueryAvatarResourceResponseBody& setQueryResourceInfoList(vector<QueryAvatarResourceResponseBodyQueryResourceInfoList> && queryResourceInfoList) { DARABONBA_PTR_SET_RVALUE(queryResourceInfoList_, queryResourceInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAvatarResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<QueryAvatarResourceResponseBodyQueryResourceInfoList>> queryResourceInfoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

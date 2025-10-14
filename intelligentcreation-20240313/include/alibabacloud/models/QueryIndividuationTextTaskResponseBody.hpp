// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINDIVIDUATIONTEXTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINDIVIDUATIONTEXTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryIndividuationTextTaskResponseBodyTextList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryIndividuationTextTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIndividuationTextTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(textList, textList_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIndividuationTextTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(textList, textList_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    QueryIndividuationTextTaskResponseBody() = default ;
    QueryIndividuationTextTaskResponseBody(const QueryIndividuationTextTaskResponseBody &) = default ;
    QueryIndividuationTextTaskResponseBody(QueryIndividuationTextTaskResponseBody &&) = default ;
    QueryIndividuationTextTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIndividuationTextTaskResponseBody() = default ;
    QueryIndividuationTextTaskResponseBody& operator=(const QueryIndividuationTextTaskResponseBody &) = default ;
    QueryIndividuationTextTaskResponseBody& operator=(QueryIndividuationTextTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->textList_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryIndividuationTextTaskResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryIndividuationTextTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryIndividuationTextTaskResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textList Field Functions 
    bool hasTextList() const { return this->textList_ != nullptr;};
    void deleteTextList() { this->textList_ = nullptr;};
    inline const vector<QueryIndividuationTextTaskResponseBodyTextList> & textList() const { DARABONBA_PTR_GET_CONST(textList_, vector<QueryIndividuationTextTaskResponseBodyTextList>) };
    inline vector<QueryIndividuationTextTaskResponseBodyTextList> textList() { DARABONBA_PTR_GET(textList_, vector<QueryIndividuationTextTaskResponseBodyTextList>) };
    inline QueryIndividuationTextTaskResponseBody& setTextList(const vector<QueryIndividuationTextTaskResponseBodyTextList> & textList) { DARABONBA_PTR_SET_VALUE(textList_, textList) };
    inline QueryIndividuationTextTaskResponseBody& setTextList(vector<QueryIndividuationTextTaskResponseBodyTextList> && textList) { DARABONBA_PTR_SET_RVALUE(textList_, textList) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline QueryIndividuationTextTaskResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<vector<QueryIndividuationTextTaskResponseBodyTextList>> textList_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

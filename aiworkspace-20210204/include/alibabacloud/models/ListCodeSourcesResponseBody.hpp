// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCODESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCODESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CodeSourceItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListCodeSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCodeSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CodeSources, codeSources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCodeSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeSources, codeSources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCodeSourcesResponseBody() = default ;
    ListCodeSourcesResponseBody(const ListCodeSourcesResponseBody &) = default ;
    ListCodeSourcesResponseBody(ListCodeSourcesResponseBody &&) = default ;
    ListCodeSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCodeSourcesResponseBody() = default ;
    ListCodeSourcesResponseBody& operator=(const ListCodeSourcesResponseBody &) = default ;
    ListCodeSourcesResponseBody& operator=(ListCodeSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeSources_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // codeSources Field Functions 
    bool hasCodeSources() const { return this->codeSources_ != nullptr;};
    void deleteCodeSources() { this->codeSources_ = nullptr;};
    inline const vector<CodeSourceItem> & codeSources() const { DARABONBA_PTR_GET_CONST(codeSources_, vector<CodeSourceItem>) };
    inline vector<CodeSourceItem> codeSources() { DARABONBA_PTR_GET(codeSources_, vector<CodeSourceItem>) };
    inline ListCodeSourcesResponseBody& setCodeSources(const vector<CodeSourceItem> & codeSources) { DARABONBA_PTR_SET_VALUE(codeSources_, codeSources) };
    inline ListCodeSourcesResponseBody& setCodeSources(vector<CodeSourceItem> && codeSources) { DARABONBA_PTR_SET_RVALUE(codeSources_, codeSources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCodeSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCodeSourcesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The code sources.
    std::shared_ptr<vector<CodeSourceItem>> codeSources_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of code sources that meet the filter conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

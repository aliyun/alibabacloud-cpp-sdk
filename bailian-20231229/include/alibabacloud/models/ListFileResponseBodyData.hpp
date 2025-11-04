// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFileResponseBodyDataFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFileResponseBodyData() = default ;
    ListFileResponseBodyData(const ListFileResponseBodyData &) = default ;
    ListFileResponseBodyData(ListFileResponseBodyData &&) = default ;
    ListFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileResponseBodyData() = default ;
    ListFileResponseBodyData& operator=(const ListFileResponseBodyData &) = default ;
    ListFileResponseBodyData& operator=(ListFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileList_ == nullptr
        && return this->hasNext_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->totalCount_ == nullptr; };
    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<Models::ListFileResponseBodyDataFileList> & fileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<Models::ListFileResponseBodyDataFileList>) };
    inline vector<Models::ListFileResponseBodyDataFileList> fileList() { DARABONBA_PTR_GET(fileList_, vector<Models::ListFileResponseBodyDataFileList>) };
    inline ListFileResponseBodyData& setFileList(const vector<Models::ListFileResponseBodyDataFileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline ListFileResponseBodyData& setFileList(vector<Models::ListFileResponseBodyDataFileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline ListFileResponseBodyData& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFileResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFileResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFileResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of documents in the category.
    std::shared_ptr<vector<Models::ListFileResponseBodyDataFileList>> fileList_ = nullptr;
    std::shared_ptr<bool> hasNext_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif

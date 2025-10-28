// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGELABELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGELABELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImageLabelsResponseBodyLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListImageLabelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageLabelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageLabelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListImageLabelsResponseBody() = default ;
    ListImageLabelsResponseBody(const ListImageLabelsResponseBody &) = default ;
    ListImageLabelsResponseBody(ListImageLabelsResponseBody &&) = default ;
    ListImageLabelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageLabelsResponseBody() = default ;
    ListImageLabelsResponseBody& operator=(const ListImageLabelsResponseBody &) = default ;
    ListImageLabelsResponseBody& operator=(ListImageLabelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labels_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<ListImageLabelsResponseBodyLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<ListImageLabelsResponseBodyLabels>) };
    inline vector<ListImageLabelsResponseBodyLabels> labels() { DARABONBA_PTR_GET(labels_, vector<ListImageLabelsResponseBodyLabels>) };
    inline ListImageLabelsResponseBody& setLabels(const vector<ListImageLabelsResponseBodyLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListImageLabelsResponseBody& setLabels(vector<ListImageLabelsResponseBodyLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageLabelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListImageLabelsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The image tags.
    std::shared_ptr<vector<ListImageLabelsResponseBodyLabels>> labels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the images that meet the filter conditions.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif

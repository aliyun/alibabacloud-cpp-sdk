// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDestinationCategoryResponseBodyTypeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TypeList, typeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
    };
    DescribeOutgoingDestinationCategoryResponseBody() = default ;
    DescribeOutgoingDestinationCategoryResponseBody(const DescribeOutgoingDestinationCategoryResponseBody &) = default ;
    DescribeOutgoingDestinationCategoryResponseBody(DescribeOutgoingDestinationCategoryResponseBody &&) = default ;
    DescribeOutgoingDestinationCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationCategoryResponseBody() = default ;
    DescribeOutgoingDestinationCategoryResponseBody& operator=(const DescribeOutgoingDestinationCategoryResponseBody &) = default ;
    DescribeOutgoingDestinationCategoryResponseBody& operator=(DescribeOutgoingDestinationCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->typeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDestinationCategoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<DescribeOutgoingDestinationCategoryResponseBodyTypeList> & typeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<DescribeOutgoingDestinationCategoryResponseBodyTypeList>) };
    inline vector<DescribeOutgoingDestinationCategoryResponseBodyTypeList> typeList() { DARABONBA_PTR_GET(typeList_, vector<DescribeOutgoingDestinationCategoryResponseBodyTypeList>) };
    inline DescribeOutgoingDestinationCategoryResponseBody& setTypeList(const vector<DescribeOutgoingDestinationCategoryResponseBodyTypeList> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline DescribeOutgoingDestinationCategoryResponseBody& setTypeList(vector<DescribeOutgoingDestinationCategoryResponseBodyTypeList> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<DescribeOutgoingDestinationCategoryResponseBodyTypeList>> typeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

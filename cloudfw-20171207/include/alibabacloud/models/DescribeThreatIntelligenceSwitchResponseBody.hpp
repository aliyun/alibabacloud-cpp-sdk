// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATINTELLIGENCESWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATINTELLIGENCESWITCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeThreatIntelligenceSwitchResponseBodyCategoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeThreatIntelligenceSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatIntelligenceSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatIntelligenceSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeThreatIntelligenceSwitchResponseBody() = default ;
    DescribeThreatIntelligenceSwitchResponseBody(const DescribeThreatIntelligenceSwitchResponseBody &) = default ;
    DescribeThreatIntelligenceSwitchResponseBody(DescribeThreatIntelligenceSwitchResponseBody &&) = default ;
    DescribeThreatIntelligenceSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatIntelligenceSwitchResponseBody() = default ;
    DescribeThreatIntelligenceSwitchResponseBody& operator=(const DescribeThreatIntelligenceSwitchResponseBody &) = default ;
    DescribeThreatIntelligenceSwitchResponseBody& operator=(DescribeThreatIntelligenceSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // categoryList Field Functions 
    bool hasCategoryList() const { return this->categoryList_ != nullptr;};
    void deleteCategoryList() { this->categoryList_ = nullptr;};
    inline const vector<DescribeThreatIntelligenceSwitchResponseBodyCategoryList> & categoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<DescribeThreatIntelligenceSwitchResponseBodyCategoryList>) };
    inline vector<DescribeThreatIntelligenceSwitchResponseBodyCategoryList> categoryList() { DARABONBA_PTR_GET(categoryList_, vector<DescribeThreatIntelligenceSwitchResponseBodyCategoryList>) };
    inline DescribeThreatIntelligenceSwitchResponseBody& setCategoryList(const vector<DescribeThreatIntelligenceSwitchResponseBodyCategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
    inline DescribeThreatIntelligenceSwitchResponseBody& setCategoryList(vector<DescribeThreatIntelligenceSwitchResponseBodyCategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeThreatIntelligenceSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeThreatIntelligenceSwitchResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeThreatIntelligenceSwitchResponseBodyCategoryList>> categoryList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

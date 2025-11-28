// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVACYRULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVACYRULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivacyRuleResponseBodyDataPageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListPrivacyRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivacyRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivacyRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListPrivacyRuleResponseBodyData() = default ;
    ListPrivacyRuleResponseBodyData(const ListPrivacyRuleResponseBodyData &) = default ;
    ListPrivacyRuleResponseBodyData(ListPrivacyRuleResponseBodyData &&) = default ;
    ListPrivacyRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivacyRuleResponseBodyData() = default ;
    ListPrivacyRuleResponseBodyData& operator=(const ListPrivacyRuleResponseBodyData &) = default ;
    ListPrivacyRuleResponseBodyData& operator=(ListPrivacyRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->num_ == nullptr
        && return this->pageData_ == nullptr && return this->size_ == nullptr && return this->total_ == nullptr; };
    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline ListPrivacyRuleResponseBodyData& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const vector<Models::ListPrivacyRuleResponseBodyDataPageData> & pageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Models::ListPrivacyRuleResponseBodyDataPageData>) };
    inline vector<Models::ListPrivacyRuleResponseBodyDataPageData> pageData() { DARABONBA_PTR_GET(pageData_, vector<Models::ListPrivacyRuleResponseBodyDataPageData>) };
    inline ListPrivacyRuleResponseBodyData& setPageData(const vector<Models::ListPrivacyRuleResponseBodyDataPageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline ListPrivacyRuleResponseBodyData& setPageData(vector<Models::ListPrivacyRuleResponseBodyDataPageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListPrivacyRuleResponseBodyData& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListPrivacyRuleResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> num_ = nullptr;
    std::shared_ptr<vector<Models::ListPrivacyRuleResponseBodyDataPageData>> pageData_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif

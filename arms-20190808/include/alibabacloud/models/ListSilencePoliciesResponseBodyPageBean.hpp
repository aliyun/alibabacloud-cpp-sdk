// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSilencePoliciesResponseBodyPageBeanSilencePolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSilencePoliciesResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSilencePoliciesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(SilencePolicies, silencePolicies_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSilencePoliciesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(SilencePolicies, silencePolicies_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSilencePoliciesResponseBodyPageBean() = default ;
    ListSilencePoliciesResponseBodyPageBean(const ListSilencePoliciesResponseBodyPageBean &) = default ;
    ListSilencePoliciesResponseBodyPageBean(ListSilencePoliciesResponseBodyPageBean &&) = default ;
    ListSilencePoliciesResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSilencePoliciesResponseBodyPageBean() = default ;
    ListSilencePoliciesResponseBodyPageBean& operator=(const ListSilencePoliciesResponseBodyPageBean &) = default ;
    ListSilencePoliciesResponseBodyPageBean& operator=(ListSilencePoliciesResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->page_ != nullptr
        && this->silencePolicies_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListSilencePoliciesResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // silencePolicies Field Functions 
    bool hasSilencePolicies() const { return this->silencePolicies_ != nullptr;};
    void deleteSilencePolicies() { this->silencePolicies_ = nullptr;};
    inline const vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePolicies> & silencePolicies() const { DARABONBA_PTR_GET_CONST(silencePolicies_, vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePolicies>) };
    inline vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePolicies> silencePolicies() { DARABONBA_PTR_GET(silencePolicies_, vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePolicies>) };
    inline ListSilencePoliciesResponseBodyPageBean& setSilencePolicies(const vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePolicies> & silencePolicies) { DARABONBA_PTR_SET_VALUE(silencePolicies_, silencePolicies) };
    inline ListSilencePoliciesResponseBodyPageBean& setSilencePolicies(vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePolicies> && silencePolicies) { DARABONBA_PTR_SET_RVALUE(silencePolicies_, silencePolicies) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListSilencePoliciesResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListSilencePoliciesResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The number of the page returned.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The queried silence policies.
    std::shared_ptr<vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePolicies>> silencePolicies_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The number of silence policies that were returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

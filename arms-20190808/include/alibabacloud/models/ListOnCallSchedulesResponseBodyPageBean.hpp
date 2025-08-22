// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESRESPONSEBODYPAGEBEAN_HPP_
#define ALIBABACLOUD_MODELS_LISTONCALLSCHEDULESRESPONSEBODYPAGEBEAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListOnCallSchedulesResponseBodyPageBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOnCallSchedulesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_TO_JSON(OnCallSchedules, onCallSchedules_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListOnCallSchedulesResponseBodyPageBean& obj) { 
      DARABONBA_PTR_FROM_JSON(OnCallSchedules, onCallSchedules_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListOnCallSchedulesResponseBodyPageBean() = default ;
    ListOnCallSchedulesResponseBodyPageBean(const ListOnCallSchedulesResponseBodyPageBean &) = default ;
    ListOnCallSchedulesResponseBodyPageBean(ListOnCallSchedulesResponseBodyPageBean &&) = default ;
    ListOnCallSchedulesResponseBodyPageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOnCallSchedulesResponseBodyPageBean() = default ;
    ListOnCallSchedulesResponseBodyPageBean& operator=(const ListOnCallSchedulesResponseBodyPageBean &) = default ;
    ListOnCallSchedulesResponseBodyPageBean& operator=(ListOnCallSchedulesResponseBodyPageBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->onCallSchedules_ != nullptr
        && this->page_ != nullptr && this->size_ != nullptr && this->total_ != nullptr; };
    // onCallSchedules Field Functions 
    bool hasOnCallSchedules() const { return this->onCallSchedules_ != nullptr;};
    void deleteOnCallSchedules() { this->onCallSchedules_ = nullptr;};
    inline const vector<Models::ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules> & onCallSchedules() const { DARABONBA_PTR_GET_CONST(onCallSchedules_, vector<Models::ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules>) };
    inline vector<Models::ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules> onCallSchedules() { DARABONBA_PTR_GET(onCallSchedules_, vector<Models::ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules>) };
    inline ListOnCallSchedulesResponseBodyPageBean& setOnCallSchedules(const vector<Models::ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules> & onCallSchedules) { DARABONBA_PTR_SET_VALUE(onCallSchedules_, onCallSchedules) };
    inline ListOnCallSchedulesResponseBodyPageBean& setOnCallSchedules(vector<Models::ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules> && onCallSchedules) { DARABONBA_PTR_SET_RVALUE(onCallSchedules_, onCallSchedules) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListOnCallSchedulesResponseBodyPageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListOnCallSchedulesResponseBodyPageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListOnCallSchedulesResponseBodyPageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The information about the scheduling policy.
    std::shared_ptr<vector<Models::ListOnCallSchedulesResponseBodyPageBeanOnCallSchedules>> onCallSchedules_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

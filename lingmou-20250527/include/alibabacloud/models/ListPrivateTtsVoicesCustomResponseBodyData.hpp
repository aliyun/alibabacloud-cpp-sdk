// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATETTSVOICESCUSTOMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATETTSVOICESCUSTOMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateTTSVoicesCustomResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class ListPrivateTTSVoicesCustomResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateTTSVoicesCustomResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pages, pages_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateTTSVoicesCustomResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pages, pages_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListPrivateTTSVoicesCustomResponseBodyData() = default ;
    ListPrivateTTSVoicesCustomResponseBodyData(const ListPrivateTTSVoicesCustomResponseBodyData &) = default ;
    ListPrivateTTSVoicesCustomResponseBodyData(ListPrivateTTSVoicesCustomResponseBodyData &&) = default ;
    ListPrivateTTSVoicesCustomResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateTTSVoicesCustomResponseBodyData() = default ;
    ListPrivateTTSVoicesCustomResponseBodyData& operator=(const ListPrivateTTSVoicesCustomResponseBodyData &) = default ;
    ListPrivateTTSVoicesCustomResponseBodyData& operator=(ListPrivateTTSVoicesCustomResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->page_ == nullptr && return this->pages_ == nullptr && return this->size_ == nullptr && return this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListPrivateTTSVoicesCustomResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListPrivateTTSVoicesCustomResponseBodyDataData>) };
    inline vector<Models::ListPrivateTTSVoicesCustomResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListPrivateTTSVoicesCustomResponseBodyDataData>) };
    inline ListPrivateTTSVoicesCustomResponseBodyData& setData(const vector<Models::ListPrivateTTSVoicesCustomResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPrivateTTSVoicesCustomResponseBodyData& setData(vector<Models::ListPrivateTTSVoicesCustomResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListPrivateTTSVoicesCustomResponseBodyData& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline int32_t pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0) };
    inline ListPrivateTTSVoicesCustomResponseBodyData& setPages(int32_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListPrivateTTSVoicesCustomResponseBodyData& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListPrivateTTSVoicesCustomResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::ListPrivateTTSVoicesCustomResponseBodyDataData>> data_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pages_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif

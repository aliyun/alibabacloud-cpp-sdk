// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERLISTQUERYRESPONSEBODYPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_CARORDERLISTQUERYRESPONSEBODYPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarOrderListQueryResponseBodyPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderListQueryResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(total_number, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderListQueryResponseBodyPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(total_number, totalNumber_);
    };
    CarOrderListQueryResponseBodyPageInfo() = default ;
    CarOrderListQueryResponseBodyPageInfo(const CarOrderListQueryResponseBodyPageInfo &) = default ;
    CarOrderListQueryResponseBodyPageInfo(CarOrderListQueryResponseBodyPageInfo &&) = default ;
    CarOrderListQueryResponseBodyPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderListQueryResponseBodyPageInfo() = default ;
    CarOrderListQueryResponseBodyPageInfo& operator=(const CarOrderListQueryResponseBodyPageInfo &) = default ;
    CarOrderListQueryResponseBodyPageInfo& operator=(CarOrderListQueryResponseBodyPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->page_ != nullptr
        && this->pageSize_ != nullptr && this->totalNumber_ != nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline CarOrderListQueryResponseBodyPageInfo& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CarOrderListQueryResponseBodyPageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline int32_t totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
    inline CarOrderListQueryResponseBodyPageInfo& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

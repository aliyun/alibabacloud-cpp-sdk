// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSDETAILSRESPONSEBODYCARDSENDDETAILDTO_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSDETAILSRESPONSEBODYCARDSENDDETAILDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCardSmsDetailsResponseBodyCardSendDetailDTORecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetCardSmsDetailsResponseBodyCardSendDetailDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardSmsDetailsResponseBodyCardSendDetailDTO& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardSmsDetailsResponseBodyCardSendDetailDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetCardSmsDetailsResponseBodyCardSendDetailDTO() = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTO(const GetCardSmsDetailsResponseBodyCardSendDetailDTO &) = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTO(GetCardSmsDetailsResponseBodyCardSendDetailDTO &&) = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardSmsDetailsResponseBodyCardSendDetailDTO() = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTO& operator=(const GetCardSmsDetailsResponseBodyCardSendDetailDTO &) = default ;
    GetCardSmsDetailsResponseBodyCardSendDetailDTO& operator=(GetCardSmsDetailsResponseBodyCardSendDetailDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->records_ == nullptr && return this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTO& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTO& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::GetCardSmsDetailsResponseBodyCardSendDetailDTORecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::GetCardSmsDetailsResponseBodyCardSendDetailDTORecords>) };
    inline vector<Models::GetCardSmsDetailsResponseBodyCardSendDetailDTORecords> records() { DARABONBA_PTR_GET(records_, vector<Models::GetCardSmsDetailsResponseBodyCardSendDetailDTORecords>) };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTO& setRecords(const vector<Models::GetCardSmsDetailsResponseBodyCardSendDetailDTORecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTO& setRecords(vector<Models::GetCardSmsDetailsResponseBodyCardSendDetailDTORecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetCardSmsDetailsResponseBodyCardSendDetailDTO& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Current page number
    std::shared_ptr<int64_t> currentPage_ = nullptr;
    // Page size
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // List of card SMS sending records
    std::shared_ptr<vector<Models::GetCardSmsDetailsResponseBodyCardSendDetailDTORecords>> records_ = nullptr;
    // Total count
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif

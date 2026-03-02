// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListAssetCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    ListAssetCountRequest() = default ;
    ListAssetCountRequest(const ListAssetCountRequest &) = default ;
    ListAssetCountRequest(ListAssetCountRequest &&) = default ;
    ListAssetCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetCountRequest() = default ;
    ListAssetCountRequest& operator=(const ListAssetCountRequest &) = default ;
    ListAssetCountRequest& operator=(ListAssetCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endDate_ == nullptr && this->showSize_ == nullptr && this->startDate_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListAssetCountRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline ListAssetCountRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListAssetCountRequest& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline ListAssetCountRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    shared_ptr<int64_t> currentPage_ {};
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<int64_t> showSize_ {};
    shared_ptr<int64_t> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif

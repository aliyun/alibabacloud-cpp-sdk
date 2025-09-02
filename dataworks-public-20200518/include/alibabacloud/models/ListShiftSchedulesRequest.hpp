// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHIFTSCHEDULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSHIFTSCHEDULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListShiftSchedulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShiftSchedulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ShiftScheduleName, shiftScheduleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListShiftSchedulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ShiftScheduleName, shiftScheduleName_);
    };
    ListShiftSchedulesRequest() = default ;
    ListShiftSchedulesRequest(const ListShiftSchedulesRequest &) = default ;
    ListShiftSchedulesRequest(ListShiftSchedulesRequest &&) = default ;
    ListShiftSchedulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShiftSchedulesRequest() = default ;
    ListShiftSchedulesRequest& operator=(const ListShiftSchedulesRequest &) = default ;
    ListShiftSchedulesRequest& operator=(ListShiftSchedulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->owner_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->shiftScheduleName_ != nullptr; };
    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListShiftSchedulesRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListShiftSchedulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListShiftSchedulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // shiftScheduleName Field Functions 
    bool hasShiftScheduleName() const { return this->shiftScheduleName_ != nullptr;};
    void deleteShiftScheduleName() { this->shiftScheduleName_ = nullptr;};
    inline string shiftScheduleName() const { DARABONBA_PTR_GET_DEFAULT(shiftScheduleName_, "") };
    inline ListShiftSchedulesRequest& setShiftScheduleName(string shiftScheduleName) { DARABONBA_PTR_SET_VALUE(shiftScheduleName_, shiftScheduleName) };


  protected:
    // The Alibaba Cloud account ID. You can log on to the DataWorks console and move the pointer over the profile picture in the upper-right corner to view the ID.
    std::shared_ptr<string> owner_ = nullptr;
    // The page number. Minimum value:1. Maximum value: 100. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The keyword used to perform a fuzzy search on shift schedules.
    std::shared_ptr<string> shiftScheduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif

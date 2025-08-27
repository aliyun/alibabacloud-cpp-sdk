// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARAPPLYQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CARAPPLYQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarApplyQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarApplyQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(created_end_at, createdEndAt_);
      DARABONBA_PTR_TO_JSON(created_start_at, createdStartAt_);
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CarApplyQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(created_end_at, createdEndAt_);
      DARABONBA_PTR_FROM_JSON(created_start_at, createdStartAt_);
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(third_part_apply_id, thirdPartApplyId_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    CarApplyQueryRequest() = default ;
    CarApplyQueryRequest(const CarApplyQueryRequest &) = default ;
    CarApplyQueryRequest(CarApplyQueryRequest &&) = default ;
    CarApplyQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarApplyQueryRequest() = default ;
    CarApplyQueryRequest& operator=(const CarApplyQueryRequest &) = default ;
    CarApplyQueryRequest& operator=(CarApplyQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdEndAt_ != nullptr
        && this->createdStartAt_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->thirdPartApplyId_ != nullptr && this->userId_ != nullptr; };
    // createdEndAt Field Functions 
    bool hasCreatedEndAt() const { return this->createdEndAt_ != nullptr;};
    void deleteCreatedEndAt() { this->createdEndAt_ = nullptr;};
    inline string createdEndAt() const { DARABONBA_PTR_GET_DEFAULT(createdEndAt_, "") };
    inline CarApplyQueryRequest& setCreatedEndAt(string createdEndAt) { DARABONBA_PTR_SET_VALUE(createdEndAt_, createdEndAt) };


    // createdStartAt Field Functions 
    bool hasCreatedStartAt() const { return this->createdStartAt_ != nullptr;};
    void deleteCreatedStartAt() { this->createdStartAt_ = nullptr;};
    inline string createdStartAt() const { DARABONBA_PTR_GET_DEFAULT(createdStartAt_, "") };
    inline CarApplyQueryRequest& setCreatedStartAt(string createdStartAt) { DARABONBA_PTR_SET_VALUE(createdStartAt_, createdStartAt) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline CarApplyQueryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CarApplyQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // thirdPartApplyId Field Functions 
    bool hasThirdPartApplyId() const { return this->thirdPartApplyId_ != nullptr;};
    void deleteThirdPartApplyId() { this->thirdPartApplyId_ = nullptr;};
    inline string thirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartApplyId_, "") };
    inline CarApplyQueryRequest& setThirdPartApplyId(string thirdPartApplyId) { DARABONBA_PTR_SET_VALUE(thirdPartApplyId_, thirdPartApplyId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CarApplyQueryRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> createdEndAt_ = nullptr;
    std::shared_ptr<string> createdStartAt_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> thirdPartApplyId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif

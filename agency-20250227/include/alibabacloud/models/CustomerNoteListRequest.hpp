// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERNOTELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERNOTELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20250227
{
namespace Models
{
  class CustomerNoteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerNoteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerNoteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerUid, customerUid_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    CustomerNoteListRequest() = default ;
    CustomerNoteListRequest(const CustomerNoteListRequest &) = default ;
    CustomerNoteListRequest(CustomerNoteListRequest &&) = default ;
    CustomerNoteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerNoteListRequest() = default ;
    CustomerNoteListRequest& operator=(const CustomerNoteListRequest &) = default ;
    CustomerNoteListRequest& operator=(CustomerNoteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerUid_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr; };
    // customerUid Field Functions 
    bool hasCustomerUid() const { return this->customerUid_ != nullptr;};
    void deleteCustomerUid() { this->customerUid_ = nullptr;};
    inline string getCustomerUid() const { DARABONBA_PTR_GET_DEFAULT(customerUid_, "") };
    inline CustomerNoteListRequest& setCustomerUid(string customerUid) { DARABONBA_PTR_SET_VALUE(customerUid_, customerUid) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline CustomerNoteListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CustomerNoteListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> customerUid_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20250227
#endif

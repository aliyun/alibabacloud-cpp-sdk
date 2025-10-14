// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFBUYERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFBUYERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailListOfBuyerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailListOfBuyerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page_index, pageIndex_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(utc_create_begin, utcCreateBegin_);
      DARABONBA_PTR_TO_JSON(utc_create_end, utcCreateEnd_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailListOfBuyerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page_index, pageIndex_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(utc_create_begin, utcCreateBegin_);
      DARABONBA_PTR_FROM_JSON(utc_create_end, utcCreateEnd_);
    };
    ChangeDetailListOfBuyerRequest() = default ;
    ChangeDetailListOfBuyerRequest(const ChangeDetailListOfBuyerRequest &) = default ;
    ChangeDetailListOfBuyerRequest(ChangeDetailListOfBuyerRequest &&) = default ;
    ChangeDetailListOfBuyerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailListOfBuyerRequest() = default ;
    ChangeDetailListOfBuyerRequest& operator=(const ChangeDetailListOfBuyerRequest &) = default ;
    ChangeDetailListOfBuyerRequest& operator=(ChangeDetailListOfBuyerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageIndex_ == nullptr
        && return this->pageSize_ == nullptr && return this->utcCreateBegin_ == nullptr && return this->utcCreateEnd_ == nullptr; };
    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ChangeDetailListOfBuyerRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ChangeDetailListOfBuyerRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // utcCreateBegin Field Functions 
    bool hasUtcCreateBegin() const { return this->utcCreateBegin_ != nullptr;};
    void deleteUtcCreateBegin() { this->utcCreateBegin_ = nullptr;};
    inline int64_t utcCreateBegin() const { DARABONBA_PTR_GET_DEFAULT(utcCreateBegin_, 0L) };
    inline ChangeDetailListOfBuyerRequest& setUtcCreateBegin(int64_t utcCreateBegin) { DARABONBA_PTR_SET_VALUE(utcCreateBegin_, utcCreateBegin) };


    // utcCreateEnd Field Functions 
    bool hasUtcCreateEnd() const { return this->utcCreateEnd_ != nullptr;};
    void deleteUtcCreateEnd() { this->utcCreateEnd_ = nullptr;};
    inline int64_t utcCreateEnd() const { DARABONBA_PTR_GET_DEFAULT(utcCreateEnd_, 0L) };
    inline ChangeDetailListOfBuyerRequest& setUtcCreateEnd(int64_t utcCreateEnd) { DARABONBA_PTR_SET_VALUE(utcCreateEnd_, utcCreateEnd) };


  protected:
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> utcCreateBegin_ = nullptr;
    std::shared_ptr<int64_t> utcCreateEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif

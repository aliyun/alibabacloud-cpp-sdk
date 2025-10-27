// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPORTITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYPORTITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyPortItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyPortItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyPortItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribePropertyPortItemRequest() = default ;
    DescribePropertyPortItemRequest(const DescribePropertyPortItemRequest &) = default ;
    DescribePropertyPortItemRequest(DescribePropertyPortItemRequest &&) = default ;
    DescribePropertyPortItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyPortItemRequest() = default ;
    DescribePropertyPortItemRequest& operator=(const DescribePropertyPortItemRequest &) = default ;
    DescribePropertyPortItemRequest& operator=(DescribePropertyPortItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->forceFlush_ == nullptr && return this->pageSize_ == nullptr && return this->port_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyPortItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // forceFlush Field Functions 
    bool hasForceFlush() const { return this->forceFlush_ != nullptr;};
    void deleteForceFlush() { this->forceFlush_ = nullptr;};
    inline bool forceFlush() const { DARABONBA_PTR_GET_DEFAULT(forceFlush_, false) };
    inline DescribePropertyPortItemRequest& setForceFlush(bool forceFlush) { DARABONBA_PTR_SET_VALUE(forceFlush_, forceFlush) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyPortItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribePropertyPortItemRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether to forcefully refresh the data that you want to query.
    std::shared_ptr<bool> forceFlush_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The port number.
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUUIDSBYWEBPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUUIDSBYWEBPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUuidsByWebPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUuidsByWebPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WebPath, webPath_);
    };
    friend void from_json(const Darabonba::Json& j, ListUuidsByWebPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WebPath, webPath_);
    };
    ListUuidsByWebPathRequest() = default ;
    ListUuidsByWebPathRequest(const ListUuidsByWebPathRequest &) = default ;
    ListUuidsByWebPathRequest(ListUuidsByWebPathRequest &&) = default ;
    ListUuidsByWebPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUuidsByWebPathRequest() = default ;
    ListUuidsByWebPathRequest& operator=(const ListUuidsByWebPathRequest &) = default ;
    ListUuidsByWebPathRequest& operator=(ListUuidsByWebPathRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->type_ == nullptr && return this->webPath_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUuidsByWebPathRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUuidsByWebPathRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListUuidsByWebPathRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // webPath Field Functions 
    bool hasWebPath() const { return this->webPath_ != nullptr;};
    void deleteWebPath() { this->webPath_ = nullptr;};
    inline string webPath() const { DARABONBA_PTR_GET_DEFAULT(webPath_, "") };
    inline ListUuidsByWebPathRequest& setWebPath(string webPath) { DARABONBA_PTR_SET_VALUE(webPath_, webPath) };


  protected:
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The path type of the web directory. Valid values:
    // 
    // *   **def**: automatically identified
    // *   **customize**: manually added
    std::shared_ptr<string> type_ = nullptr;
    // The path to the web directory.
    std::shared_ptr<string> webPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

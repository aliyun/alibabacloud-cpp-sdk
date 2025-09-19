// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetModuleConfigRequest() = default ;
    GetModuleConfigRequest(const GetModuleConfigRequest &) = default ;
    GetModuleConfigRequest(GetModuleConfigRequest &&) = default ;
    GetModuleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigRequest() = default ;
    GetModuleConfigRequest& operator=(const GetModuleConfigRequest &) = default ;
    GetModuleConfigRequest& operator=(GetModuleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->pageSize_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline GetModuleConfigRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetModuleConfigRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The number of the page to return.
    std::shared_ptr<string> currentPage_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<string> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

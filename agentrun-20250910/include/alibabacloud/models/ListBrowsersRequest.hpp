// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBROWSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBROWSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListBrowsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrowsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(browserName, browserName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrowsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(browserName, browserName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListBrowsersRequest() = default ;
    ListBrowsersRequest(const ListBrowsersRequest &) = default ;
    ListBrowsersRequest(ListBrowsersRequest &&) = default ;
    ListBrowsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrowsersRequest() = default ;
    ListBrowsersRequest& operator=(const ListBrowsersRequest &) = default ;
    ListBrowsersRequest& operator=(ListBrowsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->browserName_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->status_ != nullptr; };
    // browserName Field Functions 
    bool hasBrowserName() const { return this->browserName_ != nullptr;};
    void deleteBrowserName() { this->browserName_ = nullptr;};
    inline string browserName() const { DARABONBA_PTR_GET_DEFAULT(browserName_, "") };
    inline ListBrowsersRequest& setBrowserName(string browserName) { DARABONBA_PTR_SET_VALUE(browserName_, browserName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBrowsersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBrowsersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBrowsersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 根据浏览器实例名称进行模糊匹配过滤
    std::shared_ptr<string> browserName_ = nullptr;
    // 当前页码，从1开始计数
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // 每页返回的记录数量
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // 根据浏览器实例的运行状态进行过滤，可选值：CREATING、READY、DELETING等
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif

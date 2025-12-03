// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSBYAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSBYAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePluginsByApiResponseBodyPlugins.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginsByApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginsByApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Plugins, plugins_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginsByApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Plugins, plugins_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePluginsByApiResponseBody() = default ;
    DescribePluginsByApiResponseBody(const DescribePluginsByApiResponseBody &) = default ;
    DescribePluginsByApiResponseBody(DescribePluginsByApiResponseBody &&) = default ;
    DescribePluginsByApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginsByApiResponseBody() = default ;
    DescribePluginsByApiResponseBody& operator=(const DescribePluginsByApiResponseBody &) = default ;
    DescribePluginsByApiResponseBody& operator=(DescribePluginsByApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->plugins_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePluginsByApiResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePluginsByApiResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // plugins Field Functions 
    bool hasPlugins() const { return this->plugins_ != nullptr;};
    void deletePlugins() { this->plugins_ = nullptr;};
    inline const DescribePluginsByApiResponseBodyPlugins & plugins() const { DARABONBA_PTR_GET_CONST(plugins_, DescribePluginsByApiResponseBodyPlugins) };
    inline DescribePluginsByApiResponseBodyPlugins plugins() { DARABONBA_PTR_GET(plugins_, DescribePluginsByApiResponseBodyPlugins) };
    inline DescribePluginsByApiResponseBody& setPlugins(const DescribePluginsByApiResponseBodyPlugins & plugins) { DARABONBA_PTR_SET_VALUE(plugins_, plugins) };
    inline DescribePluginsByApiResponseBody& setPlugins(DescribePluginsByApiResponseBodyPlugins && plugins) { DARABONBA_PTR_SET_RVALUE(plugins_, plugins) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginsByApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePluginsByApiResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The plug-in information. The information is an array that consists of PluginAttribute data.
    std::shared_ptr<DescribePluginsByApiResponseBodyPlugins> plugins_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEIMAGEREGISTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PAGEIMAGEREGISTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PageImageRegistryResponseBodyList.hpp>
#include <alibabacloud/models/PageImageRegistryResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PageImageRegistryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageImageRegistryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PageImageRegistryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PageImageRegistryResponseBody() = default ;
    PageImageRegistryResponseBody(const PageImageRegistryResponseBody &) = default ;
    PageImageRegistryResponseBody(PageImageRegistryResponseBody &&) = default ;
    PageImageRegistryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageImageRegistryResponseBody() = default ;
    PageImageRegistryResponseBody& operator=(const PageImageRegistryResponseBody &) = default ;
    PageImageRegistryResponseBody& operator=(PageImageRegistryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->pageInfo_ != nullptr && this->requestId_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<PageImageRegistryResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<PageImageRegistryResponseBodyList>) };
    inline vector<PageImageRegistryResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<PageImageRegistryResponseBodyList>) };
    inline PageImageRegistryResponseBody& setList(const vector<PageImageRegistryResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline PageImageRegistryResponseBody& setList(vector<PageImageRegistryResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const PageImageRegistryResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, PageImageRegistryResponseBodyPageInfo) };
    inline PageImageRegistryResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, PageImageRegistryResponseBodyPageInfo) };
    inline PageImageRegistryResponseBody& setPageInfo(const PageImageRegistryResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline PageImageRegistryResponseBody& setPageInfo(PageImageRegistryResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PageImageRegistryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of image repositories.
    std::shared_ptr<vector<PageImageRegistryResponseBodyList>> list_ = nullptr;
    // The pagination information.
    std::shared_ptr<PageImageRegistryResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

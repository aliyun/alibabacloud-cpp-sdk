// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataQualityTemplatesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityTemplatesResponseBody() = default ;
    ListDataQualityTemplatesResponseBody(const ListDataQualityTemplatesResponseBody &) = default ;
    ListDataQualityTemplatesResponseBody(ListDataQualityTemplatesResponseBody &&) = default ;
    ListDataQualityTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityTemplatesResponseBody() = default ;
    ListDataQualityTemplatesResponseBody& operator=(const ListDataQualityTemplatesResponseBody &) = default ;
    ListDataQualityTemplatesResponseBody& operator=(ListDataQualityTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListDataQualityTemplatesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListDataQualityTemplatesResponseBodyPageInfo) };
    inline ListDataQualityTemplatesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListDataQualityTemplatesResponseBodyPageInfo) };
    inline ListDataQualityTemplatesResponseBody& setPageInfo(const ListDataQualityTemplatesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListDataQualityTemplatesResponseBody& setPageInfo(ListDataQualityTemplatesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Paged query results of data quality rule templates.
    std::shared_ptr<ListDataQualityTemplatesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The API request ID, which is generated as a UUID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

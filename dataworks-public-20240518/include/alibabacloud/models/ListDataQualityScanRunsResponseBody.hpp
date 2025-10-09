// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataQualityScanRunsResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScanRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScanRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScanRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityScanRunsResponseBody() = default ;
    ListDataQualityScanRunsResponseBody(const ListDataQualityScanRunsResponseBody &) = default ;
    ListDataQualityScanRunsResponseBody(ListDataQualityScanRunsResponseBody &&) = default ;
    ListDataQualityScanRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScanRunsResponseBody() = default ;
    ListDataQualityScanRunsResponseBody& operator=(const ListDataQualityScanRunsResponseBody &) = default ;
    ListDataQualityScanRunsResponseBody& operator=(ListDataQualityScanRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListDataQualityScanRunsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListDataQualityScanRunsResponseBodyPageInfo) };
    inline ListDataQualityScanRunsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, ListDataQualityScanRunsResponseBodyPageInfo) };
    inline ListDataQualityScanRunsResponseBody& setPageInfo(const ListDataQualityScanRunsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListDataQualityScanRunsResponseBody& setPageInfo(ListDataQualityScanRunsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityScanRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The page information.
    std::shared_ptr<ListDataQualityScanRunsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

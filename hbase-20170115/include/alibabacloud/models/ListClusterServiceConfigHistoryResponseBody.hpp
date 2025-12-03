// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClusterServiceConfigHistoryResponseBodyConfigHistoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class ListClusterServiceConfigHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterServiceConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigHistoryList, configHistoryList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterServiceConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigHistoryList, configHistoryList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListClusterServiceConfigHistoryResponseBody() = default ;
    ListClusterServiceConfigHistoryResponseBody(const ListClusterServiceConfigHistoryResponseBody &) = default ;
    ListClusterServiceConfigHistoryResponseBody(ListClusterServiceConfigHistoryResponseBody &&) = default ;
    ListClusterServiceConfigHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterServiceConfigHistoryResponseBody() = default ;
    ListClusterServiceConfigHistoryResponseBody& operator=(const ListClusterServiceConfigHistoryResponseBody &) = default ;
    ListClusterServiceConfigHistoryResponseBody& operator=(ListClusterServiceConfigHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configHistoryList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageRecordCount_ == nullptr && return this->requestId_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // configHistoryList Field Functions 
    bool hasConfigHistoryList() const { return this->configHistoryList_ != nullptr;};
    void deleteConfigHistoryList() { this->configHistoryList_ = nullptr;};
    inline const ListClusterServiceConfigHistoryResponseBodyConfigHistoryList & configHistoryList() const { DARABONBA_PTR_GET_CONST(configHistoryList_, ListClusterServiceConfigHistoryResponseBodyConfigHistoryList) };
    inline ListClusterServiceConfigHistoryResponseBodyConfigHistoryList configHistoryList() { DARABONBA_PTR_GET(configHistoryList_, ListClusterServiceConfigHistoryResponseBodyConfigHistoryList) };
    inline ListClusterServiceConfigHistoryResponseBody& setConfigHistoryList(const ListClusterServiceConfigHistoryResponseBodyConfigHistoryList & configHistoryList) { DARABONBA_PTR_SET_VALUE(configHistoryList_, configHistoryList) };
    inline ListClusterServiceConfigHistoryResponseBody& setConfigHistoryList(ListClusterServiceConfigHistoryResponseBodyConfigHistoryList && configHistoryList) { DARABONBA_PTR_SET_RVALUE(configHistoryList_, configHistoryList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListClusterServiceConfigHistoryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListClusterServiceConfigHistoryResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterServiceConfigHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListClusterServiceConfigHistoryResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    std::shared_ptr<ListClusterServiceConfigHistoryResponseBodyConfigHistoryList> configHistoryList_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif

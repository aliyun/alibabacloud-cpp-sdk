// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormInstanceListResponseBodyInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetLindormInstanceListResponseBody() = default ;
    GetLindormInstanceListResponseBody(const GetLindormInstanceListResponseBody &) = default ;
    GetLindormInstanceListResponseBody(GetLindormInstanceListResponseBody &&) = default ;
    GetLindormInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormInstanceListResponseBody() = default ;
    GetLindormInstanceListResponseBody& operator=(const GetLindormInstanceListResponseBody &) = default ;
    GetLindormInstanceListResponseBody& operator=(GetLindormInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<GetLindormInstanceListResponseBodyInstanceList> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<GetLindormInstanceListResponseBodyInstanceList>) };
    inline vector<GetLindormInstanceListResponseBodyInstanceList> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<GetLindormInstanceListResponseBodyInstanceList>) };
    inline GetLindormInstanceListResponseBody& setInstanceList(const vector<GetLindormInstanceListResponseBodyInstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline GetLindormInstanceListResponseBody& setInstanceList(vector<GetLindormInstanceListResponseBodyInstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetLindormInstanceListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetLindormInstanceListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLindormInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetLindormInstanceListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The instances.
    std::shared_ptr<vector<GetLindormInstanceListResponseBodyInstanceList>> instanceList_ = nullptr;
    // The number of returned pages.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of instances that are returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned instances.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif

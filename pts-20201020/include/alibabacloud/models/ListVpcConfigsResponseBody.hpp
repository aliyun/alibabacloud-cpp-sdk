// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcConfigsResponseBodyVpcConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListVpcConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpcConfigList, vpcConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpcConfigList, vpcConfigList_);
    };
    ListVpcConfigsResponseBody() = default ;
    ListVpcConfigsResponseBody(const ListVpcConfigsResponseBody &) = default ;
    ListVpcConfigsResponseBody(ListVpcConfigsResponseBody &&) = default ;
    ListVpcConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcConfigsResponseBody() = default ;
    ListVpcConfigsResponseBody& operator=(const ListVpcConfigsResponseBody &) = default ;
    ListVpcConfigsResponseBody& operator=(ListVpcConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vpcConfigList_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVpcConfigsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVpcConfigsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVpcConfigsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListVpcConfigsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcConfigList Field Functions 
    bool hasVpcConfigList() const { return this->vpcConfigList_ != nullptr;};
    void deleteVpcConfigList() { this->vpcConfigList_ = nullptr;};
    inline const vector<ListVpcConfigsResponseBodyVpcConfigList> & vpcConfigList() const { DARABONBA_PTR_GET_CONST(vpcConfigList_, vector<ListVpcConfigsResponseBodyVpcConfigList>) };
    inline vector<ListVpcConfigsResponseBodyVpcConfigList> vpcConfigList() { DARABONBA_PTR_GET(vpcConfigList_, vector<ListVpcConfigsResponseBodyVpcConfigList>) };
    inline ListVpcConfigsResponseBody& setVpcConfigList(const vector<ListVpcConfigsResponseBodyVpcConfigList> & vpcConfigList) { DARABONBA_PTR_SET_VALUE(vpcConfigList_, vpcConfigList) };
    inline ListVpcConfigsResponseBody& setVpcConfigList(vector<ListVpcConfigsResponseBodyVpcConfigList> && vpcConfigList) { DARABONBA_PTR_SET_RVALUE(vpcConfigList_, vpcConfigList) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<ListVpcConfigsResponseBodyVpcConfigList>> vpcConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHAININSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHAININSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListChainInstanceResponseBodyChainInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListChainInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChainInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChainInstances, chainInstances_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChainInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainInstances, chainInstances_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChainInstanceResponseBody() = default ;
    ListChainInstanceResponseBody(const ListChainInstanceResponseBody &) = default ;
    ListChainInstanceResponseBody(ListChainInstanceResponseBody &&) = default ;
    ListChainInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChainInstanceResponseBody() = default ;
    ListChainInstanceResponseBody& operator=(const ListChainInstanceResponseBody &) = default ;
    ListChainInstanceResponseBody& operator=(ListChainInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chainInstances_ != nullptr
        && this->code_ != nullptr && this->instanceId_ != nullptr && this->isSuccess_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // chainInstances Field Functions 
    bool hasChainInstances() const { return this->chainInstances_ != nullptr;};
    void deleteChainInstances() { this->chainInstances_ = nullptr;};
    inline const vector<ListChainInstanceResponseBodyChainInstances> & chainInstances() const { DARABONBA_PTR_GET_CONST(chainInstances_, vector<ListChainInstanceResponseBodyChainInstances>) };
    inline vector<ListChainInstanceResponseBodyChainInstances> chainInstances() { DARABONBA_PTR_GET(chainInstances_, vector<ListChainInstanceResponseBodyChainInstances>) };
    inline ListChainInstanceResponseBody& setChainInstances(const vector<ListChainInstanceResponseBodyChainInstances> & chainInstances) { DARABONBA_PTR_SET_VALUE(chainInstances_, chainInstances) };
    inline ListChainInstanceResponseBody& setChainInstances(vector<ListChainInstanceResponseBodyChainInstances> && chainInstances) { DARABONBA_PTR_SET_RVALUE(chainInstances_, chainInstances) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChainInstanceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChainInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListChainInstanceResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChainInstanceResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChainInstanceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChainInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListChainInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries to return on each page.
    std::shared_ptr<vector<ListChainInstanceResponseBodyChainInstances>> chainInstances_ = nullptr;
    // The version of the delivery chain.
    std::shared_ptr<string> code_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The execution record of the delivery chain.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // 30
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // Indicates whether the operation is successful.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the Container Registry instance.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the repository.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif

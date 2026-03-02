// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRUNTIMETOKENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRUNTIMETOKENSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListRuntimeTokensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRuntimeTokensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRuntimeTokensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
    };
    ListRuntimeTokensRequest() = default ;
    ListRuntimeTokensRequest(const ListRuntimeTokensRequest &) = default ;
    ListRuntimeTokensRequest(ListRuntimeTokensRequest &&) = default ;
    ListRuntimeTokensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRuntimeTokensRequest() = default ;
    ListRuntimeTokensRequest& operator=(const ListRuntimeTokensRequest &) = default ;
    ListRuntimeTokensRequest& operator=(ListRuntimeTokensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pbcId_ == nullptr
        && this->serviceGroupId_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ListRuntimeTokensRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListRuntimeTokensRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListRuntimeTokensRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListRuntimeTokensRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListRuntimeTokensRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline ListRuntimeTokensRequest& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline int64_t getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, 0L) };
    inline ListRuntimeTokensRequest& setServiceGroupId(int64_t serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


  protected:
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<int64_t> pbcId_ {};
    shared_ptr<int64_t> serviceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

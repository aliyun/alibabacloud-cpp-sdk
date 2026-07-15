// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListConsumerGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListConsumerGroupsRequest() = default ;
    ListConsumerGroupsRequest(const ListConsumerGroupsRequest &) = default ;
    ListConsumerGroupsRequest(ListConsumerGroupsRequest &&) = default ;
    ListConsumerGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerGroupsRequest() = default ;
    ListConsumerGroupsRequest& operator=(const ListConsumerGroupsRequest &) = default ;
    ListConsumerGroupsRequest& operator=(ListConsumerGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayType_ == nullptr
        && this->nameLike_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline ListConsumerGroupsRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListConsumerGroupsRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConsumerGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConsumerGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> gatewayType_ {};
    shared_ptr<string> nameLike_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

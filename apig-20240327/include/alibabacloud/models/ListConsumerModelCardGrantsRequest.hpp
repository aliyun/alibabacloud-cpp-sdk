// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERMODELCARDGRANTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERMODELCARDGRANTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListConsumerModelCardGrantsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerModelCardGrantsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelCardId, modelCardId_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(principalId, principalId_);
      DARABONBA_PTR_TO_JSON(principalType, principalType_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerModelCardGrantsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelCardId, modelCardId_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(principalId, principalId_);
      DARABONBA_PTR_FROM_JSON(principalType, principalType_);
    };
    ListConsumerModelCardGrantsRequest() = default ;
    ListConsumerModelCardGrantsRequest(const ListConsumerModelCardGrantsRequest &) = default ;
    ListConsumerModelCardGrantsRequest(ListConsumerModelCardGrantsRequest &&) = default ;
    ListConsumerModelCardGrantsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerModelCardGrantsRequest() = default ;
    ListConsumerModelCardGrantsRequest& operator=(const ListConsumerModelCardGrantsRequest &) = default ;
    ListConsumerModelCardGrantsRequest& operator=(ListConsumerModelCardGrantsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelCardId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->principalId_ == nullptr && this->principalType_ == nullptr; };
    // modelCardId Field Functions 
    bool hasModelCardId() const { return this->modelCardId_ != nullptr;};
    void deleteModelCardId() { this->modelCardId_ = nullptr;};
    inline string getModelCardId() const { DARABONBA_PTR_GET_DEFAULT(modelCardId_, "") };
    inline ListConsumerModelCardGrantsRequest& setModelCardId(string modelCardId) { DARABONBA_PTR_SET_VALUE(modelCardId_, modelCardId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConsumerModelCardGrantsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConsumerModelCardGrantsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline ListConsumerModelCardGrantsRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline ListConsumerModelCardGrantsRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


  protected:
    // Filters by model card ID for reverse lookup.
    shared_ptr<string> modelCardId_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // Filters by principal ID. This parameter must be paired with principalType.
    shared_ptr<string> principalId_ {};
    // Filters by principal type. Valid values: Consumer and ConsumerGroup. This parameter must be paired with principalId.
    shared_ptr<string> principalType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

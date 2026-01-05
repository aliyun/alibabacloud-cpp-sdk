// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERAUTHORIZATIONRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERAUTHORIZATIONRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListConsumerAuthorizationRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerAuthorizationRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiNameLike, apiNameLike_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerAuthorizationRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiNameLike, apiNameLike_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ListConsumerAuthorizationRulesRequest() = default ;
    ListConsumerAuthorizationRulesRequest(const ListConsumerAuthorizationRulesRequest &) = default ;
    ListConsumerAuthorizationRulesRequest(ListConsumerAuthorizationRulesRequest &&) = default ;
    ListConsumerAuthorizationRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerAuthorizationRulesRequest() = default ;
    ListConsumerAuthorizationRulesRequest& operator=(const ListConsumerAuthorizationRulesRequest &) = default ;
    ListConsumerAuthorizationRulesRequest& operator=(ListConsumerAuthorizationRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiNameLike_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // apiNameLike Field Functions 
    bool hasApiNameLike() const { return this->apiNameLike_ != nullptr;};
    void deleteApiNameLike() { this->apiNameLike_ = nullptr;};
    inline string getApiNameLike() const { DARABONBA_PTR_GET_DEFAULT(apiNameLike_, "") };
    inline ListConsumerAuthorizationRulesRequest& setApiNameLike(string apiNameLike) { DARABONBA_PTR_SET_VALUE(apiNameLike_, apiNameLike) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConsumerAuthorizationRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConsumerAuthorizationRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> apiNameLike_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

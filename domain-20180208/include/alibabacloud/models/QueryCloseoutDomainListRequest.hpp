// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOSEOUTDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOSEOUTDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryCloseoutDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloseoutDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentId, currentId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloseoutDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentId, currentId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    QueryCloseoutDomainListRequest() = default ;
    QueryCloseoutDomainListRequest(const QueryCloseoutDomainListRequest &) = default ;
    QueryCloseoutDomainListRequest(QueryCloseoutDomainListRequest &&) = default ;
    QueryCloseoutDomainListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloseoutDomainListRequest() = default ;
    QueryCloseoutDomainListRequest& operator=(const QueryCloseoutDomainListRequest &) = default ;
    QueryCloseoutDomainListRequest& operator=(QueryCloseoutDomainListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentId_ == nullptr
        && this->pageSize_ == nullptr; };
    // currentId Field Functions 
    bool hasCurrentId() const { return this->currentId_ != nullptr;};
    void deleteCurrentId() { this->currentId_ = nullptr;};
    inline int64_t getCurrentId() const { DARABONBA_PTR_GET_DEFAULT(currentId_, 0L) };
    inline QueryCloseoutDomainListRequest& setCurrentId(int64_t currentId) { DARABONBA_PTR_SET_VALUE(currentId_, currentId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryCloseoutDomainListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<int64_t> currentId_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif

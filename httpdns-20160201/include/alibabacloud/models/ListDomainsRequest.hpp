// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class ListDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Search, search_);
      DARABONBA_PTR_TO_JSON(WithoutMeteringData, withoutMeteringData_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
      DARABONBA_PTR_FROM_JSON(WithoutMeteringData, withoutMeteringData_);
    };
    ListDomainsRequest() = default ;
    ListDomainsRequest(const ListDomainsRequest &) = default ;
    ListDomainsRequest(ListDomainsRequest &&) = default ;
    ListDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsRequest() = default ;
    ListDomainsRequest& operator=(const ListDomainsRequest &) = default ;
    ListDomainsRequest& operator=(ListDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->search_ == nullptr && this->withoutMeteringData_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDomainsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string getSearch() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListDomainsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // withoutMeteringData Field Functions 
    bool hasWithoutMeteringData() const { return this->withoutMeteringData_ != nullptr;};
    void deleteWithoutMeteringData() { this->withoutMeteringData_ = nullptr;};
    inline bool getWithoutMeteringData() const { DARABONBA_PTR_GET_DEFAULT(withoutMeteringData_, false) };
    inline ListDomainsRequest& setWithoutMeteringData(bool withoutMeteringData) { DARABONBA_PTR_SET_VALUE(withoutMeteringData_, withoutMeteringData) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> search_ {};
    shared_ptr<bool> withoutMeteringData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif

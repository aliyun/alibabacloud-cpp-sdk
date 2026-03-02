// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPDPPBCSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPDPPBCSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListPdpPbcsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPdpPbcsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(developerId, developerId_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pbcIds, pbcIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListPdpPbcsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(developerId, developerId_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pbcIds, pbcIds_);
    };
    ListPdpPbcsRequest() = default ;
    ListPdpPbcsRequest(const ListPdpPbcsRequest &) = default ;
    ListPdpPbcsRequest(ListPdpPbcsRequest &&) = default ;
    ListPdpPbcsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPdpPbcsRequest() = default ;
    ListPdpPbcsRequest& operator=(const ListPdpPbcsRequest &) = default ;
    ListPdpPbcsRequest& operator=(ListPdpPbcsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->developerId_ == nullptr && this->keyword_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pbcIds_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ListPdpPbcsRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // developerId Field Functions 
    bool hasDeveloperId() const { return this->developerId_ != nullptr;};
    void deleteDeveloperId() { this->developerId_ = nullptr;};
    inline string getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, "") };
    inline ListPdpPbcsRequest& setDeveloperId(string developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListPdpPbcsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListPdpPbcsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListPdpPbcsRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPdpPbcsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPdpPbcsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pbcIds Field Functions 
    bool hasPbcIds() const { return this->pbcIds_ != nullptr;};
    void deletePbcIds() { this->pbcIds_ = nullptr;};
    inline const vector<int64_t> & getPbcIds() const { DARABONBA_PTR_GET_CONST(pbcIds_, vector<int64_t>) };
    inline vector<int64_t> getPbcIds() { DARABONBA_PTR_GET(pbcIds_, vector<int64_t>) };
    inline ListPdpPbcsRequest& setPbcIds(const vector<int64_t> & pbcIds) { DARABONBA_PTR_SET_VALUE(pbcIds_, pbcIds) };
    inline ListPdpPbcsRequest& setPbcIds(vector<int64_t> && pbcIds) { DARABONBA_PTR_SET_RVALUE(pbcIds_, pbcIds) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> developerId_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<int64_t>> pbcIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

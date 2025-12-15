// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWARESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSoftwaresResponseBodyAdditionalPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListSoftwaresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwaresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwaresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSoftwaresResponseBody() = default ;
    ListSoftwaresResponseBody(const ListSoftwaresResponseBody &) = default ;
    ListSoftwaresResponseBody(ListSoftwaresResponseBody &&) = default ;
    ListSoftwaresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwaresResponseBody() = default ;
    ListSoftwaresResponseBody& operator=(const ListSoftwaresResponseBody &) = default ;
    ListSoftwaresResponseBody& operator=(ListSoftwaresResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPackages_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // additionalPackages Field Functions 
    bool hasAdditionalPackages() const { return this->additionalPackages_ != nullptr;};
    void deleteAdditionalPackages() { this->additionalPackages_ = nullptr;};
    inline const ListSoftwaresResponseBodyAdditionalPackages & additionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, ListSoftwaresResponseBodyAdditionalPackages) };
    inline ListSoftwaresResponseBodyAdditionalPackages additionalPackages() { DARABONBA_PTR_GET(additionalPackages_, ListSoftwaresResponseBodyAdditionalPackages) };
    inline ListSoftwaresResponseBody& setAdditionalPackages(const ListSoftwaresResponseBodyAdditionalPackages & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
    inline ListSoftwaresResponseBody& setAdditionalPackages(ListSoftwaresResponseBodyAdditionalPackages && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListSoftwaresResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListSoftwaresResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSoftwaresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListSoftwaresResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the software that can be installed in the cluster.
    std::shared_ptr<ListSoftwaresResponseBodyAdditionalPackages> additionalPackages_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

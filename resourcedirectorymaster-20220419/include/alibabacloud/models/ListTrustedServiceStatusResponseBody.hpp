// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTrustedServiceStatusResponseBodyEnabledServicePrincipals.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTrustedServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrustedServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnabledServicePrincipals, enabledServicePrincipals_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrustedServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnabledServicePrincipals, enabledServicePrincipals_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTrustedServiceStatusResponseBody() = default ;
    ListTrustedServiceStatusResponseBody(const ListTrustedServiceStatusResponseBody &) = default ;
    ListTrustedServiceStatusResponseBody(ListTrustedServiceStatusResponseBody &&) = default ;
    ListTrustedServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrustedServiceStatusResponseBody() = default ;
    ListTrustedServiceStatusResponseBody& operator=(const ListTrustedServiceStatusResponseBody &) = default ;
    ListTrustedServiceStatusResponseBody& operator=(ListTrustedServiceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabledServicePrincipals_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // enabledServicePrincipals Field Functions 
    bool hasEnabledServicePrincipals() const { return this->enabledServicePrincipals_ != nullptr;};
    void deleteEnabledServicePrincipals() { this->enabledServicePrincipals_ = nullptr;};
    inline const ListTrustedServiceStatusResponseBodyEnabledServicePrincipals & enabledServicePrincipals() const { DARABONBA_PTR_GET_CONST(enabledServicePrincipals_, ListTrustedServiceStatusResponseBodyEnabledServicePrincipals) };
    inline ListTrustedServiceStatusResponseBodyEnabledServicePrincipals enabledServicePrincipals() { DARABONBA_PTR_GET(enabledServicePrincipals_, ListTrustedServiceStatusResponseBodyEnabledServicePrincipals) };
    inline ListTrustedServiceStatusResponseBody& setEnabledServicePrincipals(const ListTrustedServiceStatusResponseBodyEnabledServicePrincipals & enabledServicePrincipals) { DARABONBA_PTR_SET_VALUE(enabledServicePrincipals_, enabledServicePrincipals) };
    inline ListTrustedServiceStatusResponseBody& setEnabledServicePrincipals(ListTrustedServiceStatusResponseBodyEnabledServicePrincipals && enabledServicePrincipals) { DARABONBA_PTR_SET_RVALUE(enabledServicePrincipals_, enabledServicePrincipals) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTrustedServiceStatusResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTrustedServiceStatusResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrustedServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTrustedServiceStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the trusted services that are enabled.
    std::shared_ptr<ListTrustedServiceStatusResponseBodyEnabledServicePrincipals> enabledServicePrincipals_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif

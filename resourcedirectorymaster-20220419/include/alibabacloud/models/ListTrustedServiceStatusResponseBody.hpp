// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class EnabledServicePrincipals : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnabledServicePrincipals& obj) { 
        DARABONBA_PTR_TO_JSON(EnabledServicePrincipal, enabledServicePrincipal_);
      };
      friend void from_json(const Darabonba::Json& j, EnabledServicePrincipals& obj) { 
        DARABONBA_PTR_FROM_JSON(EnabledServicePrincipal, enabledServicePrincipal_);
      };
      EnabledServicePrincipals() = default ;
      EnabledServicePrincipals(const EnabledServicePrincipals &) = default ;
      EnabledServicePrincipals(EnabledServicePrincipals &&) = default ;
      EnabledServicePrincipals(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnabledServicePrincipals() = default ;
      EnabledServicePrincipals& operator=(const EnabledServicePrincipals &) = default ;
      EnabledServicePrincipals& operator=(EnabledServicePrincipals &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EnabledServicePrincipal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnabledServicePrincipal& obj) { 
          DARABONBA_PTR_TO_JSON(EnableTime, enableTime_);
          DARABONBA_PTR_TO_JSON(ServicePrincipal, servicePrincipal_);
        };
        friend void from_json(const Darabonba::Json& j, EnabledServicePrincipal& obj) { 
          DARABONBA_PTR_FROM_JSON(EnableTime, enableTime_);
          DARABONBA_PTR_FROM_JSON(ServicePrincipal, servicePrincipal_);
        };
        EnabledServicePrincipal() = default ;
        EnabledServicePrincipal(const EnabledServicePrincipal &) = default ;
        EnabledServicePrincipal(EnabledServicePrincipal &&) = default ;
        EnabledServicePrincipal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnabledServicePrincipal() = default ;
        EnabledServicePrincipal& operator=(const EnabledServicePrincipal &) = default ;
        EnabledServicePrincipal& operator=(EnabledServicePrincipal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableTime_ == nullptr
        && this->servicePrincipal_ == nullptr; };
        // enableTime Field Functions 
        bool hasEnableTime() const { return this->enableTime_ != nullptr;};
        void deleteEnableTime() { this->enableTime_ = nullptr;};
        inline string getEnableTime() const { DARABONBA_PTR_GET_DEFAULT(enableTime_, "") };
        inline EnabledServicePrincipal& setEnableTime(string enableTime) { DARABONBA_PTR_SET_VALUE(enableTime_, enableTime) };


        // servicePrincipal Field Functions 
        bool hasServicePrincipal() const { return this->servicePrincipal_ != nullptr;};
        void deleteServicePrincipal() { this->servicePrincipal_ = nullptr;};
        inline string getServicePrincipal() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipal_, "") };
        inline EnabledServicePrincipal& setServicePrincipal(string servicePrincipal) { DARABONBA_PTR_SET_VALUE(servicePrincipal_, servicePrincipal) };


      protected:
        // The time when the trusted service was enabled.
        shared_ptr<string> enableTime_ {};
        // The identifier of the trusted service.
        shared_ptr<string> servicePrincipal_ {};
      };

      virtual bool empty() const override { return this->enabledServicePrincipal_ == nullptr; };
      // enabledServicePrincipal Field Functions 
      bool hasEnabledServicePrincipal() const { return this->enabledServicePrincipal_ != nullptr;};
      void deleteEnabledServicePrincipal() { this->enabledServicePrincipal_ = nullptr;};
      inline const vector<EnabledServicePrincipals::EnabledServicePrincipal> & getEnabledServicePrincipal() const { DARABONBA_PTR_GET_CONST(enabledServicePrincipal_, vector<EnabledServicePrincipals::EnabledServicePrincipal>) };
      inline vector<EnabledServicePrincipals::EnabledServicePrincipal> getEnabledServicePrincipal() { DARABONBA_PTR_GET(enabledServicePrincipal_, vector<EnabledServicePrincipals::EnabledServicePrincipal>) };
      inline EnabledServicePrincipals& setEnabledServicePrincipal(const vector<EnabledServicePrincipals::EnabledServicePrincipal> & enabledServicePrincipal) { DARABONBA_PTR_SET_VALUE(enabledServicePrincipal_, enabledServicePrincipal) };
      inline EnabledServicePrincipals& setEnabledServicePrincipal(vector<EnabledServicePrincipals::EnabledServicePrincipal> && enabledServicePrincipal) { DARABONBA_PTR_SET_RVALUE(enabledServicePrincipal_, enabledServicePrincipal) };


    protected:
      shared_ptr<vector<EnabledServicePrincipals::EnabledServicePrincipal>> enabledServicePrincipal_ {};
    };

    virtual bool empty() const override { return this->enabledServicePrincipals_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // enabledServicePrincipals Field Functions 
    bool hasEnabledServicePrincipals() const { return this->enabledServicePrincipals_ != nullptr;};
    void deleteEnabledServicePrincipals() { this->enabledServicePrincipals_ = nullptr;};
    inline const ListTrustedServiceStatusResponseBody::EnabledServicePrincipals & getEnabledServicePrincipals() const { DARABONBA_PTR_GET_CONST(enabledServicePrincipals_, ListTrustedServiceStatusResponseBody::EnabledServicePrincipals) };
    inline ListTrustedServiceStatusResponseBody::EnabledServicePrincipals getEnabledServicePrincipals() { DARABONBA_PTR_GET(enabledServicePrincipals_, ListTrustedServiceStatusResponseBody::EnabledServicePrincipals) };
    inline ListTrustedServiceStatusResponseBody& setEnabledServicePrincipals(const ListTrustedServiceStatusResponseBody::EnabledServicePrincipals & enabledServicePrincipals) { DARABONBA_PTR_SET_VALUE(enabledServicePrincipals_, enabledServicePrincipals) };
    inline ListTrustedServiceStatusResponseBody& setEnabledServicePrincipals(ListTrustedServiceStatusResponseBody::EnabledServicePrincipals && enabledServicePrincipals) { DARABONBA_PTR_SET_RVALUE(enabledServicePrincipals_, enabledServicePrincipals) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTrustedServiceStatusResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTrustedServiceStatusResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrustedServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTrustedServiceStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the trusted services that are enabled.
    shared_ptr<ListTrustedServiceStatusResponseBody::EnabledServicePrincipals> enabledServicePrincipals_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif

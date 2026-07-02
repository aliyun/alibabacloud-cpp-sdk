// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONACCESSPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListApplicationAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccessPoints, applicationAccessPoints_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccessPoints, applicationAccessPoints_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationAccessPointsResponseBody() = default ;
    ListApplicationAccessPointsResponseBody(const ListApplicationAccessPointsResponseBody &) = default ;
    ListApplicationAccessPointsResponseBody(ListApplicationAccessPointsResponseBody &&) = default ;
    ListApplicationAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationAccessPointsResponseBody() = default ;
    ListApplicationAccessPointsResponseBody& operator=(const ListApplicationAccessPointsResponseBody &) = default ;
    ListApplicationAccessPointsResponseBody& operator=(ListApplicationAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApplicationAccessPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationAccessPoints& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationAccessPoint, applicationAccessPoint_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationAccessPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationAccessPoint, applicationAccessPoint_);
      };
      ApplicationAccessPoints() = default ;
      ApplicationAccessPoints(const ApplicationAccessPoints &) = default ;
      ApplicationAccessPoints(ApplicationAccessPoints &&) = default ;
      ApplicationAccessPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationAccessPoints() = default ;
      ApplicationAccessPoints& operator=(const ApplicationAccessPoints &) = default ;
      ApplicationAccessPoints& operator=(ApplicationAccessPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApplicationAccessPoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplicationAccessPoint& obj) { 
          DARABONBA_PTR_TO_JSON(AuthenticationMethod, authenticationMethod_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ApplicationAccessPoint& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthenticationMethod, authenticationMethod_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ApplicationAccessPoint() = default ;
        ApplicationAccessPoint(const ApplicationAccessPoint &) = default ;
        ApplicationAccessPoint(ApplicationAccessPoint &&) = default ;
        ApplicationAccessPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplicationAccessPoint() = default ;
        ApplicationAccessPoint& operator=(const ApplicationAccessPoint &) = default ;
        ApplicationAccessPoint& operator=(ApplicationAccessPoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authenticationMethod_ == nullptr
        && this->name_ == nullptr; };
        // authenticationMethod Field Functions 
        bool hasAuthenticationMethod() const { return this->authenticationMethod_ != nullptr;};
        void deleteAuthenticationMethod() { this->authenticationMethod_ = nullptr;};
        inline string getAuthenticationMethod() const { DARABONBA_PTR_GET_DEFAULT(authenticationMethod_, "") };
        inline ApplicationAccessPoint& setAuthenticationMethod(string authenticationMethod) { DARABONBA_PTR_SET_VALUE(authenticationMethod_, authenticationMethod) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ApplicationAccessPoint& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> authenticationMethod_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->applicationAccessPoint_ == nullptr; };
      // applicationAccessPoint Field Functions 
      bool hasApplicationAccessPoint() const { return this->applicationAccessPoint_ != nullptr;};
      void deleteApplicationAccessPoint() { this->applicationAccessPoint_ = nullptr;};
      inline const vector<ApplicationAccessPoints::ApplicationAccessPoint> & getApplicationAccessPoint() const { DARABONBA_PTR_GET_CONST(applicationAccessPoint_, vector<ApplicationAccessPoints::ApplicationAccessPoint>) };
      inline vector<ApplicationAccessPoints::ApplicationAccessPoint> getApplicationAccessPoint() { DARABONBA_PTR_GET(applicationAccessPoint_, vector<ApplicationAccessPoints::ApplicationAccessPoint>) };
      inline ApplicationAccessPoints& setApplicationAccessPoint(const vector<ApplicationAccessPoints::ApplicationAccessPoint> & applicationAccessPoint) { DARABONBA_PTR_SET_VALUE(applicationAccessPoint_, applicationAccessPoint) };
      inline ApplicationAccessPoints& setApplicationAccessPoint(vector<ApplicationAccessPoints::ApplicationAccessPoint> && applicationAccessPoint) { DARABONBA_PTR_SET_RVALUE(applicationAccessPoint_, applicationAccessPoint) };


    protected:
      shared_ptr<vector<ApplicationAccessPoints::ApplicationAccessPoint>> applicationAccessPoint_ {};
    };

    virtual bool empty() const override { return this->applicationAccessPoints_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applicationAccessPoints Field Functions 
    bool hasApplicationAccessPoints() const { return this->applicationAccessPoints_ != nullptr;};
    void deleteApplicationAccessPoints() { this->applicationAccessPoints_ = nullptr;};
    inline const ListApplicationAccessPointsResponseBody::ApplicationAccessPoints & getApplicationAccessPoints() const { DARABONBA_PTR_GET_CONST(applicationAccessPoints_, ListApplicationAccessPointsResponseBody::ApplicationAccessPoints) };
    inline ListApplicationAccessPointsResponseBody::ApplicationAccessPoints getApplicationAccessPoints() { DARABONBA_PTR_GET(applicationAccessPoints_, ListApplicationAccessPointsResponseBody::ApplicationAccessPoints) };
    inline ListApplicationAccessPointsResponseBody& setApplicationAccessPoints(const ListApplicationAccessPointsResponseBody::ApplicationAccessPoints & applicationAccessPoints) { DARABONBA_PTR_SET_VALUE(applicationAccessPoints_, applicationAccessPoints) };
    inline ListApplicationAccessPointsResponseBody& setApplicationAccessPoints(ListApplicationAccessPointsResponseBody::ApplicationAccessPoints && applicationAccessPoints) { DARABONBA_PTR_SET_RVALUE(applicationAccessPoints_, applicationAccessPoints) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApplicationAccessPointsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationAccessPointsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationAccessPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListApplicationAccessPointsResponseBody::ApplicationAccessPoints> applicationAccessPoints_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

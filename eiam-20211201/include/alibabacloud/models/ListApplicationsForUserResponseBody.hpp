// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationsForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationsForUserResponseBody() = default ;
    ListApplicationsForUserResponseBody(const ListApplicationsForUserResponseBody &) = default ;
    ListApplicationsForUserResponseBody(ListApplicationsForUserResponseBody &&) = default ;
    ListApplicationsForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForUserResponseBody() = default ;
    ListApplicationsForUserResponseBody& operator=(const ListApplicationsForUserResponseBody &) = default ;
    ListApplicationsForUserResponseBody& operator=(ListApplicationsForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(HasDirectAuthorization, hasDirectAuthorization_);
        DARABONBA_PTR_TO_JSON(HasInheritAuthorization, hasInheritAuthorization_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(HasDirectAuthorization, hasDirectAuthorization_);
        DARABONBA_PTR_FROM_JSON(HasInheritAuthorization, hasInheritAuthorization_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->hasDirectAuthorization_ == nullptr && this->hasInheritAuthorization_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Applications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // hasDirectAuthorization Field Functions 
      bool hasHasDirectAuthorization() const { return this->hasDirectAuthorization_ != nullptr;};
      void deleteHasDirectAuthorization() { this->hasDirectAuthorization_ = nullptr;};
      inline bool getHasDirectAuthorization() const { DARABONBA_PTR_GET_DEFAULT(hasDirectAuthorization_, false) };
      inline Applications& setHasDirectAuthorization(bool hasDirectAuthorization) { DARABONBA_PTR_SET_VALUE(hasDirectAuthorization_, hasDirectAuthorization) };


      // hasInheritAuthorization Field Functions 
      bool hasHasInheritAuthorization() const { return this->hasInheritAuthorization_ != nullptr;};
      void deleteHasInheritAuthorization() { this->hasInheritAuthorization_ = nullptr;};
      inline bool getHasInheritAuthorization() const { DARABONBA_PTR_GET_DEFAULT(hasInheritAuthorization_, false) };
      inline Applications& setHasInheritAuthorization(bool hasInheritAuthorization) { DARABONBA_PTR_SET_VALUE(hasInheritAuthorization_, hasInheritAuthorization) };


    protected:
      // The ID of the application that the EIAM account can access.
      shared_ptr<string> applicationId_ {};
      // Indicates whether the EIAM account has direct permissions on the application. Valid values:
      // 
      // *   true: The EIAM account has direct permissions on the application.
      // *   false: The EIAM account does not have direct permissions on the application.
      shared_ptr<bool> hasDirectAuthorization_ {};
      // Indicates whether the EIAM account has inherited permissions on the application. Valid values:
      // 
      // *   true: A parent organization or an organization to which the EIAM account belongs has direct permissions on the application.
      // *   false: A parent organization or an organization to which the EIAM account belongs does not have direct permissions on the application.
      shared_ptr<bool> hasInheritAuthorization_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListApplicationsForUserResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListApplicationsForUserResponseBody::Applications>) };
    inline vector<ListApplicationsForUserResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListApplicationsForUserResponseBody::Applications>) };
    inline ListApplicationsForUserResponseBody& setApplications(const vector<ListApplicationsForUserResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsForUserResponseBody& setApplications(vector<ListApplicationsForUserResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationsForUserResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The applications that the EIAM account can access.
    shared_ptr<vector<ListApplicationsForUserResponseBody::Applications>> applications_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

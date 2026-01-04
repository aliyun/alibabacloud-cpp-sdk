// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORGROUPRESPONSEBODY_HPP_
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
  class ListApplicationsForGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationsForGroupResponseBody() = default ;
    ListApplicationsForGroupResponseBody(const ListApplicationsForGroupResponseBody &) = default ;
    ListApplicationsForGroupResponseBody(ListApplicationsForGroupResponseBody &&) = default ;
    ListApplicationsForGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForGroupResponseBody() = default ;
    ListApplicationsForGroupResponseBody& operator=(const ListApplicationsForGroupResponseBody &) = default ;
    ListApplicationsForGroupResponseBody& operator=(ListApplicationsForGroupResponseBody &&) = default ;
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
      // 应用的唯一标识。
      shared_ptr<string> applicationId_ {};
      // 直接分配给当前用户的权限，视为直接授权。
      shared_ptr<bool> hasDirectAuthorization_ {};
      // 通过用户隶属的组织、组获取的权限，视为继承权限。
      shared_ptr<bool> hasInheritAuthorization_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListApplicationsForGroupResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListApplicationsForGroupResponseBody::Applications>) };
    inline vector<ListApplicationsForGroupResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListApplicationsForGroupResponseBody::Applications>) };
    inline ListApplicationsForGroupResponseBody& setApplications(const vector<ListApplicationsForGroupResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsForGroupResponseBody& setApplications(vector<ListApplicationsForGroupResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsForGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationsForGroupResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListApplicationsForGroupResponseBody::Applications>> applications_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif

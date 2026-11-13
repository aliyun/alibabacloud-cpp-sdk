// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONUPDATEDYNAMICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONUPDATEDYNAMICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListApplicationUpdateDynamicsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationUpdateDynamicsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Dynamics, dynamics_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationUpdateDynamicsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Dynamics, dynamics_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationUpdateDynamicsResponseBody() = default ;
    ListApplicationUpdateDynamicsResponseBody(const ListApplicationUpdateDynamicsResponseBody &) = default ;
    ListApplicationUpdateDynamicsResponseBody(ListApplicationUpdateDynamicsResponseBody &&) = default ;
    ListApplicationUpdateDynamicsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationUpdateDynamicsResponseBody() = default ;
    ListApplicationUpdateDynamicsResponseBody& operator=(const ListApplicationUpdateDynamicsResponseBody &) = default ;
    ListApplicationUpdateDynamicsResponseBody& operator=(ListApplicationUpdateDynamicsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Dynamics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dynamics& obj) { 
        DARABONBA_PTR_TO_JSON(Applications, applications_);
        DARABONBA_PTR_TO_JSON(DynamicInfo, dynamicInfo_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Dynamics& obj) { 
        DARABONBA_PTR_FROM_JSON(Applications, applications_);
        DARABONBA_PTR_FROM_JSON(DynamicInfo, dynamicInfo_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Dynamics() = default ;
      Dynamics(const Dynamics &) = default ;
      Dynamics(Dynamics &&) = default ;
      Dynamics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dynamics() = default ;
      Dynamics& operator=(const Dynamics &) = default ;
      Dynamics& operator=(Dynamics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Applications : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Applications& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        };
        friend void from_json(const Darabonba::Json& j, Applications& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
          DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
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
        && this->applicationName_ == nullptr; };
        // applicationId Field Functions 
        bool hasApplicationId() const { return this->applicationId_ != nullptr;};
        void deleteApplicationId() { this->applicationId_ = nullptr;};
        inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
        inline Applications& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline Applications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      protected:
        shared_ptr<int64_t> applicationId_ {};
        shared_ptr<string> applicationName_ {};
      };

      virtual bool empty() const override { return this->applications_ == nullptr
        && this->dynamicInfo_ == nullptr && this->updateTime_ == nullptr; };
      // applications Field Functions 
      bool hasApplications() const { return this->applications_ != nullptr;};
      void deleteApplications() { this->applications_ = nullptr;};
      inline const vector<Dynamics::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Dynamics::Applications>) };
      inline vector<Dynamics::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<Dynamics::Applications>) };
      inline Dynamics& setApplications(const vector<Dynamics::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
      inline Dynamics& setApplications(vector<Dynamics::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


      // dynamicInfo Field Functions 
      bool hasDynamicInfo() const { return this->dynamicInfo_ != nullptr;};
      void deleteDynamicInfo() { this->dynamicInfo_ = nullptr;};
      inline string getDynamicInfo() const { DARABONBA_PTR_GET_DEFAULT(dynamicInfo_, "") };
      inline Dynamics& setDynamicInfo(string dynamicInfo) { DARABONBA_PTR_SET_VALUE(dynamicInfo_, dynamicInfo) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Dynamics& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<vector<Dynamics::Applications>> applications_ {};
      shared_ptr<string> dynamicInfo_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->dynamics_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dynamics Field Functions 
    bool hasDynamics() const { return this->dynamics_ != nullptr;};
    void deleteDynamics() { this->dynamics_ = nullptr;};
    inline const vector<ListApplicationUpdateDynamicsResponseBody::Dynamics> & getDynamics() const { DARABONBA_PTR_GET_CONST(dynamics_, vector<ListApplicationUpdateDynamicsResponseBody::Dynamics>) };
    inline vector<ListApplicationUpdateDynamicsResponseBody::Dynamics> getDynamics() { DARABONBA_PTR_GET(dynamics_, vector<ListApplicationUpdateDynamicsResponseBody::Dynamics>) };
    inline ListApplicationUpdateDynamicsResponseBody& setDynamics(const vector<ListApplicationUpdateDynamicsResponseBody::Dynamics> & dynamics) { DARABONBA_PTR_SET_VALUE(dynamics_, dynamics) };
    inline ListApplicationUpdateDynamicsResponseBody& setDynamics(vector<ListApplicationUpdateDynamicsResponseBody::Dynamics> && dynamics) { DARABONBA_PTR_SET_RVALUE(dynamics_, dynamics) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListApplicationUpdateDynamicsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApplicationUpdateDynamicsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationUpdateDynamicsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationUpdateDynamicsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListApplicationUpdateDynamicsResponseBody::Dynamics>> dynamics_ {};
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

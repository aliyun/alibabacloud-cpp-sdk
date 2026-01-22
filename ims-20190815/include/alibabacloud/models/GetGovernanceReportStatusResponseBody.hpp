// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEREPORTSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEREPORTSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceReportStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceReportStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GovernanceItemsStatus, governanceItemsStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WholeReportStatus, wholeReportStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceReportStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GovernanceItemsStatus, governanceItemsStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WholeReportStatus, wholeReportStatus_);
    };
    GetGovernanceReportStatusResponseBody() = default ;
    GetGovernanceReportStatusResponseBody(const GetGovernanceReportStatusResponseBody &) = default ;
    GetGovernanceReportStatusResponseBody(GetGovernanceReportStatusResponseBody &&) = default ;
    GetGovernanceReportStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceReportStatusResponseBody() = default ;
    GetGovernanceReportStatusResponseBody& operator=(const GetGovernanceReportStatusResponseBody &) = default ;
    GetGovernanceReportStatusResponseBody& operator=(GetGovernanceReportStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GovernanceItemsStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GovernanceItemsStatus& obj) { 
        DARABONBA_PTR_TO_JSON(GovernanceItemStatus, governanceItemStatus_);
      };
      friend void from_json(const Darabonba::Json& j, GovernanceItemsStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(GovernanceItemStatus, governanceItemStatus_);
      };
      GovernanceItemsStatus() = default ;
      GovernanceItemsStatus(const GovernanceItemsStatus &) = default ;
      GovernanceItemsStatus(GovernanceItemsStatus &&) = default ;
      GovernanceItemsStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GovernanceItemsStatus() = default ;
      GovernanceItemsStatus& operator=(const GovernanceItemsStatus &) = default ;
      GovernanceItemsStatus& operator=(GovernanceItemsStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GovernanceItemStatus : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GovernanceItemStatus& obj) { 
          DARABONBA_PTR_TO_JSON(GovernanceItem, governanceItem_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, GovernanceItemStatus& obj) { 
          DARABONBA_PTR_FROM_JSON(GovernanceItem, governanceItem_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        GovernanceItemStatus() = default ;
        GovernanceItemStatus(const GovernanceItemStatus &) = default ;
        GovernanceItemStatus(GovernanceItemStatus &&) = default ;
        GovernanceItemStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GovernanceItemStatus() = default ;
        GovernanceItemStatus& operator=(const GovernanceItemStatus &) = default ;
        GovernanceItemStatus& operator=(GovernanceItemStatus &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->governanceItem_ == nullptr
        && this->status_ == nullptr; };
        // governanceItem Field Functions 
        bool hasGovernanceItem() const { return this->governanceItem_ != nullptr;};
        void deleteGovernanceItem() { this->governanceItem_ = nullptr;};
        inline string getGovernanceItem() const { DARABONBA_PTR_GET_DEFAULT(governanceItem_, "") };
        inline GovernanceItemStatus& setGovernanceItem(string governanceItem) { DARABONBA_PTR_SET_VALUE(governanceItem_, governanceItem) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline GovernanceItemStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> governanceItem_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->governanceItemStatus_ == nullptr; };
      // governanceItemStatus Field Functions 
      bool hasGovernanceItemStatus() const { return this->governanceItemStatus_ != nullptr;};
      void deleteGovernanceItemStatus() { this->governanceItemStatus_ = nullptr;};
      inline const vector<GovernanceItemsStatus::GovernanceItemStatus> & getGovernanceItemStatus() const { DARABONBA_PTR_GET_CONST(governanceItemStatus_, vector<GovernanceItemsStatus::GovernanceItemStatus>) };
      inline vector<GovernanceItemsStatus::GovernanceItemStatus> getGovernanceItemStatus() { DARABONBA_PTR_GET(governanceItemStatus_, vector<GovernanceItemsStatus::GovernanceItemStatus>) };
      inline GovernanceItemsStatus& setGovernanceItemStatus(const vector<GovernanceItemsStatus::GovernanceItemStatus> & governanceItemStatus) { DARABONBA_PTR_SET_VALUE(governanceItemStatus_, governanceItemStatus) };
      inline GovernanceItemsStatus& setGovernanceItemStatus(vector<GovernanceItemsStatus::GovernanceItemStatus> && governanceItemStatus) { DARABONBA_PTR_SET_RVALUE(governanceItemStatus_, governanceItemStatus) };


    protected:
      shared_ptr<vector<GovernanceItemsStatus::GovernanceItemStatus>> governanceItemStatus_ {};
    };

    virtual bool empty() const override { return this->governanceItemsStatus_ == nullptr
        && this->requestId_ == nullptr && this->wholeReportStatus_ == nullptr; };
    // governanceItemsStatus Field Functions 
    bool hasGovernanceItemsStatus() const { return this->governanceItemsStatus_ != nullptr;};
    void deleteGovernanceItemsStatus() { this->governanceItemsStatus_ = nullptr;};
    inline const GetGovernanceReportStatusResponseBody::GovernanceItemsStatus & getGovernanceItemsStatus() const { DARABONBA_PTR_GET_CONST(governanceItemsStatus_, GetGovernanceReportStatusResponseBody::GovernanceItemsStatus) };
    inline GetGovernanceReportStatusResponseBody::GovernanceItemsStatus getGovernanceItemsStatus() { DARABONBA_PTR_GET(governanceItemsStatus_, GetGovernanceReportStatusResponseBody::GovernanceItemsStatus) };
    inline GetGovernanceReportStatusResponseBody& setGovernanceItemsStatus(const GetGovernanceReportStatusResponseBody::GovernanceItemsStatus & governanceItemsStatus) { DARABONBA_PTR_SET_VALUE(governanceItemsStatus_, governanceItemsStatus) };
    inline GetGovernanceReportStatusResponseBody& setGovernanceItemsStatus(GetGovernanceReportStatusResponseBody::GovernanceItemsStatus && governanceItemsStatus) { DARABONBA_PTR_SET_RVALUE(governanceItemsStatus_, governanceItemsStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGovernanceReportStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // wholeReportStatus Field Functions 
    bool hasWholeReportStatus() const { return this->wholeReportStatus_ != nullptr;};
    void deleteWholeReportStatus() { this->wholeReportStatus_ = nullptr;};
    inline string getWholeReportStatus() const { DARABONBA_PTR_GET_DEFAULT(wholeReportStatus_, "") };
    inline GetGovernanceReportStatusResponseBody& setWholeReportStatus(string wholeReportStatus) { DARABONBA_PTR_SET_VALUE(wholeReportStatus_, wholeReportStatus) };


  protected:
    shared_ptr<GetGovernanceReportStatusResponseBody::GovernanceItemsStatus> governanceItemsStatus_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> wholeReportStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif

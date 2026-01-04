// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGDISPATCHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGDISPATCHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAccessLogDispatchStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessLogDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsConfigStatus, slsConfigStatus_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessLogDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsConfigStatus, slsConfigStatus_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebAccessLogDispatchStatusResponseBody() = default ;
    DescribeWebAccessLogDispatchStatusResponseBody(const DescribeWebAccessLogDispatchStatusResponseBody &) = default ;
    DescribeWebAccessLogDispatchStatusResponseBody(DescribeWebAccessLogDispatchStatusResponseBody &&) = default ;
    DescribeWebAccessLogDispatchStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessLogDispatchStatusResponseBody() = default ;
    DescribeWebAccessLogDispatchStatusResponseBody& operator=(const DescribeWebAccessLogDispatchStatusResponseBody &) = default ;
    DescribeWebAccessLogDispatchStatusResponseBody& operator=(DescribeWebAccessLogDispatchStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlsConfigStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsConfigStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, SlsConfigStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
      };
      SlsConfigStatus() = default ;
      SlsConfigStatus(const SlsConfigStatus &) = default ;
      SlsConfigStatus(SlsConfigStatus &&) = default ;
      SlsConfigStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsConfigStatus() = default ;
      SlsConfigStatus& operator=(const SlsConfigStatus &) = default ;
      SlsConfigStatus& operator=(SlsConfigStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->enable_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline SlsConfigStatus& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline SlsConfigStatus& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      // The domain name.
      shared_ptr<string> domain_ {};
      // Indicates whether the log analysis feature is enabled. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> enable_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slsConfigStatus_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebAccessLogDispatchStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsConfigStatus Field Functions 
    bool hasSlsConfigStatus() const { return this->slsConfigStatus_ != nullptr;};
    void deleteSlsConfigStatus() { this->slsConfigStatus_ = nullptr;};
    inline const vector<DescribeWebAccessLogDispatchStatusResponseBody::SlsConfigStatus> & getSlsConfigStatus() const { DARABONBA_PTR_GET_CONST(slsConfigStatus_, vector<DescribeWebAccessLogDispatchStatusResponseBody::SlsConfigStatus>) };
    inline vector<DescribeWebAccessLogDispatchStatusResponseBody::SlsConfigStatus> getSlsConfigStatus() { DARABONBA_PTR_GET(slsConfigStatus_, vector<DescribeWebAccessLogDispatchStatusResponseBody::SlsConfigStatus>) };
    inline DescribeWebAccessLogDispatchStatusResponseBody& setSlsConfigStatus(const vector<DescribeWebAccessLogDispatchStatusResponseBody::SlsConfigStatus> & slsConfigStatus) { DARABONBA_PTR_SET_VALUE(slsConfigStatus_, slsConfigStatus) };
    inline DescribeWebAccessLogDispatchStatusResponseBody& setSlsConfigStatus(vector<DescribeWebAccessLogDispatchStatusResponseBody::SlsConfigStatus> && slsConfigStatus) { DARABONBA_PTR_SET_RVALUE(slsConfigStatus_, slsConfigStatus) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebAccessLogDispatchStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the log analysis feature is enabled for domain names.
    shared_ptr<vector<DescribeWebAccessLogDispatchStatusResponseBody::SlsConfigStatus>> slsConfigStatus_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

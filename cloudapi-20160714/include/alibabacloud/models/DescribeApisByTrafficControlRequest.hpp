// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYTRAFFICCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYTRAFFICCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByTrafficControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByTrafficControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByTrafficControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
    };
    DescribeApisByTrafficControlRequest() = default ;
    DescribeApisByTrafficControlRequest(const DescribeApisByTrafficControlRequest &) = default ;
    DescribeApisByTrafficControlRequest(DescribeApisByTrafficControlRequest &&) = default ;
    DescribeApisByTrafficControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByTrafficControlRequest() = default ;
    DescribeApisByTrafficControlRequest& operator=(const DescribeApisByTrafficControlRequest &) = default ;
    DescribeApisByTrafficControlRequest& operator=(DescribeApisByTrafficControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->securityToken_ == nullptr && this->trafficControlId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisByTrafficControlRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisByTrafficControlRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeApisByTrafficControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string getTrafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline DescribeApisByTrafficControlRequest& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


  protected:
    // The number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    shared_ptr<string> securityToken_ {};
    // The ID of the throttling policy that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> trafficControlId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif

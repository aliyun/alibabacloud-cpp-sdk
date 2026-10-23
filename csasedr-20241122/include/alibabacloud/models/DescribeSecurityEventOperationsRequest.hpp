// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DescribeSecurityEventOperationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityEventId, securityEventId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityEventId, securityEventId_);
    };
    DescribeSecurityEventOperationsRequest() = default ;
    DescribeSecurityEventOperationsRequest(const DescribeSecurityEventOperationsRequest &) = default ;
    DescribeSecurityEventOperationsRequest(DescribeSecurityEventOperationsRequest &&) = default ;
    DescribeSecurityEventOperationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationsRequest() = default ;
    DescribeSecurityEventOperationsRequest& operator=(const DescribeSecurityEventOperationsRequest &) = default ;
    DescribeSecurityEventOperationsRequest& operator=(DescribeSecurityEventOperationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityEventId_ == nullptr; };
    // securityEventId Field Functions 
    bool hasSecurityEventId() const { return this->securityEventId_ != nullptr;};
    void deleteSecurityEventId() { this->securityEventId_ = nullptr;};
    inline int64_t getSecurityEventId() const { DARABONBA_PTR_GET_DEFAULT(securityEventId_, 0L) };
    inline DescribeSecurityEventOperationsRequest& setSecurityEventId(int64_t securityEventId) { DARABONBA_PTR_SET_VALUE(securityEventId_, securityEventId) };


  protected:
    // The ID of the security alert event to be handled.
    // 
    // This parameter is required.
    shared_ptr<int64_t> securityEventId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSKEYLEAKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAccessKeyLeakDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessKeyLeakDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessKeyLeakDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    DescribeAccessKeyLeakDetailRequest() = default ;
    DescribeAccessKeyLeakDetailRequest(const DescribeAccessKeyLeakDetailRequest &) = default ;
    DescribeAccessKeyLeakDetailRequest(DescribeAccessKeyLeakDetailRequest &&) = default ;
    DescribeAccessKeyLeakDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessKeyLeakDetailRequest() = default ;
    DescribeAccessKeyLeakDetailRequest& operator=(const DescribeAccessKeyLeakDetailRequest &) = default ;
    DescribeAccessKeyLeakDetailRequest& operator=(DescribeAccessKeyLeakDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->resourceDirectoryAccountId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeAccessKeyLeakDetailRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeAccessKeyLeakDetailRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The ID of the AccessKey pair leak event.
    // 
    // > You can call the [DescribeAccesskeyLeakList](~~DescribeAccesskeyLeakList~~) operation to obtain the event ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the ID.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

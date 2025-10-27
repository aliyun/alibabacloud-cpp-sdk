// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLOGMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetLogMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
    };
    GetLogMetaRequest() = default ;
    GetLogMetaRequest(const GetLogMetaRequest &) = default ;
    GetLogMetaRequest(GetLogMetaRequest &&) = default ;
    GetLogMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogMetaRequest() = default ;
    GetLogMetaRequest& operator=(const GetLogMetaRequest &) = default ;
    GetLogMetaRequest& operator=(GetLogMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logStore_ == nullptr
        && return this->resourceDirectoryAccountId_ == nullptr; };
    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline GetLogMetaRequest& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline GetLogMetaRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


  protected:
    // The name of the dedicated Logstore in which logs are stored.
    // 
    // >  You can call the [DescribeLogMeta](~~DescribeLogMeta~~) operation to query the name of the Logstore.
    // 
    // This parameter is required.
    std::shared_ptr<string> logStore_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

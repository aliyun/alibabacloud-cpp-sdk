// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeNamespaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceInfo, namespaceInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceInfo, namespaceInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeNamespaceResponseBody() = default ;
    DescribeNamespaceResponseBody(const DescribeNamespaceResponseBody &) = default ;
    DescribeNamespaceResponseBody(DescribeNamespaceResponseBody &&) = default ;
    DescribeNamespaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceResponseBody() = default ;
    DescribeNamespaceResponseBody& operator=(const DescribeNamespaceResponseBody &) = default ;
    DescribeNamespaceResponseBody& operator=(DescribeNamespaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->message_ == nullptr && this->namespace_ == nullptr && this->namespaceInfo_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeNamespaceResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeNamespaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeNamespaceResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceInfo Field Functions 
    bool hasNamespaceInfo() const { return this->namespaceInfo_ != nullptr;};
    void deleteNamespaceInfo() { this->namespaceInfo_ = nullptr;};
    inline const map<string, string> & getNamespaceInfo() const { DARABONBA_PTR_GET_CONST(namespaceInfo_, map<string, string>) };
    inline map<string, string> getNamespaceInfo() { DARABONBA_PTR_GET(namespaceInfo_, map<string, string>) };
    inline DescribeNamespaceResponseBody& setNamespaceInfo(const map<string, string> & namespaceInfo) { DARABONBA_PTR_SET_VALUE(namespaceInfo_, namespaceInfo) };
    inline DescribeNamespaceResponseBody& setNamespaceInfo(map<string, string> && namespaceInfo) { DARABONBA_PTR_SET_RVALUE(namespaceInfo_, namespaceInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNamespaceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNamespaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNamespaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The name of the namespace.
    shared_ptr<string> namespace_ {};
    // The queried namespace.
    shared_ptr<map<string, string>> namespaceInfo_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **success**
    // *   **fail**
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif

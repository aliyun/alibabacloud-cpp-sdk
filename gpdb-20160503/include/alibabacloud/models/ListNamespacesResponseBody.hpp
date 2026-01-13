// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListNamespacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListNamespacesResponseBody() = default ;
    ListNamespacesResponseBody(const ListNamespacesResponseBody &) = default ;
    ListNamespacesResponseBody(ListNamespacesResponseBody &&) = default ;
    ListNamespacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacesResponseBody() = default ;
    ListNamespacesResponseBody& operator=(const ListNamespacesResponseBody &) = default ;
    ListNamespacesResponseBody& operator=(ListNamespacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Namespaces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Namespaces& obj) { 
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      };
      friend void from_json(const Darabonba::Json& j, Namespaces& obj) { 
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      };
      Namespaces() = default ;
      Namespaces(const Namespaces &) = default ;
      Namespaces(Namespaces &&) = default ;
      Namespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Namespaces() = default ;
      Namespaces& operator=(const Namespaces &) = default ;
      Namespaces& operator=(Namespaces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->namespace_ == nullptr; };
      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline const vector<string> & getNamespace() const { DARABONBA_PTR_GET_CONST(namespace_, vector<string>) };
      inline vector<string> getNamespace() { DARABONBA_PTR_GET(namespace_, vector<string>) };
      inline Namespaces& setNamespace(const vector<string> & _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };
      inline Namespaces& setNamespace(vector<string> && _namespace) { DARABONBA_PTR_SET_RVALUE(namespace_, _namespace) };


    protected:
      shared_ptr<vector<string>> namespace_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->DBInstanceId_ == nullptr && this->message_ == nullptr && this->namespaces_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListNamespacesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ListNamespacesResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNamespacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const ListNamespacesResponseBody::Namespaces & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, ListNamespacesResponseBody::Namespaces) };
    inline ListNamespacesResponseBody::Namespaces getNamespaces() { DARABONBA_PTR_GET(namespaces_, ListNamespacesResponseBody::Namespaces) };
    inline ListNamespacesResponseBody& setNamespaces(const ListNamespacesResponseBody::Namespaces & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline ListNamespacesResponseBody& setNamespaces(ListNamespacesResponseBody::Namespaces && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNamespacesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNamespacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNamespacesResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The queried namespaces.
    shared_ptr<ListNamespacesResponseBody::Namespaces> namespaces_ {};
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

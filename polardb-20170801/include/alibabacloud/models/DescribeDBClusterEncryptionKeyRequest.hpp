// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENCRYPTIONKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENCRYPTIONKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterEncryptionKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterEncryptionKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterEncryptionKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    DescribeDBClusterEncryptionKeyRequest() = default ;
    DescribeDBClusterEncryptionKeyRequest(const DescribeDBClusterEncryptionKeyRequest &) = default ;
    DescribeDBClusterEncryptionKeyRequest(DescribeDBClusterEncryptionKeyRequest &&) = default ;
    DescribeDBClusterEncryptionKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterEncryptionKeyRequest() = default ;
    DescribeDBClusterEncryptionKeyRequest& operator=(const DescribeDBClusterEncryptionKeyRequest &) = default ;
    DescribeDBClusterEncryptionKeyRequest& operator=(DescribeDBClusterEncryptionKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DBClusterId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeDBClusterEncryptionKeyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterEncryptionKeyRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> DBClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif

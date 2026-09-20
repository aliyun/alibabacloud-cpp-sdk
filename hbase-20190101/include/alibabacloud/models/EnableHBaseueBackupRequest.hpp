// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEHBASEUEBACKUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEHBASEUEBACKUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class EnableHBaseueBackupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableHBaseueBackupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(HbaseueClusterId, hbaseueClusterId_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
    };
    friend void from_json(const Darabonba::Json& j, EnableHBaseueBackupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_FROM_JSON(HbaseueClusterId, hbaseueClusterId_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
    };
    EnableHBaseueBackupRequest() = default ;
    EnableHBaseueBackupRequest(const EnableHBaseueBackupRequest &) = default ;
    EnableHBaseueBackupRequest(EnableHBaseueBackupRequest &&) = default ;
    EnableHBaseueBackupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableHBaseueBackupRequest() = default ;
    EnableHBaseueBackupRequest& operator=(const EnableHBaseueBackupRequest &) = default ;
    EnableHBaseueBackupRequest& operator=(EnableHBaseueBackupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->coldStorageSize_ == nullptr && this->hbaseueClusterId_ == nullptr && this->nodeCount_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline EnableHBaseueBackupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline int32_t getColdStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, 0) };
    inline EnableHBaseueBackupRequest& setColdStorageSize(int32_t coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // hbaseueClusterId Field Functions 
    bool hasHbaseueClusterId() const { return this->hbaseueClusterId_ != nullptr;};
    void deleteHbaseueClusterId() { this->hbaseueClusterId_ = nullptr;};
    inline string getHbaseueClusterId() const { DARABONBA_PTR_GET_DEFAULT(hbaseueClusterId_, "") };
    inline EnableHBaseueBackupRequest& setHbaseueClusterId(string hbaseueClusterId) { DARABONBA_PTR_SET_VALUE(hbaseueClusterId_, hbaseueClusterId) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline EnableHBaseueBackupRequest& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The cold storage size for the backup service. The minimum value is 800 GB.
    shared_ptr<int32_t> coldStorageSize_ {};
    // The ID of the HBaseue cluster.
    // 
    // This parameter is required.
    shared_ptr<string> hbaseueClusterId_ {};
    // The number of backup nodes.
    // 
    // This parameter is required.
    shared_ptr<int32_t> nodeCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif

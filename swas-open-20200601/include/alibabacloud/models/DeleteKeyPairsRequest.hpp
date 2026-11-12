// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKEYPAIRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKEYPAIRSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DeleteKeyPairsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKeyPairsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(KeyPairNames, keyPairNames_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKeyPairsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(KeyPairNames, keyPairNames_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteKeyPairsRequest() = default ;
    DeleteKeyPairsRequest(const DeleteKeyPairsRequest &) = default ;
    DeleteKeyPairsRequest(DeleteKeyPairsRequest &&) = default ;
    DeleteKeyPairsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKeyPairsRequest() = default ;
    DeleteKeyPairsRequest& operator=(const DeleteKeyPairsRequest &) = default ;
    DeleteKeyPairsRequest& operator=(DeleteKeyPairsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->keyPairNames_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteKeyPairsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // keyPairNames Field Functions 
    bool hasKeyPairNames() const { return this->keyPairNames_ != nullptr;};
    void deleteKeyPairNames() { this->keyPairNames_ = nullptr;};
    inline const vector<string> & getKeyPairNames() const { DARABONBA_PTR_GET_CONST(keyPairNames_, vector<string>) };
    inline vector<string> getKeyPairNames() { DARABONBA_PTR_GET(keyPairNames_, vector<string>) };
    inline DeleteKeyPairsRequest& setKeyPairNames(const vector<string> & keyPairNames) { DARABONBA_PTR_SET_VALUE(keyPairNames_, keyPairNames) };
    inline DeleteKeyPairsRequest& setKeyPairNames(vector<string> && keyPairNames) { DARABONBA_PTR_SET_RVALUE(keyPairNames_, keyPairNames) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteKeyPairsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The names of the SSH key pairs. The name must be 2 to 64 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). The name must start with a letter and cannot start with http\\:// or https\\://. You can specify the names of a maximum of 50 SSH key pairs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> keyPairNames_ {};
    // The region ID of the simple application servers. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKEYPAIRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEKEYPAIRSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteKeyPairsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKeyPairsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKeyPairsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
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
    virtual bool empty() const override { this->keyPairId_ != nullptr
        && this->keyPairName_ != nullptr; };
    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DeleteKeyPairsRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DeleteKeyPairsRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


  protected:
    // The ID of the SSH key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The name of the key pair. The name must conform to the following naming conventions:
    // 
    // *   The name must be 2 to 128 characters in length.
    // *   The name must start with a letter and cannot start with `http://` or `https://`.
    // *   The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // Before you delete a key pair, you can call the DescribeKeyPairs operation to query existing key pairs.
    std::shared_ptr<string> keyPairName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

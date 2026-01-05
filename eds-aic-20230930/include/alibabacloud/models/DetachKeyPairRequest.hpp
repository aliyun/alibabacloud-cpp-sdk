// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHKEYPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHKEYPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DetachKeyPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachKeyPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachKeyPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
    };
    DetachKeyPairRequest() = default ;
    DetachKeyPairRequest(const DetachKeyPairRequest &) = default ;
    DetachKeyPairRequest(DetachKeyPairRequest &&) = default ;
    DetachKeyPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachKeyPairRequest() = default ;
    DetachKeyPairRequest& operator=(const DetachKeyPairRequest &) = default ;
    DetachKeyPairRequest& operator=(DetachKeyPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->keyPairId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DetachKeyPairRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DetachKeyPairRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DetachKeyPairRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


  protected:
    // The IDs of the cloud phone instances. You can specify a maximum of 50 cloud phone instances.
    shared_ptr<vector<string>> instanceIds_ {};
    // The ID of the ADB key pair.
    // 
    // This parameter is required.
    shared_ptr<string> keyPairId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

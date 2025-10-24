// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHKEYPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHKEYPAIRREQUEST_HPP_
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
  class AttachKeyPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachKeyPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachKeyPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
    };
    AttachKeyPairRequest() = default ;
    AttachKeyPairRequest(const AttachKeyPairRequest &) = default ;
    AttachKeyPairRequest(AttachKeyPairRequest &&) = default ;
    AttachKeyPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachKeyPairRequest() = default ;
    AttachKeyPairRequest& operator=(const AttachKeyPairRequest &) = default ;
    AttachKeyPairRequest& operator=(AttachKeyPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && return this->keyPairId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AttachKeyPairRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AttachKeyPairRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline AttachKeyPairRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


  protected:
    // The IDs of the cloud phone instances. You can specify a maximum of 50 cloud phone instances.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The ID of the ADB key pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> keyPairId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif

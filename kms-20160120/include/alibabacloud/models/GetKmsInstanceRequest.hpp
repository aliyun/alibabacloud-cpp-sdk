// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKMSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKMSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetKmsInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKmsInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKmsInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
    };
    GetKmsInstanceRequest() = default ;
    GetKmsInstanceRequest(const GetKmsInstanceRequest &) = default ;
    GetKmsInstanceRequest(GetKmsInstanceRequest &&) = default ;
    GetKmsInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKmsInstanceRequest() = default ;
    GetKmsInstanceRequest& operator=(const GetKmsInstanceRequest &) = default ;
    GetKmsInstanceRequest& operator=(GetKmsInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsInstanceId_ == nullptr; };
    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string kmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline GetKmsInstanceRequest& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


  protected:
    // The ID of the KMS instance that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> kmsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif

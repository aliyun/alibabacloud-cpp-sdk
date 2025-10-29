// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KMSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_KMSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class KMSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KMSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(kmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_TO_JSON(kmsKeyId, kmsKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, KMSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(kmsInstanceId, kmsInstanceId_);
      DARABONBA_PTR_FROM_JSON(kmsKeyId, kmsKeyId_);
    };
    KMSConfig() = default ;
    KMSConfig(const KMSConfig &) = default ;
    KMSConfig(KMSConfig &&) = default ;
    KMSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KMSConfig() = default ;
    KMSConfig& operator=(const KMSConfig &) = default ;
    KMSConfig& operator=(KMSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsInstanceId_ == nullptr
        && return this->kmsKeyId_ == nullptr; };
    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string kmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline KMSConfig& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline KMSConfig& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


  protected:
    std::shared_ptr<string> kmsInstanceId_ = nullptr;
    std::shared_ptr<string> kmsKeyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif

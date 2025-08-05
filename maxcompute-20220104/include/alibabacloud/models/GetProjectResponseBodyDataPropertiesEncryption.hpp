// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESENCRYPTION_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESENCRYPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataPropertiesEncryption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataPropertiesEncryption& obj) { 
      DARABONBA_PTR_TO_JSON(algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(key, key_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataPropertiesEncryption& obj) { 
      DARABONBA_PTR_FROM_JSON(algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(key, key_);
    };
    GetProjectResponseBodyDataPropertiesEncryption() = default ;
    GetProjectResponseBodyDataPropertiesEncryption(const GetProjectResponseBodyDataPropertiesEncryption &) = default ;
    GetProjectResponseBodyDataPropertiesEncryption(GetProjectResponseBodyDataPropertiesEncryption &&) = default ;
    GetProjectResponseBodyDataPropertiesEncryption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataPropertiesEncryption() = default ;
    GetProjectResponseBodyDataPropertiesEncryption& operator=(const GetProjectResponseBodyDataPropertiesEncryption &) = default ;
    GetProjectResponseBodyDataPropertiesEncryption& operator=(GetProjectResponseBodyDataPropertiesEncryption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->enable_ != nullptr && this->key_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline GetProjectResponseBodyDataPropertiesEncryption& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetProjectResponseBodyDataPropertiesEncryption& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetProjectResponseBodyDataPropertiesEncryption& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The data encryption algorithm that is supported by the key. Valid values: AES256, AESCTR, and RC4.
    std::shared_ptr<string> algorithm_ = nullptr;
    // Indicates whether the data encryption feature needs to be enabled for the project. For more information about data encryption, see
    // 
    // [Storage encryption](https://www.alibabacloud.com/help/zh/maxcompute/security-and-compliance/storage-encryption).
    std::shared_ptr<bool> enable_ = nullptr;
    // The type of key that is used for data encryption. You can select MaxCompute Default Key or Bring Your Own Key (BYOK) as the key type. If you select MaxCompute Default Key, the default key that is created by MaxCompute is used.
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

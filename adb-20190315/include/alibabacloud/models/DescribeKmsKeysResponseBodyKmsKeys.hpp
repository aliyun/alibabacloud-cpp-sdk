// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODYKMSKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSRESPONSEBODYKMSKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKmsKeysResponseBodyKmsKeysKmsKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeKmsKeysResponseBodyKmsKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsKeysResponseBodyKmsKeys& obj) { 
      DARABONBA_PTR_TO_JSON(KmsKey, kmsKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsKeysResponseBodyKmsKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsKey, kmsKey_);
    };
    DescribeKmsKeysResponseBodyKmsKeys() = default ;
    DescribeKmsKeysResponseBodyKmsKeys(const DescribeKmsKeysResponseBodyKmsKeys &) = default ;
    DescribeKmsKeysResponseBodyKmsKeys(DescribeKmsKeysResponseBodyKmsKeys &&) = default ;
    DescribeKmsKeysResponseBodyKmsKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsKeysResponseBodyKmsKeys() = default ;
    DescribeKmsKeysResponseBodyKmsKeys& operator=(const DescribeKmsKeysResponseBodyKmsKeys &) = default ;
    DescribeKmsKeysResponseBodyKmsKeys& operator=(DescribeKmsKeysResponseBodyKmsKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsKey_ == nullptr; };
    // kmsKey Field Functions 
    bool hasKmsKey() const { return this->kmsKey_ != nullptr;};
    void deleteKmsKey() { this->kmsKey_ = nullptr;};
    inline const vector<Models::DescribeKmsKeysResponseBodyKmsKeysKmsKey> & kmsKey() const { DARABONBA_PTR_GET_CONST(kmsKey_, vector<Models::DescribeKmsKeysResponseBodyKmsKeysKmsKey>) };
    inline vector<Models::DescribeKmsKeysResponseBodyKmsKeysKmsKey> kmsKey() { DARABONBA_PTR_GET(kmsKey_, vector<Models::DescribeKmsKeysResponseBodyKmsKeysKmsKey>) };
    inline DescribeKmsKeysResponseBodyKmsKeys& setKmsKey(const vector<Models::DescribeKmsKeysResponseBodyKmsKeysKmsKey> & kmsKey) { DARABONBA_PTR_SET_VALUE(kmsKey_, kmsKey) };
    inline DescribeKmsKeysResponseBodyKmsKeys& setKmsKey(vector<Models::DescribeKmsKeysResponseBodyKmsKeysKmsKey> && kmsKey) { DARABONBA_PTR_SET_RVALUE(kmsKey_, kmsKey) };


  protected:
    std::shared_ptr<vector<Models::DescribeKmsKeysResponseBodyKmsKeysKmsKey>> kmsKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif

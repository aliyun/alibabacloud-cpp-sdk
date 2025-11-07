// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKREACHABLEANALYSISREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKREACHABLEANALYSISREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class CreateNetworkReachableAnalysisRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkReachableAnalysisRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkReachableAnalysisRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateNetworkReachableAnalysisRequestTag() = default ;
    CreateNetworkReachableAnalysisRequestTag(const CreateNetworkReachableAnalysisRequestTag &) = default ;
    CreateNetworkReachableAnalysisRequestTag(CreateNetworkReachableAnalysisRequestTag &&) = default ;
    CreateNetworkReachableAnalysisRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkReachableAnalysisRequestTag() = default ;
    CreateNetworkReachableAnalysisRequestTag& operator=(const CreateNetworkReachableAnalysisRequestTag &) = default ;
    CreateNetworkReachableAnalysisRequestTag& operator=(CreateNetworkReachableAnalysisRequestTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline CreateNetworkReachableAnalysisRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateNetworkReachableAnalysisRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag to add to the resource. The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
    // 
    // You can add up to 20 tags in each call.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag to add to the resource. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `acs:` or `aliyun`. The tag value can be an empty string.
    // 
    // You can add up to 20 tag values in each call.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif

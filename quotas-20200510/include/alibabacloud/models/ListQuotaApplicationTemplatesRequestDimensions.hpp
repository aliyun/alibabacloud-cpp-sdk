// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONTEMPLATESREQUESTDIMENSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONTEMPLATESREQUESTDIMENSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationTemplatesRequestDimensions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationTemplatesRequestDimensions& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationTemplatesRequestDimensions& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListQuotaApplicationTemplatesRequestDimensions() = default ;
    ListQuotaApplicationTemplatesRequestDimensions(const ListQuotaApplicationTemplatesRequestDimensions &) = default ;
    ListQuotaApplicationTemplatesRequestDimensions(ListQuotaApplicationTemplatesRequestDimensions &&) = default ;
    ListQuotaApplicationTemplatesRequestDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationTemplatesRequestDimensions() = default ;
    ListQuotaApplicationTemplatesRequestDimensions& operator=(const ListQuotaApplicationTemplatesRequestDimensions &) = default ;
    ListQuotaApplicationTemplatesRequestDimensions& operator=(ListQuotaApplicationTemplatesRequestDimensions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListQuotaApplicationTemplatesRequestDimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListQuotaApplicationTemplatesRequestDimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the dimension.
    // 
    // > 
    // 
    // *   The value range of N varies based on the number of dimensions that are supported by the related Alibaba Cloud service.
    // 
    // *   You must specify both Key and Value for each quota dimension.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the dimension.
    // 
    // > 
    // 
    // *   The value range of N varies based on the number of dimensions that are supported by the related Alibaba Cloud service.
    // 
    // *   You must specify both Key and Value for each quota dimension.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif

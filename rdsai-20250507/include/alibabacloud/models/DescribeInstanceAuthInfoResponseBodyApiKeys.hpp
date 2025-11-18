// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTHINFORESPONSEBODYAPIKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTHINFORESPONSEBODYAPIKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceAuthInfoResponseBodyApiKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAuthInfoResponseBodyApiKeys& obj) { 
      DARABONBA_PTR_TO_JSON(AnonKey, anonKey_);
      DARABONBA_PTR_TO_JSON(ServiceKey, serviceKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAuthInfoResponseBodyApiKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(AnonKey, anonKey_);
      DARABONBA_PTR_FROM_JSON(ServiceKey, serviceKey_);
    };
    DescribeInstanceAuthInfoResponseBodyApiKeys() = default ;
    DescribeInstanceAuthInfoResponseBodyApiKeys(const DescribeInstanceAuthInfoResponseBodyApiKeys &) = default ;
    DescribeInstanceAuthInfoResponseBodyApiKeys(DescribeInstanceAuthInfoResponseBodyApiKeys &&) = default ;
    DescribeInstanceAuthInfoResponseBodyApiKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAuthInfoResponseBodyApiKeys() = default ;
    DescribeInstanceAuthInfoResponseBodyApiKeys& operator=(const DescribeInstanceAuthInfoResponseBodyApiKeys &) = default ;
    DescribeInstanceAuthInfoResponseBodyApiKeys& operator=(DescribeInstanceAuthInfoResponseBodyApiKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anonKey_ == nullptr
        && return this->serviceKey_ == nullptr; };
    // anonKey Field Functions 
    bool hasAnonKey() const { return this->anonKey_ != nullptr;};
    void deleteAnonKey() { this->anonKey_ = nullptr;};
    inline string anonKey() const { DARABONBA_PTR_GET_DEFAULT(anonKey_, "") };
    inline DescribeInstanceAuthInfoResponseBodyApiKeys& setAnonKey(string anonKey) { DARABONBA_PTR_SET_VALUE(anonKey_, anonKey) };


    // serviceKey Field Functions 
    bool hasServiceKey() const { return this->serviceKey_ != nullptr;};
    void deleteServiceKey() { this->serviceKey_ = nullptr;};
    inline string serviceKey() const { DARABONBA_PTR_GET_DEFAULT(serviceKey_, "") };
    inline DescribeInstanceAuthInfoResponseBodyApiKeys& setServiceKey(string serviceKey) { DARABONBA_PTR_SET_VALUE(serviceKey_, serviceKey) };


  protected:
    // Supabase ANON_KEY
    std::shared_ptr<string> anonKey_ = nullptr;
    // Supabase SERVICE_ROLE_KEY
    std::shared_ptr<string> serviceKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif

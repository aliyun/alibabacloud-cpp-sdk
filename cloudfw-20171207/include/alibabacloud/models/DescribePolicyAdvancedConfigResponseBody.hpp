// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYADVANCEDCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYADVANCEDCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePolicyAdvancedConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyAdvancedConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InternetSwitch, internetSwitch_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyAdvancedConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetSwitch, internetSwitch_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePolicyAdvancedConfigResponseBody() = default ;
    DescribePolicyAdvancedConfigResponseBody(const DescribePolicyAdvancedConfigResponseBody &) = default ;
    DescribePolicyAdvancedConfigResponseBody(DescribePolicyAdvancedConfigResponseBody &&) = default ;
    DescribePolicyAdvancedConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyAdvancedConfigResponseBody() = default ;
    DescribePolicyAdvancedConfigResponseBody& operator=(const DescribePolicyAdvancedConfigResponseBody &) = default ;
    DescribePolicyAdvancedConfigResponseBody& operator=(DescribePolicyAdvancedConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->internetSwitch_ == nullptr
        && this->requestId_ == nullptr; };
    // internetSwitch Field Functions 
    bool hasInternetSwitch() const { return this->internetSwitch_ != nullptr;};
    void deleteInternetSwitch() { this->internetSwitch_ = nullptr;};
    inline string getInternetSwitch() const { DARABONBA_PTR_GET_DEFAULT(internetSwitch_, "") };
    inline DescribePolicyAdvancedConfigResponseBody& setInternetSwitch(string internetSwitch) { DARABONBA_PTR_SET_VALUE(internetSwitch_, internetSwitch) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolicyAdvancedConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the strict mode is enabled for the access control policy. Valid values:
    // 
    // *   **on**: The strict mode is enabled.
    // *   **off**: The strict mode is disabled.
    shared_ptr<string> internetSwitch_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

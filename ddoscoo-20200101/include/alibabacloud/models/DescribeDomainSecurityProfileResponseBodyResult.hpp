// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURITYPROFILERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSECURITYPROFILERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainSecurityProfileResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSecurityProfileResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalEnable, globalEnable_);
      DARABONBA_PTR_TO_JSON(GlobalMode, globalMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSecurityProfileResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalEnable, globalEnable_);
      DARABONBA_PTR_FROM_JSON(GlobalMode, globalMode_);
    };
    DescribeDomainSecurityProfileResponseBodyResult() = default ;
    DescribeDomainSecurityProfileResponseBodyResult(const DescribeDomainSecurityProfileResponseBodyResult &) = default ;
    DescribeDomainSecurityProfileResponseBodyResult(DescribeDomainSecurityProfileResponseBodyResult &&) = default ;
    DescribeDomainSecurityProfileResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSecurityProfileResponseBodyResult() = default ;
    DescribeDomainSecurityProfileResponseBodyResult& operator=(const DescribeDomainSecurityProfileResponseBodyResult &) = default ;
    DescribeDomainSecurityProfileResponseBodyResult& operator=(DescribeDomainSecurityProfileResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->globalEnable_ != nullptr
        && this->globalMode_ != nullptr; };
    // globalEnable Field Functions 
    bool hasGlobalEnable() const { return this->globalEnable_ != nullptr;};
    void deleteGlobalEnable() { this->globalEnable_ = nullptr;};
    inline bool globalEnable() const { DARABONBA_PTR_GET_DEFAULT(globalEnable_, false) };
    inline DescribeDomainSecurityProfileResponseBodyResult& setGlobalEnable(bool globalEnable) { DARABONBA_PTR_SET_VALUE(globalEnable_, globalEnable) };


    // globalMode Field Functions 
    bool hasGlobalMode() const { return this->globalMode_ != nullptr;};
    void deleteGlobalMode() { this->globalMode_ = nullptr;};
    inline string globalMode() const { DARABONBA_PTR_GET_DEFAULT(globalMode_, "") };
    inline DescribeDomainSecurityProfileResponseBodyResult& setGlobalMode(string globalMode) { DARABONBA_PTR_SET_VALUE(globalMode_, globalMode) };


  protected:
    // Indicates whether the global mitigation policy is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> globalEnable_ = nullptr;
    // The mode of the global mitigation policy. Valid values:
    // 
    // *   **weak**: the Low mode
    // *   **default**: the Normal mode
    // *   **hard**: the Strict mode
    std::shared_ptr<string> globalMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

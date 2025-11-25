// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGDISPATCHSTATUSRESPONSEBODYSLSCONFIGSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGDISPATCHSTATUSRESPONSEBODYSLSCONFIGSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus() = default ;
    DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus(const DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus &) = default ;
    DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus(DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus &&) = default ;
    DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus() = default ;
    DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus& operator=(const DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus &) = default ;
    DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus& operator=(DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->enable_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DescribeWebAccessLogDispatchStatusResponseBodySlsConfigStatus& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether the log analysis feature is enabled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBASELINEAUTHORIZATIONRESPONSEBODYUSERBASELINEAUTHORIZATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBASELINEAUTHORIZATIONRESPONSEBODYUSERBASELINEAUTHORIZATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization() = default ;
    DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization(const DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization &) = default ;
    DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization(DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization &&) = default ;
    DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization() = default ;
    DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization& operator=(const DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization &) = default ;
    DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization& operator=(DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeUserBaselineAuthorizationResponseBodyUserBaselineAuthorization& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether Security Center is authorized to run configuration checks on cloud services.
    // 
    // *   **0**: no. Security Center is not authorized to run configuration checks on cloud services.
    // *   **1**: yes. Security Center is authorized to run configuration checks on cloud services.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

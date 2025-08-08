// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCEFORISVREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCEFORISVREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeImageInstanceForIsvRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInstanceForIsvRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerPk, customerPk_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInstanceForIsvRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerPk, customerPk_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
    };
    DescribeImageInstanceForIsvRequest() = default ;
    DescribeImageInstanceForIsvRequest(const DescribeImageInstanceForIsvRequest &) = default ;
    DescribeImageInstanceForIsvRequest(DescribeImageInstanceForIsvRequest &&) = default ;
    DescribeImageInstanceForIsvRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInstanceForIsvRequest() = default ;
    DescribeImageInstanceForIsvRequest& operator=(const DescribeImageInstanceForIsvRequest &) = default ;
    DescribeImageInstanceForIsvRequest& operator=(DescribeImageInstanceForIsvRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customerPk_ != nullptr
        && this->ecsInstanceId_ != nullptr; };
    // customerPk Field Functions 
    bool hasCustomerPk() const { return this->customerPk_ != nullptr;};
    void deleteCustomerPk() { this->customerPk_ = nullptr;};
    inline int64_t customerPk() const { DARABONBA_PTR_GET_DEFAULT(customerPk_, 0L) };
    inline DescribeImageInstanceForIsvRequest& setCustomerPk(int64_t customerPk) { DARABONBA_PTR_SET_VALUE(customerPk_, customerPk) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline DescribeImageInstanceForIsvRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


  protected:
    std::shared_ptr<int64_t> customerPk_ = nullptr;
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif

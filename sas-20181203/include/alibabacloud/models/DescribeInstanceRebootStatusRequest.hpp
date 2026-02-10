// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREBOOTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREBOOTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstanceRebootStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRebootStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRebootStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeInstanceRebootStatusRequest() = default ;
    DescribeInstanceRebootStatusRequest(const DescribeInstanceRebootStatusRequest &) = default ;
    DescribeInstanceRebootStatusRequest(DescribeInstanceRebootStatusRequest &&) = default ;
    DescribeInstanceRebootStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRebootStatusRequest() = default ;
    DescribeInstanceRebootStatusRequest& operator=(const DescribeInstanceRebootStatusRequest &) = default ;
    DescribeInstanceRebootStatusRequest& operator=(DescribeInstanceRebootStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuids_ == nullptr; };
    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeInstanceRebootStatusRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The UUIDs of the servers that you restart. Separate multiple UUIDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

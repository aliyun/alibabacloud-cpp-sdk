// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeUserPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SubAccountUserId, subAccountUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SubAccountUserId, subAccountUserId_);
    };
    DescribeUserPermissionsRequest() = default ;
    DescribeUserPermissionsRequest(const DescribeUserPermissionsRequest &) = default ;
    DescribeUserPermissionsRequest(DescribeUserPermissionsRequest &&) = default ;
    DescribeUserPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserPermissionsRequest() = default ;
    DescribeUserPermissionsRequest& operator=(const DescribeUserPermissionsRequest &) = default ;
    DescribeUserPermissionsRequest& operator=(DescribeUserPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subAccountUserId_ == nullptr; };
    // subAccountUserId Field Functions 
    bool hasSubAccountUserId() const { return this->subAccountUserId_ != nullptr;};
    void deleteSubAccountUserId() { this->subAccountUserId_ = nullptr;};
    inline string subAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(subAccountUserId_, "") };
    inline DescribeUserPermissionsRequest& setSubAccountUserId(string subAccountUserId) { DARABONBA_PTR_SET_VALUE(subAccountUserId_, subAccountUserId) };


  protected:
    // The ID of a RAM user or RAM role.
    // 
    // This parameter is required.
    std::shared_ptr<string> subAccountUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif

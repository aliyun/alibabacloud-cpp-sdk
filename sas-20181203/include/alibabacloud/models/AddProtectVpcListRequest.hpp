// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROTECTVPCLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROTECTVPCLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddProtectVpcListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProtectVpcListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddVpcInstanceIdList, addVpcInstanceIdList_);
      DARABONBA_PTR_TO_JSON(DelVpcInstanceIdList, delVpcInstanceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, AddProtectVpcListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddVpcInstanceIdList, addVpcInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(DelVpcInstanceIdList, delVpcInstanceIdList_);
    };
    AddProtectVpcListRequest() = default ;
    AddProtectVpcListRequest(const AddProtectVpcListRequest &) = default ;
    AddProtectVpcListRequest(AddProtectVpcListRequest &&) = default ;
    AddProtectVpcListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProtectVpcListRequest() = default ;
    AddProtectVpcListRequest& operator=(const AddProtectVpcListRequest &) = default ;
    AddProtectVpcListRequest& operator=(AddProtectVpcListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addVpcInstanceIdList_ == nullptr
        && return this->delVpcInstanceIdList_ == nullptr; };
    // addVpcInstanceIdList Field Functions 
    bool hasAddVpcInstanceIdList() const { return this->addVpcInstanceIdList_ != nullptr;};
    void deleteAddVpcInstanceIdList() { this->addVpcInstanceIdList_ = nullptr;};
    inline string addVpcInstanceIdList() const { DARABONBA_PTR_GET_DEFAULT(addVpcInstanceIdList_, "") };
    inline AddProtectVpcListRequest& setAddVpcInstanceIdList(string addVpcInstanceIdList) { DARABONBA_PTR_SET_VALUE(addVpcInstanceIdList_, addVpcInstanceIdList) };


    // delVpcInstanceIdList Field Functions 
    bool hasDelVpcInstanceIdList() const { return this->delVpcInstanceIdList_ != nullptr;};
    void deleteDelVpcInstanceIdList() { this->delVpcInstanceIdList_ = nullptr;};
    inline string delVpcInstanceIdList() const { DARABONBA_PTR_GET_DEFAULT(delVpcInstanceIdList_, "") };
    inline AddProtectVpcListRequest& setDelVpcInstanceIdList(string delVpcInstanceIdList) { DARABONBA_PTR_SET_VALUE(delVpcInstanceIdList_, delVpcInstanceIdList) };


  protected:
    // Collection of new VPC instance IDs.
    // > Call the [DescribeVpcList](~~DescribeVpcList~~) interface to obtain this parameter.
    std::shared_ptr<string> addVpcInstanceIdList_ = nullptr;
    // Collection of VPC instance IDs to be deleted.
    // > Call the [DescribeVpcList](~~DescribeVpcList~~) interface to obtain this parameter.
    std::shared_ptr<string> delVpcInstanceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODYDSTIPLISTADDRESSGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODYDSTIPLISTADDRESSGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(AddressGroupName, addressGroupName_);
      DARABONBA_PTR_TO_JSON(AddressGroupUUID, addressGroupUUID_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressGroupName, addressGroupName_);
      DARABONBA_PTR_FROM_JSON(AddressGroupUUID, addressGroupUUID_);
    };
    DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList() = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList(const DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList &) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList(DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList &&) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList() = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList& operator=(const DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList &) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList& operator=(DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressGroupName_ != nullptr
        && this->addressGroupUUID_ != nullptr; };
    // addressGroupName Field Functions 
    bool hasAddressGroupName() const { return this->addressGroupName_ != nullptr;};
    void deleteAddressGroupName() { this->addressGroupName_ = nullptr;};
    inline string addressGroupName() const { DARABONBA_PTR_GET_DEFAULT(addressGroupName_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList& setAddressGroupName(string addressGroupName) { DARABONBA_PTR_SET_VALUE(addressGroupName_, addressGroupName) };


    // addressGroupUUID Field Functions 
    bool hasAddressGroupUUID() const { return this->addressGroupUUID_ != nullptr;};
    void deleteAddressGroupUUID() { this->addressGroupUUID_ = nullptr;};
    inline string addressGroupUUID() const { DARABONBA_PTR_GET_DEFAULT(addressGroupUUID_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList& setAddressGroupUUID(string addressGroupUUID) { DARABONBA_PTR_SET_VALUE(addressGroupUUID_, addressGroupUUID) };


  protected:
    // The name of the address book.
    std::shared_ptr<string> addressGroupName_ = nullptr;
    // The UUID of the address book.
    std::shared_ptr<string> addressGroupUUID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

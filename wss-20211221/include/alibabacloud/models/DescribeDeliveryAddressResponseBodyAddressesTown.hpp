// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSESTOWN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDELIVERYADDRESSRESPONSEBODYADDRESSESTOWN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeDeliveryAddressResponseBodyAddressesTown : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeliveryAddressResponseBodyAddressesTown& obj) { 
      DARABONBA_PTR_TO_JSON(TownId, townId_);
      DARABONBA_PTR_TO_JSON(TownName, townName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeliveryAddressResponseBodyAddressesTown& obj) { 
      DARABONBA_PTR_FROM_JSON(TownId, townId_);
      DARABONBA_PTR_FROM_JSON(TownName, townName_);
    };
    DescribeDeliveryAddressResponseBodyAddressesTown() = default ;
    DescribeDeliveryAddressResponseBodyAddressesTown(const DescribeDeliveryAddressResponseBodyAddressesTown &) = default ;
    DescribeDeliveryAddressResponseBodyAddressesTown(DescribeDeliveryAddressResponseBodyAddressesTown &&) = default ;
    DescribeDeliveryAddressResponseBodyAddressesTown(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeliveryAddressResponseBodyAddressesTown() = default ;
    DescribeDeliveryAddressResponseBodyAddressesTown& operator=(const DescribeDeliveryAddressResponseBodyAddressesTown &) = default ;
    DescribeDeliveryAddressResponseBodyAddressesTown& operator=(DescribeDeliveryAddressResponseBodyAddressesTown &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->townId_ != nullptr
        && this->townName_ != nullptr; };
    // townId Field Functions 
    bool hasTownId() const { return this->townId_ != nullptr;};
    void deleteTownId() { this->townId_ = nullptr;};
    inline int64_t townId() const { DARABONBA_PTR_GET_DEFAULT(townId_, 0L) };
    inline DescribeDeliveryAddressResponseBodyAddressesTown& setTownId(int64_t townId) { DARABONBA_PTR_SET_VALUE(townId_, townId) };


    // townName Field Functions 
    bool hasTownName() const { return this->townName_ != nullptr;};
    void deleteTownName() { this->townName_ = nullptr;};
    inline string townName() const { DARABONBA_PTR_GET_DEFAULT(townName_, "") };
    inline DescribeDeliveryAddressResponseBodyAddressesTown& setTownName(string townName) { DARABONBA_PTR_SET_VALUE(townName_, townName) };


  protected:
    std::shared_ptr<int64_t> townId_ = nullptr;
    std::shared_ptr<string> townName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif

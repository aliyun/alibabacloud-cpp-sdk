// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCEAVAILABLESTORAGETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLAVAILABLERESOURCERESPONSEBODYSALECONTROLAVAILABLERESOURCEAVAILABLESTORAGETYPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableDefaultStorageType.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableDefaultStorageType, availableDefaultStorageType_);
      DARABONBA_PTR_TO_JSON(AvailableSpecialStorageType, availableSpecialStorageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableDefaultStorageType, availableDefaultStorageType_);
      DARABONBA_PTR_FROM_JSON(AvailableSpecialStorageType, availableSpecialStorageType_);
    };
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType &&) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType() = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType& operator=(const DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType &) = default ;
    DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType& operator=(DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableDefaultStorageType_ != nullptr
        && this->availableSpecialStorageType_ != nullptr; };
    // availableDefaultStorageType Field Functions 
    bool hasAvailableDefaultStorageType() const { return this->availableDefaultStorageType_ != nullptr;};
    void deleteAvailableDefaultStorageType() { this->availableDefaultStorageType_ = nullptr;};
    inline const vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableDefaultStorageType> & availableDefaultStorageType() const { DARABONBA_PTR_GET_CONST(availableDefaultStorageType_, vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableDefaultStorageType>) };
    inline vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableDefaultStorageType> availableDefaultStorageType() { DARABONBA_PTR_GET(availableDefaultStorageType_, vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableDefaultStorageType>) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType& setAvailableDefaultStorageType(const vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableDefaultStorageType> & availableDefaultStorageType) { DARABONBA_PTR_SET_VALUE(availableDefaultStorageType_, availableDefaultStorageType) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType& setAvailableDefaultStorageType(vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableDefaultStorageType> && availableDefaultStorageType) { DARABONBA_PTR_SET_RVALUE(availableDefaultStorageType_, availableDefaultStorageType) };


    // availableSpecialStorageType Field Functions 
    bool hasAvailableSpecialStorageType() const { return this->availableSpecialStorageType_ != nullptr;};
    void deleteAvailableSpecialStorageType() { this->availableSpecialStorageType_ = nullptr;};
    inline const vector<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType>> & availableSpecialStorageType() const { DARABONBA_PTR_GET_CONST(availableSpecialStorageType_, vector<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType>>) };
    inline vector<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType>> availableSpecialStorageType() { DARABONBA_PTR_GET(availableSpecialStorageType_, vector<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType>>) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType& setAvailableSpecialStorageType(const vector<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType>> & availableSpecialStorageType) { DARABONBA_PTR_SET_VALUE(availableSpecialStorageType_, availableSpecialStorageType) };
    inline DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageType& setAvailableSpecialStorageType(vector<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType>> && availableSpecialStorageType) { DARABONBA_PTR_SET_RVALUE(availableSpecialStorageType_, availableSpecialStorageType) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableDefaultStorageType>> availableDefaultStorageType_ = nullptr;
    std::shared_ptr<vector<vector<Models::DescribeEnsSaleControlAvailableResourceResponseBodySaleControlAvailableResourceAvailableStorageTypeAvailableSpecialStorageType>>> availableSpecialStorageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

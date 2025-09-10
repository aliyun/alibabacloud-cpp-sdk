// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEHARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeDBInstanceHAResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceHAResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PrimaryAzoneId, primaryAzoneId_);
      DARABONBA_PTR_TO_JSON(PrimaryRegionId, primaryRegionId_);
      DARABONBA_PTR_TO_JSON(SecondaryAzoneId, secondaryAzoneId_);
      DARABONBA_PTR_TO_JSON(SecondaryRegionId, secondaryRegionId_);
      DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceHAResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PrimaryAzoneId, primaryAzoneId_);
      DARABONBA_PTR_FROM_JSON(PrimaryRegionId, primaryRegionId_);
      DARABONBA_PTR_FROM_JSON(SecondaryAzoneId, secondaryAzoneId_);
      DARABONBA_PTR_FROM_JSON(SecondaryRegionId, secondaryRegionId_);
      DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
    };
    DescribeDBInstanceHAResponseBodyData() = default ;
    DescribeDBInstanceHAResponseBodyData(const DescribeDBInstanceHAResponseBodyData &) = default ;
    DescribeDBInstanceHAResponseBodyData(DescribeDBInstanceHAResponseBodyData &&) = default ;
    DescribeDBInstanceHAResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceHAResponseBodyData() = default ;
    DescribeDBInstanceHAResponseBodyData& operator=(const DescribeDBInstanceHAResponseBodyData &) = default ;
    DescribeDBInstanceHAResponseBodyData& operator=(DescribeDBInstanceHAResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->primaryAzoneId_ != nullptr
        && this->primaryRegionId_ != nullptr && this->secondaryAzoneId_ != nullptr && this->secondaryRegionId_ != nullptr && this->topologyType_ != nullptr; };
    // primaryAzoneId Field Functions 
    bool hasPrimaryAzoneId() const { return this->primaryAzoneId_ != nullptr;};
    void deletePrimaryAzoneId() { this->primaryAzoneId_ = nullptr;};
    inline string primaryAzoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryAzoneId_, "") };
    inline DescribeDBInstanceHAResponseBodyData& setPrimaryAzoneId(string primaryAzoneId) { DARABONBA_PTR_SET_VALUE(primaryAzoneId_, primaryAzoneId) };


    // primaryRegionId Field Functions 
    bool hasPrimaryRegionId() const { return this->primaryRegionId_ != nullptr;};
    void deletePrimaryRegionId() { this->primaryRegionId_ = nullptr;};
    inline string primaryRegionId() const { DARABONBA_PTR_GET_DEFAULT(primaryRegionId_, "") };
    inline DescribeDBInstanceHAResponseBodyData& setPrimaryRegionId(string primaryRegionId) { DARABONBA_PTR_SET_VALUE(primaryRegionId_, primaryRegionId) };


    // secondaryAzoneId Field Functions 
    bool hasSecondaryAzoneId() const { return this->secondaryAzoneId_ != nullptr;};
    void deleteSecondaryAzoneId() { this->secondaryAzoneId_ = nullptr;};
    inline string secondaryAzoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryAzoneId_, "") };
    inline DescribeDBInstanceHAResponseBodyData& setSecondaryAzoneId(string secondaryAzoneId) { DARABONBA_PTR_SET_VALUE(secondaryAzoneId_, secondaryAzoneId) };


    // secondaryRegionId Field Functions 
    bool hasSecondaryRegionId() const { return this->secondaryRegionId_ != nullptr;};
    void deleteSecondaryRegionId() { this->secondaryRegionId_ = nullptr;};
    inline string secondaryRegionId() const { DARABONBA_PTR_GET_DEFAULT(secondaryRegionId_, "") };
    inline DescribeDBInstanceHAResponseBodyData& setSecondaryRegionId(string secondaryRegionId) { DARABONBA_PTR_SET_VALUE(secondaryRegionId_, secondaryRegionId) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string topologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline DescribeDBInstanceHAResponseBodyData& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


  protected:
    std::shared_ptr<string> primaryAzoneId_ = nullptr;
    std::shared_ptr<string> primaryRegionId_ = nullptr;
    std::shared_ptr<string> secondaryAzoneId_ = nullptr;
    std::shared_ptr<string> secondaryRegionId_ = nullptr;
    std::shared_ptr<string> topologyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif

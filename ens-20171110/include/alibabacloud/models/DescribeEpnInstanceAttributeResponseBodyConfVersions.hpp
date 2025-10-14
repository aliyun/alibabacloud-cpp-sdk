// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCEATTRIBUTERESPONSEBODYCONFVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEPNINSTANCEATTRIBUTERESPONSEBODYCONFVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEpnInstanceAttributeResponseBodyConfVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEpnInstanceAttributeResponseBodyConfVersions& obj) { 
      DARABONBA_PTR_TO_JSON(ConfVersion, confVersion_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEpnInstanceAttributeResponseBodyConfVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfVersion, confVersion_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
    };
    DescribeEpnInstanceAttributeResponseBodyConfVersions() = default ;
    DescribeEpnInstanceAttributeResponseBodyConfVersions(const DescribeEpnInstanceAttributeResponseBodyConfVersions &) = default ;
    DescribeEpnInstanceAttributeResponseBodyConfVersions(DescribeEpnInstanceAttributeResponseBodyConfVersions &&) = default ;
    DescribeEpnInstanceAttributeResponseBodyConfVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEpnInstanceAttributeResponseBodyConfVersions() = default ;
    DescribeEpnInstanceAttributeResponseBodyConfVersions& operator=(const DescribeEpnInstanceAttributeResponseBodyConfVersions &) = default ;
    DescribeEpnInstanceAttributeResponseBodyConfVersions& operator=(DescribeEpnInstanceAttributeResponseBodyConfVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confVersion_ == nullptr
        && return this->ensRegionId_ == nullptr; };
    // confVersion Field Functions 
    bool hasConfVersion() const { return this->confVersion_ != nullptr;};
    void deleteConfVersion() { this->confVersion_ = nullptr;};
    inline string confVersion() const { DARABONBA_PTR_GET_DEFAULT(confVersion_, "") };
    inline DescribeEpnInstanceAttributeResponseBodyConfVersions& setConfVersion(string confVersion) { DARABONBA_PTR_SET_VALUE(confVersion_, confVersion) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeEpnInstanceAttributeResponseBodyConfVersions& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


  protected:
    // The version number.
    std::shared_ptr<string> confVersion_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

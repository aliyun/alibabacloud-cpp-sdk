// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUPPORTEDZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUPPORTEDZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeSupportedZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSupportedZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSupportedZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeSupportedZonesRequest() = default ;
    DescribeSupportedZonesRequest(const DescribeSupportedZonesRequest &) = default ;
    DescribeSupportedZonesRequest(DescribeSupportedZonesRequest &&) = default ;
    DescribeSupportedZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSupportedZonesRequest() = default ;
    DescribeSupportedZonesRequest& operator=(const DescribeSupportedZonesRequest &) = default ;
    DescribeSupportedZonesRequest& operator=(DescribeSupportedZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architectureType_ == nullptr
        && this->region_ == nullptr; };
    // architectureType Field Functions 
    bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
    void deleteArchitectureType() { this->architectureType_ = nullptr;};
    inline string getArchitectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
    inline DescribeSupportedZonesRequest& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSupportedZonesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    shared_ptr<string> architectureType_ {};
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKMSKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeKmsKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKmsKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKmsKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeKmsKeysRequest() = default ;
    DescribeKmsKeysRequest(const DescribeKmsKeysRequest &) = default ;
    DescribeKmsKeysRequest(DescribeKmsKeysRequest &&) = default ;
    DescribeKmsKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKmsKeysRequest() = default ;
    DescribeKmsKeysRequest& operator=(const DescribeKmsKeysRequest &) = default ;
    DescribeKmsKeysRequest& operator=(DescribeKmsKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeKmsKeysRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

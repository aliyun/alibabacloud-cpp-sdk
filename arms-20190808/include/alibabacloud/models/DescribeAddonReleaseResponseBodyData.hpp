// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONRELEASERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONRELEASERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAddonReleaseResponseBodyDataRelease.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeAddonReleaseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonReleaseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Release, release_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonReleaseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
    };
    DescribeAddonReleaseResponseBodyData() = default ;
    DescribeAddonReleaseResponseBodyData(const DescribeAddonReleaseResponseBodyData &) = default ;
    DescribeAddonReleaseResponseBodyData(DescribeAddonReleaseResponseBodyData &&) = default ;
    DescribeAddonReleaseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonReleaseResponseBodyData() = default ;
    DescribeAddonReleaseResponseBodyData& operator=(const DescribeAddonReleaseResponseBodyData &) = default ;
    DescribeAddonReleaseResponseBodyData& operator=(DescribeAddonReleaseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->release_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeAddonReleaseResponseBodyData& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline const Models::DescribeAddonReleaseResponseBodyDataRelease & release() const { DARABONBA_PTR_GET_CONST(release_, Models::DescribeAddonReleaseResponseBodyDataRelease) };
    inline Models::DescribeAddonReleaseResponseBodyDataRelease release() { DARABONBA_PTR_GET(release_, Models::DescribeAddonReleaseResponseBodyDataRelease) };
    inline DescribeAddonReleaseResponseBodyData& setRelease(const Models::DescribeAddonReleaseResponseBodyDataRelease & release) { DARABONBA_PTR_SET_VALUE(release_, release) };
    inline DescribeAddonReleaseResponseBodyData& setRelease(Models::DescribeAddonReleaseResponseBodyDataRelease && release) { DARABONBA_PTR_SET_RVALUE(release_, release) };


  protected:
    // The configuration information of the add-on release.
    std::shared_ptr<string> config_ = nullptr;
    // The release information.
    std::shared_ptr<Models::DescribeAddonReleaseResponseBodyDataRelease> release_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif

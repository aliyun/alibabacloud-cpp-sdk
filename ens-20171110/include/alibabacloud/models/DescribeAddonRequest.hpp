// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeAddonRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddonName, addonName_);
      DARABONBA_PTR_TO_JSON(AddonVersion, addonVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddonName, addonName_);
      DARABONBA_PTR_FROM_JSON(AddonVersion, addonVersion_);
    };
    DescribeAddonRequest() = default ;
    DescribeAddonRequest(const DescribeAddonRequest &) = default ;
    DescribeAddonRequest(DescribeAddonRequest &&) = default ;
    DescribeAddonRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonRequest() = default ;
    DescribeAddonRequest& operator=(const DescribeAddonRequest &) = default ;
    DescribeAddonRequest& operator=(DescribeAddonRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonName_ == nullptr
        && this->addonVersion_ == nullptr; };
    // addonName Field Functions 
    bool hasAddonName() const { return this->addonName_ != nullptr;};
    void deleteAddonName() { this->addonName_ = nullptr;};
    inline string getAddonName() const { DARABONBA_PTR_GET_DEFAULT(addonName_, "") };
    inline DescribeAddonRequest& setAddonName(string addonName) { DARABONBA_PTR_SET_VALUE(addonName_, addonName) };


    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string getAddonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline DescribeAddonRequest& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


  protected:
    // This parameter is required.
    shared_ptr<string> addonName_ {};
    shared_ptr<string> addonVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

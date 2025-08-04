// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRIVESRESPONSEBODYDRIVESDESKTOPGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRIVESRESPONSEBODYDRIVESDESKTOPGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDrivesResponseBodyDrivesDesktopGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrivesResponseBodyDrivesDesktopGroups& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(DesktopGroupName, desktopGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrivesResponseBodyDrivesDesktopGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(DesktopGroupName, desktopGroupName_);
    };
    DescribeDrivesResponseBodyDrivesDesktopGroups() = default ;
    DescribeDrivesResponseBodyDrivesDesktopGroups(const DescribeDrivesResponseBodyDrivesDesktopGroups &) = default ;
    DescribeDrivesResponseBodyDrivesDesktopGroups(DescribeDrivesResponseBodyDrivesDesktopGroups &&) = default ;
    DescribeDrivesResponseBodyDrivesDesktopGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrivesResponseBodyDrivesDesktopGroups() = default ;
    DescribeDrivesResponseBodyDrivesDesktopGroups& operator=(const DescribeDrivesResponseBodyDrivesDesktopGroups &) = default ;
    DescribeDrivesResponseBodyDrivesDesktopGroups& operator=(DescribeDrivesResponseBodyDrivesDesktopGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopGroupId_ != nullptr
        && this->desktopGroupName_ != nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string desktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline DescribeDrivesResponseBodyDrivesDesktopGroups& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // desktopGroupName Field Functions 
    bool hasDesktopGroupName() const { return this->desktopGroupName_ != nullptr;};
    void deleteDesktopGroupName() { this->desktopGroupName_ = nullptr;};
    inline string desktopGroupName() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupName_, "") };
    inline DescribeDrivesResponseBodyDrivesDesktopGroups& setDesktopGroupName(string desktopGroupName) { DARABONBA_PTR_SET_VALUE(desktopGroupName_, desktopGroupName) };


  protected:
    std::shared_ptr<string> desktopGroupId_ = nullptr;
    std::shared_ptr<string> desktopGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif

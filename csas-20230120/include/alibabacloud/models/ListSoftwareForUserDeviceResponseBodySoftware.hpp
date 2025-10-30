// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOFTWAREFORUSERDEVICERESPONSEBODYSOFTWARE_HPP_
#define ALIBABACLOUD_MODELS_LISTSOFTWAREFORUSERDEVICERESPONSEBODYSOFTWARE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListSoftwareForUserDeviceResponseBodySoftware : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSoftwareForUserDeviceResponseBodySoftware& obj) { 
      DARABONBA_PTR_TO_JSON(Inc, inc_);
      DARABONBA_PTR_TO_JSON(InstallTime, installTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListSoftwareForUserDeviceResponseBodySoftware& obj) { 
      DARABONBA_PTR_FROM_JSON(Inc, inc_);
      DARABONBA_PTR_FROM_JSON(InstallTime, installTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListSoftwareForUserDeviceResponseBodySoftware() = default ;
    ListSoftwareForUserDeviceResponseBodySoftware(const ListSoftwareForUserDeviceResponseBodySoftware &) = default ;
    ListSoftwareForUserDeviceResponseBodySoftware(ListSoftwareForUserDeviceResponseBodySoftware &&) = default ;
    ListSoftwareForUserDeviceResponseBodySoftware(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSoftwareForUserDeviceResponseBodySoftware() = default ;
    ListSoftwareForUserDeviceResponseBodySoftware& operator=(const ListSoftwareForUserDeviceResponseBodySoftware &) = default ;
    ListSoftwareForUserDeviceResponseBodySoftware& operator=(ListSoftwareForUserDeviceResponseBodySoftware &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inc_ == nullptr
        && return this->installTime_ == nullptr && return this->name_ == nullptr && return this->versions_ == nullptr; };
    // inc Field Functions 
    bool hasInc() const { return this->inc_ != nullptr;};
    void deleteInc() { this->inc_ = nullptr;};
    inline string inc() const { DARABONBA_PTR_GET_DEFAULT(inc_, "") };
    inline ListSoftwareForUserDeviceResponseBodySoftware& setInc(string inc) { DARABONBA_PTR_SET_VALUE(inc_, inc) };


    // installTime Field Functions 
    bool hasInstallTime() const { return this->installTime_ != nullptr;};
    void deleteInstallTime() { this->installTime_ = nullptr;};
    inline string installTime() const { DARABONBA_PTR_GET_DEFAULT(installTime_, "") };
    inline ListSoftwareForUserDeviceResponseBodySoftware& setInstallTime(string installTime) { DARABONBA_PTR_SET_VALUE(installTime_, installTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSoftwareForUserDeviceResponseBodySoftware& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> versions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline ListSoftwareForUserDeviceResponseBodySoftware& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListSoftwareForUserDeviceResponseBodySoftware& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    std::shared_ptr<string> inc_ = nullptr;
    std::shared_ptr<string> installTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEAPPLICATIONAPMSERVICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEAPPLICATIONAPMSERVICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpgradeApplicationApmServiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeApplicationApmServiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeApplicationApmServiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpgradeApplicationApmServiceResponseBodyData() = default ;
    UpgradeApplicationApmServiceResponseBodyData(const UpgradeApplicationApmServiceResponseBodyData &) = default ;
    UpgradeApplicationApmServiceResponseBodyData(UpgradeApplicationApmServiceResponseBodyData &&) = default ;
    UpgradeApplicationApmServiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeApplicationApmServiceResponseBodyData() = default ;
    UpgradeApplicationApmServiceResponseBodyData& operator=(const UpgradeApplicationApmServiceResponseBodyData &) = default ;
    UpgradeApplicationApmServiceResponseBodyData& operator=(UpgradeApplicationApmServiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline UpgradeApplicationApmServiceResponseBodyData& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif

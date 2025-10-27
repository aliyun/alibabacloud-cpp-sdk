// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPAUTOCONFIGSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPAUTOCONFIGSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBackupAutoConfigStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupAutoConfigStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CanConfigAuto, canConfigAuto_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupAutoConfigStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CanConfigAuto, canConfigAuto_);
    };
    GetBackupAutoConfigStatusResponseBodyData() = default ;
    GetBackupAutoConfigStatusResponseBodyData(const GetBackupAutoConfigStatusResponseBodyData &) = default ;
    GetBackupAutoConfigStatusResponseBodyData(GetBackupAutoConfigStatusResponseBodyData &&) = default ;
    GetBackupAutoConfigStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupAutoConfigStatusResponseBodyData() = default ;
    GetBackupAutoConfigStatusResponseBodyData& operator=(const GetBackupAutoConfigStatusResponseBodyData &) = default ;
    GetBackupAutoConfigStatusResponseBodyData& operator=(GetBackupAutoConfigStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canConfigAuto_ == nullptr; };
    // canConfigAuto Field Functions 
    bool hasCanConfigAuto() const { return this->canConfigAuto_ != nullptr;};
    void deleteCanConfigAuto() { this->canConfigAuto_ = nullptr;};
    inline bool canConfigAuto() const { DARABONBA_PTR_GET_DEFAULT(canConfigAuto_, false) };
    inline GetBackupAutoConfigStatusResponseBodyData& setCanConfigAuto(bool canConfigAuto) { DARABONBA_PTR_SET_VALUE(canConfigAuto_, canConfigAuto) };


  protected:
    // Indicates whether the anti-ransomware policy for servers can be automatically configured by the managed anti-ransomware feature. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> canConfigAuto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

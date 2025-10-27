// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETREGISTRYSCANDAYNUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETREGISTRYSCANDAYNUMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SetRegistryScanDayNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRegistryScanDayNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ScanDayNum, scanDayNum_);
    };
    friend void from_json(const Darabonba::Json& j, SetRegistryScanDayNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ScanDayNum, scanDayNum_);
    };
    SetRegistryScanDayNumRequest() = default ;
    SetRegistryScanDayNumRequest(const SetRegistryScanDayNumRequest &) = default ;
    SetRegistryScanDayNumRequest(SetRegistryScanDayNumRequest &&) = default ;
    SetRegistryScanDayNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRegistryScanDayNumRequest() = default ;
    SetRegistryScanDayNumRequest& operator=(const SetRegistryScanDayNumRequest &) = default ;
    SetRegistryScanDayNumRequest& operator=(SetRegistryScanDayNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scanDayNum_ == nullptr; };
    // scanDayNum Field Functions 
    bool hasScanDayNum() const { return this->scanDayNum_ != nullptr;};
    void deleteScanDayNum() { this->scanDayNum_ = nullptr;};
    inline int32_t scanDayNum() const { DARABONBA_PTR_GET_DEFAULT(scanDayNum_, 0) };
    inline SetRegistryScanDayNumRequest& setScanDayNum(int32_t scanDayNum) { DARABONBA_PTR_SET_VALUE(scanDayNum_, scanDayNum) };


  protected:
    // The cycle at which you want to scan your images. Unit: days.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> scanDayNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTRESPONSEBODYRESULTDEVICEOPENINFO_HPP_
#define ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTRESPONSEBODYRESULTDEVICEOPENINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
    };
    CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo() = default ;
    CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo(const CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo &) = default ;
    CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo(CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo &&) = default ;
    CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo() = default ;
    CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo& operator=(const CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo &) = default ;
    CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo& operator=(CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->idType_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    // DEVICE_ID
    std::shared_ptr<string> idType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif

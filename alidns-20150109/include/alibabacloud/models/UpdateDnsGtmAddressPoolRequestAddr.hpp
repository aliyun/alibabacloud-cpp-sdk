// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSGTMADDRESSPOOLREQUESTADDR_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSGTMADDRESSPOOLREQUESTADDR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDnsGtmAddressPoolRequestAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsGtmAddressPoolRequestAddr& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
      DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsGtmAddressPoolRequestAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
      DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    UpdateDnsGtmAddressPoolRequestAddr() = default ;
    UpdateDnsGtmAddressPoolRequestAddr(const UpdateDnsGtmAddressPoolRequestAddr &) = default ;
    UpdateDnsGtmAddressPoolRequestAddr(UpdateDnsGtmAddressPoolRequestAddr &&) = default ;
    UpdateDnsGtmAddressPoolRequestAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsGtmAddressPoolRequestAddr() = default ;
    UpdateDnsGtmAddressPoolRequestAddr& operator=(const UpdateDnsGtmAddressPoolRequestAddr &) = default ;
    UpdateDnsGtmAddressPoolRequestAddr& operator=(UpdateDnsGtmAddressPoolRequestAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addr_ != nullptr
        && this->attributeInfo_ != nullptr && this->lbaWeight_ != nullptr && this->mode_ != nullptr && this->remark_ != nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline string addr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
    inline UpdateDnsGtmAddressPoolRequestAddr& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline string attributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
    inline UpdateDnsGtmAddressPoolRequestAddr& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


    // lbaWeight Field Functions 
    bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
    void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
    inline int32_t lbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
    inline UpdateDnsGtmAddressPoolRequestAddr& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline UpdateDnsGtmAddressPoolRequestAddr& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateDnsGtmAddressPoolRequestAddr& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The address in the address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> addr_ = nullptr;
    // The information about the source region of the address. The value of the parameter is a string in the JSON format. Valid values:
    // 
    // *   LineCode: the line code of the source region. This parameter is deprecated. Use lineCodes instead.
    // 
    // *   lineCodes: the line codes of the source region
    // 
    // *   lineCodeRectifyType: the rectification type of the line code. Default value: AUTO. Valid values:
    // 
    //     *   NO_NEED: no need for rectification
    //     *   RECTIFIED: rectified
    //     *   AUTO: automatic rectification
    std::shared_ptr<string> attributeInfo_ = nullptr;
    // The weight of the address.
    std::shared_ptr<int32_t> lbaWeight_ = nullptr;
    // The return mode of the addresses. Valid values:
    // 
    // *   SMART: smart return
    // *   ONLINE: always online
    // *   OFFLINE: always offline
    // 
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // The description of the address pool.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif

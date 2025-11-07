// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILEONLINESTATUSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MOBILEONLINESTATUSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class MobileOnlineStatusResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileOnlineStatusResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, MobileOnlineStatusResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    MobileOnlineStatusResponseBodyResultObject() = default ;
    MobileOnlineStatusResponseBodyResultObject(const MobileOnlineStatusResponseBodyResultObject &) = default ;
    MobileOnlineStatusResponseBodyResultObject(MobileOnlineStatusResponseBodyResultObject &&) = default ;
    MobileOnlineStatusResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileOnlineStatusResponseBodyResultObject() = default ;
    MobileOnlineStatusResponseBodyResultObject& operator=(const MobileOnlineStatusResponseBodyResultObject &) = default ;
    MobileOnlineStatusResponseBodyResultObject& operator=(MobileOnlineStatusResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->ispName_ == nullptr && return this->subCode_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline MobileOnlineStatusResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline MobileOnlineStatusResponseBodyResultObject& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline MobileOnlineStatusResponseBodyResultObject& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Verification result
    // 
    // - 1: Available online 
    // - 2: Not available online (see subCode for details)
    // - 3: No query result
    std::shared_ptr<string> bizCode_ = nullptr;
    // ISP name
    // 
    // - CMCC: China Mobile 
    // - CUCC: China Unicom 
    // - CTCC: China Telecom
    std::shared_ptr<string> ispName_ = nullptr;
    // Verification details
    // 
    // - 101: Available online 
    // - 201: Suspended 
    // - 202: Disconnected 
    // - 203: Online but not available 
    // - 204: Not online 
    // - 301: No record found
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

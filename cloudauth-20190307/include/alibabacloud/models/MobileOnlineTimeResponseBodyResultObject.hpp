// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOBILEONLINETIMERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_MOBILEONLINETIMERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class MobileOnlineTimeResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MobileOnlineTimeResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(TimeCode, timeCode_);
    };
    friend void from_json(const Darabonba::Json& j, MobileOnlineTimeResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(TimeCode, timeCode_);
    };
    MobileOnlineTimeResponseBodyResultObject() = default ;
    MobileOnlineTimeResponseBodyResultObject(const MobileOnlineTimeResponseBodyResultObject &) = default ;
    MobileOnlineTimeResponseBodyResultObject(MobileOnlineTimeResponseBodyResultObject &&) = default ;
    MobileOnlineTimeResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MobileOnlineTimeResponseBodyResultObject() = default ;
    MobileOnlineTimeResponseBodyResultObject& operator=(const MobileOnlineTimeResponseBodyResultObject &) = default ;
    MobileOnlineTimeResponseBodyResultObject& operator=(MobileOnlineTimeResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr
        && return this->ispName_ == nullptr && return this->timeCode_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline MobileOnlineTimeResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline MobileOnlineTimeResponseBodyResultObject& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // timeCode Field Functions 
    bool hasTimeCode() const { return this->timeCode_ != nullptr;};
    void deleteTimeCode() { this->timeCode_ = nullptr;};
    inline string timeCode() const { DARABONBA_PTR_GET_DEFAULT(timeCode_, "") };
    inline MobileOnlineTimeResponseBodyResultObject& setTimeCode(string timeCode) { DARABONBA_PTR_SET_VALUE(timeCode_, timeCode) };


  protected:
    // Verification result code.
    // - 1: Verification consistent
    // - 2: Verification inconsistent
    // - 3: No record found
    std::shared_ptr<string> bizCode_ = nullptr;
    // Operator name
    // 
    // - CMCC: China Mobile 
    // - CUCC: China Unicom 
    // - CTCC: China Telecom
    std::shared_ptr<string> ispName_ = nullptr;
    // - 1: [0,3) indicates the online duration is 0~3 months 
    // - 2: [3,6) indicates the online duration is 3~6 months 
    // - 3: [6,12) indicates the online duration is 6~12 months 
    // - 4: [12,24) indicates the online duration is 12~24 months 
    // - 5: [24,+) indicates the online duration is more than 24 months
    std::shared_ptr<string> timeCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif

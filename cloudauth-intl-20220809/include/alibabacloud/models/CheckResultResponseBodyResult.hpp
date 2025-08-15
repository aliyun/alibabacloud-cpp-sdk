// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESULTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESULTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CheckResultResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResultResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(EkycResult, ekycResult_);
      DARABONBA_PTR_TO_JSON(ExtBasicInfo, extBasicInfo_);
      DARABONBA_PTR_TO_JSON(ExtFaceInfo, extFaceInfo_);
      DARABONBA_PTR_TO_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_TO_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(ExtRiskInfo, extRiskInfo_);
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResultResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(EkycResult, ekycResult_);
      DARABONBA_PTR_FROM_JSON(ExtBasicInfo, extBasicInfo_);
      DARABONBA_PTR_FROM_JSON(ExtFaceInfo, extFaceInfo_);
      DARABONBA_PTR_FROM_JSON(ExtIdInfo, extIdInfo_);
      DARABONBA_PTR_FROM_JSON(ExtInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(ExtRiskInfo, extRiskInfo_);
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    CheckResultResponseBodyResult() = default ;
    CheckResultResponseBodyResult(const CheckResultResponseBodyResult &) = default ;
    CheckResultResponseBodyResult(CheckResultResponseBodyResult &&) = default ;
    CheckResultResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResultResponseBodyResult() = default ;
    CheckResultResponseBodyResult& operator=(const CheckResultResponseBodyResult &) = default ;
    CheckResultResponseBodyResult& operator=(CheckResultResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ekycResult_ != nullptr
        && this->extBasicInfo_ != nullptr && this->extFaceInfo_ != nullptr && this->extIdInfo_ != nullptr && this->extInfo_ != nullptr && this->extRiskInfo_ != nullptr
        && this->passed_ != nullptr && this->subCode_ != nullptr; };
    // ekycResult Field Functions 
    bool hasEkycResult() const { return this->ekycResult_ != nullptr;};
    void deleteEkycResult() { this->ekycResult_ = nullptr;};
    inline string ekycResult() const { DARABONBA_PTR_GET_DEFAULT(ekycResult_, "") };
    inline CheckResultResponseBodyResult& setEkycResult(string ekycResult) { DARABONBA_PTR_SET_VALUE(ekycResult_, ekycResult) };


    // extBasicInfo Field Functions 
    bool hasExtBasicInfo() const { return this->extBasicInfo_ != nullptr;};
    void deleteExtBasicInfo() { this->extBasicInfo_ = nullptr;};
    inline string extBasicInfo() const { DARABONBA_PTR_GET_DEFAULT(extBasicInfo_, "") };
    inline CheckResultResponseBodyResult& setExtBasicInfo(string extBasicInfo) { DARABONBA_PTR_SET_VALUE(extBasicInfo_, extBasicInfo) };


    // extFaceInfo Field Functions 
    bool hasExtFaceInfo() const { return this->extFaceInfo_ != nullptr;};
    void deleteExtFaceInfo() { this->extFaceInfo_ = nullptr;};
    inline string extFaceInfo() const { DARABONBA_PTR_GET_DEFAULT(extFaceInfo_, "") };
    inline CheckResultResponseBodyResult& setExtFaceInfo(string extFaceInfo) { DARABONBA_PTR_SET_VALUE(extFaceInfo_, extFaceInfo) };


    // extIdInfo Field Functions 
    bool hasExtIdInfo() const { return this->extIdInfo_ != nullptr;};
    void deleteExtIdInfo() { this->extIdInfo_ = nullptr;};
    inline string extIdInfo() const { DARABONBA_PTR_GET_DEFAULT(extIdInfo_, "") };
    inline CheckResultResponseBodyResult& setExtIdInfo(string extIdInfo) { DARABONBA_PTR_SET_VALUE(extIdInfo_, extIdInfo) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline string extInfo() const { DARABONBA_PTR_GET_DEFAULT(extInfo_, "") };
    inline CheckResultResponseBodyResult& setExtInfo(string extInfo) { DARABONBA_PTR_SET_VALUE(extInfo_, extInfo) };


    // extRiskInfo Field Functions 
    bool hasExtRiskInfo() const { return this->extRiskInfo_ != nullptr;};
    void deleteExtRiskInfo() { this->extRiskInfo_ = nullptr;};
    inline string extRiskInfo() const { DARABONBA_PTR_GET_DEFAULT(extRiskInfo_, "") };
    inline CheckResultResponseBodyResult& setExtRiskInfo(string extRiskInfo) { DARABONBA_PTR_SET_VALUE(extRiskInfo_, extRiskInfo) };


    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline string passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, "") };
    inline CheckResultResponseBodyResult& setPassed(string passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline CheckResultResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    // Authentication result.
    std::shared_ptr<string> ekycResult_ = nullptr;
    // Extended basic information.
    std::shared_ptr<string> extBasicInfo_ = nullptr;
    // Face information.
    std::shared_ptr<string> extFaceInfo_ = nullptr;
    // ID information.
    std::shared_ptr<string> extIdInfo_ = nullptr;
    // Extended information
    std::shared_ptr<string> extInfo_ = nullptr;
    // Risk information.
    std::shared_ptr<string> extRiskInfo_ = nullptr;
    // Whether the authentication is passed.
    // 
    // - Y: Passed
    // - N: Not passed
    std::shared_ptr<string> passed_ = nullptr;
    // Sub-result code.
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif

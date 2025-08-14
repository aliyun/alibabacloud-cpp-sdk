// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKREQUESTAVATARINFO_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKREQUESTAVATARINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Angle, angle_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IndustryCode, industryCode_);
      DARABONBA_PTR_TO_JSON(Locate, locate_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Angle, angle_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IndustryCode, industryCode_);
      DARABONBA_PTR_FROM_JSON(Locate, locate_);
    };
    SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo() = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo(const SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo &) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo(SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo &&) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo() = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo& operator=(const SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo &) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo& operator=(SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->angle_ != nullptr
        && this->code_ != nullptr && this->industryCode_ != nullptr && this->locate_ != nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int32_t angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0) };
    inline SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo& setAngle(int32_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // industryCode Field Functions 
    bool hasIndustryCode() const { return this->industryCode_ != nullptr;};
    void deleteIndustryCode() { this->industryCode_ = nullptr;};
    inline string industryCode() const { DARABONBA_PTR_GET_DEFAULT(industryCode_, "") };
    inline SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo& setIndustryCode(string industryCode) { DARABONBA_PTR_SET_VALUE(industryCode_, industryCode) };


    // locate Field Functions 
    bool hasLocate() const { return this->locate_ != nullptr;};
    void deleteLocate() { this->locate_ = nullptr;};
    inline int32_t locate() const { DARABONBA_PTR_GET_DEFAULT(locate_, 0) };
    inline SubmitTextTo3DAvatarVideoTaskRequestAvatarInfo& setLocate(int32_t locate) { DARABONBA_PTR_SET_VALUE(locate_, locate) };


  protected:
    std::shared_ptr<int32_t> angle_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> industryCode_ = nullptr;
    std::shared_ptr<int32_t> locate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif

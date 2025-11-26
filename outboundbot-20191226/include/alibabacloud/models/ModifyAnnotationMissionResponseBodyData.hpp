// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYANNOTATIONMISSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYANNOTATIONMISSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyAnnotationMissionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAnnotationMissionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAnnotationMissionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyAnnotationMissionResponseBodyData() = default ;
    ModifyAnnotationMissionResponseBodyData(const ModifyAnnotationMissionResponseBodyData &) = default ;
    ModifyAnnotationMissionResponseBodyData(ModifyAnnotationMissionResponseBodyData &&) = default ;
    ModifyAnnotationMissionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAnnotationMissionResponseBodyData() = default ;
    ModifyAnnotationMissionResponseBodyData& operator=(const ModifyAnnotationMissionResponseBodyData &) = default ;
    ModifyAnnotationMissionResponseBodyData& operator=(ModifyAnnotationMissionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->success_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyAnnotationMissionResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyAnnotationMissionResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

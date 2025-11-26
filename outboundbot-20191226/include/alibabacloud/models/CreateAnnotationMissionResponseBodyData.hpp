// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANNOTATIONMISSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEANNOTATIONMISSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class CreateAnnotationMissionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAnnotationMissionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAnnotationMissionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateAnnotationMissionResponseBodyData() = default ;
    CreateAnnotationMissionResponseBodyData(const CreateAnnotationMissionResponseBodyData &) = default ;
    CreateAnnotationMissionResponseBodyData(CreateAnnotationMissionResponseBodyData &&) = default ;
    CreateAnnotationMissionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAnnotationMissionResponseBodyData() = default ;
    CreateAnnotationMissionResponseBodyData& operator=(const CreateAnnotationMissionResponseBodyData &) = default ;
    CreateAnnotationMissionResponseBodyData& operator=(CreateAnnotationMissionResponseBodyData &&) = default ;
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
    inline CreateAnnotationMissionResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateAnnotationMissionResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

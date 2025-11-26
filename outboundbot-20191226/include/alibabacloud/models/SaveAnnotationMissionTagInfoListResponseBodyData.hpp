// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONTAGINFOLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SAVEANNOTATIONMISSIONTAGINFOLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SaveAnnotationMissionTagInfoListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAnnotationMissionTagInfoListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ExecCount, execCount_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAnnotationMissionTagInfoListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecCount, execCount_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SaveAnnotationMissionTagInfoListResponseBodyData() = default ;
    SaveAnnotationMissionTagInfoListResponseBodyData(const SaveAnnotationMissionTagInfoListResponseBodyData &) = default ;
    SaveAnnotationMissionTagInfoListResponseBodyData(SaveAnnotationMissionTagInfoListResponseBodyData &&) = default ;
    SaveAnnotationMissionTagInfoListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAnnotationMissionTagInfoListResponseBodyData() = default ;
    SaveAnnotationMissionTagInfoListResponseBodyData& operator=(const SaveAnnotationMissionTagInfoListResponseBodyData &) = default ;
    SaveAnnotationMissionTagInfoListResponseBodyData& operator=(SaveAnnotationMissionTagInfoListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execCount_ == nullptr
        && return this->message_ == nullptr && return this->success_ == nullptr; };
    // execCount Field Functions 
    bool hasExecCount() const { return this->execCount_ != nullptr;};
    void deleteExecCount() { this->execCount_ = nullptr;};
    inline int32_t execCount() const { DARABONBA_PTR_GET_DEFAULT(execCount_, 0) };
    inline SaveAnnotationMissionTagInfoListResponseBodyData& setExecCount(int32_t execCount) { DARABONBA_PTR_SET_VALUE(execCount_, execCount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SaveAnnotationMissionTagInfoListResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SaveAnnotationMissionTagInfoListResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<int32_t> execCount_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif

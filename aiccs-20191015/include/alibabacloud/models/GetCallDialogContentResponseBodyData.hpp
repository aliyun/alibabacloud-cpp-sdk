// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDIALOGCONTENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDIALOGCONTENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetCallDialogContentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDialogContentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_TO_JSON(DialogContent, dialogContent_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDialogContentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_FROM_JSON(DialogContent, dialogContent_);
    };
    GetCallDialogContentResponseBodyData() = default ;
    GetCallDialogContentResponseBodyData(const GetCallDialogContentResponseBodyData &) = default ;
    GetCallDialogContentResponseBodyData(GetCallDialogContentResponseBodyData &&) = default ;
    GetCallDialogContentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDialogContentResponseBodyData() = default ;
    GetCallDialogContentResponseBodyData& operator=(const GetCallDialogContentResponseBodyData &) = default ;
    GetCallDialogContentResponseBodyData& operator=(GetCallDialogContentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && return this->callStatus_ == nullptr && return this->dialogContent_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline GetCallDialogContentResponseBodyData& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callStatus Field Functions 
    bool hasCallStatus() const { return this->callStatus_ != nullptr;};
    void deleteCallStatus() { this->callStatus_ = nullptr;};
    inline int64_t callStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, 0L) };
    inline GetCallDialogContentResponseBodyData& setCallStatus(int64_t callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


    // dialogContent Field Functions 
    bool hasDialogContent() const { return this->dialogContent_ != nullptr;};
    void deleteDialogContent() { this->dialogContent_ = nullptr;};
    inline string dialogContent() const { DARABONBA_PTR_GET_DEFAULT(dialogContent_, "") };
    inline GetCallDialogContentResponseBodyData& setDialogContent(string dialogContent) { DARABONBA_PTR_SET_VALUE(dialogContent_, dialogContent) };


  protected:
    std::shared_ptr<string> callId_ = nullptr;
    std::shared_ptr<int64_t> callStatus_ = nullptr;
    std::shared_ptr<string> dialogContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif

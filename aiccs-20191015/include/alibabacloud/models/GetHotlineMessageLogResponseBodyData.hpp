// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTLINEMESSAGELOGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHOTLINEMESSAGELOGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetHotlineMessageLogResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotlineMessageLogResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Mid, mid_);
      DARABONBA_PTR_TO_JSON(SenderType, senderType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotlineMessageLogResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Mid, mid_);
      DARABONBA_PTR_FROM_JSON(SenderType, senderType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetHotlineMessageLogResponseBodyData() = default ;
    GetHotlineMessageLogResponseBodyData(const GetHotlineMessageLogResponseBodyData &) = default ;
    GetHotlineMessageLogResponseBodyData(GetHotlineMessageLogResponseBodyData &&) = default ;
    GetHotlineMessageLogResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotlineMessageLogResponseBodyData() = default ;
    GetHotlineMessageLogResponseBodyData& operator=(const GetHotlineMessageLogResponseBodyData &) = default ;
    GetHotlineMessageLogResponseBodyData& operator=(GetHotlineMessageLogResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acid_ == nullptr
        && return this->content_ == nullptr && return this->endTime_ == nullptr && return this->mid_ == nullptr && return this->senderType_ == nullptr && return this->startTime_ == nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline GetHotlineMessageLogResponseBodyData& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetHotlineMessageLogResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetHotlineMessageLogResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // mid Field Functions 
    bool hasMid() const { return this->mid_ != nullptr;};
    void deleteMid() { this->mid_ = nullptr;};
    inline string mid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
    inline GetHotlineMessageLogResponseBodyData& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


    // senderType Field Functions 
    bool hasSenderType() const { return this->senderType_ != nullptr;};
    void deleteSenderType() { this->senderType_ = nullptr;};
    inline int32_t senderType() const { DARABONBA_PTR_GET_DEFAULT(senderType_, 0) };
    inline GetHotlineMessageLogResponseBodyData& setSenderType(int32_t senderType) { DARABONBA_PTR_SET_VALUE(senderType_, senderType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetHotlineMessageLogResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> mid_ = nullptr;
    std::shared_ptr<int32_t> senderType_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYONLINEMEETINGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYONLINEMEETINGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetEventResponseBodyOnlineMeetingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventResponseBodyOnlineMeetingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
      DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventResponseBodyOnlineMeetingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
      DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetEventResponseBodyOnlineMeetingInfo() = default ;
    GetEventResponseBodyOnlineMeetingInfo(const GetEventResponseBodyOnlineMeetingInfo &) = default ;
    GetEventResponseBodyOnlineMeetingInfo(GetEventResponseBodyOnlineMeetingInfo &&) = default ;
    GetEventResponseBodyOnlineMeetingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventResponseBodyOnlineMeetingInfo() = default ;
    GetEventResponseBodyOnlineMeetingInfo& operator=(const GetEventResponseBodyOnlineMeetingInfo &) = default ;
    GetEventResponseBodyOnlineMeetingInfo& operator=(GetEventResponseBodyOnlineMeetingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conferenceId_ != nullptr
        && this->extraInfo_ != nullptr && this->type_ != nullptr && this->url_ != nullptr; };
    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline GetEventResponseBodyOnlineMeetingInfo& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline     const Darabonba::Json & extraInfo() const { DARABONBA_GET(extraInfo_) };
    Darabonba::Json & extraInfo() { DARABONBA_GET(extraInfo_) };
    inline GetEventResponseBodyOnlineMeetingInfo& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
    inline GetEventResponseBodyOnlineMeetingInfo& setExtraInfo(Darabonba::Json & extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetEventResponseBodyOnlineMeetingInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetEventResponseBodyOnlineMeetingInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> conferenceId_ = nullptr;
    Darabonba::Json extraInfo_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

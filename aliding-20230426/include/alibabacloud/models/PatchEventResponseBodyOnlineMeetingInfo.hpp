// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODYONLINEMEETINGINFO_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODYONLINEMEETINGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventResponseBodyOnlineMeetingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventResponseBodyOnlineMeetingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventResponseBodyOnlineMeetingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    PatchEventResponseBodyOnlineMeetingInfo() = default ;
    PatchEventResponseBodyOnlineMeetingInfo(const PatchEventResponseBodyOnlineMeetingInfo &) = default ;
    PatchEventResponseBodyOnlineMeetingInfo(PatchEventResponseBodyOnlineMeetingInfo &&) = default ;
    PatchEventResponseBodyOnlineMeetingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventResponseBodyOnlineMeetingInfo() = default ;
    PatchEventResponseBodyOnlineMeetingInfo& operator=(const PatchEventResponseBodyOnlineMeetingInfo &) = default ;
    PatchEventResponseBodyOnlineMeetingInfo& operator=(PatchEventResponseBodyOnlineMeetingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conferenceId_ == nullptr
        && return this->type_ == nullptr && return this->url_ == nullptr; };
    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string conferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline PatchEventResponseBodyOnlineMeetingInfo& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PatchEventResponseBodyOnlineMeetingInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline PatchEventResponseBodyOnlineMeetingInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> conferenceId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif

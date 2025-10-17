// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTINFO_HPP_
#define ALIBABACLOUD_MODELS_EVENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class EventInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, EventInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PodId, podId_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    EventInfo() = default ;
    EventInfo(const EventInfo &) = default ;
    EventInfo(EventInfo &&) = default ;
    EventInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventInfo() = default ;
    EventInfo& operator=(const EventInfo &) = default ;
    EventInfo& operator=(EventInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->id_ == nullptr && return this->podId_ == nullptr && return this->podUid_ == nullptr && return this->time_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline EventInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline EventInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string podId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline EventInfo& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string podUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline EventInfo& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline EventInfo& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> podId_ = nullptr;
    std::shared_ptr<string> podUid_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

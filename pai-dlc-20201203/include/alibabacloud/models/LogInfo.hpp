// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGINFO_HPP_
#define ALIBABACLOUD_MODELS_LOGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class LogInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LogInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(PodId, podId_);
      DARABONBA_PTR_TO_JSON(PodUid, podUid_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, LogInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(PodId, podId_);
      DARABONBA_PTR_FROM_JSON(PodUid, podUid_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    LogInfo() = default ;
    LogInfo(const LogInfo &) = default ;
    LogInfo(LogInfo &&) = default ;
    LogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LogInfo() = default ;
    LogInfo& operator=(const LogInfo &) = default ;
    LogInfo& operator=(LogInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->id_ == nullptr && return this->isTruncated_ == nullptr && return this->podId_ == nullptr && return this->podUid_ == nullptr && return this->source_ == nullptr
        && return this->time_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline LogInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline LogInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool isTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline LogInfo& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // podId Field Functions 
    bool hasPodId() const { return this->podId_ != nullptr;};
    void deletePodId() { this->podId_ = nullptr;};
    inline string podId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
    inline LogInfo& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


    // podUid Field Functions 
    bool hasPodUid() const { return this->podUid_ != nullptr;};
    void deletePodUid() { this->podUid_ = nullptr;};
    inline string podUid() const { DARABONBA_PTR_GET_DEFAULT(podUid_, "") };
    inline LogInfo& setPodUid(string podUid) { DARABONBA_PTR_SET_VALUE(podUid_, podUid) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline LogInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline LogInfo& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isTruncated_ = nullptr;
    std::shared_ptr<string> podId_ = nullptr;
    std::shared_ptr<string> podUid_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif

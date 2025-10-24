// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTCLIPTIMESPAN_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTCLIPTIMESPAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputClipTimeSpan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputClipTimeSpan& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Seek, seek_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputClipTimeSpan& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Seek, seek_);
    };
    QueryJobListResponseBodyJobListJobOutputClipTimeSpan() = default ;
    QueryJobListResponseBodyJobListJobOutputClipTimeSpan(const QueryJobListResponseBodyJobListJobOutputClipTimeSpan &) = default ;
    QueryJobListResponseBodyJobListJobOutputClipTimeSpan(QueryJobListResponseBodyJobListJobOutputClipTimeSpan &&) = default ;
    QueryJobListResponseBodyJobListJobOutputClipTimeSpan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputClipTimeSpan() = default ;
    QueryJobListResponseBodyJobListJobOutputClipTimeSpan& operator=(const QueryJobListResponseBodyJobListJobOutputClipTimeSpan &) = default ;
    QueryJobListResponseBodyJobListJobOutputClipTimeSpan& operator=(QueryJobListResponseBodyJobListJobOutputClipTimeSpan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->seek_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline QueryJobListResponseBodyJobListJobOutputClipTimeSpan& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // seek Field Functions 
    bool hasSeek() const { return this->seek_ != nullptr;};
    void deleteSeek() { this->seek_ = nullptr;};
    inline string seek() const { DARABONBA_PTR_GET_DEFAULT(seek_, "") };
    inline QueryJobListResponseBodyJobListJobOutputClipTimeSpan& setSeek(string seek) { DARABONBA_PTR_SET_VALUE(seek_, seek) };


  protected:
    // The duration of the clip.
    // 
    // *   Format: `hh:mm:ss[.SSS]`.
    // *   Example: 01:00:59.999.
    // 
    // Or
    // 
    // *   Format: `sssss[.SSS]`.
    // *   Example: 32000.23.
    std::shared_ptr<string> duration_ = nullptr;
    // The point in time when the clip starts.
    // 
    // *   Format: `hh:mm:ss[.SSS]`.
    // *   Example: 01:59:59.999.
    // 
    // Or
    // 
    // *   Format: `sssss[.SSS]`.
    // *   Example: 32000.23.
    std::shared_ptr<string> seek_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

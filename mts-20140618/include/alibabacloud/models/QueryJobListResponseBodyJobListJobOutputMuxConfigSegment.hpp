// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTMUXCONFIGSEGMENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTMUXCONFIGSEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputMuxConfigSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputMuxConfigSegment& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputMuxConfigSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    QueryJobListResponseBodyJobListJobOutputMuxConfigSegment() = default ;
    QueryJobListResponseBodyJobListJobOutputMuxConfigSegment(const QueryJobListResponseBodyJobListJobOutputMuxConfigSegment &) = default ;
    QueryJobListResponseBodyJobListJobOutputMuxConfigSegment(QueryJobListResponseBodyJobListJobOutputMuxConfigSegment &&) = default ;
    QueryJobListResponseBodyJobListJobOutputMuxConfigSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputMuxConfigSegment() = default ;
    QueryJobListResponseBodyJobListJobOutputMuxConfigSegment& operator=(const QueryJobListResponseBodyJobListJobOutputMuxConfigSegment &) = default ;
    QueryJobListResponseBodyJobListJobOutputMuxConfigSegment& operator=(QueryJobListResponseBodyJobListJobOutputMuxConfigSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline QueryJobListResponseBodyJobListJobOutputMuxConfigSegment& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    // The segment length. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

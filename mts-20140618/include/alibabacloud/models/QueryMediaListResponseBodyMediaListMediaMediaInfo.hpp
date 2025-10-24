// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTRESPONSEBODYMEDIALISTMEDIAMEDIAINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaMediaInfoFormat.hpp>
#include <alibabacloud/models/QueryMediaListResponseBodyMediaListMediaMediaInfoStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListResponseBodyMediaListMediaMediaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListResponseBodyMediaListMediaMediaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Streams, streams_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListResponseBodyMediaListMediaMediaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Streams, streams_);
    };
    QueryMediaListResponseBodyMediaListMediaMediaInfo() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfo(const QueryMediaListResponseBodyMediaListMediaMediaInfo &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfo(QueryMediaListResponseBodyMediaListMediaMediaInfo &&) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListResponseBodyMediaListMediaMediaInfo() = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfo& operator=(const QueryMediaListResponseBodyMediaListMediaMediaInfo &) = default ;
    QueryMediaListResponseBodyMediaListMediaMediaInfo& operator=(QueryMediaListResponseBodyMediaListMediaMediaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->streams_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoFormat & format() const { DARABONBA_PTR_GET_CONST(format_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoFormat) };
    inline Models::QueryMediaListResponseBodyMediaListMediaMediaInfoFormat format() { DARABONBA_PTR_GET(format_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoFormat) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfo& setFormat(const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoFormat & format) { DARABONBA_PTR_SET_VALUE(format_, format) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfo& setFormat(Models::QueryMediaListResponseBodyMediaListMediaMediaInfoFormat && format) { DARABONBA_PTR_SET_RVALUE(format_, format) };


    // streams Field Functions 
    bool hasStreams() const { return this->streams_ != nullptr;};
    void deleteStreams() { this->streams_ = nullptr;};
    inline const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreams & streams() const { DARABONBA_PTR_GET_CONST(streams_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreams) };
    inline Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreams streams() { DARABONBA_PTR_GET(streams_, Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreams) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfo& setStreams(const Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
    inline QueryMediaListResponseBodyMediaListMediaMediaInfo& setStreams(Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


  protected:
    // The format information.
    std::shared_ptr<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoFormat> format_ = nullptr;
    // The stream information.
    std::shared_ptr<Models::QueryMediaListResponseBodyMediaListMediaMediaInfoStreams> streams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

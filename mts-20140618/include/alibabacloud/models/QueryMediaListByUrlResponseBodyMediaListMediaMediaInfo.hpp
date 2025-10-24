// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAMEDIAINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAMEDIAINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat.hpp>
#include <alibabacloud/models/QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaMediaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaMediaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Streams, streams_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaMediaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Streams, streams_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfo() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfo(const QueryMediaListByURLResponseBodyMediaListMediaMediaInfo &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfo(QueryMediaListByURLResponseBodyMediaListMediaMediaInfo &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaMediaInfo() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfo& operator=(const QueryMediaListByURLResponseBodyMediaListMediaMediaInfo &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfo& operator=(QueryMediaListByURLResponseBodyMediaListMediaMediaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->format_ == nullptr
        && return this->streams_ == nullptr; };
    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat & format() const { DARABONBA_PTR_GET_CONST(format_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat) };
    inline Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat format() { DARABONBA_PTR_GET(format_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfo& setFormat(const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat & format) { DARABONBA_PTR_SET_VALUE(format_, format) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfo& setFormat(Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat && format) { DARABONBA_PTR_SET_RVALUE(format_, format) };


    // streams Field Functions 
    bool hasStreams() const { return this->streams_ != nullptr;};
    void deleteStreams() { this->streams_ = nullptr;};
    inline const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams & streams() const { DARABONBA_PTR_GET_CONST(streams_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams) };
    inline Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams streams() { DARABONBA_PTR_GET(streams_, Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfo& setStreams(const Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfo& setStreams(Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


  protected:
    // The format information.
    std::shared_ptr<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat> format_ = nullptr;
    // The stream information.
    std::shared_ptr<Models::QueryMediaListByURLResponseBodyMediaListMediaMediaInfoStreams> streams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

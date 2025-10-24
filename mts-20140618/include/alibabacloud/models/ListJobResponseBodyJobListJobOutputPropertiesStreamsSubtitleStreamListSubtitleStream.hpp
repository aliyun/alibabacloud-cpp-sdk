// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSSUBTITLESTREAMLISTSUBTITLESTREAM_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSSUBTITLESTREAMLISTSUBTITLESTREAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream(const ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream(ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream &&) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream& operator=(const ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream& operator=(ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->lang_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The sequence number of the subtitle stream. The value indicates the position of the subtitle stream in all subtitle streams.
    std::shared_ptr<string> index_ = nullptr;
    // The language of the subtitle stream.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

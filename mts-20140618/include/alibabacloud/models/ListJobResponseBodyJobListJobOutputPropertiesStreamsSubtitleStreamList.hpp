// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSSUBTITLESTREAMLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTPROPERTIESSTREAMSSUBTITLESTREAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& obj) { 
      DARABONBA_PTR_TO_JSON(SubtitleStream, subtitleStream_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& obj) { 
      DARABONBA_PTR_FROM_JSON(SubtitleStream, subtitleStream_);
    };
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList(const ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList(ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList &&) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList() = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& operator=(const ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList &) = default ;
    ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& operator=(ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subtitleStream_ == nullptr; };
    // subtitleStream Field Functions 
    bool hasSubtitleStream() const { return this->subtitleStream_ != nullptr;};
    void deleteSubtitleStream() { this->subtitleStream_ = nullptr;};
    inline const vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream> & subtitleStream() const { DARABONBA_PTR_GET_CONST(subtitleStream_, vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream>) };
    inline vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream> subtitleStream() { DARABONBA_PTR_GET(subtitleStream_, vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream>) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& setSubtitleStream(const vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream> & subtitleStream) { DARABONBA_PTR_SET_VALUE(subtitleStream_, subtitleStream) };
    inline ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamList& setSubtitleStream(vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream> && subtitleStream) { DARABONBA_PTR_SET_RVALUE(subtitleStream_, subtitleStream) };


  protected:
    std::shared_ptr<vector<Models::ListJobResponseBodyJobListJobOutputPropertiesStreamsSubtitleStreamListSubtitleStream>> subtitleStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

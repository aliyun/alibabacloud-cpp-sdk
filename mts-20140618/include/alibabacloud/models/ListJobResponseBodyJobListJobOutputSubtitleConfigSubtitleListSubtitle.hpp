// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGSUBTITLELISTSUBTITLE_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUBTITLECONFIGSUBTITLELISTSUBTITLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle& obj) { 
      DARABONBA_PTR_TO_JSON(Map, map_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle& obj) { 
      DARABONBA_PTR_FROM_JSON(Map, map_);
    };
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle() = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle(const ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle &) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle(ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle &&) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle() = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle& operator=(const ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle &) = default ;
    ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle& operator=(ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->map_ == nullptr; };
    // map Field Functions 
    bool hasMap() const { return this->map_ != nullptr;};
    void deleteMap() { this->map_ = nullptr;};
    inline string _map() const { DARABONBA_PTR_GET_DEFAULT(map_, "") };
    inline ListJobResponseBodyJobListJobOutputSubtitleConfigSubtitleListSubtitle& setMap(string _map) { DARABONBA_PTR_SET_VALUE(map_, _map) };


  protected:
    // The sequence number of the video stream. The sequence number is the index of the video stream in the list and starts from 0. If you do not set the corresponding parameter in the request, the default video stream is selected.
    std::shared_ptr<string> map_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

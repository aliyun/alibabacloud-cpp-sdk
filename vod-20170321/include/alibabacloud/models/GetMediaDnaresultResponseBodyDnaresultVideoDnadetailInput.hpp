// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODYDNARESULTVIDEODNADETAILINPUT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODYDNARESULTVIDEODNADETAILINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput() = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput(const GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput &) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput(GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput &&) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput() = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput& operator=(const GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput &) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput& operator=(GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->start_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The duration of the video. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
    // The start time of the video. Unit: seconds.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

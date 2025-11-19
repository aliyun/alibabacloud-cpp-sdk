// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODYDNARESULTVIDEODNADETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODYDNARESULTVIDEODNADETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaDNAResultResponseBodyDNAResultVideoDNADetailDuplication.hpp>
#include <alibabacloud/models/GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaDNAResultResponseBodyDNAResultVideoDNADetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaDNAResultResponseBodyDNAResultVideoDNADetail& obj) { 
      DARABONBA_PTR_TO_JSON(Duplication, duplication_);
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaDNAResultResponseBodyDNAResultVideoDNADetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Duplication, duplication_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetail() = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetail(const GetMediaDNAResultResponseBodyDNAResultVideoDNADetail &) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetail(GetMediaDNAResultResponseBodyDNAResultVideoDNADetail &&) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaDNAResultResponseBodyDNAResultVideoDNADetail() = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetail& operator=(const GetMediaDNAResultResponseBodyDNAResultVideoDNADetail &) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNADetail& operator=(GetMediaDNAResultResponseBodyDNAResultVideoDNADetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duplication_ == nullptr
        && return this->input_ == nullptr; };
    // duplication Field Functions 
    bool hasDuplication() const { return this->duplication_ != nullptr;};
    void deleteDuplication() { this->duplication_ = nullptr;};
    inline const Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailDuplication & duplication() const { DARABONBA_PTR_GET_CONST(duplication_, Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailDuplication) };
    inline Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailDuplication duplication() { DARABONBA_PTR_GET(duplication_, Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailDuplication) };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNADetail& setDuplication(const Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailDuplication & duplication) { DARABONBA_PTR_SET_VALUE(duplication_, duplication) };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNADetail& setDuplication(Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailDuplication && duplication) { DARABONBA_PTR_SET_RVALUE(duplication_, duplication) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput) };
    inline Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput input() { DARABONBA_PTR_GET(input_, Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput) };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNADetail& setInput(const Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNADetail& setInput(Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The start time and duration of the matched video.
    std::shared_ptr<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailDuplication> duplication_ = nullptr;
    // The start time and duration of the input video.
    std::shared_ptr<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetailInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

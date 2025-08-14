// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODEJOBRESPONSEBODYJOBOUTPUTSTREAM_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODEJOBRESPONSEBODYJOBOUTPUTSTREAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeJobResponseBodyJobOutputStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeJobResponseBodyJobOutputStream& obj) { 
      DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeJobResponseBodyJobOutputStream& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
    };
    GetLiveTranscodeJobResponseBodyJobOutputStream() = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStream(const GetLiveTranscodeJobResponseBodyJobOutputStream &) = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStream(GetLiveTranscodeJobResponseBodyJobOutputStream &&) = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeJobResponseBodyJobOutputStream() = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStream& operator=(const GetLiveTranscodeJobResponseBodyJobOutputStream &) = default ;
    GetLiveTranscodeJobResponseBodyJobOutputStream& operator=(GetLiveTranscodeJobResponseBodyJobOutputStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->streamInfos_ != nullptr; };
    // streamInfos Field Functions 
    bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
    void deleteStreamInfos() { this->streamInfos_ = nullptr;};
    inline const vector<Models::GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos> & streamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, vector<Models::GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos>) };
    inline vector<Models::GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos> streamInfos() { DARABONBA_PTR_GET(streamInfos_, vector<Models::GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos>) };
    inline GetLiveTranscodeJobResponseBodyJobOutputStream& setStreamInfos(const vector<Models::GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos> & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
    inline GetLiveTranscodeJobResponseBodyJobOutputStream& setStreamInfos(vector<Models::GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos> && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


  protected:
    // The information about the output stream.
    std::shared_ptr<vector<Models::GetLiveTranscodeJobResponseBodyJobOutputStreamStreamInfos>> streamInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETRANSCODEJOBSRESPONSEBODYJOBLISTOUTPUTSTREAM_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETRANSCODEJOBSRESPONSEBODYJOBLISTOUTPUTSTREAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveTranscodeJobsResponseBodyJobListOutputStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTranscodeJobsResponseBodyJobListOutputStream& obj) { 
      DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTranscodeJobsResponseBodyJobListOutputStream& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
    };
    ListLiveTranscodeJobsResponseBodyJobListOutputStream() = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStream(const ListLiveTranscodeJobsResponseBodyJobListOutputStream &) = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStream(ListLiveTranscodeJobsResponseBodyJobListOutputStream &&) = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTranscodeJobsResponseBodyJobListOutputStream() = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStream& operator=(const ListLiveTranscodeJobsResponseBodyJobListOutputStream &) = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStream& operator=(ListLiveTranscodeJobsResponseBodyJobListOutputStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->streamInfos_ != nullptr; };
    // streamInfos Field Functions 
    bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
    void deleteStreamInfos() { this->streamInfos_ = nullptr;};
    inline const vector<Models::ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos> & streamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, vector<Models::ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos>) };
    inline vector<Models::ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos> streamInfos() { DARABONBA_PTR_GET(streamInfos_, vector<Models::ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos>) };
    inline ListLiveTranscodeJobsResponseBodyJobListOutputStream& setStreamInfos(const vector<Models::ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos> & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
    inline ListLiveTranscodeJobsResponseBodyJobListOutputStream& setStreamInfos(vector<Models::ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos> && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


  protected:
    // The list of stream URLs.
    std::shared_ptr<vector<Models::ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos>> streamInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

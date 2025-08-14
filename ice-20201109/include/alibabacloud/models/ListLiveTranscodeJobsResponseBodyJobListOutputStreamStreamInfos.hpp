// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETRANSCODEJOBSRESPONSEBODYJOBLISTOUTPUTSTREAMSTREAMINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETRANSCODEJOBSRESPONSEBODYJOBLISTOUTPUTSTREAMSTREAMINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos& obj) { 
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos() = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos(const ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos &) = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos(ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos &&) = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos() = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos& operator=(const ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos &) = default ;
    ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos& operator=(ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outputUrl_ != nullptr
        && this->type_ != nullptr; };
    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListLiveTranscodeJobsResponseBodyJobListOutputStreamStreamInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The URL of the output stream.
    std::shared_ptr<string> outputUrl_ = nullptr;
    // The type of the output stream protocol. Only the RTMP protocol is supported.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

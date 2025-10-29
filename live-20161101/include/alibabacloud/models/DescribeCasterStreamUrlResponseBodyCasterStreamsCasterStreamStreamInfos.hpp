// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODYCASTERSTREAMSCASTERSTREAMSTREAMINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODYCASTERSTREAMSCASTERSTREAMSTREAMINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfosStreamInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos& obj) { 
      DARABONBA_PTR_TO_JSON(StreamInfo, streamInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamInfo, streamInfo_);
    };
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos() = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos(const DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos &) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos(DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos &&) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos() = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos& operator=(const DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos &) = default ;
    DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos& operator=(DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamInfo_ == nullptr; };
    // streamInfo Field Functions 
    bool hasStreamInfo() const { return this->streamInfo_ != nullptr;};
    void deleteStreamInfo() { this->streamInfo_ = nullptr;};
    inline const vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfosStreamInfo> & streamInfo() const { DARABONBA_PTR_GET_CONST(streamInfo_, vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfosStreamInfo>) };
    inline vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfosStreamInfo> streamInfo() { DARABONBA_PTR_GET(streamInfo_, vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfosStreamInfo>) };
    inline DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos& setStreamInfo(const vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfosStreamInfo> & streamInfo) { DARABONBA_PTR_SET_VALUE(streamInfo_, streamInfo) };
    inline DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfos& setStreamInfo(vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfosStreamInfo> && streamInfo) { DARABONBA_PTR_SET_RVALUE(streamInfo_, streamInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterStreamUrlResponseBodyCasterStreamsCasterStreamStreamInfosStreamInfo>> streamInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

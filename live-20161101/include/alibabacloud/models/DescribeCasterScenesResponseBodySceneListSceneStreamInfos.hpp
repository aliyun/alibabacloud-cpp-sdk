// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELISTSCENESTREAMINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELISTSCENESTREAMINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterScenesResponseBodySceneListSceneStreamInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterScenesResponseBodySceneListSceneStreamInfos& obj) { 
      DARABONBA_PTR_TO_JSON(StreamInfo, streamInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterScenesResponseBodySceneListSceneStreamInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamInfo, streamInfo_);
    };
    DescribeCasterScenesResponseBodySceneListSceneStreamInfos() = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfos(const DescribeCasterScenesResponseBodySceneListSceneStreamInfos &) = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfos(DescribeCasterScenesResponseBodySceneListSceneStreamInfos &&) = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterScenesResponseBodySceneListSceneStreamInfos() = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfos& operator=(const DescribeCasterScenesResponseBodySceneListSceneStreamInfos &) = default ;
    DescribeCasterScenesResponseBodySceneListSceneStreamInfos& operator=(DescribeCasterScenesResponseBodySceneListSceneStreamInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->streamInfo_ != nullptr; };
    // streamInfo Field Functions 
    bool hasStreamInfo() const { return this->streamInfo_ != nullptr;};
    void deleteStreamInfo() { this->streamInfo_ = nullptr;};
    inline const vector<Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo> & streamInfo() const { DARABONBA_PTR_GET_CONST(streamInfo_, vector<Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo>) };
    inline vector<Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo> streamInfo() { DARABONBA_PTR_GET(streamInfo_, vector<Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo>) };
    inline DescribeCasterScenesResponseBodySceneListSceneStreamInfos& setStreamInfo(const vector<Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo> & streamInfo) { DARABONBA_PTR_SET_VALUE(streamInfo_, streamInfo) };
    inline DescribeCasterScenesResponseBodySceneListSceneStreamInfos& setStreamInfo(vector<Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo> && streamInfo) { DARABONBA_PTR_SET_RVALUE(streamInfo_, streamInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfosStreamInfo>> streamInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOPIPELINEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFOPIPELINEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineInfo, pipelineInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineInfo, pipelineInfo_);
    };
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList(const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList(GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList &&) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList& operator=(const GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList& operator=(GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pipelineInfo_ == nullptr; };
    // pipelineInfo Field Functions 
    bool hasPipelineInfo() const { return this->pipelineInfo_ != nullptr;};
    void deletePipelineInfo() { this->pipelineInfo_ = nullptr;};
    inline const vector<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo> & pipelineInfo() const { DARABONBA_PTR_GET_CONST(pipelineInfo_, vector<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo>) };
    inline vector<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo> pipelineInfo() { DARABONBA_PTR_GET(pipelineInfo_, vector<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo>) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList& setPipelineInfo(const vector<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo> & pipelineInfo) { DARABONBA_PTR_SET_VALUE(pipelineInfo_, pipelineInfo) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList& setPipelineInfo(vector<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo> && pipelineInfo) { DARABONBA_PTR_SET_RVALUE(pipelineInfo_, pipelineInfo) };


  protected:
    std::shared_ptr<vector<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoListPipelineInfo>> pipelineInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRIEFRESOURCESETTING_HPP_
#define ALIBABACLOUD_MODELS_BRIEFRESOURCESETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchResourceSetting.hpp>
#include <alibabacloud/models/StreamingResourceSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class BriefResourceSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BriefResourceSetting& obj) { 
      DARABONBA_PTR_TO_JSON(batchResourceSetting, batchResourceSetting_);
      DARABONBA_ANY_TO_JSON(flinkConf, flinkConf_);
      DARABONBA_PTR_TO_JSON(streamingResourceSetting, streamingResourceSetting_);
    };
    friend void from_json(const Darabonba::Json& j, BriefResourceSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(batchResourceSetting, batchResourceSetting_);
      DARABONBA_ANY_FROM_JSON(flinkConf, flinkConf_);
      DARABONBA_PTR_FROM_JSON(streamingResourceSetting, streamingResourceSetting_);
    };
    BriefResourceSetting() = default ;
    BriefResourceSetting(const BriefResourceSetting &) = default ;
    BriefResourceSetting(BriefResourceSetting &&) = default ;
    BriefResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BriefResourceSetting() = default ;
    BriefResourceSetting& operator=(const BriefResourceSetting &) = default ;
    BriefResourceSetting& operator=(BriefResourceSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchResourceSetting_ == nullptr
        && return this->flinkConf_ == nullptr && return this->streamingResourceSetting_ == nullptr; };
    // batchResourceSetting Field Functions 
    bool hasBatchResourceSetting() const { return this->batchResourceSetting_ != nullptr;};
    void deleteBatchResourceSetting() { this->batchResourceSetting_ = nullptr;};
    inline const BatchResourceSetting & batchResourceSetting() const { DARABONBA_PTR_GET_CONST(batchResourceSetting_, BatchResourceSetting) };
    inline BatchResourceSetting batchResourceSetting() { DARABONBA_PTR_GET(batchResourceSetting_, BatchResourceSetting) };
    inline BriefResourceSetting& setBatchResourceSetting(const BatchResourceSetting & batchResourceSetting) { DARABONBA_PTR_SET_VALUE(batchResourceSetting_, batchResourceSetting) };
    inline BriefResourceSetting& setBatchResourceSetting(BatchResourceSetting && batchResourceSetting) { DARABONBA_PTR_SET_RVALUE(batchResourceSetting_, batchResourceSetting) };


    // flinkConf Field Functions 
    bool hasFlinkConf() const { return this->flinkConf_ != nullptr;};
    void deleteFlinkConf() { this->flinkConf_ = nullptr;};
    inline     const Darabonba::Json & flinkConf() const { DARABONBA_GET(flinkConf_) };
    Darabonba::Json & flinkConf() { DARABONBA_GET(flinkConf_) };
    inline BriefResourceSetting& setFlinkConf(const Darabonba::Json & flinkConf) { DARABONBA_SET_VALUE(flinkConf_, flinkConf) };
    inline BriefResourceSetting& setFlinkConf(Darabonba::Json & flinkConf) { DARABONBA_SET_RVALUE(flinkConf_, flinkConf) };


    // streamingResourceSetting Field Functions 
    bool hasStreamingResourceSetting() const { return this->streamingResourceSetting_ != nullptr;};
    void deleteStreamingResourceSetting() { this->streamingResourceSetting_ = nullptr;};
    inline const StreamingResourceSetting & streamingResourceSetting() const { DARABONBA_PTR_GET_CONST(streamingResourceSetting_, StreamingResourceSetting) };
    inline StreamingResourceSetting streamingResourceSetting() { DARABONBA_PTR_GET(streamingResourceSetting_, StreamingResourceSetting) };
    inline BriefResourceSetting& setStreamingResourceSetting(const StreamingResourceSetting & streamingResourceSetting) { DARABONBA_PTR_SET_VALUE(streamingResourceSetting_, streamingResourceSetting) };
    inline BriefResourceSetting& setStreamingResourceSetting(StreamingResourceSetting && streamingResourceSetting) { DARABONBA_PTR_SET_RVALUE(streamingResourceSetting_, streamingResourceSetting) };


  protected:
    std::shared_ptr<BatchResourceSetting> batchResourceSetting_ = nullptr;
    Darabonba::Json flinkConf_ = nullptr;
    std::shared_ptr<StreamingResourceSetting> streamingResourceSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODYPIPELINELISTPIPELINEEXTENDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODYPIPELINELISTPIPELINEEXTENDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryPipelineListResponseBodyPipelineListPipelineExtendConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPipelineListResponseBodyPipelineListPipelineExtendConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IsBoostNew, isBoostNew_);
      DARABONBA_PTR_TO_JSON(MaxMultiSpeed, maxMultiSpeed_);
      DARABONBA_PTR_TO_JSON(MultiSpeedDowngradePolicy, multiSpeedDowngradePolicy_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPipelineListResponseBodyPipelineListPipelineExtendConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IsBoostNew, isBoostNew_);
      DARABONBA_PTR_FROM_JSON(MaxMultiSpeed, maxMultiSpeed_);
      DARABONBA_PTR_FROM_JSON(MultiSpeedDowngradePolicy, multiSpeedDowngradePolicy_);
    };
    QueryPipelineListResponseBodyPipelineListPipelineExtendConfig() = default ;
    QueryPipelineListResponseBodyPipelineListPipelineExtendConfig(const QueryPipelineListResponseBodyPipelineListPipelineExtendConfig &) = default ;
    QueryPipelineListResponseBodyPipelineListPipelineExtendConfig(QueryPipelineListResponseBodyPipelineListPipelineExtendConfig &&) = default ;
    QueryPipelineListResponseBodyPipelineListPipelineExtendConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPipelineListResponseBodyPipelineListPipelineExtendConfig() = default ;
    QueryPipelineListResponseBodyPipelineListPipelineExtendConfig& operator=(const QueryPipelineListResponseBodyPipelineListPipelineExtendConfig &) = default ;
    QueryPipelineListResponseBodyPipelineListPipelineExtendConfig& operator=(QueryPipelineListResponseBodyPipelineListPipelineExtendConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isBoostNew_ == nullptr
        && return this->maxMultiSpeed_ == nullptr && return this->multiSpeedDowngradePolicy_ == nullptr; };
    // isBoostNew Field Functions 
    bool hasIsBoostNew() const { return this->isBoostNew_ != nullptr;};
    void deleteIsBoostNew() { this->isBoostNew_ = nullptr;};
    inline bool isBoostNew() const { DARABONBA_PTR_GET_DEFAULT(isBoostNew_, false) };
    inline QueryPipelineListResponseBodyPipelineListPipelineExtendConfig& setIsBoostNew(bool isBoostNew) { DARABONBA_PTR_SET_VALUE(isBoostNew_, isBoostNew) };


    // maxMultiSpeed Field Functions 
    bool hasMaxMultiSpeed() const { return this->maxMultiSpeed_ != nullptr;};
    void deleteMaxMultiSpeed() { this->maxMultiSpeed_ = nullptr;};
    inline int32_t maxMultiSpeed() const { DARABONBA_PTR_GET_DEFAULT(maxMultiSpeed_, 0) };
    inline QueryPipelineListResponseBodyPipelineListPipelineExtendConfig& setMaxMultiSpeed(int32_t maxMultiSpeed) { DARABONBA_PTR_SET_VALUE(maxMultiSpeed_, maxMultiSpeed) };


    // multiSpeedDowngradePolicy Field Functions 
    bool hasMultiSpeedDowngradePolicy() const { return this->multiSpeedDowngradePolicy_ != nullptr;};
    void deleteMultiSpeedDowngradePolicy() { this->multiSpeedDowngradePolicy_ = nullptr;};
    inline string multiSpeedDowngradePolicy() const { DARABONBA_PTR_GET_DEFAULT(multiSpeedDowngradePolicy_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipelineExtendConfig& setMultiSpeedDowngradePolicy(string multiSpeedDowngradePolicy) { DARABONBA_PTR_SET_VALUE(multiSpeedDowngradePolicy_, multiSpeedDowngradePolicy) };


  protected:
    std::shared_ptr<bool> isBoostNew_ = nullptr;
    std::shared_ptr<int32_t> maxMultiSpeed_ = nullptr;
    std::shared_ptr<string> multiSpeedDowngradePolicy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

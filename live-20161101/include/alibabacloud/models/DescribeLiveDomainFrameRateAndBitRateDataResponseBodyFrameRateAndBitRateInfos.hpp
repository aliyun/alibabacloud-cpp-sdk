// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINFRAMERATEANDBITRATEDATARESPONSEBODYFRAMERATEANDBITRATEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINFRAMERATEANDBITRATEDATARESPONSEBODYFRAMERATEANDBITRATEINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FrameRateAndBitRateInfo, frameRateAndBitRateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameRateAndBitRateInfo, frameRateAndBitRateInfo_);
    };
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos() = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos(const DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos &) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos(DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos &&) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos() = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& operator=(const DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos &) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& operator=(DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frameRateAndBitRateInfo_ != nullptr; };
    // frameRateAndBitRateInfo Field Functions 
    bool hasFrameRateAndBitRateInfo() const { return this->frameRateAndBitRateInfo_ != nullptr;};
    void deleteFrameRateAndBitRateInfo() { this->frameRateAndBitRateInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo> & frameRateAndBitRateInfo() const { DARABONBA_PTR_GET_CONST(frameRateAndBitRateInfo_, vector<Models::DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo>) };
    inline vector<Models::DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo> frameRateAndBitRateInfo() { DARABONBA_PTR_GET(frameRateAndBitRateInfo_, vector<Models::DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo>) };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setFrameRateAndBitRateInfo(const vector<Models::DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo> & frameRateAndBitRateInfo) { DARABONBA_PTR_SET_VALUE(frameRateAndBitRateInfo_, frameRateAndBitRateInfo) };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setFrameRateAndBitRateInfo(vector<Models::DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo> && frameRateAndBitRateInfo) { DARABONBA_PTR_SET_RVALUE(frameRateAndBitRateInfo_, frameRateAndBitRateInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo>> frameRateAndBitRateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif

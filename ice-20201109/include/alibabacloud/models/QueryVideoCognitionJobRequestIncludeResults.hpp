// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBREQUESTINCLUDERESULTS_HPP_
#define ALIBABACLOUD_MODELS_QUERYVIDEOCOGNITIONJOBREQUESTINCLUDERESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryVideoCognitionJobRequestIncludeResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVideoCognitionJobRequestIncludeResults& obj) { 
      DARABONBA_PTR_TO_JSON(NeedAsr, needAsr_);
      DARABONBA_PTR_TO_JSON(NeedOcr, needOcr_);
      DARABONBA_PTR_TO_JSON(NeedProcess, needProcess_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVideoCognitionJobRequestIncludeResults& obj) { 
      DARABONBA_PTR_FROM_JSON(NeedAsr, needAsr_);
      DARABONBA_PTR_FROM_JSON(NeedOcr, needOcr_);
      DARABONBA_PTR_FROM_JSON(NeedProcess, needProcess_);
    };
    QueryVideoCognitionJobRequestIncludeResults() = default ;
    QueryVideoCognitionJobRequestIncludeResults(const QueryVideoCognitionJobRequestIncludeResults &) = default ;
    QueryVideoCognitionJobRequestIncludeResults(QueryVideoCognitionJobRequestIncludeResults &&) = default ;
    QueryVideoCognitionJobRequestIncludeResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVideoCognitionJobRequestIncludeResults() = default ;
    QueryVideoCognitionJobRequestIncludeResults& operator=(const QueryVideoCognitionJobRequestIncludeResults &) = default ;
    QueryVideoCognitionJobRequestIncludeResults& operator=(QueryVideoCognitionJobRequestIncludeResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->needAsr_ != nullptr
        && this->needOcr_ != nullptr && this->needProcess_ != nullptr; };
    // needAsr Field Functions 
    bool hasNeedAsr() const { return this->needAsr_ != nullptr;};
    void deleteNeedAsr() { this->needAsr_ = nullptr;};
    inline bool needAsr() const { DARABONBA_PTR_GET_DEFAULT(needAsr_, false) };
    inline QueryVideoCognitionJobRequestIncludeResults& setNeedAsr(bool needAsr) { DARABONBA_PTR_SET_VALUE(needAsr_, needAsr) };


    // needOcr Field Functions 
    bool hasNeedOcr() const { return this->needOcr_ != nullptr;};
    void deleteNeedOcr() { this->needOcr_ = nullptr;};
    inline bool needOcr() const { DARABONBA_PTR_GET_DEFAULT(needOcr_, false) };
    inline QueryVideoCognitionJobRequestIncludeResults& setNeedOcr(bool needOcr) { DARABONBA_PTR_SET_VALUE(needOcr_, needOcr) };


    // needProcess Field Functions 
    bool hasNeedProcess() const { return this->needProcess_ != nullptr;};
    void deleteNeedProcess() { this->needProcess_ = nullptr;};
    inline bool needProcess() const { DARABONBA_PTR_GET_DEFAULT(needProcess_, false) };
    inline QueryVideoCognitionJobRequestIncludeResults& setNeedProcess(bool needProcess) { DARABONBA_PTR_SET_VALUE(needProcess_, needProcess) };


  protected:
    std::shared_ptr<bool> needAsr_ = nullptr;
    std::shared_ptr<bool> needOcr_ = nullptr;
    std::shared_ptr<bool> needProcess_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

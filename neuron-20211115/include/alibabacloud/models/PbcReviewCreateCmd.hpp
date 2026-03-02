// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCREVIEWCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PBCREVIEWCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcReviewCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcReviewCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(pbcUrl, pbcUrl_);
      DARABONBA_PTR_TO_JSON(pbcVersionId, pbcVersionId_);
      DARABONBA_PTR_TO_JSON(reviewerId, reviewerId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcReviewCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(pbcUrl, pbcUrl_);
      DARABONBA_PTR_FROM_JSON(pbcVersionId, pbcVersionId_);
      DARABONBA_PTR_FROM_JSON(reviewerId, reviewerId_);
    };
    PbcReviewCreateCmd() = default ;
    PbcReviewCreateCmd(const PbcReviewCreateCmd &) = default ;
    PbcReviewCreateCmd(PbcReviewCreateCmd &&) = default ;
    PbcReviewCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcReviewCreateCmd() = default ;
    PbcReviewCreateCmd& operator=(const PbcReviewCreateCmd &) = default ;
    PbcReviewCreateCmd& operator=(PbcReviewCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->marketId_ == nullptr
        && this->pbcUrl_ == nullptr && this->pbcVersionId_ == nullptr && this->reviewerId_ == nullptr; };
    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcReviewCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // pbcUrl Field Functions 
    bool hasPbcUrl() const { return this->pbcUrl_ != nullptr;};
    void deletePbcUrl() { this->pbcUrl_ = nullptr;};
    inline string getPbcUrl() const { DARABONBA_PTR_GET_DEFAULT(pbcUrl_, "") };
    inline PbcReviewCreateCmd& setPbcUrl(string pbcUrl) { DARABONBA_PTR_SET_VALUE(pbcUrl_, pbcUrl) };


    // pbcVersionId Field Functions 
    bool hasPbcVersionId() const { return this->pbcVersionId_ != nullptr;};
    void deletePbcVersionId() { this->pbcVersionId_ = nullptr;};
    inline int64_t getPbcVersionId() const { DARABONBA_PTR_GET_DEFAULT(pbcVersionId_, 0L) };
    inline PbcReviewCreateCmd& setPbcVersionId(int64_t pbcVersionId) { DARABONBA_PTR_SET_VALUE(pbcVersionId_, pbcVersionId) };


    // reviewerId Field Functions 
    bool hasReviewerId() const { return this->reviewerId_ != nullptr;};
    void deleteReviewerId() { this->reviewerId_ = nullptr;};
    inline int64_t getReviewerId() const { DARABONBA_PTR_GET_DEFAULT(reviewerId_, 0L) };
    inline PbcReviewCreateCmd& setReviewerId(int64_t reviewerId) { DARABONBA_PTR_SET_VALUE(reviewerId_, reviewerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> marketId_ {};
    // This parameter is required.
    shared_ptr<string> pbcUrl_ {};
    // This parameter is required.
    shared_ptr<int64_t> pbcVersionId_ {};
    // This parameter is required.
    shared_ptr<int64_t> reviewerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

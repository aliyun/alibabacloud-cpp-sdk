// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEREVIEWCMD_HPP_
#define ALIBABACLOUD_MODELS_REVOKEREVIEWCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RevokeReviewCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeReviewCmd& obj) { 
      DARABONBA_PTR_TO_JSON(pbcVersionId, pbcVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeReviewCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(pbcVersionId, pbcVersionId_);
    };
    RevokeReviewCmd() = default ;
    RevokeReviewCmd(const RevokeReviewCmd &) = default ;
    RevokeReviewCmd(RevokeReviewCmd &&) = default ;
    RevokeReviewCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeReviewCmd() = default ;
    RevokeReviewCmd& operator=(const RevokeReviewCmd &) = default ;
    RevokeReviewCmd& operator=(RevokeReviewCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pbcVersionId_ == nullptr; };
    // pbcVersionId Field Functions 
    bool hasPbcVersionId() const { return this->pbcVersionId_ != nullptr;};
    void deletePbcVersionId() { this->pbcVersionId_ = nullptr;};
    inline int64_t getPbcVersionId() const { DARABONBA_PTR_GET_DEFAULT(pbcVersionId_, 0L) };
    inline RevokeReviewCmd& setPbcVersionId(int64_t pbcVersionId) { DARABONBA_PTR_SET_VALUE(pbcVersionId_, pbcVersionId) };


  protected:
    shared_ptr<int64_t> pbcVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

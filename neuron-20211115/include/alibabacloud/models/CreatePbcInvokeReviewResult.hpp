// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPBCINVOKEREVIEWRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEPBCINVOKEREVIEWRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreatePbcInvokeReviewResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePbcInvokeReviewResult& obj) { 
      DARABONBA_PTR_TO_JSON(pbcInvokeReviewId, pbcInvokeReviewId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePbcInvokeReviewResult& obj) { 
      DARABONBA_PTR_FROM_JSON(pbcInvokeReviewId, pbcInvokeReviewId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreatePbcInvokeReviewResult() = default ;
    CreatePbcInvokeReviewResult(const CreatePbcInvokeReviewResult &) = default ;
    CreatePbcInvokeReviewResult(CreatePbcInvokeReviewResult &&) = default ;
    CreatePbcInvokeReviewResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePbcInvokeReviewResult() = default ;
    CreatePbcInvokeReviewResult& operator=(const CreatePbcInvokeReviewResult &) = default ;
    CreatePbcInvokeReviewResult& operator=(CreatePbcInvokeReviewResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pbcInvokeReviewId_ == nullptr
        && this->requestId_ == nullptr; };
    // pbcInvokeReviewId Field Functions 
    bool hasPbcInvokeReviewId() const { return this->pbcInvokeReviewId_ != nullptr;};
    void deletePbcInvokeReviewId() { this->pbcInvokeReviewId_ = nullptr;};
    inline int64_t getPbcInvokeReviewId() const { DARABONBA_PTR_GET_DEFAULT(pbcInvokeReviewId_, 0L) };
    inline CreatePbcInvokeReviewResult& setPbcInvokeReviewId(int64_t pbcInvokeReviewId) { DARABONBA_PTR_SET_VALUE(pbcInvokeReviewId_, pbcInvokeReviewId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreatePbcInvokeReviewResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> pbcInvokeReviewId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

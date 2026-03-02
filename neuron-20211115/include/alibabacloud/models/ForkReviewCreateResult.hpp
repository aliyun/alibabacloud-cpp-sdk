// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORKREVIEWCREATERESULT_HPP_
#define ALIBABACLOUD_MODELS_FORKREVIEWCREATERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ForkReviewCreateResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForkReviewCreateResult& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ForkReviewCreateResult& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ForkReviewCreateResult() = default ;
    ForkReviewCreateResult(const ForkReviewCreateResult &) = default ;
    ForkReviewCreateResult(ForkReviewCreateResult &&) = default ;
    ForkReviewCreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForkReviewCreateResult() = default ;
    ForkReviewCreateResult& operator=(const ForkReviewCreateResult &) = default ;
    ForkReviewCreateResult& operator=(ForkReviewCreateResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->requestId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ForkReviewCreateResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ForkReviewCreateResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif

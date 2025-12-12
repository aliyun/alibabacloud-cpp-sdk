// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSUBMITREVIEWINFORESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_BATCHSUBMITREVIEWINFORESPONSEBODYMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class BatchSubmitReviewInfoResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSubmitReviewInfoResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSubmitReviewInfoResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    BatchSubmitReviewInfoResponseBodyMessages() = default ;
    BatchSubmitReviewInfoResponseBodyMessages(const BatchSubmitReviewInfoResponseBodyMessages &) = default ;
    BatchSubmitReviewInfoResponseBodyMessages(BatchSubmitReviewInfoResponseBodyMessages &&) = default ;
    BatchSubmitReviewInfoResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSubmitReviewInfoResponseBodyMessages() = default ;
    BatchSubmitReviewInfoResponseBodyMessages& operator=(const BatchSubmitReviewInfoResponseBodyMessages &) = default ;
    BatchSubmitReviewInfoResponseBodyMessages& operator=(BatchSubmitReviewInfoResponseBodyMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline const vector<string> & message() const { DARABONBA_PTR_GET_CONST(message_, vector<string>) };
    inline vector<string> message() { DARABONBA_PTR_GET(message_, vector<string>) };
    inline BatchSubmitReviewInfoResponseBodyMessages& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
    inline BatchSubmitReviewInfoResponseBodyMessages& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


  protected:
    std::shared_ptr<vector<string>> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSCREDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDdosCreditResponseBodyDdosCredit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosCreditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosCreditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DdosCredit, ddosCredit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosCreditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosCredit, ddosCredit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDdosCreditResponseBody() = default ;
    DescribeDdosCreditResponseBody(const DescribeDdosCreditResponseBody &) = default ;
    DescribeDdosCreditResponseBody(DescribeDdosCreditResponseBody &&) = default ;
    DescribeDdosCreditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosCreditResponseBody() = default ;
    DescribeDdosCreditResponseBody& operator=(const DescribeDdosCreditResponseBody &) = default ;
    DescribeDdosCreditResponseBody& operator=(DescribeDdosCreditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosCredit_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // ddosCredit Field Functions 
    bool hasDdosCredit() const { return this->ddosCredit_ != nullptr;};
    void deleteDdosCredit() { this->ddosCredit_ = nullptr;};
    inline const DescribeDdosCreditResponseBodyDdosCredit & ddosCredit() const { DARABONBA_PTR_GET_CONST(ddosCredit_, DescribeDdosCreditResponseBodyDdosCredit) };
    inline DescribeDdosCreditResponseBodyDdosCredit ddosCredit() { DARABONBA_PTR_GET(ddosCredit_, DescribeDdosCreditResponseBodyDdosCredit) };
    inline DescribeDdosCreditResponseBody& setDdosCredit(const DescribeDdosCreditResponseBodyDdosCredit & ddosCredit) { DARABONBA_PTR_SET_VALUE(ddosCredit_, ddosCredit) };
    inline DescribeDdosCreditResponseBody& setDdosCredit(DescribeDdosCreditResponseBodyDdosCredit && ddosCredit) { DARABONBA_PTR_SET_RVALUE(ddosCredit_, ddosCredit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosCreditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDdosCreditResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the security credit score of the current Alibaba Cloud account in the specified region.
    std::shared_ptr<DescribeDdosCreditResponseBodyDdosCredit> ddosCredit_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif

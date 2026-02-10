// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEANTIBRUTEFORCERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEANTIBRUTEFORCERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteAntiBruteForceRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAntiBruteForceRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAntiBruteForceRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAntiBruteForceRuleResponseBody() = default ;
    DeleteAntiBruteForceRuleResponseBody(const DeleteAntiBruteForceRuleResponseBody &) = default ;
    DeleteAntiBruteForceRuleResponseBody(DeleteAntiBruteForceRuleResponseBody &&) = default ;
    DeleteAntiBruteForceRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAntiBruteForceRuleResponseBody() = default ;
    DeleteAntiBruteForceRuleResponseBody& operator=(const DeleteAntiBruteForceRuleResponseBody &) = default ;
    DeleteAntiBruteForceRuleResponseBody& operator=(DeleteAntiBruteForceRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAntiBruteForceRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

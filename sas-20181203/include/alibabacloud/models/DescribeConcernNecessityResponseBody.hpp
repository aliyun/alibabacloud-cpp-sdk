// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONCERNNECESSITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONCERNNECESSITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeConcernNecessityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConcernNecessityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConcernNecessity, concernNecessity_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConcernNecessityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConcernNecessity, concernNecessity_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeConcernNecessityResponseBody() = default ;
    DescribeConcernNecessityResponseBody(const DescribeConcernNecessityResponseBody &) = default ;
    DescribeConcernNecessityResponseBody(DescribeConcernNecessityResponseBody &&) = default ;
    DescribeConcernNecessityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConcernNecessityResponseBody() = default ;
    DescribeConcernNecessityResponseBody& operator=(const DescribeConcernNecessityResponseBody &) = default ;
    DescribeConcernNecessityResponseBody& operator=(DescribeConcernNecessityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concernNecessity_ != nullptr
        && this->requestId_ != nullptr; };
    // concernNecessity Field Functions 
    bool hasConcernNecessity() const { return this->concernNecessity_ != nullptr;};
    void deleteConcernNecessity() { this->concernNecessity_ = nullptr;};
    inline const vector<string> & concernNecessity() const { DARABONBA_PTR_GET_CONST(concernNecessity_, vector<string>) };
    inline vector<string> concernNecessity() { DARABONBA_PTR_GET(concernNecessity_, vector<string>) };
    inline DescribeConcernNecessityResponseBody& setConcernNecessity(const vector<string> & concernNecessity) { DARABONBA_PTR_SET_VALUE(concernNecessity_, concernNecessity) };
    inline DescribeConcernNecessityResponseBody& setConcernNecessity(vector<string> && concernNecessity) { DARABONBA_PTR_SET_RVALUE(concernNecessity_, concernNecessity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConcernNecessityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The priorities to fix the vulnerabilities. Valid values:
    // 
    // *   asap: high
    // *   later: medium
    // *   nntf: low
    std::shared_ptr<vector<string>> concernNecessity_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECANDIDATEINSTANCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECANDIDATEINSTANCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeCandidateInstanceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCandidateInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CandidateInstanceTypes, candidateInstanceTypes_);
      DARABONBA_PTR_TO_JSON(CandidateZoneIds, candidateZoneIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCandidateInstanceTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CandidateInstanceTypes, candidateInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(CandidateZoneIds, candidateZoneIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCandidateInstanceTypeResponseBody() = default ;
    DescribeCandidateInstanceTypeResponseBody(const DescribeCandidateInstanceTypeResponseBody &) = default ;
    DescribeCandidateInstanceTypeResponseBody(DescribeCandidateInstanceTypeResponseBody &&) = default ;
    DescribeCandidateInstanceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCandidateInstanceTypeResponseBody() = default ;
    DescribeCandidateInstanceTypeResponseBody& operator=(const DescribeCandidateInstanceTypeResponseBody &) = default ;
    DescribeCandidateInstanceTypeResponseBody& operator=(DescribeCandidateInstanceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->candidateInstanceTypes_ == nullptr
        && this->candidateZoneIds_ == nullptr && this->requestId_ == nullptr; };
    // candidateInstanceTypes Field Functions 
    bool hasCandidateInstanceTypes() const { return this->candidateInstanceTypes_ != nullptr;};
    void deleteCandidateInstanceTypes() { this->candidateInstanceTypes_ = nullptr;};
    inline const vector<string> & getCandidateInstanceTypes() const { DARABONBA_PTR_GET_CONST(candidateInstanceTypes_, vector<string>) };
    inline vector<string> getCandidateInstanceTypes() { DARABONBA_PTR_GET(candidateInstanceTypes_, vector<string>) };
    inline DescribeCandidateInstanceTypeResponseBody& setCandidateInstanceTypes(const vector<string> & candidateInstanceTypes) { DARABONBA_PTR_SET_VALUE(candidateInstanceTypes_, candidateInstanceTypes) };
    inline DescribeCandidateInstanceTypeResponseBody& setCandidateInstanceTypes(vector<string> && candidateInstanceTypes) { DARABONBA_PTR_SET_RVALUE(candidateInstanceTypes_, candidateInstanceTypes) };


    // candidateZoneIds Field Functions 
    bool hasCandidateZoneIds() const { return this->candidateZoneIds_ != nullptr;};
    void deleteCandidateZoneIds() { this->candidateZoneIds_ = nullptr;};
    inline const vector<string> & getCandidateZoneIds() const { DARABONBA_PTR_GET_CONST(candidateZoneIds_, vector<string>) };
    inline vector<string> getCandidateZoneIds() { DARABONBA_PTR_GET(candidateZoneIds_, vector<string>) };
    inline DescribeCandidateInstanceTypeResponseBody& setCandidateZoneIds(const vector<string> & candidateZoneIds) { DARABONBA_PTR_SET_VALUE(candidateZoneIds_, candidateZoneIds) };
    inline DescribeCandidateInstanceTypeResponseBody& setCandidateZoneIds(vector<string> && candidateZoneIds) { DARABONBA_PTR_SET_RVALUE(candidateZoneIds_, candidateZoneIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCandidateInstanceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of candidate ECS instance types.
    shared_ptr<vector<string>> candidateInstanceTypes_ {};
    // A list of candidate availability zones.
    shared_ptr<vector<string>> candidateZoneIds_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif

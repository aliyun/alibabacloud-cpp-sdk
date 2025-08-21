// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DistApplicationDataResponseBodyDistInstanceIds.hpp>
#include <alibabacloud/models/DistApplicationDataResponseBodyDistResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DistApplicationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistApplicationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DistInstanceIds, distInstanceIds_);
      DARABONBA_PTR_TO_JSON(DistInstanceTotalCount, distInstanceTotalCount_);
      DARABONBA_PTR_TO_JSON(DistResults, distResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DistApplicationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DistInstanceIds, distInstanceIds_);
      DARABONBA_PTR_FROM_JSON(DistInstanceTotalCount, distInstanceTotalCount_);
      DARABONBA_PTR_FROM_JSON(DistResults, distResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DistApplicationDataResponseBody() = default ;
    DistApplicationDataResponseBody(const DistApplicationDataResponseBody &) = default ;
    DistApplicationDataResponseBody(DistApplicationDataResponseBody &&) = default ;
    DistApplicationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistApplicationDataResponseBody() = default ;
    DistApplicationDataResponseBody& operator=(const DistApplicationDataResponseBody &) = default ;
    DistApplicationDataResponseBody& operator=(DistApplicationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distInstanceIds_ != nullptr
        && this->distInstanceTotalCount_ != nullptr && this->distResults_ != nullptr && this->requestId_ != nullptr; };
    // distInstanceIds Field Functions 
    bool hasDistInstanceIds() const { return this->distInstanceIds_ != nullptr;};
    void deleteDistInstanceIds() { this->distInstanceIds_ = nullptr;};
    inline const DistApplicationDataResponseBodyDistInstanceIds & distInstanceIds() const { DARABONBA_PTR_GET_CONST(distInstanceIds_, DistApplicationDataResponseBodyDistInstanceIds) };
    inline DistApplicationDataResponseBodyDistInstanceIds distInstanceIds() { DARABONBA_PTR_GET(distInstanceIds_, DistApplicationDataResponseBodyDistInstanceIds) };
    inline DistApplicationDataResponseBody& setDistInstanceIds(const DistApplicationDataResponseBodyDistInstanceIds & distInstanceIds) { DARABONBA_PTR_SET_VALUE(distInstanceIds_, distInstanceIds) };
    inline DistApplicationDataResponseBody& setDistInstanceIds(DistApplicationDataResponseBodyDistInstanceIds && distInstanceIds) { DARABONBA_PTR_SET_RVALUE(distInstanceIds_, distInstanceIds) };


    // distInstanceTotalCount Field Functions 
    bool hasDistInstanceTotalCount() const { return this->distInstanceTotalCount_ != nullptr;};
    void deleteDistInstanceTotalCount() { this->distInstanceTotalCount_ = nullptr;};
    inline int32_t distInstanceTotalCount() const { DARABONBA_PTR_GET_DEFAULT(distInstanceTotalCount_, 0) };
    inline DistApplicationDataResponseBody& setDistInstanceTotalCount(int32_t distInstanceTotalCount) { DARABONBA_PTR_SET_VALUE(distInstanceTotalCount_, distInstanceTotalCount) };


    // distResults Field Functions 
    bool hasDistResults() const { return this->distResults_ != nullptr;};
    void deleteDistResults() { this->distResults_ = nullptr;};
    inline const DistApplicationDataResponseBodyDistResults & distResults() const { DARABONBA_PTR_GET_CONST(distResults_, DistApplicationDataResponseBodyDistResults) };
    inline DistApplicationDataResponseBodyDistResults distResults() { DARABONBA_PTR_GET(distResults_, DistApplicationDataResponseBodyDistResults) };
    inline DistApplicationDataResponseBody& setDistResults(const DistApplicationDataResponseBodyDistResults & distResults) { DARABONBA_PTR_SET_VALUE(distResults_, distResults) };
    inline DistApplicationDataResponseBody& setDistResults(DistApplicationDataResponseBodyDistResults && distResults) { DARABONBA_PTR_SET_RVALUE(distResults_, distResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DistApplicationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of ENS instance IDs.
    std::shared_ptr<DistApplicationDataResponseBodyDistInstanceIds> distInstanceIds_ = nullptr;
    // The total number of ENS instance IDs.
    std::shared_ptr<int32_t> distInstanceTotalCount_ = nullptr;
    // The distribution result of the data file.
    std::shared_ptr<DistApplicationDataResponseBodyDistResults> distResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif

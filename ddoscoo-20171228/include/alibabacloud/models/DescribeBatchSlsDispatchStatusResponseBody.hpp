// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeBatchSlsDispatchStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchSlsDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsConfigStatusList, slsConfigStatusList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchSlsDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsConfigStatusList, slsConfigStatusList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBatchSlsDispatchStatusResponseBody() = default ;
    DescribeBatchSlsDispatchStatusResponseBody(const DescribeBatchSlsDispatchStatusResponseBody &) = default ;
    DescribeBatchSlsDispatchStatusResponseBody(DescribeBatchSlsDispatchStatusResponseBody &&) = default ;
    DescribeBatchSlsDispatchStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchSlsDispatchStatusResponseBody() = default ;
    DescribeBatchSlsDispatchStatusResponseBody& operator=(const DescribeBatchSlsDispatchStatusResponseBody &) = default ;
    DescribeBatchSlsDispatchStatusResponseBody& operator=(DescribeBatchSlsDispatchStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->slsConfigStatusList_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsConfigStatusList Field Functions 
    bool hasSlsConfigStatusList() const { return this->slsConfigStatusList_ != nullptr;};
    void deleteSlsConfigStatusList() { this->slsConfigStatusList_ = nullptr;};
    inline const vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList> & slsConfigStatusList() const { DARABONBA_PTR_GET_CONST(slsConfigStatusList_, vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList>) };
    inline vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList> slsConfigStatusList() { DARABONBA_PTR_GET(slsConfigStatusList_, vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList>) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setSlsConfigStatusList(const vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList> & slsConfigStatusList) { DARABONBA_PTR_SET_VALUE(slsConfigStatusList_, slsConfigStatusList) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setSlsConfigStatusList(vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList> && slsConfigStatusList) { DARABONBA_PTR_SET_RVALUE(slsConfigStatusList_, slsConfigStatusList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeBatchSlsDispatchStatusResponseBodySlsConfigStatusList>> slsConfigStatusList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif

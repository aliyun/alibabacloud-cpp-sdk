// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHSLSDISPATCHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBatchSlsDispatchStatusResponseBodyItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeBatchSlsDispatchStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchSlsDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ItemList, itemList_);
      DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchSlsDispatchStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemList, itemList_);
      DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { return this->itemList_ == nullptr
        && return this->logstoreName_ == nullptr && return this->projectName_ == nullptr && return this->requestId_ == nullptr; };
    // itemList Field Functions 
    bool hasItemList() const { return this->itemList_ != nullptr;};
    void deleteItemList() { this->itemList_ = nullptr;};
    inline const vector<DescribeBatchSlsDispatchStatusResponseBodyItemList> & itemList() const { DARABONBA_PTR_GET_CONST(itemList_, vector<DescribeBatchSlsDispatchStatusResponseBodyItemList>) };
    inline vector<DescribeBatchSlsDispatchStatusResponseBodyItemList> itemList() { DARABONBA_PTR_GET(itemList_, vector<DescribeBatchSlsDispatchStatusResponseBodyItemList>) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setItemList(const vector<DescribeBatchSlsDispatchStatusResponseBodyItemList> & itemList) { DARABONBA_PTR_SET_VALUE(itemList_, itemList) };
    inline DescribeBatchSlsDispatchStatusResponseBody& setItemList(vector<DescribeBatchSlsDispatchStatusResponseBodyItemList> && itemList) { DARABONBA_PTR_SET_RVALUE(itemList_, itemList) };


    // logstoreName Field Functions 
    bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
    void deleteLogstoreName() { this->logstoreName_ = nullptr;};
    inline string logstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBody& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBatchSlsDispatchStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeBatchSlsDispatchStatusResponseBodyItemList>> itemList_ = nullptr;
    std::shared_ptr<string> logstoreName_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif

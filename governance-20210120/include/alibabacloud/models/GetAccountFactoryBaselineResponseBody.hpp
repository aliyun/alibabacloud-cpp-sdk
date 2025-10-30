// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTFACTORYBASELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTFACTORYBASELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAccountFactoryBaselineResponseBodyBaselineItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetAccountFactoryBaselineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountFactoryBaselineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountFactoryBaselineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetAccountFactoryBaselineResponseBody() = default ;
    GetAccountFactoryBaselineResponseBody(const GetAccountFactoryBaselineResponseBody &) = default ;
    GetAccountFactoryBaselineResponseBody(GetAccountFactoryBaselineResponseBody &&) = default ;
    GetAccountFactoryBaselineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountFactoryBaselineResponseBody() = default ;
    GetAccountFactoryBaselineResponseBody& operator=(const GetAccountFactoryBaselineResponseBody &) = default ;
    GetAccountFactoryBaselineResponseBody& operator=(GetAccountFactoryBaselineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && return this->baselineItems_ == nullptr && return this->baselineName_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->requestId_ == nullptr
        && return this->type_ == nullptr && return this->updateTime_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline GetAccountFactoryBaselineResponseBody& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<GetAccountFactoryBaselineResponseBodyBaselineItems> & baselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<GetAccountFactoryBaselineResponseBodyBaselineItems>) };
    inline vector<GetAccountFactoryBaselineResponseBodyBaselineItems> baselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<GetAccountFactoryBaselineResponseBodyBaselineItems>) };
    inline GetAccountFactoryBaselineResponseBody& setBaselineItems(const vector<GetAccountFactoryBaselineResponseBodyBaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline GetAccountFactoryBaselineResponseBody& setBaselineItems(vector<GetAccountFactoryBaselineResponseBodyBaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // baselineName Field Functions 
    bool hasBaselineName() const { return this->baselineName_ != nullptr;};
    void deleteBaselineName() { this->baselineName_ = nullptr;};
    inline string baselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
    inline GetAccountFactoryBaselineResponseBody& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAccountFactoryBaselineResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAccountFactoryBaselineResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountFactoryBaselineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAccountFactoryBaselineResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetAccountFactoryBaselineResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The baseline ID.
    std::shared_ptr<string> baselineId_ = nullptr;
    // The baseline items.
    std::shared_ptr<vector<GetAccountFactoryBaselineResponseBodyBaselineItems>> baselineItems_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> baselineName_ = nullptr;
    // The time when the baseline was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the baseline.
    std::shared_ptr<string> description_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the baseline. Valid values:
    // 
    // *   System: default baseline.
    // *   Custom: custom baseline.
    std::shared_ptr<string> type_ = nullptr;
    // The time when the baseline was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif

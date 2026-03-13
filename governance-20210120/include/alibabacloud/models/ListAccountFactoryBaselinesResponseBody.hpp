// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListAccountFactoryBaselinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountFactoryBaselinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Baselines, baselines_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountFactoryBaselinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Baselines, baselines_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccountFactoryBaselinesResponseBody() = default ;
    ListAccountFactoryBaselinesResponseBody(const ListAccountFactoryBaselinesResponseBody &) = default ;
    ListAccountFactoryBaselinesResponseBody(ListAccountFactoryBaselinesResponseBody &&) = default ;
    ListAccountFactoryBaselinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountFactoryBaselinesResponseBody() = default ;
    ListAccountFactoryBaselinesResponseBody& operator=(const ListAccountFactoryBaselinesResponseBody &) = default ;
    ListAccountFactoryBaselinesResponseBody& operator=(ListAccountFactoryBaselinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Baselines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Baselines& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Baselines& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Baselines() = default ;
      Baselines(const Baselines &) = default ;
      Baselines(Baselines &&) = default ;
      Baselines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Baselines() = default ;
      Baselines& operator=(const Baselines &) = default ;
      Baselines& operator=(Baselines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->baselineName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
      // baselineId Field Functions 
      bool hasBaselineId() const { return this->baselineId_ != nullptr;};
      void deleteBaselineId() { this->baselineId_ = nullptr;};
      inline string getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
      inline Baselines& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


      // baselineName Field Functions 
      bool hasBaselineName() const { return this->baselineName_ != nullptr;};
      void deleteBaselineName() { this->baselineName_ = nullptr;};
      inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
      inline Baselines& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Baselines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Baselines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Baselines& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Baselines& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The baseline ID.
      shared_ptr<string> baselineId_ {};
      // The name of the baseline.
      shared_ptr<string> baselineName_ {};
      // The time at which the baseline was created.
      shared_ptr<string> createTime_ {};
      // The description of the baseline.
      shared_ptr<string> description_ {};
      // The type of the baseline. Valid values:
      // 
      // *   System: default baseline.
      // *   Custom: custom baseline.
      shared_ptr<string> type_ {};
      // The time when the baseline was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->baselines_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // baselines Field Functions 
    bool hasBaselines() const { return this->baselines_ != nullptr;};
    void deleteBaselines() { this->baselines_ = nullptr;};
    inline const vector<ListAccountFactoryBaselinesResponseBody::Baselines> & getBaselines() const { DARABONBA_PTR_GET_CONST(baselines_, vector<ListAccountFactoryBaselinesResponseBody::Baselines>) };
    inline vector<ListAccountFactoryBaselinesResponseBody::Baselines> getBaselines() { DARABONBA_PTR_GET(baselines_, vector<ListAccountFactoryBaselinesResponseBody::Baselines>) };
    inline ListAccountFactoryBaselinesResponseBody& setBaselines(const vector<ListAccountFactoryBaselinesResponseBody::Baselines> & baselines) { DARABONBA_PTR_SET_VALUE(baselines_, baselines) };
    inline ListAccountFactoryBaselinesResponseBody& setBaselines(vector<ListAccountFactoryBaselinesResponseBody::Baselines> && baselines) { DARABONBA_PTR_SET_RVALUE(baselines_, baselines) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccountFactoryBaselinesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountFactoryBaselinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The baselines.
    shared_ptr<vector<ListAccountFactoryBaselinesResponseBody::Baselines>> baselines_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif

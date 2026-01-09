// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKILLGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKILLGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QuerySkillGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkillGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(OnePageSize, onePageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkillGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(OnePageSize, onePageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
    };
    QuerySkillGroupsResponseBody() = default ;
    QuerySkillGroupsResponseBody(const QuerySkillGroupsResponseBody &) = default ;
    QuerySkillGroupsResponseBody(QuerySkillGroupsResponseBody &&) = default ;
    QuerySkillGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkillGroupsResponseBody() = default ;
    QuerySkillGroupsResponseBody& operator=(const QuerySkillGroupsResponseBody &) = default ;
    QuerySkillGroupsResponseBody& operator=(QuerySkillGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
        DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
        DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelType_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->skillGroupId_ == nullptr && this->skillGroupName_ == nullptr; };
      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline int32_t getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0) };
      inline Data& setChannelType(int32_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // skillGroupId Field Functions 
      bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
      void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
      inline int64_t getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, 0L) };
      inline Data& setSkillGroupId(int64_t skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


      // skillGroupName Field Functions 
      bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
      void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
      inline string getSkillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
      inline Data& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    protected:
      shared_ptr<int32_t> channelType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<int64_t> skillGroupId_ {};
      shared_ptr<string> skillGroupName_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->onePageSize_ == nullptr && this->requestId_ == nullptr && this->totalPage_ == nullptr && this->totalResults_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QuerySkillGroupsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QuerySkillGroupsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QuerySkillGroupsResponseBody::Data>) };
    inline vector<QuerySkillGroupsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QuerySkillGroupsResponseBody::Data>) };
    inline QuerySkillGroupsResponseBody& setData(const vector<QuerySkillGroupsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySkillGroupsResponseBody& setData(vector<QuerySkillGroupsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // onePageSize Field Functions 
    bool hasOnePageSize() const { return this->onePageSize_ != nullptr;};
    void deleteOnePageSize() { this->onePageSize_ = nullptr;};
    inline int32_t getOnePageSize() const { DARABONBA_PTR_GET_DEFAULT(onePageSize_, 0) };
    inline QuerySkillGroupsResponseBody& setOnePageSize(int32_t onePageSize) { DARABONBA_PTR_SET_VALUE(onePageSize_, onePageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySkillGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline QuerySkillGroupsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalResults Field Functions 
    bool hasTotalResults() const { return this->totalResults_ != nullptr;};
    void deleteTotalResults() { this->totalResults_ = nullptr;};
    inline int32_t getTotalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0) };
    inline QuerySkillGroupsResponseBody& setTotalResults(int32_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<QuerySkillGroupsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> onePageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalPage_ {};
    shared_ptr<int32_t> totalResults_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif

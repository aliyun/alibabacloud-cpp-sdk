// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMCALLTAGGINGRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMCALLTAGGINGRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomCallTaggingResponseBodyDataListCallTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListCustomCallTaggingResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomCallTaggingResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(CallTagList, callTagList_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomCallTaggingResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(CallTagList, callTagList_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListCustomCallTaggingResponseBodyDataList() = default ;
    ListCustomCallTaggingResponseBodyDataList(const ListCustomCallTaggingResponseBodyDataList &) = default ;
    ListCustomCallTaggingResponseBodyDataList(ListCustomCallTaggingResponseBodyDataList &&) = default ;
    ListCustomCallTaggingResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomCallTaggingResponseBodyDataList() = default ;
    ListCustomCallTaggingResponseBodyDataList& operator=(const ListCustomCallTaggingResponseBodyDataList &) = default ;
    ListCustomCallTaggingResponseBodyDataList& operator=(ListCustomCallTaggingResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callTagList_ != nullptr
        && this->creator_ != nullptr && this->description_ != nullptr && this->instanceId_ != nullptr && this->number_ != nullptr && this->updateTime_ != nullptr; };
    // callTagList Field Functions 
    bool hasCallTagList() const { return this->callTagList_ != nullptr;};
    void deleteCallTagList() { this->callTagList_ = nullptr;};
    inline const vector<Models::ListCustomCallTaggingResponseBodyDataListCallTagList> & callTagList() const { DARABONBA_PTR_GET_CONST(callTagList_, vector<Models::ListCustomCallTaggingResponseBodyDataListCallTagList>) };
    inline vector<Models::ListCustomCallTaggingResponseBodyDataListCallTagList> callTagList() { DARABONBA_PTR_GET(callTagList_, vector<Models::ListCustomCallTaggingResponseBodyDataListCallTagList>) };
    inline ListCustomCallTaggingResponseBodyDataList& setCallTagList(const vector<Models::ListCustomCallTaggingResponseBodyDataListCallTagList> & callTagList) { DARABONBA_PTR_SET_VALUE(callTagList_, callTagList) };
    inline ListCustomCallTaggingResponseBodyDataList& setCallTagList(vector<Models::ListCustomCallTaggingResponseBodyDataListCallTagList> && callTagList) { DARABONBA_PTR_SET_RVALUE(callTagList_, callTagList) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListCustomCallTaggingResponseBodyDataList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListCustomCallTaggingResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCustomCallTaggingResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline ListCustomCallTaggingResponseBodyDataList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListCustomCallTaggingResponseBodyDataList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Models::ListCustomCallTaggingResponseBodyDataListCallTagList>> callTagList_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

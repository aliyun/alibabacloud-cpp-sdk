// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSASEUSERTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSASEUSERTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListSaseUserTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaseUserTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaseUserTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListSaseUserTagsResponseBody() = default ;
    ListSaseUserTagsResponseBody(const ListSaseUserTagsResponseBody &) = default ;
    ListSaseUserTagsResponseBody(ListSaseUserTagsResponseBody &&) = default ;
    ListSaseUserTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaseUserTagsResponseBody() = default ;
    ListSaseUserTagsResponseBody& operator=(const ListSaseUserTagsResponseBody &) = default ;
    ListSaseUserTagsResponseBody& operator=(ListSaseUserTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliuid_ == nullptr
        && this->count_ == nullptr && this->description_ == nullptr && this->name_ == nullptr && this->tagId_ == nullptr; };
      // aliuid Field Functions 
      bool hasAliuid() const { return this->aliuid_ != nullptr;};
      void deleteAliuid() { this->aliuid_ = nullptr;};
      inline string getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, "") };
      inline DataList& setAliuid(string aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline DataList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DataList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline DataList& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    protected:
      // The Alibaba Cloud account ID.
      shared_ptr<string> aliuid_ {};
      // The number of users associated with the user label.
      shared_ptr<int32_t> count_ {};
      // The description of the user label.
      shared_ptr<string> description_ {};
      // The name of the user label.
      shared_ptr<string> name_ {};
      // The user label ID.
      shared_ptr<string> tagId_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<ListSaseUserTagsResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<ListSaseUserTagsResponseBody::DataList>) };
    inline vector<ListSaseUserTagsResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<ListSaseUserTagsResponseBody::DataList>) };
    inline ListSaseUserTagsResponseBody& setDataList(const vector<ListSaseUserTagsResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline ListSaseUserTagsResponseBody& setDataList(vector<ListSaseUserTagsResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSaseUserTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListSaseUserTagsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The list of user labels returned.
    shared_ptr<vector<ListSaseUserTagsResponseBody::DataList>> dataList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of user labels.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGECONTENTRESPONSEBODYDATADATAS_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGECONTENTRESPONSEBODYDATADATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadMessageContentResponseBodyDataDatasItem.hpp>
#include <alibabacloud/models/ReadMessageContentResponseBodyDataDatasLastItem.hpp>
#include <alibabacloud/models/ReadMessageContentResponseBodyDataDatasNextItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadMessageContentResponseBodyDataDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageContentResponseBodyDataDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(LastItem, lastItem_);
      DARABONBA_PTR_TO_JSON(NextItem, nextItem_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageContentResponseBodyDataDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(LastItem, lastItem_);
      DARABONBA_PTR_FROM_JSON(NextItem, nextItem_);
    };
    ReadMessageContentResponseBodyDataDatas() = default ;
    ReadMessageContentResponseBodyDataDatas(const ReadMessageContentResponseBodyDataDatas &) = default ;
    ReadMessageContentResponseBodyDataDatas(ReadMessageContentResponseBodyDataDatas &&) = default ;
    ReadMessageContentResponseBodyDataDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageContentResponseBodyDataDatas() = default ;
    ReadMessageContentResponseBodyDataDatas& operator=(const ReadMessageContentResponseBodyDataDatas &) = default ;
    ReadMessageContentResponseBodyDataDatas& operator=(ReadMessageContentResponseBodyDataDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr
        && this->lastItem_ != nullptr && this->nextItem_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::ReadMessageContentResponseBodyDataDatasItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::ReadMessageContentResponseBodyDataDatasItem>) };
    inline vector<Models::ReadMessageContentResponseBodyDataDatasItem> item() { DARABONBA_PTR_GET(item_, vector<Models::ReadMessageContentResponseBodyDataDatasItem>) };
    inline ReadMessageContentResponseBodyDataDatas& setItem(const vector<Models::ReadMessageContentResponseBodyDataDatasItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline ReadMessageContentResponseBodyDataDatas& setItem(vector<Models::ReadMessageContentResponseBodyDataDatasItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // lastItem Field Functions 
    bool hasLastItem() const { return this->lastItem_ != nullptr;};
    void deleteLastItem() { this->lastItem_ = nullptr;};
    inline const vector<Models::ReadMessageContentResponseBodyDataDatasLastItem> & lastItem() const { DARABONBA_PTR_GET_CONST(lastItem_, vector<Models::ReadMessageContentResponseBodyDataDatasLastItem>) };
    inline vector<Models::ReadMessageContentResponseBodyDataDatasLastItem> lastItem() { DARABONBA_PTR_GET(lastItem_, vector<Models::ReadMessageContentResponseBodyDataDatasLastItem>) };
    inline ReadMessageContentResponseBodyDataDatas& setLastItem(const vector<Models::ReadMessageContentResponseBodyDataDatasLastItem> & lastItem) { DARABONBA_PTR_SET_VALUE(lastItem_, lastItem) };
    inline ReadMessageContentResponseBodyDataDatas& setLastItem(vector<Models::ReadMessageContentResponseBodyDataDatasLastItem> && lastItem) { DARABONBA_PTR_SET_RVALUE(lastItem_, lastItem) };


    // nextItem Field Functions 
    bool hasNextItem() const { return this->nextItem_ != nullptr;};
    void deleteNextItem() { this->nextItem_ = nullptr;};
    inline const vector<Models::ReadMessageContentResponseBodyDataDatasNextItem> & nextItem() const { DARABONBA_PTR_GET_CONST(nextItem_, vector<Models::ReadMessageContentResponseBodyDataDatasNextItem>) };
    inline vector<Models::ReadMessageContentResponseBodyDataDatasNextItem> nextItem() { DARABONBA_PTR_GET(nextItem_, vector<Models::ReadMessageContentResponseBodyDataDatasNextItem>) };
    inline ReadMessageContentResponseBodyDataDatas& setNextItem(const vector<Models::ReadMessageContentResponseBodyDataDatasNextItem> & nextItem) { DARABONBA_PTR_SET_VALUE(nextItem_, nextItem) };
    inline ReadMessageContentResponseBodyDataDatas& setNextItem(vector<Models::ReadMessageContentResponseBodyDataDatasNextItem> && nextItem) { DARABONBA_PTR_SET_RVALUE(nextItem_, nextItem) };


  protected:
    std::shared_ptr<vector<Models::ReadMessageContentResponseBodyDataDatasItem>> item_ = nullptr;
    std::shared_ptr<vector<Models::ReadMessageContentResponseBodyDataDatasLastItem>> lastItem_ = nullptr;
    std::shared_ptr<vector<Models::ReadMessageContentResponseBodyDataDatasNextItem>> nextItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif

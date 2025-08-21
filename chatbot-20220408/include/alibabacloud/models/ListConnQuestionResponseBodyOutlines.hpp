// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNQUESTIONRESPONSEBODYOUTLINES_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNQUESTIONRESPONSEBODYOUTLINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListConnQuestionResponseBodyOutlines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnQuestionResponseBodyOutlines& obj) { 
      DARABONBA_PTR_TO_JSON(ConnQuestionId, connQuestionId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(OutlineId, outlineId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnQuestionResponseBodyOutlines& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnQuestionId, connQuestionId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(OutlineId, outlineId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListConnQuestionResponseBodyOutlines() = default ;
    ListConnQuestionResponseBodyOutlines(const ListConnQuestionResponseBodyOutlines &) = default ;
    ListConnQuestionResponseBodyOutlines(ListConnQuestionResponseBodyOutlines &&) = default ;
    ListConnQuestionResponseBodyOutlines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnQuestionResponseBodyOutlines() = default ;
    ListConnQuestionResponseBodyOutlines& operator=(const ListConnQuestionResponseBodyOutlines &) = default ;
    ListConnQuestionResponseBodyOutlines& operator=(ListConnQuestionResponseBodyOutlines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connQuestionId_ != nullptr
        && this->createTime_ != nullptr && this->modifyTime_ != nullptr && this->outlineId_ != nullptr && this->title_ != nullptr; };
    // connQuestionId Field Functions 
    bool hasConnQuestionId() const { return this->connQuestionId_ != nullptr;};
    void deleteConnQuestionId() { this->connQuestionId_ = nullptr;};
    inline int64_t connQuestionId() const { DARABONBA_PTR_GET_DEFAULT(connQuestionId_, 0L) };
    inline ListConnQuestionResponseBodyOutlines& setConnQuestionId(int64_t connQuestionId) { DARABONBA_PTR_SET_VALUE(connQuestionId_, connQuestionId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListConnQuestionResponseBodyOutlines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListConnQuestionResponseBodyOutlines& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // outlineId Field Functions 
    bool hasOutlineId() const { return this->outlineId_ != nullptr;};
    void deleteOutlineId() { this->outlineId_ = nullptr;};
    inline int64_t outlineId() const { DARABONBA_PTR_GET_DEFAULT(outlineId_, 0L) };
    inline ListConnQuestionResponseBodyOutlines& setOutlineId(int64_t outlineId) { DARABONBA_PTR_SET_VALUE(outlineId_, outlineId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListConnQuestionResponseBodyOutlines& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<int64_t> connQuestionId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<int64_t> outlineId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif

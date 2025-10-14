// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINDIVIDUATIONTEXTTASKRESPONSEBODYTEXTLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYINDIVIDUATIONTEXTTASKRESPONSEBODYTEXTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryIndividuationTextTaskResponseBodyTextList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIndividuationTextTaskResponseBodyTextList& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(textId, textId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIndividuationTextTaskResponseBodyTextList& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(textId, textId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    QueryIndividuationTextTaskResponseBodyTextList() = default ;
    QueryIndividuationTextTaskResponseBodyTextList(const QueryIndividuationTextTaskResponseBodyTextList &) = default ;
    QueryIndividuationTextTaskResponseBodyTextList(QueryIndividuationTextTaskResponseBodyTextList &&) = default ;
    QueryIndividuationTextTaskResponseBodyTextList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIndividuationTextTaskResponseBodyTextList() = default ;
    QueryIndividuationTextTaskResponseBodyTextList& operator=(const QueryIndividuationTextTaskResponseBodyTextList &) = default ;
    QueryIndividuationTextTaskResponseBodyTextList& operator=(QueryIndividuationTextTaskResponseBodyTextList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr
        && return this->textId_ == nullptr && return this->userId_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryIndividuationTextTaskResponseBodyTextList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // textId Field Functions 
    bool hasTextId() const { return this->textId_ != nullptr;};
    void deleteTextId() { this->textId_ = nullptr;};
    inline string textId() const { DARABONBA_PTR_GET_DEFAULT(textId_, "") };
    inline QueryIndividuationTextTaskResponseBodyTextList& setTextId(string textId) { DARABONBA_PTR_SET_VALUE(textId_, textId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryIndividuationTextTaskResponseBodyTextList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> textId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

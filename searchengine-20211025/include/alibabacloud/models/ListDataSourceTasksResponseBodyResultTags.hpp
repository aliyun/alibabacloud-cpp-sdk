// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETASKSRESPONSEBODYRESULTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETASKSRESPONSEBODYRESULTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListDataSourceTasksResponseBodyResultTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTasksResponseBodyResultTags& obj) { 
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(tagLevel, tagLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTasksResponseBodyResultTags& obj) { 
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(tagLevel, tagLevel_);
    };
    ListDataSourceTasksResponseBodyResultTags() = default ;
    ListDataSourceTasksResponseBodyResultTags(const ListDataSourceTasksResponseBodyResultTags &) = default ;
    ListDataSourceTasksResponseBodyResultTags(ListDataSourceTasksResponseBodyResultTags &&) = default ;
    ListDataSourceTasksResponseBodyResultTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTasksResponseBodyResultTags() = default ;
    ListDataSourceTasksResponseBodyResultTags& operator=(const ListDataSourceTasksResponseBodyResultTags &) = default ;
    ListDataSourceTasksResponseBodyResultTags& operator=(ListDataSourceTasksResponseBodyResultTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->msg_ != nullptr
        && this->tagLevel_ != nullptr; };
    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListDataSourceTasksResponseBodyResultTags& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // tagLevel Field Functions 
    bool hasTagLevel() const { return this->tagLevel_ != nullptr;};
    void deleteTagLevel() { this->tagLevel_ = nullptr;};
    inline string tagLevel() const { DARABONBA_PTR_GET_DEFAULT(tagLevel_, "") };
    inline ListDataSourceTasksResponseBodyResultTags& setTagLevel(string tagLevel) { DARABONBA_PTR_SET_VALUE(tagLevel_, tagLevel) };


  protected:
    // The tag content.
    std::shared_ptr<string> msg_ = nullptr;
    // The tag level.
    std::shared_ptr<string> tagLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERTASKSRESPONSEBODYRESULTTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERTASKSRESPONSEBODYRESULTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListClusterTasksResponseBodyResultTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterTasksResponseBodyResultTags& obj) { 
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(tagLevel, tagLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterTasksResponseBodyResultTags& obj) { 
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(tagLevel, tagLevel_);
    };
    ListClusterTasksResponseBodyResultTags() = default ;
    ListClusterTasksResponseBodyResultTags(const ListClusterTasksResponseBodyResultTags &) = default ;
    ListClusterTasksResponseBodyResultTags(ListClusterTasksResponseBodyResultTags &&) = default ;
    ListClusterTasksResponseBodyResultTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterTasksResponseBodyResultTags() = default ;
    ListClusterTasksResponseBodyResultTags& operator=(const ListClusterTasksResponseBodyResultTags &) = default ;
    ListClusterTasksResponseBodyResultTags& operator=(ListClusterTasksResponseBodyResultTags &&) = default ;
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
    inline ListClusterTasksResponseBodyResultTags& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // tagLevel Field Functions 
    bool hasTagLevel() const { return this->tagLevel_ != nullptr;};
    void deleteTagLevel() { this->tagLevel_ = nullptr;};
    inline string tagLevel() const { DARABONBA_PTR_GET_DEFAULT(tagLevel_, "") };
    inline ListClusterTasksResponseBodyResultTags& setTagLevel(string tagLevel) { DARABONBA_PTR_SET_VALUE(tagLevel_, tagLevel) };


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

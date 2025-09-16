// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERTASKSRESPONSEBODYRESULTTASKNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERTASKSRESPONSEBODYRESULTTASKNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListClusterTasksResponseBodyResultTaskNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterTasksResponseBodyResultTaskNodes& obj) { 
      DARABONBA_PTR_TO_JSON(finishDate, finishDate_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterTasksResponseBodyResultTaskNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(finishDate, finishDate_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListClusterTasksResponseBodyResultTaskNodes() = default ;
    ListClusterTasksResponseBodyResultTaskNodes(const ListClusterTasksResponseBodyResultTaskNodes &) = default ;
    ListClusterTasksResponseBodyResultTaskNodes(ListClusterTasksResponseBodyResultTaskNodes &&) = default ;
    ListClusterTasksResponseBodyResultTaskNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterTasksResponseBodyResultTaskNodes() = default ;
    ListClusterTasksResponseBodyResultTaskNodes& operator=(const ListClusterTasksResponseBodyResultTaskNodes &) = default ;
    ListClusterTasksResponseBodyResultTaskNodes& operator=(ListClusterTasksResponseBodyResultTaskNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishDate_ != nullptr
        && this->index_ != nullptr && this->name_ != nullptr && this->status_ != nullptr; };
    // finishDate Field Functions 
    bool hasFinishDate() const { return this->finishDate_ != nullptr;};
    void deleteFinishDate() { this->finishDate_ = nullptr;};
    inline string finishDate() const { DARABONBA_PTR_GET_DEFAULT(finishDate_, "") };
    inline ListClusterTasksResponseBodyResultTaskNodes& setFinishDate(string finishDate) { DARABONBA_PTR_SET_VALUE(finishDate_, finishDate) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline ListClusterTasksResponseBodyResultTaskNodes& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClusterTasksResponseBodyResultTaskNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClusterTasksResponseBodyResultTaskNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The time when the task was complete.
    std::shared_ptr<string> finishDate_ = nullptr;
    // The ordinal number of the task.
    std::shared_ptr<int64_t> index_ = nullptr;
    // The task name.
    std::shared_ptr<string> name_ = nullptr;
    // The task status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSTASKSRESPONSEBODYTASKSTASK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSTASKSRESPONSEBODYTASKSTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsTasksResponseBodyTasksTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsTasksResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsTasksResponseBodyTasksTask& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeDrdsTasksResponseBodyTasksTask() = default ;
    DescribeDrdsTasksResponseBodyTasksTask(const DescribeDrdsTasksResponseBodyTasksTask &) = default ;
    DescribeDrdsTasksResponseBodyTasksTask(DescribeDrdsTasksResponseBodyTasksTask &&) = default ;
    DescribeDrdsTasksResponseBodyTasksTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsTasksResponseBodyTasksTask() = default ;
    DescribeDrdsTasksResponseBodyTasksTask& operator=(const DescribeDrdsTasksResponseBodyTasksTask &) = default ;
    DescribeDrdsTasksResponseBodyTasksTask& operator=(DescribeDrdsTasksResponseBodyTasksTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->id_ != nullptr && this->state_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeDrdsTasksResponseBodyTasksTask& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDrdsTasksResponseBodyTasksTask& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDrdsTasksResponseBodyTasksTask& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Indicates the content of a task.
    std::shared_ptr<string> content_ = nullptr;
    // Indicates the ID of the task.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates the state of the task.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKSRESPONSEBODYPAGINGINFODOWNSTREAMTASKSTASKDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKSRESPONSEBODYPAGINGINFODOWNSTREAMTASKSTASKDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource() = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource(const ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource &) = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource(ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource &&) = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource() = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource& operator=(const ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource &) = default ;
    ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource& operator=(ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDownstreamTasksResponseBodyPagingInfoDownstreamTasksTaskDataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

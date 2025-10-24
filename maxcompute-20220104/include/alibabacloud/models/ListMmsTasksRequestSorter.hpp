// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTASKSREQUESTSORTER_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTASKSREQUESTSORTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTasksRequestSorter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTasksRequestSorter& obj) { 
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTasksRequestSorter& obj) { 
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListMmsTasksRequestSorter() = default ;
    ListMmsTasksRequestSorter(const ListMmsTasksRequestSorter &) = default ;
    ListMmsTasksRequestSorter(ListMmsTasksRequestSorter &&) = default ;
    ListMmsTasksRequestSorter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTasksRequestSorter() = default ;
    ListMmsTasksRequestSorter& operator=(const ListMmsTasksRequestSorter &) = default ;
    ListMmsTasksRequestSorter& operator=(ListMmsTasksRequestSorter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->startTime_ == nullptr
        && return this->status_ == nullptr; };
    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListMmsTasksRequestSorter& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListMmsTasksRequestSorter& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif

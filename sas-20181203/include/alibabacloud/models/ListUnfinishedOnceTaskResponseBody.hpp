// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNFINISHEDONCETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNFINISHEDONCETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUnfinishedOnceTaskResponseBodyOnceTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUnfinishedOnceTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnfinishedOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnceTasks, onceTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnfinishedOnceTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnceTasks, onceTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUnfinishedOnceTaskResponseBody() = default ;
    ListUnfinishedOnceTaskResponseBody(const ListUnfinishedOnceTaskResponseBody &) = default ;
    ListUnfinishedOnceTaskResponseBody(ListUnfinishedOnceTaskResponseBody &&) = default ;
    ListUnfinishedOnceTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnfinishedOnceTaskResponseBody() = default ;
    ListUnfinishedOnceTaskResponseBody& operator=(const ListUnfinishedOnceTaskResponseBody &) = default ;
    ListUnfinishedOnceTaskResponseBody& operator=(ListUnfinishedOnceTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onceTasks_ == nullptr
        && return this->requestId_ == nullptr; };
    // onceTasks Field Functions 
    bool hasOnceTasks() const { return this->onceTasks_ != nullptr;};
    void deleteOnceTasks() { this->onceTasks_ = nullptr;};
    inline const vector<ListUnfinishedOnceTaskResponseBodyOnceTasks> & onceTasks() const { DARABONBA_PTR_GET_CONST(onceTasks_, vector<ListUnfinishedOnceTaskResponseBodyOnceTasks>) };
    inline vector<ListUnfinishedOnceTaskResponseBodyOnceTasks> onceTasks() { DARABONBA_PTR_GET(onceTasks_, vector<ListUnfinishedOnceTaskResponseBodyOnceTasks>) };
    inline ListUnfinishedOnceTaskResponseBody& setOnceTasks(const vector<ListUnfinishedOnceTaskResponseBodyOnceTasks> & onceTasks) { DARABONBA_PTR_SET_VALUE(onceTasks_, onceTasks) };
    inline ListUnfinishedOnceTaskResponseBody& setOnceTasks(vector<ListUnfinishedOnceTaskResponseBodyOnceTasks> && onceTasks) { DARABONBA_PTR_SET_RVALUE(onceTasks_, onceTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUnfinishedOnceTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the tasks.
    std::shared_ptr<vector<ListUnfinishedOnceTaskResponseBodyOnceTasks>> onceTasks_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif

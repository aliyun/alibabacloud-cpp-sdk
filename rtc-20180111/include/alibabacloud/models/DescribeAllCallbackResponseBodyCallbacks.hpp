// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLCALLBACKRESPONSEBODYCALLBACKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLCALLBACKRESPONSEBODYCALLBACKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllCallbackResponseBodyCallbacksSubEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAllCallbackResponseBodyCallbacks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllCallbackResponseBodyCallbacks& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubEvent, subEvent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllCallbackResponseBodyCallbacks& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubEvent, subEvent_);
    };
    DescribeAllCallbackResponseBodyCallbacks() = default ;
    DescribeAllCallbackResponseBodyCallbacks(const DescribeAllCallbackResponseBodyCallbacks &) = default ;
    DescribeAllCallbackResponseBodyCallbacks(DescribeAllCallbackResponseBodyCallbacks &&) = default ;
    DescribeAllCallbackResponseBodyCallbacks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllCallbackResponseBodyCallbacks() = default ;
    DescribeAllCallbackResponseBodyCallbacks& operator=(const DescribeAllCallbackResponseBodyCallbacks &) = default ;
    DescribeAllCallbackResponseBodyCallbacks& operator=(DescribeAllCallbackResponseBodyCallbacks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->name_ == nullptr && return this->subEvent_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAllCallbackResponseBodyCallbacks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAllCallbackResponseBodyCallbacks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subEvent Field Functions 
    bool hasSubEvent() const { return this->subEvent_ != nullptr;};
    void deleteSubEvent() { this->subEvent_ = nullptr;};
    inline const vector<Models::DescribeAllCallbackResponseBodyCallbacksSubEvent> & subEvent() const { DARABONBA_PTR_GET_CONST(subEvent_, vector<Models::DescribeAllCallbackResponseBodyCallbacksSubEvent>) };
    inline vector<Models::DescribeAllCallbackResponseBodyCallbacksSubEvent> subEvent() { DARABONBA_PTR_GET(subEvent_, vector<Models::DescribeAllCallbackResponseBodyCallbacksSubEvent>) };
    inline DescribeAllCallbackResponseBodyCallbacks& setSubEvent(const vector<Models::DescribeAllCallbackResponseBodyCallbacksSubEvent> & subEvent) { DARABONBA_PTR_SET_VALUE(subEvent_, subEvent) };
    inline DescribeAllCallbackResponseBodyCallbacks& setSubEvent(vector<Models::DescribeAllCallbackResponseBodyCallbacksSubEvent> && subEvent) { DARABONBA_PTR_SET_RVALUE(subEvent_, subEvent) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAllCallbackResponseBodyCallbacksSubEvent>> subEvent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif

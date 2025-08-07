// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceLogsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceLogsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceLogsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListServiceInstanceLogsRequestFilter() = default ;
    ListServiceInstanceLogsRequestFilter(const ListServiceInstanceLogsRequestFilter &) = default ;
    ListServiceInstanceLogsRequestFilter(ListServiceInstanceLogsRequestFilter &&) = default ;
    ListServiceInstanceLogsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceLogsRequestFilter() = default ;
    ListServiceInstanceLogsRequestFilter& operator=(const ListServiceInstanceLogsRequestFilter &) = default ;
    ListServiceInstanceLogsRequestFilter& operator=(ListServiceInstanceLogsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->value_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServiceInstanceLogsRequestFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListServiceInstanceLogsRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListServiceInstanceLogsRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The parameter name of the filter. You can specify one or more filters. Valid values:
    // 
    // *   StartTime: the start time of the log event.
    // *   EndTime: the end time of the ActionTrail event.
    // *   EventName: the name of the ActionTrail event.
    // *   ResourceName: the name of the ActionTrail resource.
    // *   ApplicationGroupName: the name of the application group.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter value N of the filter. Valid values of N: 1 to 10.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

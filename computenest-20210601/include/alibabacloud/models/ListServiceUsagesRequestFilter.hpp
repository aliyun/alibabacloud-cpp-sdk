// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEUSAGESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEUSAGESREQUESTFILTER_HPP_
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
  class ListServiceUsagesRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceUsagesRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceUsagesRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListServiceUsagesRequestFilter() = default ;
    ListServiceUsagesRequestFilter(const ListServiceUsagesRequestFilter &) = default ;
    ListServiceUsagesRequestFilter(ListServiceUsagesRequestFilter &&) = default ;
    ListServiceUsagesRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceUsagesRequestFilter() = default ;
    ListServiceUsagesRequestFilter& operator=(const ListServiceUsagesRequestFilter &) = default ;
    ListServiceUsagesRequestFilter& operator=(ListServiceUsagesRequestFilter &&) = default ;
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
    inline ListServiceUsagesRequestFilter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<string> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
    inline vector<string> value() { DARABONBA_PTR_GET(value_, vector<string>) };
    inline ListServiceUsagesRequestFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListServiceUsagesRequestFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The parameter name of the filter. You can specify one or more filters. Valid values:
    // 
    // *   ServiceId: the ID of the service.
    // *   ServiceName: the service name.
    // *   Status: the state of the service.
    // *   SupplierName: the name of the service provider.
    std::shared_ptr<string> name_ = nullptr;
    // The parameter values of the filter.
    std::shared_ptr<vector<string>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif

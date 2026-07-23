// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINEBUILDCONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINEBUILDCONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineBuildConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineBuildConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoutineNames, routineNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineBuildConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoutineNames, routineNames_);
    };
    ListRoutineBuildConfigurationsRequest() = default ;
    ListRoutineBuildConfigurationsRequest(const ListRoutineBuildConfigurationsRequest &) = default ;
    ListRoutineBuildConfigurationsRequest(ListRoutineBuildConfigurationsRequest &&) = default ;
    ListRoutineBuildConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineBuildConfigurationsRequest() = default ;
    ListRoutineBuildConfigurationsRequest& operator=(const ListRoutineBuildConfigurationsRequest &) = default ;
    ListRoutineBuildConfigurationsRequest& operator=(ListRoutineBuildConfigurationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routineNames_ == nullptr; };
    // routineNames Field Functions 
    bool hasRoutineNames() const { return this->routineNames_ != nullptr;};
    void deleteRoutineNames() { this->routineNames_ = nullptr;};
    inline string getRoutineNames() const { DARABONBA_PTR_GET_DEFAULT(routineNames_, "") };
    inline ListRoutineBuildConfigurationsRequest& setRoutineNames(string routineNames) { DARABONBA_PTR_SET_VALUE(routineNames_, routineNames) };


  protected:
    // The list of ER routine names, separated by commas.
    // 
    // This parameter is required.
    shared_ptr<string> routineNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

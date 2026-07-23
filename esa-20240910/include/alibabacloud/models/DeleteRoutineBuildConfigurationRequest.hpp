// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTINEBUILDCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTINEBUILDCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteRoutineBuildConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoutineBuildConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoutineBuildConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
    };
    DeleteRoutineBuildConfigurationRequest() = default ;
    DeleteRoutineBuildConfigurationRequest(const DeleteRoutineBuildConfigurationRequest &) = default ;
    DeleteRoutineBuildConfigurationRequest(DeleteRoutineBuildConfigurationRequest &&) = default ;
    DeleteRoutineBuildConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoutineBuildConfigurationRequest() = default ;
    DeleteRoutineBuildConfigurationRequest& operator=(const DeleteRoutineBuildConfigurationRequest &) = default ;
    DeleteRoutineBuildConfigurationRequest& operator=(DeleteRoutineBuildConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routineName_ == nullptr; };
    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline DeleteRoutineBuildConfigurationRequest& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


  protected:
    // The ER name.
    // 
    // This parameter is required.
    shared_ptr<string> routineName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSWITCHDATABASERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTSWITCHDATABASERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class StartSwitchDatabaseResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSwitchDatabaseResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, StartSwitchDatabaseResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
    };
    StartSwitchDatabaseResponseBodyData() = default ;
    StartSwitchDatabaseResponseBodyData(const StartSwitchDatabaseResponseBodyData &) = default ;
    StartSwitchDatabaseResponseBodyData(StartSwitchDatabaseResponseBodyData &&) = default ;
    StartSwitchDatabaseResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSwitchDatabaseResponseBodyData() = default ;
    StartSwitchDatabaseResponseBodyData& operator=(const StartSwitchDatabaseResponseBodyData &) = default ;
    StartSwitchDatabaseResponseBodyData& operator=(StartSwitchDatabaseResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slinkTaskId_ == nullptr; };
    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string slinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline StartSwitchDatabaseResponseBodyData& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


  protected:
    std::shared_ptr<string> slinkTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif

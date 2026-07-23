// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINEBUILDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINEBUILDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineBuildRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineBuildRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoutineBuildId, routineBuildId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineBuildRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoutineBuildId, routineBuildId_);
    };
    GetRoutineBuildRequest() = default ;
    GetRoutineBuildRequest(const GetRoutineBuildRequest &) = default ;
    GetRoutineBuildRequest(GetRoutineBuildRequest &&) = default ;
    GetRoutineBuildRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineBuildRequest() = default ;
    GetRoutineBuildRequest& operator=(const GetRoutineBuildRequest &) = default ;
    GetRoutineBuildRequest& operator=(GetRoutineBuildRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->routineBuildId_ == nullptr; };
    // routineBuildId Field Functions 
    bool hasRoutineBuildId() const { return this->routineBuildId_ != nullptr;};
    void deleteRoutineBuildId() { this->routineBuildId_ = nullptr;};
    inline int64_t getRoutineBuildId() const { DARABONBA_PTR_GET_DEFAULT(routineBuildId_, 0L) };
    inline GetRoutineBuildRequest& setRoutineBuildId(int64_t routineBuildId) { DARABONBA_PTR_SET_VALUE(routineBuildId_, routineBuildId) };


  protected:
    // The ID of the ER build task.
    // 
    // This parameter is required.
    shared_ptr<int64_t> routineBuildId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTSWIMMINGLANEGROUPRESPONSEBODYDATAAPPLICATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_INSERTSWIMMINGLANEGROUPRESPONSEBODYDATAAPPLICATIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsertSwimmingLaneGroupResponseBodyDataApplicationListApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class InsertSwimmingLaneGroupResponseBodyDataApplicationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertSwimmingLaneGroupResponseBodyDataApplicationList& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
    };
    friend void from_json(const Darabonba::Json& j, InsertSwimmingLaneGroupResponseBodyDataApplicationList& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
    };
    InsertSwimmingLaneGroupResponseBodyDataApplicationList() = default ;
    InsertSwimmingLaneGroupResponseBodyDataApplicationList(const InsertSwimmingLaneGroupResponseBodyDataApplicationList &) = default ;
    InsertSwimmingLaneGroupResponseBodyDataApplicationList(InsertSwimmingLaneGroupResponseBodyDataApplicationList &&) = default ;
    InsertSwimmingLaneGroupResponseBodyDataApplicationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertSwimmingLaneGroupResponseBodyDataApplicationList() = default ;
    InsertSwimmingLaneGroupResponseBodyDataApplicationList& operator=(const InsertSwimmingLaneGroupResponseBodyDataApplicationList &) = default ;
    InsertSwimmingLaneGroupResponseBodyDataApplicationList& operator=(InsertSwimmingLaneGroupResponseBodyDataApplicationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->application_ == nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const vector<Models::InsertSwimmingLaneGroupResponseBodyDataApplicationListApplication> & application() const { DARABONBA_PTR_GET_CONST(application_, vector<Models::InsertSwimmingLaneGroupResponseBodyDataApplicationListApplication>) };
    inline vector<Models::InsertSwimmingLaneGroupResponseBodyDataApplicationListApplication> application() { DARABONBA_PTR_GET(application_, vector<Models::InsertSwimmingLaneGroupResponseBodyDataApplicationListApplication>) };
    inline InsertSwimmingLaneGroupResponseBodyDataApplicationList& setApplication(const vector<Models::InsertSwimmingLaneGroupResponseBodyDataApplicationListApplication> & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline InsertSwimmingLaneGroupResponseBodyDataApplicationList& setApplication(vector<Models::InsertSwimmingLaneGroupResponseBodyDataApplicationListApplication> && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


  protected:
    std::shared_ptr<vector<Models::InsertSwimmingLaneGroupResponseBodyDataApplicationListApplication>> application_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif

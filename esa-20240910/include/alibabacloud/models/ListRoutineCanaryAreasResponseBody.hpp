// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINECANARYAREASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINECANARYAREASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineCanaryAreasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineCanaryAreasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanaryAreas, canaryAreas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineCanaryAreasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanaryAreas, canaryAreas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRoutineCanaryAreasResponseBody() = default ;
    ListRoutineCanaryAreasResponseBody(const ListRoutineCanaryAreasResponseBody &) = default ;
    ListRoutineCanaryAreasResponseBody(ListRoutineCanaryAreasResponseBody &&) = default ;
    ListRoutineCanaryAreasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineCanaryAreasResponseBody() = default ;
    ListRoutineCanaryAreasResponseBody& operator=(const ListRoutineCanaryAreasResponseBody &) = default ;
    ListRoutineCanaryAreasResponseBody& operator=(ListRoutineCanaryAreasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canaryAreas_ == nullptr
        && return this->requestId_ == nullptr; };
    // canaryAreas Field Functions 
    bool hasCanaryAreas() const { return this->canaryAreas_ != nullptr;};
    void deleteCanaryAreas() { this->canaryAreas_ = nullptr;};
    inline const vector<string> & canaryAreas() const { DARABONBA_PTR_GET_CONST(canaryAreas_, vector<string>) };
    inline vector<string> canaryAreas() { DARABONBA_PTR_GET(canaryAreas_, vector<string>) };
    inline ListRoutineCanaryAreasResponseBody& setCanaryAreas(const vector<string> & canaryAreas) { DARABONBA_PTR_SET_VALUE(canaryAreas_, canaryAreas) };
    inline ListRoutineCanaryAreasResponseBody& setCanaryAreas(vector<string> && canaryAreas) { DARABONBA_PTR_SET_RVALUE(canaryAreas_, canaryAreas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRoutineCanaryAreasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The regions for canary release.
    std::shared_ptr<vector<string>> canaryAreas_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif

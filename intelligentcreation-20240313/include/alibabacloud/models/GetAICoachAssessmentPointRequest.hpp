// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachAssessmentPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachAssessmentPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(pointId, pointId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachAssessmentPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(pointId, pointId_);
    };
    GetAICoachAssessmentPointRequest() = default ;
    GetAICoachAssessmentPointRequest(const GetAICoachAssessmentPointRequest &) = default ;
    GetAICoachAssessmentPointRequest(GetAICoachAssessmentPointRequest &&) = default ;
    GetAICoachAssessmentPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachAssessmentPointRequest() = default ;
    GetAICoachAssessmentPointRequest& operator=(const GetAICoachAssessmentPointRequest &) = default ;
    GetAICoachAssessmentPointRequest& operator=(GetAICoachAssessmentPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pointId_ == nullptr; };
    // pointId Field Functions 
    bool hasPointId() const { return this->pointId_ != nullptr;};
    void deletePointId() { this->pointId_ = nullptr;};
    inline string getPointId() const { DARABONBA_PTR_GET_DEFAULT(pointId_, "") };
    inline GetAICoachAssessmentPointRequest& setPointId(string pointId) { DARABONBA_PTR_SET_VALUE(pointId_, pointId) };


  protected:
    shared_ptr<string> pointId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTEPRESULTOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTEPRESULTOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetStepResultOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStepResultOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(resultId, resultId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStepResultOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(resultId, resultId_);
    };
    GetStepResultOverviewRequest() = default ;
    GetStepResultOverviewRequest(const GetStepResultOverviewRequest &) = default ;
    GetStepResultOverviewRequest(GetStepResultOverviewRequest &&) = default ;
    GetStepResultOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStepResultOverviewRequest() = default ;
    GetStepResultOverviewRequest& operator=(const GetStepResultOverviewRequest &) = default ;
    GetStepResultOverviewRequest& operator=(GetStepResultOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resultId_ == nullptr; };
    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline GetStepResultOverviewRequest& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


  protected:
    // The unique ID of the validation result.
    // 
    // This parameter is required.
    shared_ptr<string> resultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif

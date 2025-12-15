// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILRESPONSEBODYLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMONLOGDETAILRESPONSEBODYLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCommonLogDetailResponseBodyLogDetailStages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetCommonLogDetailResponseBodyLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommonLogDetailResponseBodyLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(Stages, stages_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommonLogDetailResponseBodyLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(Stages, stages_);
    };
    GetCommonLogDetailResponseBodyLogDetail() = default ;
    GetCommonLogDetailResponseBodyLogDetail(const GetCommonLogDetailResponseBodyLogDetail &) = default ;
    GetCommonLogDetailResponseBodyLogDetail(GetCommonLogDetailResponseBodyLogDetail &&) = default ;
    GetCommonLogDetailResponseBodyLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommonLogDetailResponseBodyLogDetail() = default ;
    GetCommonLogDetailResponseBodyLogDetail& operator=(const GetCommonLogDetailResponseBodyLogDetail &) = default ;
    GetCommonLogDetailResponseBodyLogDetail& operator=(GetCommonLogDetailResponseBodyLogDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stageName_ == nullptr
        && return this->stages_ == nullptr; };
    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline GetCommonLogDetailResponseBodyLogDetail& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // stages Field Functions 
    bool hasStages() const { return this->stages_ != nullptr;};
    void deleteStages() { this->stages_ = nullptr;};
    inline const vector<Models::GetCommonLogDetailResponseBodyLogDetailStages> & stages() const { DARABONBA_PTR_GET_CONST(stages_, vector<Models::GetCommonLogDetailResponseBodyLogDetailStages>) };
    inline vector<Models::GetCommonLogDetailResponseBodyLogDetailStages> stages() { DARABONBA_PTR_GET(stages_, vector<Models::GetCommonLogDetailResponseBodyLogDetailStages>) };
    inline GetCommonLogDetailResponseBodyLogDetail& setStages(const vector<Models::GetCommonLogDetailResponseBodyLogDetailStages> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
    inline GetCommonLogDetailResponseBodyLogDetail& setStages(vector<Models::GetCommonLogDetailResponseBodyLogDetailStages> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


  protected:
    // The stage name of the log.
    std::shared_ptr<string> stageName_ = nullptr;
    // The information about the log stages.
    std::shared_ptr<vector<Models::GetCommonLogDetailResponseBodyLogDetailStages>> stages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif

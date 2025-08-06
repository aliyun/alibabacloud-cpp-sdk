// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODYAIVIDEODNARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODYAIVIDEODNARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoDNAResultResponseBodyAIVideoDNAResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDNAResultResponseBodyAIVideoDNAResult& obj) { 
      DARABONBA_PTR_TO_JSON(FpShots, fpShots_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDNAResultResponseBodyAIVideoDNAResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShots, fpShots_);
    };
    GetVideoDNAResultResponseBodyAIVideoDNAResult() = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResult(const GetVideoDNAResultResponseBodyAIVideoDNAResult &) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResult(GetVideoDNAResultResponseBodyAIVideoDNAResult &&) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDNAResultResponseBodyAIVideoDNAResult() = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResult& operator=(const GetVideoDNAResultResponseBodyAIVideoDNAResult &) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResult& operator=(GetVideoDNAResultResponseBodyAIVideoDNAResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fpShots_ != nullptr; };
    // fpShots Field Functions 
    bool hasFpShots() const { return this->fpShots_ != nullptr;};
    void deleteFpShots() { this->fpShots_ = nullptr;};
    inline const vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots> & fpShots() const { DARABONBA_PTR_GET_CONST(fpShots_, vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots>) };
    inline vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots> fpShots() { DARABONBA_PTR_GET(fpShots_, vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots>) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResult& setFpShots(const vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots> & fpShots) { DARABONBA_PTR_SET_VALUE(fpShots_, fpShots) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResult& setFpShots(vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots> && fpShots) { DARABONBA_PTR_SET_RVALUE(fpShots_, fpShots) };


  protected:
    std::shared_ptr<vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots>> fpShots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif

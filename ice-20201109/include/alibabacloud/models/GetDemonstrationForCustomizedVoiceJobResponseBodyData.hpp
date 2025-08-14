// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDEMONSTRATIONFORCUSTOMIZEDVOICEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDemonstrationForCustomizedVoiceJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDemonstrationForCustomizedVoiceJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DemonstrationList, demonstrationList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDemonstrationForCustomizedVoiceJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DemonstrationList, demonstrationList_);
    };
    GetDemonstrationForCustomizedVoiceJobResponseBodyData() = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyData(const GetDemonstrationForCustomizedVoiceJobResponseBodyData &) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyData(GetDemonstrationForCustomizedVoiceJobResponseBodyData &&) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDemonstrationForCustomizedVoiceJobResponseBodyData() = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyData& operator=(const GetDemonstrationForCustomizedVoiceJobResponseBodyData &) = default ;
    GetDemonstrationForCustomizedVoiceJobResponseBodyData& operator=(GetDemonstrationForCustomizedVoiceJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->demonstrationList_ != nullptr; };
    // demonstrationList Field Functions 
    bool hasDemonstrationList() const { return this->demonstrationList_ != nullptr;};
    void deleteDemonstrationList() { this->demonstrationList_ = nullptr;};
    inline const vector<Models::GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList> & demonstrationList() const { DARABONBA_PTR_GET_CONST(demonstrationList_, vector<Models::GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList>) };
    inline vector<Models::GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList> demonstrationList() { DARABONBA_PTR_GET(demonstrationList_, vector<Models::GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList>) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBodyData& setDemonstrationList(const vector<Models::GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList> & demonstrationList) { DARABONBA_PTR_SET_VALUE(demonstrationList_, demonstrationList) };
    inline GetDemonstrationForCustomizedVoiceJobResponseBodyData& setDemonstrationList(vector<Models::GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList> && demonstrationList) { DARABONBA_PTR_SET_RVALUE(demonstrationList_, demonstrationList) };


  protected:
    // A list of 20 text entries to be read and the corresponding sample audio.
    std::shared_ptr<vector<Models::GetDemonstrationForCustomizedVoiceJobResponseBodyDataDemonstrationList>> demonstrationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

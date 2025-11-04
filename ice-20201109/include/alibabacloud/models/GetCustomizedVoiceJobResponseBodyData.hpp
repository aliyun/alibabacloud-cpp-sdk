// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICEJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICEJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomizedVoiceJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizedVoiceJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomizedVoiceJob, customizedVoiceJob_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizedVoiceJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomizedVoiceJob, customizedVoiceJob_);
    };
    GetCustomizedVoiceJobResponseBodyData() = default ;
    GetCustomizedVoiceJobResponseBodyData(const GetCustomizedVoiceJobResponseBodyData &) = default ;
    GetCustomizedVoiceJobResponseBodyData(GetCustomizedVoiceJobResponseBodyData &&) = default ;
    GetCustomizedVoiceJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizedVoiceJobResponseBodyData() = default ;
    GetCustomizedVoiceJobResponseBodyData& operator=(const GetCustomizedVoiceJobResponseBodyData &) = default ;
    GetCustomizedVoiceJobResponseBodyData& operator=(GetCustomizedVoiceJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customizedVoiceJob_ == nullptr; };
    // customizedVoiceJob Field Functions 
    bool hasCustomizedVoiceJob() const { return this->customizedVoiceJob_ != nullptr;};
    void deleteCustomizedVoiceJob() { this->customizedVoiceJob_ = nullptr;};
    inline const Models::GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob & customizedVoiceJob() const { DARABONBA_PTR_GET_CONST(customizedVoiceJob_, Models::GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob) };
    inline Models::GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob customizedVoiceJob() { DARABONBA_PTR_GET(customizedVoiceJob_, Models::GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob) };
    inline GetCustomizedVoiceJobResponseBodyData& setCustomizedVoiceJob(const Models::GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob & customizedVoiceJob) { DARABONBA_PTR_SET_VALUE(customizedVoiceJob_, customizedVoiceJob) };
    inline GetCustomizedVoiceJobResponseBodyData& setCustomizedVoiceJob(Models::GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob && customizedVoiceJob) { DARABONBA_PTR_SET_RVALUE(customizedVoiceJob_, customizedVoiceJob) };


  protected:
    // The information about the human voice cloning job.
    std::shared_ptr<Models::GetCustomizedVoiceJobResponseBodyDataCustomizedVoiceJob> customizedVoiceJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGECOPYRIGHTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGECOPYRIGHTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitImageCopyrightResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageCopyrightResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageCopyrightResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    SubmitImageCopyrightResponseBodyData() = default ;
    SubmitImageCopyrightResponseBodyData(const SubmitImageCopyrightResponseBodyData &) = default ;
    SubmitImageCopyrightResponseBodyData(SubmitImageCopyrightResponseBodyData &&) = default ;
    SubmitImageCopyrightResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageCopyrightResponseBodyData() = default ;
    SubmitImageCopyrightResponseBodyData& operator=(const SubmitImageCopyrightResponseBodyData &) = default ;
    SubmitImageCopyrightResponseBodyData& operator=(SubmitImageCopyrightResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitImageCopyrightResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    std::shared_ptr<string> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif

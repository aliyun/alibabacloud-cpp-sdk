// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASYNCTRANSLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEASYNCTRANSLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class CreateAsyncTranslateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAsyncTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAsyncTranslateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateAsyncTranslateResponseBodyData() = default ;
    CreateAsyncTranslateResponseBodyData(const CreateAsyncTranslateResponseBodyData &) = default ;
    CreateAsyncTranslateResponseBodyData(CreateAsyncTranslateResponseBodyData &&) = default ;
    CreateAsyncTranslateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAsyncTranslateResponseBodyData() = default ;
    CreateAsyncTranslateResponseBodyData& operator=(const CreateAsyncTranslateResponseBodyData &) = default ;
    CreateAsyncTranslateResponseBodyData& operator=(CreateAsyncTranslateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->status_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateAsyncTranslateResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateAsyncTranslateResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif

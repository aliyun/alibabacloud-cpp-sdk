// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSTEPRESPONSEBODYJOBSTEPSSUBJOBSTEPSERRORDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSTEPRESPONSEBODYJOBSTEPSSUBJOBSTEPSERRORDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HelpUrl, helpUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HelpUrl, helpUrl_);
    };
    ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails() = default ;
    ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails(const ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails &) = default ;
    ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails(ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails &&) = default ;
    ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails() = default ;
    ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails& operator=(const ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails &) = default ;
    ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails& operator=(ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->helpUrl_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // helpUrl Field Functions 
    bool hasHelpUrl() const { return this->helpUrl_ != nullptr;};
    void deleteHelpUrl() { this->helpUrl_ = nullptr;};
    inline string helpUrl() const { DARABONBA_PTR_GET_DEFAULT(helpUrl_, "") };
    inline ListJobStepResponseBodyJobStepsSubJobStepsErrorDetails& setHelpUrl(string helpUrl) { DARABONBA_PTR_SET_VALUE(helpUrl_, helpUrl) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> helpUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif

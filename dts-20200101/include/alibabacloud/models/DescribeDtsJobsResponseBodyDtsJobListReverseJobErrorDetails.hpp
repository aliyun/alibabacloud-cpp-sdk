// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTREVERSEJOBERRORDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBSRESPONSEBODYDTSJOBLISTREVERSEJOBERRORDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HelpUrl, helpUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HelpUrl, helpUrl_);
    };
    DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails() = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails(const DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails(DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails &&) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails() = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails& operator=(const DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails &) = default ;
    DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails& operator=(DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails &&) = default ;
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
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // helpUrl Field Functions 
    bool hasHelpUrl() const { return this->helpUrl_ != nullptr;};
    void deleteHelpUrl() { this->helpUrl_ = nullptr;};
    inline string helpUrl() const { DARABONBA_PTR_GET_DEFAULT(helpUrl_, "") };
    inline DescribeDtsJobsResponseBodyDtsJobListReverseJobErrorDetails& setHelpUrl(string helpUrl) { DARABONBA_PTR_SET_VALUE(helpUrl_, helpUrl) };


  protected:
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The URL of the documentation.
    std::shared_ptr<string> helpUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif

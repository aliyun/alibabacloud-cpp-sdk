// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIESERRORMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIESERRORMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FailedInstanceIds, failedInstanceIds_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FailedInstanceIds, failedInstanceIds_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages() = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages(const DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages &) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages(DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages &&) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages() = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& operator=(const DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages &) = default ;
    DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& operator=(DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->description_ != nullptr && this->failedInstanceIds_ != nullptr && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // failedInstanceIds Field Functions 
    bool hasFailedInstanceIds() const { return this->failedInstanceIds_ != nullptr;};
    void deleteFailedInstanceIds() { this->failedInstanceIds_ = nullptr;};
    inline const vector<string> & failedInstanceIds() const { DARABONBA_PTR_GET_CONST(failedInstanceIds_, vector<string>) };
    inline vector<string> failedInstanceIds() { DARABONBA_PTR_GET(failedInstanceIds_, vector<string>) };
    inline DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& setFailedInstanceIds(const vector<string> & failedInstanceIds) { DARABONBA_PTR_SET_VALUE(failedInstanceIds_, failedInstanceIds) };
    inline DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& setFailedInstanceIds(vector<string> && failedInstanceIds) { DARABONBA_PTR_SET_RVALUE(failedInstanceIds_, failedInstanceIds) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeScalingActivitiesResponseBodyScalingActivitiesErrorMessages& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The error code that is returned when the scaling activity failed.
    std::shared_ptr<string> code_ = nullptr;
    // The description of the scaling activity exception.
    std::shared_ptr<string> description_ = nullptr;
    // The IDs of the instances included in the failed scaling activities.
    std::shared_ptr<vector<string>> failedInstanceIds_ = nullptr;
    // The error message that is returned when the scaling activity failed or is partially successful.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif

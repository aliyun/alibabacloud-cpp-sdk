// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCPARSINGRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDOCPARSINGRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDocParsingResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocParsingResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(returnFormat, returnFormat_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocParsingResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(returnFormat, returnFormat_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetDocParsingResultRequest() = default ;
    GetDocParsingResultRequest(const GetDocParsingResultRequest &) = default ;
    GetDocParsingResultRequest(GetDocParsingResultRequest &&) = default ;
    GetDocParsingResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocParsingResultRequest() = default ;
    GetDocParsingResultRequest& operator=(const GetDocParsingResultRequest &) = default ;
    GetDocParsingResultRequest& operator=(GetDocParsingResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->returnFormat_ != nullptr
        && this->taskId_ != nullptr; };
    // returnFormat Field Functions 
    bool hasReturnFormat() const { return this->returnFormat_ != nullptr;};
    void deleteReturnFormat() { this->returnFormat_ = nullptr;};
    inline string returnFormat() const { DARABONBA_PTR_GET_DEFAULT(returnFormat_, "") };
    inline GetDocParsingResultRequest& setReturnFormat(string returnFormat) { DARABONBA_PTR_SET_VALUE(returnFormat_, returnFormat) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetDocParsingResultRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // - The document parsing result supports two formats: markdown and json.
    // - By default, the result is returned in markdown format.
    std::shared_ptr<string> returnFormat_ = nullptr;
    // - Task ID.
    // - The taskId is obtained from the SubmitDocParsingTaskAdvance or SubmitDocParsingTask interfaces.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif

// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSLATEDFILEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSLATEDFILEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
namespace Models
{
  class GetTranslatedFileUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranslatedFileUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIKey, APIKey_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranslatedFileUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKey, APIKey_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetTranslatedFileUrlRequest() = default ;
    GetTranslatedFileUrlRequest(const GetTranslatedFileUrlRequest &) = default ;
    GetTranslatedFileUrlRequest(GetTranslatedFileUrlRequest &&) = default ;
    GetTranslatedFileUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranslatedFileUrlRequest() = default ;
    GetTranslatedFileUrlRequest& operator=(const GetTranslatedFileUrlRequest &) = default ;
    GetTranslatedFileUrlRequest& operator=(GetTranslatedFileUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKey_ == nullptr
        && this->taskId_ == nullptr; };
    // APIKey Field Functions 
    bool hasAPIKey() const { return this->APIKey_ != nullptr;};
    void deleteAPIKey() { this->APIKey_ = nullptr;};
    inline string getAPIKey() const { DARABONBA_PTR_GET_DEFAULT(APIKey_, "") };
    inline GetTranslatedFileUrlRequest& setAPIKey(string APIKey) { DARABONBA_PTR_SET_VALUE(APIKey_, APIKey) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTranslatedFileUrlRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> APIKey_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif

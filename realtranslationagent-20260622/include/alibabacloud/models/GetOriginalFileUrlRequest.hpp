// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINALFILEURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINALFILEURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RealTranslationAgent20260622
{
namespace Models
{
  class GetOriginalFileUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginalFileUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIKey, APIKey_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginalFileUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKey, APIKey_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetOriginalFileUrlRequest() = default ;
    GetOriginalFileUrlRequest(const GetOriginalFileUrlRequest &) = default ;
    GetOriginalFileUrlRequest(GetOriginalFileUrlRequest &&) = default ;
    GetOriginalFileUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginalFileUrlRequest() = default ;
    GetOriginalFileUrlRequest& operator=(const GetOriginalFileUrlRequest &) = default ;
    GetOriginalFileUrlRequest& operator=(GetOriginalFileUrlRequest &&) = default ;
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
    inline GetOriginalFileUrlRequest& setAPIKey(string APIKey) { DARABONBA_PTR_SET_VALUE(APIKey_, APIKey) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetOriginalFileUrlRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> APIKey_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RealTranslationAgent20260622
#endif

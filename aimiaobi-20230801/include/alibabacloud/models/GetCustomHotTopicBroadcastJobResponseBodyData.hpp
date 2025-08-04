// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMHOTTOPICBROADCASTJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMHOTTOPICBROADCASTJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCustomHotTopicBroadcastJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomHotTopicBroadcastJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomHotTopicBroadcastJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetCustomHotTopicBroadcastJobResponseBodyData() = default ;
    GetCustomHotTopicBroadcastJobResponseBodyData(const GetCustomHotTopicBroadcastJobResponseBodyData &) = default ;
    GetCustomHotTopicBroadcastJobResponseBodyData(GetCustomHotTopicBroadcastJobResponseBodyData &&) = default ;
    GetCustomHotTopicBroadcastJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomHotTopicBroadcastJobResponseBodyData() = default ;
    GetCustomHotTopicBroadcastJobResponseBodyData& operator=(const GetCustomHotTopicBroadcastJobResponseBodyData &) = default ;
    GetCustomHotTopicBroadcastJobResponseBodyData& operator=(GetCustomHotTopicBroadcastJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorMessage_ != nullptr
        && this->hotTopicVersion_ != nullptr && this->status_ != nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetCustomHotTopicBroadcastJobResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline GetCustomHotTopicBroadcastJobResponseBodyData& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCustomHotTopicBroadcastJobResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif

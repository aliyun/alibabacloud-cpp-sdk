// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDEEVENTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDEEVENTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetIDEEventDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIDEEventDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIDEEventDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetIDEEventDetailRequest() = default ;
    GetIDEEventDetailRequest(const GetIDEEventDetailRequest &) = default ;
    GetIDEEventDetailRequest(GetIDEEventDetailRequest &&) = default ;
    GetIDEEventDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIDEEventDetailRequest() = default ;
    GetIDEEventDetailRequest& operator=(const GetIDEEventDetailRequest &) = default ;
    GetIDEEventDetailRequest& operator=(GetIDEEventDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr
        && return this->projectId_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetIDEEventDetailRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetIDEEventDetailRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The message ID in DataWorks OpenEvent. You can obtain the ID from a received message when an extension point event is triggered.
    // 
    // This parameter is required.
    std::shared_ptr<string> messageId_ = nullptr;
    // The DataWorks workspace ID. You can obtain the ID from the message.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif

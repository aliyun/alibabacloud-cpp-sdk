// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECALLTAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECALLTAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateCallTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCallTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallTagNameList, callTagNameList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCallTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallTagNameList, callTagNameList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateCallTagsRequest() = default ;
    CreateCallTagsRequest(const CreateCallTagsRequest &) = default ;
    CreateCallTagsRequest(CreateCallTagsRequest &&) = default ;
    CreateCallTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCallTagsRequest() = default ;
    CreateCallTagsRequest& operator=(const CreateCallTagsRequest &) = default ;
    CreateCallTagsRequest& operator=(CreateCallTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callTagNameList_ == nullptr
        && return this->instanceId_ == nullptr; };
    // callTagNameList Field Functions 
    bool hasCallTagNameList() const { return this->callTagNameList_ != nullptr;};
    void deleteCallTagNameList() { this->callTagNameList_ = nullptr;};
    inline string callTagNameList() const { DARABONBA_PTR_GET_DEFAULT(callTagNameList_, "") };
    inline CreateCallTagsRequest& setCallTagNameList(string callTagNameList) { DARABONBA_PTR_SET_VALUE(callTagNameList_, callTagNameList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCallTagsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callTagNameList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

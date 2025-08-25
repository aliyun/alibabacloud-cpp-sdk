// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBLACKLISTCALLTAGGINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBLACKLISTCALLTAGGINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListBlacklistCallTaggingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBlacklistCallTaggingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NumberList, numberList_);
    };
    friend void from_json(const Darabonba::Json& j, ListBlacklistCallTaggingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
    };
    ListBlacklistCallTaggingsRequest() = default ;
    ListBlacklistCallTaggingsRequest(const ListBlacklistCallTaggingsRequest &) = default ;
    ListBlacklistCallTaggingsRequest(ListBlacklistCallTaggingsRequest &&) = default ;
    ListBlacklistCallTaggingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBlacklistCallTaggingsRequest() = default ;
    ListBlacklistCallTaggingsRequest& operator=(const ListBlacklistCallTaggingsRequest &) = default ;
    ListBlacklistCallTaggingsRequest& operator=(ListBlacklistCallTaggingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->numberList_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListBlacklistCallTaggingsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // numberList Field Functions 
    bool hasNumberList() const { return this->numberList_ != nullptr;};
    void deleteNumberList() { this->numberList_ = nullptr;};
    inline string numberList() const { DARABONBA_PTR_GET_DEFAULT(numberList_, "") };
    inline ListBlacklistCallTaggingsRequest& setNumberList(string numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> numberList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif

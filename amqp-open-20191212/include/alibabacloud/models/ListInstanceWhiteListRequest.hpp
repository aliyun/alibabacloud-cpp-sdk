// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListInstanceWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(whiteListType, whiteListType_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(whiteListType, whiteListType_);
    };
    ListInstanceWhiteListRequest() = default ;
    ListInstanceWhiteListRequest(const ListInstanceWhiteListRequest &) = default ;
    ListInstanceWhiteListRequest(ListInstanceWhiteListRequest &&) = default ;
    ListInstanceWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceWhiteListRequest() = default ;
    ListInstanceWhiteListRequest& operator=(const ListInstanceWhiteListRequest &) = default ;
    ListInstanceWhiteListRequest& operator=(ListInstanceWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->whiteListType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceWhiteListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // whiteListType Field Functions 
    bool hasWhiteListType() const { return this->whiteListType_ != nullptr;};
    void deleteWhiteListType() { this->whiteListType_ = nullptr;};
    inline int32_t getWhiteListType() const { DARABONBA_PTR_GET_DEFAULT(whiteListType_, 0) };
    inline ListInstanceWhiteListRequest& setWhiteListType(int32_t whiteListType) { DARABONBA_PTR_SET_VALUE(whiteListType_, whiteListType) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<int32_t> whiteListType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif

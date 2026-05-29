// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINSTANCEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINSTANCEWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class AddInstanceWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInstanceWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(WhiteListItem, whiteListItem_);
      DARABONBA_PTR_TO_JSON(WhiteListType, whiteListType_);
    };
    friend void from_json(const Darabonba::Json& j, AddInstanceWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(WhiteListItem, whiteListItem_);
      DARABONBA_PTR_FROM_JSON(WhiteListType, whiteListType_);
    };
    AddInstanceWhiteListRequest() = default ;
    AddInstanceWhiteListRequest(const AddInstanceWhiteListRequest &) = default ;
    AddInstanceWhiteListRequest(AddInstanceWhiteListRequest &&) = default ;
    AddInstanceWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInstanceWhiteListRequest() = default ;
    AddInstanceWhiteListRequest& operator=(const AddInstanceWhiteListRequest &) = default ;
    AddInstanceWhiteListRequest& operator=(AddInstanceWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->whiteListItem_ == nullptr && this->whiteListType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddInstanceWhiteListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // whiteListItem Field Functions 
    bool hasWhiteListItem() const { return this->whiteListItem_ != nullptr;};
    void deleteWhiteListItem() { this->whiteListItem_ = nullptr;};
    inline const vector<string> & getWhiteListItem() const { DARABONBA_PTR_GET_CONST(whiteListItem_, vector<string>) };
    inline vector<string> getWhiteListItem() { DARABONBA_PTR_GET(whiteListItem_, vector<string>) };
    inline AddInstanceWhiteListRequest& setWhiteListItem(const vector<string> & whiteListItem) { DARABONBA_PTR_SET_VALUE(whiteListItem_, whiteListItem) };
    inline AddInstanceWhiteListRequest& setWhiteListItem(vector<string> && whiteListItem) { DARABONBA_PTR_SET_RVALUE(whiteListItem_, whiteListItem) };


    // whiteListType Field Functions 
    bool hasWhiteListType() const { return this->whiteListType_ != nullptr;};
    void deleteWhiteListType() { this->whiteListType_ = nullptr;};
    inline int32_t getWhiteListType() const { DARABONBA_PTR_GET_DEFAULT(whiteListType_, 0) };
    inline AddInstanceWhiteListRequest& setWhiteListType(int32_t whiteListType) { DARABONBA_PTR_SET_VALUE(whiteListType_, whiteListType) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<vector<string>> whiteListItem_ {};
    // This parameter is required.
    shared_ptr<int32_t> whiteListType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif

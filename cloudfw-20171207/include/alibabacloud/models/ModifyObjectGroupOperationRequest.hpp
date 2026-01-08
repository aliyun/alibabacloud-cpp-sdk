// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOBJECTGROUPOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOBJECTGROUPOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyObjectGroupOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyObjectGroupOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ObjectList, objectList_);
      DARABONBA_PTR_TO_JSON(ObjectOperation, objectOperation_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyObjectGroupOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ObjectList, objectList_);
      DARABONBA_PTR_FROM_JSON(ObjectOperation, objectOperation_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    ModifyObjectGroupOperationRequest() = default ;
    ModifyObjectGroupOperationRequest(const ModifyObjectGroupOperationRequest &) = default ;
    ModifyObjectGroupOperationRequest(ModifyObjectGroupOperationRequest &&) = default ;
    ModifyObjectGroupOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyObjectGroupOperationRequest() = default ;
    ModifyObjectGroupOperationRequest& operator=(const ModifyObjectGroupOperationRequest &) = default ;
    ModifyObjectGroupOperationRequest& operator=(ModifyObjectGroupOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->direction_ == nullptr && this->lang_ == nullptr && this->objectList_ == nullptr && this->objectOperation_ == nullptr && this->objectType_ == nullptr
        && this->sourceIp_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyObjectGroupOperationRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ModifyObjectGroupOperationRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyObjectGroupOperationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // objectList Field Functions 
    bool hasObjectList() const { return this->objectList_ != nullptr;};
    void deleteObjectList() { this->objectList_ = nullptr;};
    inline const vector<string> & getObjectList() const { DARABONBA_PTR_GET_CONST(objectList_, vector<string>) };
    inline vector<string> getObjectList() { DARABONBA_PTR_GET(objectList_, vector<string>) };
    inline ModifyObjectGroupOperationRequest& setObjectList(const vector<string> & objectList) { DARABONBA_PTR_SET_VALUE(objectList_, objectList) };
    inline ModifyObjectGroupOperationRequest& setObjectList(vector<string> && objectList) { DARABONBA_PTR_SET_RVALUE(objectList_, objectList) };


    // objectOperation Field Functions 
    bool hasObjectOperation() const { return this->objectOperation_ != nullptr;};
    void deleteObjectOperation() { this->objectOperation_ = nullptr;};
    inline string getObjectOperation() const { DARABONBA_PTR_GET_DEFAULT(objectOperation_, "") };
    inline ModifyObjectGroupOperationRequest& setObjectOperation(string objectOperation) { DARABONBA_PTR_SET_VALUE(objectOperation_, objectOperation) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ModifyObjectGroupOperationRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyObjectGroupOperationRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The remarks of the operation.
    shared_ptr<string> comment_ {};
    // The direction of the traffic to which the access control policy applies.
    // 
    // Valid values:
    // 
    // *   **in**: inbound.
    // *   **out**: outbound.
    // 
    // This parameter is required.
    shared_ptr<string> direction_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    shared_ptr<string> lang_ {};
    // The operation objects.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> objectList_ {};
    // The operation. Valid values:
    // 
    // *   **ignore**: adds the operation object to the whitelist.
    // *   **cancelIgnore**: removes the operation object from the whitelist.
    // *   **subscribe**: follows the operation object.
    // *   **unsubscribe**: unfollows the operation object.
    // 
    // This parameter is required.
    shared_ptr<string> objectOperation_ {};
    // The type of the operation object.
    // 
    // Valid values:
    // 
    // *   **assetsIp**: the asset IP address.
    // *   **destinationIp**: the destination IP address.
    // *   **destinationPort**: the destination port.
    // *   **destinationDomain**: the destination domain name.
    // 
    // This parameter is required.
    shared_ptr<string> objectType_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
